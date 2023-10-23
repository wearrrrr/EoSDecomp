
int __thiscall SoundManager::__sub_430A50(SoundManager *this,LPSTR param_1)

{
  DWORD timer_start;
  uint uVar1;
  HANDLE pvVar2;
  int result;
  DWORD current_time;
  DWORD time;
  CWaveFile local_b0;
  int local_14;
  void *errors;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_4692AB;
  errors = ExceptionList;
  ExceptionList = &errors;
  CWaveFile::__sub_43B9B0(&local_b0);
  local_8 = 0;
  if (this->dsound == (IDirectSound *)0x0) {
    local_8 = 0xffffffff;
    CWaveFile::__sub_43BA10(&local_b0);
    result = -1;
  }
  else if (supervisor.config.__byte_1c == '\0') {
    local_8 = 0xffffffff;
    CWaveFile::__sub_43BA10(&local_b0);
    result = -1;
  }
  else if (this->dsound_api == (IDirectSound *)0x0) {
    local_8 = 0xffffffff;
    CWaveFile::__sub_43BA10(&local_b0);
    result = -1;
  }
  else {
    __sub_430F80(this);
    __stub_3();
    result = CWaveFile::Open(&local_b0,param_1,0,(uint *)0x1);
    if (result < 0) {
      __stub_3();
      CWaveFile::close_hmmio(&local_b0);
      local_8 = 0xffffffff;
      CWaveFile::__sub_43BA10(&local_b0);
      result = -1;
    }
    else {
      result = CWaveFile::get_dw_size(&local_b0);
      if (result == 0) {
        CWaveFile::close_hmmio(&local_b0);
        local_8 = 0xffffffff;
        CWaveFile::__sub_43BA10(&local_b0);
        result = -1;
      }
      else {
        timer_start = timeGetTime();
        time = timer_start;
        while ((time < timer_start + 100 && (timer_start <= time))) {
          time = timeGetTime();
        }
        CWaveFile::close_hmmio(&local_b0);
        uVar1 = (local_b0.m_pwfx)->nSamplesPerSec * 2 * (uint)(local_b0.m_pwfx)->nBlockAlign >> 2;
        local_14 = uVar1 - uVar1 % (uint)(local_b0.m_pwfx)->nBlockAlign;
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
        this->dword_630 = (int32_t)pvVar2;
                    /* LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD
                        */
        pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,lpStartAddress,supervisor.main_window,0,
                              (LPDWORD)&this->dword_614);
        this->dword_618 = (int32_t)pvVar2;
        SoundManagerDSound::__sub_43A9C0
                  ((SoundManagerDSound *)this->dsound,(CSound *)&this->csound_ptr,param_1,0x10100,
                   DAT_0046fed0,DAT_0046fed4,DAT_0046fed8,DAT_0046fedc,4,local_14,this->dword_630);
        if ((int)param_1 < 0) {
          __stub_3();
          local_8 = 0xffffffff;
          CWaveFile::__sub_43BA10(&local_b0);
          result = -1;
        }
        else {
          __stub_3();
          timer_start = timeGetTime();
          current_time = timer_start;
          while ((current_time < timer_start + 100 && (timer_start <= current_time))) {
            current_time = timeGetTime();
          }
          local_8 = 0xffffffff;
          CWaveFile::__sub_43BA10(&local_b0);
          result = 0;
        }
      }
    }
  }
  ExceptionList = errors;
  return result;
}


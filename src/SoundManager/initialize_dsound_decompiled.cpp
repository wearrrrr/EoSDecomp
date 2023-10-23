
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SoundManager::initialize_dsound(SoundManager *this,HWND window)

{
  Concurrency *SoundManagerDSound;
  int32_t iVar1;
  int load_sz;
  DSBUFFERDESC *DSBuffer;
  undefined4 *puVar2;
  uint unaff_retaddr;
  IDirectSound *DSound;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  DSBUFFERDESC DSBuffer2;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  SoundManager *this_00;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_46928B;
  local_10 = ExceptionList;
  local_14 = _DAT_0047a630 ^ unaff_retaddr;
  ExceptionList = &local_10;
  SoundManagerDSound = (Concurrency *)malloc(4);
  local_8 = 0;
  if (SoundManagerDSound == (Concurrency *)0x0) {
    DSound = (IDirectSound *)0x0;
  }
  else {
    DSound = (IDirectSound *)Concurrency::IScheduler(SoundManagerDSound);
  }
  local_8 = 0xffffffff;
  this->dsound = DSound;
  load_sz = ::SoundManagerDSound::initialize
                      ((SoundManagerDSound *)this->dsound,window,2,2,0xac44,0x10);
  if (load_sz < 0) {
    LogBuffer::write(&LogBuffer,"DirectSound オブジェクトの初期化が失敗したよ\n");
    if (this->dsound != (IDirectSound *)0x0) {
      this_00 = (SoundManager *)this->dsound;
      if (this_00 != (SoundManager *)0x0) {
        ::SoundManagerDSound::deinitialize((SoundManagerDSound *)this_00);
        _free(this_00);
      }
      this->dsound = (IDirectSound *)0x0;
    }
  }
  else {
    this->dsound_api = (IDirectSound *)this->dsound->vtable;
    this->dword_618 = 0;
    DSBuffer = &DSBuffer2;
    for (load_sz = 9; load_sz != 0; load_sz = load_sz + -1) {
      DSBuffer->dwSize = 0;
      DSBuffer = (DSBUFFERDESC *)&DSBuffer->dwFlags;
    }
    DSBuffer2.dwSize = 0x24;
    DSBuffer2.dwFlags = 0x8008;
    DSBuffer2.dwBufferBytes = 0x8000;
    local_4c = 0;
    local_5c = 0x20001;
    local_58 = 0xac44;
    local_54 = 0x2b110;
    local_50 = 0x100004;
    DSBuffer2.lpwfxFormat = &local_5c;
    iVar1 = (*this->dsound_api->vtable->CreateSoundBuffer)
                      (this->dsound_api,&DSBuffer2,(IDirectSoundBuffer **)&this->ptr_608,
                       (IUnknown *)0x0);
                    /* WARNING: Load size is inaccurate */
    if ((-1 < iVar1) &&
       (load_sz = (**(code **)(*this->ptr_608 + 0x2c))
                            (this->ptr_608,0,0x8000,&local_48,&local_44,&local_3c,&local_40,0),
       -1 < load_sz)) {
      puVar2 = local_48;
      for (load_sz = 8192; load_sz != 0; load_sz = load_sz + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this->ptr_608 + 0x4c))(this->ptr_608,local_48,local_44,local_3c,local_40);
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*this->ptr_608 + 0x30))(this->ptr_608,0,0,1);
      SetTimer(window,0,0xfa,(TIMERPROC)0x0);
      this->window = (HWND)window;
      LogBuffer::write(&LogBuffer,"DirectSound は正常に初期化されました\n");
    }
  }
  ExceptionList = local_10;
  ___security_check_cookie_4(local_14 ^ unaff_retaddr);
  return;
}


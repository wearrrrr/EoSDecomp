
int __thiscall CWaveFile::Open(CWaveFile *this,LPSTR param_1,undefined4 param_2,uint *param_3)

{
  HMMIO pHVar1;
  int iVar2;
  _MMIOINFO *p_Var3;
  _MMIOINFO local_54;
  int local_8;
  
  (this->m_mmioinfoOut).hmmio = (HMMIO)param_3;
  this->m_dwFlags = 0;
  if ((this->m_mmioinfoOut).hmmio == (HMMIO)0x1) {
    if (param_1 == (LPSTR)0x0) {
      local_8 = -0x7ff8ffa9;
    }
    else {
      if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
        _free(this->m_pwfx);
        this->m_pwfx = (WAVEFORMATEX *)0x0;
      }
      p_Var3 = &local_54;
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        p_Var3->dwFlags = 0;
        p_Var3 = (_MMIOINFO *)&p_Var3->fccIOProc;
      }
      pHVar1 = mmioOpenA(param_1,&local_54,0x10000);
      this->m_hmmio = (HMMIO)pHVar1;
      if (this->m_hmmio == (HMMIO)0x0) {
        switch(local_54.wErrorRet) {
        case 0x10b:
          __stub_3();
          break;
        case 0x10c:
          __stub_3();
          break;
        case 0x10d:
          __stub_3();
          break;
        case 0x10f:
          __stub_3();
          break;
        case 0x110:
          __stub_3();
        }
        __stub_3();
        local_8 = -0x7fffbffb;
      }
      else {
        local_8 = __sub_43BC00(this);
        if (local_8 < 0) {
          mmioClose((HMMIO)this->m_hmmio,0);
          __stub_3();
          local_8 = -0x7fffbffb;
        }
        else {
          local_8 = ResetFile(this,'\0');
          if (local_8 < 0) {
            __stub_3();
            local_8 = -0x7fffbffb;
          }
          else {
            this->m_dwSize = (this->m_ck).cksize;
          }
        }
      }
    }
  }
  return local_8;
}


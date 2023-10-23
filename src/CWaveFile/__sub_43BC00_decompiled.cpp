
undefined4 __thiscall CWaveFile::__sub_43BC00(CWaveFile *this)

{
  MMRESULT MVar1;
  undefined4 uVar2;
  LONG LVar3;
  uint uVar4;
  uint local_2c;
  _MMCKINFO local_28;
  undefined4 local_14;
  uint32_t local_10;
  uint32_t local_c;
  undefined4 local_8;
  WAVEFORMATEX *wavformat;
  
  this->m_pwfx = (WAVEFORMATEX *)0x0;
  MVar1 = mmioDescend((HMMIO)this->m_hmmio,(LPMMCKINFO)&this->m_ckRiff,(MMCKINFO *)0x0,0);
  if (MVar1 == 0) {
    if ((*(int *)(this->m_ckRiff).ckid == 0x46464952) &&
       (*(int *)(this->m_ckRiff).fccType == 0x45564157)) {
      local_28.ckid = 0x20746d66;
      MVar1 = mmioDescend((HMMIO)this->m_hmmio,&local_28,(MMCKINFO *)&this->m_ckRiff,0x10);
      if (MVar1 == 0) {
        if (local_28.cksize < 0x10) {
          uVar2 = 0x80004005;
        }
        else {
          LVar3 = mmioRead((HMMIO)this->m_hmmio,(HPSTR)&local_14,0x10);
          if (LVar3 == 0x10) {
            if ((local_14 & 0xffff) == 1) {
              wavformat = (WAVEFORMATEX *)malloc(0x12);
              this->m_pwfx = wavformat;
              if (this->m_pwfx == (WAVEFORMATEX *)0x0) {
                return 0x80004005;
              }
              wavformat = this->m_pwfx;
              wavformat->wFormatTag = (undefined2)local_14;
              wavformat->nChannels = local_14._2_2_;
              wavformat->nSamplesPerSec = local_10;
              wavformat->nAvgBytesPerSec = local_c;
              wavformat->nBlockAlign = (undefined2)local_8;
              wavformat->wBitsPerSample = local_8._2_2_;
              this->m_pwfx->cbSize = 0;
            }
            else {
              local_2c = local_2c & 0xffff0000;
              LVar3 = mmioRead((HMMIO)this->m_hmmio,(HPSTR)&local_2c,2);
              if (LVar3 != 2) {
                return 0x80004005;
              }
              wavformat = (WAVEFORMATEX *)malloc((local_2c & 0xffff) + 0x12);
              this->m_pwfx = wavformat;
              if (this->m_pwfx == (WAVEFORMATEX *)0x0) {
                return 0x80004005;
              }
              wavformat = this->m_pwfx;
              wavformat->wFormatTag = (undefined2)local_14;
              wavformat->nChannels = local_14._2_2_;
              wavformat->nSamplesPerSec = local_10;
              wavformat->nAvgBytesPerSec = local_c;
              wavformat->nBlockAlign = (undefined2)local_8;
              wavformat->wBitsPerSample = local_8._2_2_;
              this->m_pwfx->cbSize = (uint16_t)local_2c;
              uVar4 = mmioRead((HMMIO)this->m_hmmio,&this->m_pwfx->field_0x12,local_2c & 0xffff);
              if (uVar4 != (local_2c & 0xffff)) {
                if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
                  _free(this->m_pwfx);
                  this->m_pwfx = (WAVEFORMATEX *)0x0;
                }
                return 0x80004005;
              }
            }
            MVar1 = mmioAscend((HMMIO)this->m_hmmio,&local_28,0);
            if (MVar1 == 0) {
              uVar2 = 0;
            }
            else {
              if (this->m_pwfx != (WAVEFORMATEX *)0x0) {
                _free(this->m_pwfx);
                this->m_pwfx = (WAVEFORMATEX *)0x0;
              }
              uVar2 = 0x80004005;
            }
          }
          else {
            uVar2 = 0x80004005;
          }
        }
      }
      else {
        uVar2 = 0x80004005;
      }
    }
    else {
      uVar2 = 0x80004005;
    }
  }
  else {
    uVar2 = 0x80004005;
  }
  return uVar2;
}



undefined4 __thiscall CWaveFile::ResetFile(CWaveFile *this,char param_1)

{
  LONG seekMMIO;
  MMRESULT MMIOResult;
  int i;
  _MMIOINFO MMIOInfo;
  MMRESULT descendMMIO;
  
  if (this->m_dwFlags == 0) {
    if (this->m_hmmio == (HMMIO)0x0) {
      __stub_3();
      return 0x800401f0;
    }
    if ((this->m_mmioinfoOut).hmmio == (HMMIO)0x1) {
      seekMMIO = mmioSeek((HMMIO)this->m_hmmio,(this->m_ckRiff).dwDataOffset + 4,0);
      if (seekMMIO == -1) {
        __stub_3();
        return 0x80004005;
      }
      *(undefined4 *)(this->m_ck).ckid = 0x61746164;
      descendMMIO = mmioDescend((HMMIO)this->m_hmmio,(LPMMCKINFO)&this->m_ck,
                                (MMCKINFO *)&this->m_ckRiff,0x10);
      if (descendMMIO != 0) {
        __stub_3();
        return 0x80004005;
      }
      if (0 < (int)this->m_pResourceBuffer) {
        (this->m_ck).cksize = (DWORD)this->m_pResourceBuffer;
      }
      if ((param_1 != '\0') && (0 < (int)this->m_ulDataSize)) {
        MMIOResult = mmioGetInfo((HMMIO)this->m_hmmio,&MMIOInfo,0);
        if (MMIOResult != 0) {
          __stub_3();
          return 0x80004005;
        }
        for (i = 0; i < (int)this->m_ulDataSize; i = i + 1) {
          if (MMIOInfo.pchNext == MMIOInfo.pchEndRead) {
            MMIOResult = mmioAdvance((HMMIO)this->m_hmmio,&MMIOInfo,0);
            if (MMIOResult != 0) {
              __stub_3();
              return 0x80004005;
            }
            if (MMIOInfo.pchNext == MMIOInfo.pchEndRead) {
              __stub_3();
              return 0x80004005;
            }
          }
          MMIOInfo.pchNext = MMIOInfo.pchNext + 1;
        }
        (this->m_ck).cksize = (this->m_ck).cksize - this->m_ulDataSize;
        MMIOResult = mmioSetInfo((HMMIO)this->m_hmmio,&MMIOInfo,0);
        if (MMIOResult != 0) {
          __stub_3();
          return 0x80004005;
        }
      }
    }
  }
  else {
    this->m_pbData = (BYTE *)this->m_bIsReadingFromMemory;
  }
  return 0;
}


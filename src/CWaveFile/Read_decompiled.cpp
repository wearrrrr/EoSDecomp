
undefined4 __thiscall
CWaveFile::Read(CWaveFile *this,undefined4 *param_1,uint param_2,uint *param_3)

{
  DWORD *pDVar1;
  undefined4 result;
  MMRESULT mmresult;
  uint uVar2;
  undefined4 *puVar3;
  uint local_58;
  MMIOINFO mmio_info;
  DWORD local_8;
  
  if (this->m_dwFlags == 0) {
    if (this->m_hmmio == (HMMIO)0x0) {
      result = 0x800401f0;
    }
    else if ((param_1 == (undefined4 *)0x0) || (param_3 == (uint *)0x0)) {
      result = 0x80070057;
    }
    else {
      if (param_3 != (uint *)0x0) {
        *param_3 = 0;
      }
      mmresult = mmioGetInfo((HMMIO)this->m_hmmio,&mmio_info,0);
      if (mmresult == 0) {
        local_8 = param_2;
        pDVar1 = &(this->m_ck).cksize;
        if (*pDVar1 <= param_2 && param_2 != *pDVar1) {
          local_8 = (this->m_ck).cksize;
        }
        (this->m_ck).cksize = (this->m_ck).cksize - local_8;
        for (local_58 = 0; local_58 < local_8; local_58 = local_58 + 1) {
          if (mmio_info.pchNext == mmio_info.pchEndRead) {
            mmresult = mmioAdvance((HMMIO)this->m_hmmio,&mmio_info,0);
            if (mmresult != 0) {
              __stub_3();
              return 0x80004005;
            }
            if (mmio_info.pchNext == mmio_info.pchEndRead) {
              __stub_3();
              return 0x80004005;
            }
          }
          *(CHAR *)((int)param_1 + local_58) = *mmio_info.pchNext;
          mmio_info.pchNext = mmio_info.pchNext + 1;
        }
        mmresult = mmioSetInfo((HMMIO)this->m_hmmio,&mmio_info,0);
        if (mmresult == 0) {
          if (param_3 != (uint *)0x0) {
            *param_3 = local_8;
          }
          result = 0;
        }
        else {
          __stub_3();
          result = 0x80004005;
        }
      }
      else {
        __stub_3();
        result = 0x80004005;
      }
    }
  }
  else if (this->m_pbData == (BYTE *)0x0) {
    result = 0x800401f0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    if (this->m_pbDataCur + this->m_bIsReadingFromMemory < this->m_pbData + param_2) {
      param_2 = (int)this->m_pbDataCur - ((int)this->m_pbData - this->m_bIsReadingFromMemory);
    }
    puVar3 = (undefined4 *)this->m_pbData;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)param_1 = *(undefined *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = param_2;
    }
    result = 0;
  }
  return result;
}


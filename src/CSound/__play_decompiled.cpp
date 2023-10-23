
int __thiscall CSound::__play(CSound *this)

{
  int iVar1;
  int local_8;
  
  if ((*(int *)this->m_dwDSBufferSize == 0) || (this->m_dwNumBuffers == 0)) {
    iVar1 = -2147221008;
  }
  else {
    this[1].m_dwNumBuffers = 0;
    this[1].m_dwCreationFlags = 0;
    this[2].m_dwDSBufferSize = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    iVar1 = RestoreBuffer(this,*(int **)this->m_dwDSBufferSize,&local_8);
    if ((-1 < iVar1) &&
       ((local_8 == 0 ||
        (iVar1 = FillBufferWithSound(this,*(int **)this->m_dwDSBufferSize,0), -1 < iVar1)))) {
      CWaveFile::ResetFile((CWaveFile *)this->m_dwNumBuffers,'\0');
      iVar1 = (**(code **)(**(int **)this->m_dwDSBufferSize + 0x34))
                        (*(undefined4 *)this->m_dwDSBufferSize,0);
    }
  }
  return iVar1;
}


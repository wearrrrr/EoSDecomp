
uint __thiscall CSound::__sub_43B3B0(CSound *this)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  if (this->m_dwDSBufferSize == 0) {
    local_8 = 0x800401f0;
  }
  else {
    local_8 = 0;
    for (local_c = 0; local_c < this->m_dwCreationFlags; local_c = local_c + 1) {
      uVar1 = (**(code **)(**(int **)(this->m_dwDSBufferSize + local_c * 4) + 0x34))
                        (*(undefined4 *)(this->m_dwDSBufferSize + local_c * 4),0);
      local_8 = local_8 | uVar1;
    }
  }
  return local_8;
}


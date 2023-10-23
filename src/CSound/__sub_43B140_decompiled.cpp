
undefined4 __thiscall CSound::__sub_43B140(CSound *this)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (this->m_dwDSBufferSize == 0) {
    uVar1 = 0;
  }
  else {
    for (local_c = 0; local_c < this->m_dwCreationFlags; local_c = local_c + 1) {
      if (*(int *)(this->m_dwDSBufferSize + local_c * 4) != 0) {
        local_10 = 0;
        (**(code **)(**(int **)(this->m_dwDSBufferSize + local_c * 4) + 0x24))
                  (*(undefined4 *)(this->m_dwDSBufferSize + local_c * 4),&local_10);
        if ((local_10 & 1) == 0) break;
      }
    }
    if (local_c == this->m_dwCreationFlags) {
      uVar2 = _rand();
      uVar1 = *(undefined4 *)(this->m_dwDSBufferSize + (uVar2 % this->m_dwCreationFlags) * 4);
    }
    else {
      uVar1 = *(undefined4 *)(this->m_dwDSBufferSize + local_c * 4);
    }
  }
  return uVar1;
}



uint __thiscall CSound::Stop(CSound *this)

{
  uint uVar1;
  uint i;
  uint result;
  
  if (this->m_dwDSBufferSize == 0) {
    result = 0x800401f0;
  }
  else {
    result = 0;
    __stub_3();
    for (i = 0; i < this->m_dwCreationFlags; i = i + 1) {
      __stub_3();
      uVar1 = (**(code **)(**(int **)(this->m_dwDSBufferSize + i * 4) + 0x48))
                        (*(undefined4 *)(this->m_dwDSBufferSize + i * 4));
      result = result | uVar1;
    }
    __stub_3();
    *(undefined4 *)&this[1].field_0x8 = 0;
  }
  return result;
}


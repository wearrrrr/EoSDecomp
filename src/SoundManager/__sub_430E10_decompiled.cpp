
int __thiscall SoundManager::__sub_430E10(SoundManager *this,char *param_1)

{
  DWORD DVar1;
  int result;
  int *Memory;
  
  if (this->dsound == (IDirectSound *)0x0) {
    result = -1;
  }
  else if (supervisor.config.__byte_1c == '\0') {
    result = -1;
  }
  else if (this->csound_ptr == (CSound *)0x0) {
    result = -1;
  }
  else {
    Memory = (int *)__read_file_to_buffer(param_1,0);
    if (Memory == (int *)0x0) {
      result = -1;
    }
    else {
      DVar1 = this->csound_ptr->m_dwNumBuffers;
      result = Memory[1];
      *(int *)(DVar1 + 0x90) = *Memory << 2;
      *(int *)(DVar1 + 0x94) = result << 2;
      _free(Memory);
      result = 0;
    }
  }
  return result;
}


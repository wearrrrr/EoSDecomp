
int __thiscall CSound::__sub_43B200(CSound *this,uint param_1)

{
  int result;
  
  if (this->m_dwDSBufferSize == 0) {
    result = 0;
  }
  else if (param_1 < this->m_dwCreationFlags) {
    result = *(int *)(this->m_dwDSBufferSize + param_1 * 4);
  }
  else {
    result = 0;
  }
  return result;
}


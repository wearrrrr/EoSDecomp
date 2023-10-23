
BOOL __thiscall
OOAnalyzer::cls_0x46cbe8::virt_meth_0x43cf50
          (cls_0x46cbe8 *this,LPVOID param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  
  if (this->mbr_0x8 != 0x80000000) {
    return 0;
  }
  BVar1 = ReadFile((HANDLE)this->mbr_0x4,param_1,param_2,param_3,(LPOVERLAPPED)0x0);
  return BVar1;
}


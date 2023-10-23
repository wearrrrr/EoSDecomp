
undefined4 __thiscall
OOAnalyzer::cls_0x46cbe8::virt_meth_0x43d030(cls_0x46cbe8 *this,LONG param_1,DWORD param_2)

{
  if ((HANDLE)this->mbr_0x4 == (HANDLE)0xffffffff) {
    return 0;
  }
  SetFilePointer((HANDLE)this->mbr_0x4,param_1,(PLONG)0x0,param_2);
  return 1;
}


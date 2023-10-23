
undefined4 __thiscall OOAnalyzer::cls_0x46cb9c::meth_0x43c4a0(cls_0x46cb9c *this,LPCSTR param_1)

{
  int iVar1;
  DWORD DVar2;
  
  (*((this->cls_0x46cbe8).vftptr_0x0)->virt_meth_0x43cf20_4)(&this->cls_0x46cbe8);
  meth_0x43c2f0(this);
  iVar1 = cls_0x46cbe8::virt_meth_0x43ce60(&this->cls_0x46cbe8,param_1,"r");
  if (iVar1 == 0) {
    return 0;
  }
  DVar2 = GetFileSize((HANDLE)(this->cls_0x46cbe8).mbr_0x4,(LPDWORD)0x0);
  this->mbr_0x8 = DVar2;
  return 1;
}


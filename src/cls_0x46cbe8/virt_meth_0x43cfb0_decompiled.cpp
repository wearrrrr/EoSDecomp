
uint __thiscall OOAnalyzer::cls_0x46cbe8::virt_meth_0x43cfb0(cls_0x46cbe8 *this)

{
  BOOL BVar1;
  DWORD local_8;
  uint local_4;
  
  BVar1 = (*this->vftptr_0x0->virt_meth_0x43cf50_8)(this,&local_4,1,&local_8);
  if ((BVar1 != 0) && (local_8 != 0)) {
    return local_4 & 0xff;
  }
  return 0xffffffff;
}



undefined4 __thiscall OOAnalyzer::cls_0x46cb9c::virt_meth_0x43c610(cls_0x46cb9c *this,uint param_1)

{
  int iVar1;
  
  if (param_1 < this->mbr_0x8) {
    iVar1 = (*this->vftptr_0x0->virt_meth_0x43c650_16)(this);
    if (iVar1 != 0) {
      iVar1 = cls_0x46cbe8::virt_meth_0x43d030(&this->cls_0x46cbe8,param_1,0);
      if (iVar1 != 0) {
        this->mbr_0x4 = param_1;
        this->mbr_0x14 = 0;
        return 1;
      }
    }
  }
  return 0;
}


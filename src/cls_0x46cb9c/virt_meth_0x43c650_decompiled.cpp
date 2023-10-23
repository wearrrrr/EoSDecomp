
undefined4 __thiscall OOAnalyzer::cls_0x46cb9c::virt_meth_0x43c650(cls_0x46cb9c *this)

{
  byte bVar1;
  
  if ((this->cls_0x46cbe8).mbr_0x4 != 0) {
    bVar1 = this->mbr_0x10;
    while (bVar1 != 0x80) {
      (*this->vftptr_0x0->virt_meth_0x43c510_0)(this);
      bVar1 = this->mbr_0x10;
    }
    return 1;
  }
  return 0;
}


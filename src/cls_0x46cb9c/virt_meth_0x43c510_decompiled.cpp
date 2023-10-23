
bool __thiscall OOAnalyzer::cls_0x46cb9c::virt_meth_0x43c510(cls_0x46cb9c *this)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  if ((this->cls_0x46cbe8).mbr_0x4 == 0) {
    return false;
  }
  if (this->mbr_0x10 == 0x80) {
    uVar2 = cls_0x46cbe8::virt_meth_0x43cfb0(&this->cls_0x46cbe8);
    this->mbr_0xc = uVar2;
    if (uVar2 == 0xffffffff) {
      return false;
    }
    this->mbr_0x4 = this->mbr_0x4 + 1;
    this->mbr_0x14 = this->mbr_0x14 + uVar2;
  }
  bVar1 = this->mbr_0x10;
  bVar3 = bVar1 >> 1;
  this->mbr_0x10 = bVar3;
  if (bVar3 == 0) {
    this->mbr_0x10 = 0x80;
  }
  return (this->mbr_0xc & (uint)bVar1) != 0;
}



undefined4 __thiscall OOAnalyzer::cls_0x43b4d0::meth_0x43b4d0(cls_0x43b4d0 *this)

{
  if (this->mbr_0x1c != 0) {
    this->mbr_0x14 = this->mbr_0x14 - 1;
    if ((int)this->mbr_0x14 < 1) {
      this->mbr_0x1c = 0;
      (**(code **)(**(int **)this->mbr_0x4 + 0x48))(*(undefined4 *)this->mbr_0x4);
      return 1;
    }
    (**(code **)(**(int **)this->mbr_0x4 + 0x3c))
              (*(undefined4 *)this->mbr_0x4,
               (int)(this->mbr_0x14 * 5000) / (int)this->mbr_0x18 + -5000);
  }
  return 0;
}


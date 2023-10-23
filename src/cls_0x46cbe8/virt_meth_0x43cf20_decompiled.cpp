
void __thiscall OOAnalyzer::cls_0x46cbe8::virt_meth_0x43cf20(cls_0x46cbe8 *this)

{
  if ((HANDLE)this->mbr_0x4 != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)this->mbr_0x4);
    this->mbr_0x4 = 0xffffffff;
    this->mbr_0x8 = 0;
  }
  return;
}


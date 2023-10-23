
cls_0x46cbe8 * __thiscall OOAnalyzer::cls_0x46cbe8::~cls_0x46cbe8(cls_0x46cbe8 *this)

{
  cls_0x46cbe8 *hObject;
  
  hObject = (cls_0x46cbe8 *)this->mbr_0x4;
  this->vftptr_0x0 = &__UnknownN_FuncPtrTable;
  if (hObject != (cls_0x46cbe8 *)0xffffffff) {
    hObject = (cls_0x46cbe8 *)CloseHandle(hObject);
    this->mbr_0x4 = 0xffffffff;
    this->mbr_0x8 = 0;
  }
  return hObject;
}


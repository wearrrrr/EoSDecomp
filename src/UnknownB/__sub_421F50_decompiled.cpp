
cls_0x46b568 * __thiscall UnknownB::__sub_421F50(void *this)

{
  cls_0x46b568 *pcVar1;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  uint local_8;
  
  puStack_c = &__SE_handler_4691F6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(cls_0x46b568__vftable_46b568 **)this = &__UnknownE_FuncPtr;
  local_8 = 1;
  MidiManager::__sub_4224E0((MidiManager *)this);
  __sub_4220B0(this);
  for (local_14 = 0; local_14 < 0x20; local_14 = local_14 + 1) {
    __sub_422070(this,local_14);
  }
  local_8 = local_8 & 0xffffff00;
  MIDIHDR::__sub_421AD0((MIDIHDR *)((int)this + 0x13c));
  local_8 = 0xffffffff;
  pcVar1 = (cls_0x46b568 *)__sub_421C60(this);
  ExceptionList = local_10;
  return pcVar1;
}



UnknownC * __thiscall UnknownC::__sub_421DF0(UnknownC *this)

{
  int j;
  int i;
  void *exceptionList;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_4691C8;
  exceptionList = ExceptionList;
  ExceptionList = &exceptionList;
  __sub_421C30(this);
  local_8 = 0;
  *(cls_0x46b568__vftable_46b568 **)this = &__UnknownE_FuncPtr;
  DNameNode::DNameNode((DNameNode *)(this + 0x13c));
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  this[0x2c4] = (UnknownC)0x0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined4 *)(this + 0x2d8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = 0;
  for (i = 0; i < 32; i = i + 1) {
    *(undefined4 *)(this + i * 4 + 0x94) = 0;
  }
  for (j = 0; j < 32; j = j + 1) {
    *(undefined4 *)(this + j * 4 + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x90) = 0;
  ExceptionList = exceptionList;
  return this;
}


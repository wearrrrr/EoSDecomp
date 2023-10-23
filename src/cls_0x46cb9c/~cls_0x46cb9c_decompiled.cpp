
cls_0x46cb9c * __thiscall OOAnalyzer::cls_0x46cb9c::~cls_0x46cb9c(cls_0x46cb9c *this)

{
  cls_0x46cbe8 *this_00;
  cls_0x46cb9c *pcVar1;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &__SE_handler_46932F;
  local_c = ExceptionList;
  this_00 = &this->cls_0x46cbe8;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &__UnknownK_FuncPtrTable;
  this_00->vftptr_0x0 = (cls_0x46cbe8__vftable_46cbe8 *)&__UnknownL_FuncPtrTable;
  local_4 = 1;
  cls_0x46cbe8::virt_meth_0x43cf20(this_00);
  meth_0x43c2f0(this);
  local_4 = local_4 & 0xffffff00;
  pcVar1 = (cls_0x46cb9c *)cls_0x46cbe8::~cls_0x46cbe8(this_00);
  this->vftptr_0x0 = (cls_0x46cb9c__vftable_46cb9c *)&__UnknownJ_FuncPtrTable;
  ExceptionList = local_c;
  return pcVar1;
}


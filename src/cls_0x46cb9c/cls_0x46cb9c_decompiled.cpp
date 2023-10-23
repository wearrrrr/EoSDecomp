
cls_0x46cb9c * __thiscall OOAnalyzer::cls_0x46cb9c::cls_0x46cb9c(cls_0x46cb9c *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &__SE_handler_4692E8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = (cls_0x46cb9c__vftable_46cb9c *)&__UnknownJ_FuncPtrTable;
  meth_0x43c2f0(this);
  local_4 = 0;
  cls_0x46cbe8::cls_0x46cbe8(&this->cls_0x46cbe8);
  (this->cls_0x46cbe8).vftptr_0x0 = (cls_0x46cbe8__vftable_46cbe8 *)&__UnknownL_FuncPtrTable;
  this->vftptr_0x0 = &__UnknownK_FuncPtrTable;
  ExceptionList = local_c;
  return this;
}



cls_0x46cb7c * __thiscall virt_deldtor_0x43c420(void *this)

{
  byte in_stack_00000004;
  
  *(cls_0x46cb7c__vftable_46cb7c **)this = &__UnknownJ_FuncPtrTable;
  if ((in_stack_00000004 & 1) != 0) {
    _free(this);
  }
  return (cls_0x46cb7c *)this;
}


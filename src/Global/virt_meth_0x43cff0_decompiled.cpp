
undefined4 __thiscall virt_meth_0x43cff0(void *this)

{
  int iVar1;
  undefined4 in_stack_00000004;
  int iVar2;
  void *local_4;
  
                    /* WARNING: Load size is inaccurate */
  iVar2 = 1;
  local_4 = this;
  iVar1 = (**(code **)(*this + 0xc))(&stack0x00000004,1,&local_4);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    return in_stack_00000004;
  }
  return 0xffffffff;
}


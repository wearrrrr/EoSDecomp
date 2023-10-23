
HLOCAL __thiscall virt_meth_0x43d0a0(void *this)

{
  uint uBytes;
  HLOCAL hMem;
  undefined4 uVar1;
  int iVar2;
  uint in_stack_00000004;
  
  if (*(int *)((int)this + 8) != -0x80000000) {
    return (HLOCAL)0x0;
  }
                    /* WARNING: Load size is inaccurate */
  uBytes = (**(code **)(*this + 0x20))();
  if (uBytes <= in_stack_00000004) {
    hMem = LocalAlloc(0x40,uBytes);
    if (hMem != (HLOCAL)0x0) {
                    /* WARNING: Load size is inaccurate */
      uVar1 = (**(code **)(*this + 0x1c))();
                    /* WARNING: Load size is inaccurate */
      iVar2 = (**(code **)(*this + 0x18))(uVar1,0);
      if (iVar2 != 0) {
                    /* WARNING: Load size is inaccurate */
        iVar2 = (**(code **)(*this + 8))(hMem,uBytes,&stack0xfffffff4);
        if (iVar2 != 0) {
                    /* WARNING: Load size is inaccurate */
          (**(code **)(*this + 0x18))(uVar1,0);
          return hMem;
        }
        LocalFree(hMem);
      }
    }
  }
  return (HLOCAL)0x0;
}


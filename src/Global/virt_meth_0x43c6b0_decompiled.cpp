
BOOL __thiscall virt_meth_0x43c6b0(void *this)

{
  BOOL BVar1;
  LPFILETIME in_stack_00000004;
  
  if (*(HANDLE *)((int)this + 0x1c) == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar1 = GetFileTime(*(HANDLE *)((int)this + 0x1c),(LPFILETIME)0x0,(LPFILETIME)0x0,
                      in_stack_00000004);
  return BVar1;
}


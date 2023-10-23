
BOOL __thiscall virt_meth_0x43cf80(void *this)

{
  BOOL BVar1;
  LPCVOID in_stack_00000004;
  DWORD in_stack_00000008;
  LPDWORD in_stack_0000000c;
  
  if (*(int *)((int)this + 8) != 0x40000000) {
    return 0;
  }
  BVar1 = WriteFile(*(HANDLE *)((int)this + 4),in_stack_00000004,in_stack_00000008,in_stack_0000000c
                    ,(LPOVERLAPPED)0x0);
  return BVar1;
}


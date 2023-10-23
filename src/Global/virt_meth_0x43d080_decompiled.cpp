
DWORD __thiscall virt_meth_0x43d080(void *this)

{
  DWORD DVar1;
  
  if (*(HANDLE *)((int)this + 4) == (HANDLE)0xffffffff) {
    return 0;
  }
  DVar1 = GetFileSize(*(HANDLE *)((int)this + 4),(LPDWORD)0x0);
  return DVar1;
}


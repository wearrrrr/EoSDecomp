
DWORD __thiscall virt_meth_0x43d060(void *this)

{
  DWORD DVar1;
  
  if (*(HANDLE *)((int)this + 4) == (HANDLE)0xffffffff) {
    return 0;
  }
  DVar1 = SetFilePointer(*(HANDLE *)((int)this + 4),0,(PLONG)0x0,1);
  return DVar1;
}


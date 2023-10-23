
undefined4 __thiscall
UnknownB::__sub_421C90(void *this,UINT param_1,LPTIMECALLBACK param_2,DWORD_PTR param_3)

{
  MMRESULT MVar1;
  
  __sub_421D10(this);
  timeBeginPeriod(*(UINT *)((int)this + 8));
  if (param_2 == (LPTIMECALLBACK)0x0) {
    MVar1 = timeSetEvent(param_1,*(UINT *)((int)this + 8),fptc,(DWORD_PTR)this,1);
    *(MMRESULT *)((int)this + 4) = MVar1;
  }
  else {
    MVar1 = timeSetEvent(param_1,*(UINT *)((int)this + 8),param_2,param_3,1);
    *(MMRESULT *)((int)this + 4) = MVar1;
  }
  return *(undefined4 *)((int)this + 4);
}


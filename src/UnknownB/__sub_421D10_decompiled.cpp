
undefined4 __thiscall UnknownB::__sub_421D10(void *this)

{
  if (*(int *)((int)this + 4) != 0) {
    timeKillEvent(*(UINT *)((int)this + 4));
  }
  timeEndPeriod(*(UINT *)((int)this + 8));
  *(undefined4 *)((int)this + 4) = 0;
  return 1;
}


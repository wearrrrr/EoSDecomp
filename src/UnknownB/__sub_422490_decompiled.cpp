
undefined4 __thiscall UnknownB::__sub_422490(void *this)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x138) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    __sub_4223C0(this);
    MIDIHDR::__sub_421AF0((MIDIHDR *)((int)this + 0x13c),(HMIDIOUT)0xffffffff);
    __sub_421C90(this,1,(LPTIMECALLBACK)0x0,0);
    uVar1 = 0;
  }
  return uVar1;
}


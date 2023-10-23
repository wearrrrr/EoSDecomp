
bool __thiscall MIDIHDR::__sub_421B90(MIDIHDR *this,LPMIDIHDR param_1)

{
  MMRESULT MVar1;
  bool bVar2;
  
  if (*(int *)this == 0) {
    bVar2 = false;
  }
  else {
    MVar1 = midiOutPrepareHeader(*(HMIDIOUT *)this,param_1,0x40);
    if (MVar1 == 0) {
      MVar1 = midiOutLongMsg(*(HMIDIOUT *)this,param_1,0x40);
      bVar2 = MVar1 != 0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}


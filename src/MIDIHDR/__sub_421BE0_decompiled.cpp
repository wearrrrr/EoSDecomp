
bool __thiscall
MIDIHDR::__sub_421BE0(MIDIHDR *this,undefined param_1,undefined param_2,undefined param_3)

{
  undefined4 uVar1;
  MMRESULT MVar2;
  bool bVar3;
  undefined4 local_8;
  
  uVar1 = local_8;
  if (*(int *)this == 0) {
    bVar3 = false;
  }
  else {
    MVar2 = midiOutShortMsg(*(HMIDIOUT *)this,local_8);
    bVar3 = MVar2 != 0;
  }
  return bVar3;
}


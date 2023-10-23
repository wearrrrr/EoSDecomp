
bool __thiscall MIDIHDR::__sub_421AF0(MIDIHDR *this,HMIDIOUT param_1)

{
  MMRESULT MVar1;
  
  if (*(int *)this != 0) {
    if (*(HMIDIOUT *)(this + 4) == param_1) {
      return false;
    }
    resetAndCloseMidi(this,(cls_0x421aa0 *)this);
  }
  *(HMIDIOUT *)((int)this + 4) = param_1;
  MVar1 = midiOutOpen((LPHMIDIOUT)this,(UINT)param_1,(DWORD_PTR)supervisor.main_window,0,0x10000);
  return MVar1 != 0;
}


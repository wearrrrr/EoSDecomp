
int __thiscall UnknownB::__sub_422560(void *this,LPMIDIHDR midiHeader)

{
  MMRESULT midiOutUnprepareHeader;
  int local_c;
  
  if (midiHeader == (LPMIDIHDR)0x0) {
    __stub_3();
  }
  if (*(int *)((int)this + 0x13c) == 0) {
    __stub_3();
  }
  local_c = 0;
  while( true ) {
    if (31 < local_c) {
      return -1;
    }
    if (*(LPMIDIHDR *)((int)this + local_c * 4 + 16) == midiHeader) break;
    local_c = local_c + 1;
  }
  *(undefined4 *)((int)this + local_c * 4 + 16) = 0;
  midiOutUnprepareHeader =
       ::midiOutUnprepareHeader(*(HMIDIOUT *)((int)this + 0x13c),midiHeader,0x40);
  if (midiOutUnprepareHeader != 0) {
    __stub_3();
  }
  _free(midiHeader->lpData);
  _free(midiHeader);
  return 0;
}


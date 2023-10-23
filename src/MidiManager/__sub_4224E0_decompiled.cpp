
int __thiscall MidiManager::__sub_4224E0(MidiManager *this)

{
  int result;
  int i;
  
  if (*(int *)(this->field0_0x0 + 0x138) == 0) {
    result = -1;
  }
  else {
    for (i = 0; i < 32; i = i + 1) {
      if (*(int *)(this->field0_0x0 + *(int *)(this->field0_0x0 + 0x90) * 4 + 0x10) != 0) {
        UnknownB::__sub_422560
                  (this,*(LPMIDIHDR *)
                         (this->field0_0x0 + *(int *)(this->field0_0x0 + 0x90) * 4 + 0x10));
      }
    }
    UnknownB::__sub_421D10(this);
    resetAndCloseMidi(this->field0_0x0 + 0x13c,(cls_0x421aa0 *)this);
    result = 0;
  }
  return result;
}



Ending * __thiscall Ending::constructor(Ending *this)

{
  int i;
  Ending *pEVar1;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 0x10;
  local_20 = (AnmVm *)(this->field1_0x4 + 0x10);
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::constructor(local_20);
    local_20 = local_20 + 1;
  }
  Timer::constructor((Timer *)(this->field1_0x4 + 0x1118));
  Timer::constructor((Timer *)(this->field1_0x4 + 0x1124));
  Timer::constructor((Timer *)(this->field1_0x4 + 0x1130));
  pEVar1 = this;
  for (i = 0x45c; i != 0; i = i + -1) {
    pEVar1->on_tick = (UpdateFunc *)0x0;
    pEVar1 = (Ending *)pEVar1->field1_0x4;
  }
  *(undefined4 *)(this->field1_0x4 + 0x1144) = 8;
  *(undefined4 *)(this->field1_0x4 + 0x112c) = 0;
  *(undefined4 *)(this->field1_0x4 + 0x1128) = 0;
  *(undefined4 *)(this->field1_0x4 + 0x1124) = 0xfffffc19;
  *(undefined4 *)(this->field1_0x4 + 0x1120) = 0;
  *(undefined4 *)(this->field1_0x4 + 0x111c) = 0;
  *(undefined4 *)(this->field1_0x4 + 0x1118) = 0xfffffc19;
  *(undefined4 *)(this->field1_0x4 + 4) = 0;
  *(undefined4 *)(this->field1_0x4 + 8) = 0;
  *(undefined4 *)(this->field1_0x4 + 0xc) = 0;
  return this;
}


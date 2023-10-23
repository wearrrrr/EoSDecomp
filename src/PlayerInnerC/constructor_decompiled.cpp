
PlayerInnerC * __thiscall PlayerInnerC::constructor(PlayerInnerC *this)

{
  AnmVm *local_3c;
  int local_34;
  int local_18;
  int local_c;
  
  Timer::constructor((Timer *)(this + 8));
  local_c = 8;
  do {
    local_c = local_c + -1;
  } while (-1 < local_c);
  local_18 = 8;
  do {
    local_18 = local_18 + -1;
  } while (-1 < local_18);
  local_34 = 0x20;
  local_3c = (AnmVm *)(this + 0x11c);
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::constructor(local_3c);
    local_3c = local_3c + 1;
  }
  return this;
}


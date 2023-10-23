
MusicRoom * __thiscall MusicRoom::constructor(MusicRoom *this)

{
  int iVar1;
  MusicRoom *pMVar2;
  AnmVm *local_58;
  int local_50;
  AnmVm *local_3c;
  int local_34;
  AnmVm *local_20;
  int local_18;
  
  local_18 = 1;
  local_20 = this->vms_0;
  while (local_18 = local_18 + -1, -1 < local_18) {
    AnmVm::constructor(local_20);
    local_20 = local_20 + 1;
  }
  local_34 = 0x20;
  local_3c = this->vms_1;
  while (local_34 = local_34 + -1, -1 < local_34) {
    AnmVm::constructor(local_3c);
    local_3c = local_3c + 1;
  }
  local_50 = 0x10;
  local_58 = this->vms_2;
  while (local_50 = local_50 + -1, -1 < local_50) {
    AnmVm::constructor(local_58);
    local_58 = local_58 + 1;
  }
  pMVar2 = this;
  for (iVar1 = 0xd0d; iVar1 != 0; iVar1 = iVar1 + -1) {
    pMVar2->on_tick = (UpdateFunc *)0x0;
    pMVar2 = (MusicRoom *)&pMVar2->on_draw;
  }
  return this;
}


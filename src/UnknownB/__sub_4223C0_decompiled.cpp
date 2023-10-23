
void __thiscall UnknownB::__sub_4223C0(void *this)

{
  int iVar1;
  undefined4 *local_c;
  int local_8;
  
  local_c = *(undefined4 **)((int)this + 0x138);
  *(undefined4 *)((int)this + 0x2c8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  for (local_8 = 0; local_8 < *(int *)((int)this + 0x114); local_8 = local_8 + 1) {
    local_c[5] = local_c[4];
    local_c[6] = local_c[5];
    *local_c = 1;
    iVar1 = __sub_421D90((byte **)(local_c + 5));
    local_c[1] = iVar1;
    local_c = local_c + 8;
  }
  return;
}


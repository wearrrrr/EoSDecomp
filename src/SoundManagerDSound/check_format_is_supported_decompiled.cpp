
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SoundManagerDSound::check_format_is_supported
          (SoundManagerDSound *this,short param_1,int param_2,ushort param_3)

{
  int i;
  undefined4 *puVar1;
  uint unaff_retaddr;
  undefined4 local_44 [4];
  undefined4 local_34;
  uint local_20;
  undefined2 local_1c;
  short sStack_1a;
  undefined4 local_18;
  int local_14;
  ushort local_10;
  ushort uStack_e;
  undefined2 local_c;
  int *local_8;
  
  local_20 = _DAT_0047a630 ^ unaff_retaddr;
  local_8 = (int *)0x0;
  if (*(int *)this != 0) {
    puVar1 = local_44;
    for (i = 9; i != 0; i = i + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_44[0] = 0x24;
    local_44[1] = 1;
    local_44[2] = 0;
    local_34 = 0;
    i = (**(code **)(**(int **)this + 0xc))(*(undefined4 *)this,local_44,&local_8,0);
    if (-1 < i) {
      local_c = 0;
      local_1c = 1;
      sStack_1a = param_1;
      uStack_e = param_3;
      local_10 = (short)((int)(uint)param_3 >> 3) * param_1;
      local_14 = param_2 * (uint)local_10;
      local_18 = param_2;
      i = (**(code **)(*local_8 + 0x38))(local_8,&local_1c);
      if ((-1 < i) && (local_8 != (int *)0x0)) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
  }
  ___security_check_cookie_4(local_20 ^ unaff_retaddr);
  return;
}


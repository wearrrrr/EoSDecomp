
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint unaff_retaddr;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar1 = param_3;
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_c = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_18 = *puVar1;
      local_14 = puVar1[1];
      local_10 = puVar1[2];
      ___shl_12(puVar1);
      ___shl_12(puVar1);
      ___add_12(puVar1,&local_18);
      ___shl_12(puVar1);
      local_18 = (uint)*param_1;
      local_14 = 0;
      local_10 = 0;
      ___add_12(puVar1,&local_18);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  if (puVar1[2] == 0) {
    do {
      local_c = local_c + 0xfff0;
      uVar2 = puVar1[1] >> 0x10;
      puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
      *puVar1 = *puVar1 << 0x10;
    } while (uVar2 == 0);
    puVar1[2] = uVar2;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    ___shl_12(puVar1);
    local_c = local_c + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_c;
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}


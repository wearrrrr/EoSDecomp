
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint unaff_retaddr;
  uint uVar3;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = _DAT_0047a630 ^ unaff_retaddr;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_004664da:
    uVar3 = 8;
LAB_004664dc:
    bVar1 = __handle_exc(uVar3,(double *)(param_2 + 6),local_94);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_94,uVar3,param_1,(undefined8 *)(param_2 + 2),
                  (undefined8 *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      uVar3 = 4;
      goto LAB_004664dc;
    }
    if (iVar2 == 3) {
      uVar3 = 0x11;
      goto LAB_004664dc;
    }
    if (iVar2 == 4) {
      uVar3 = 0x12;
      goto LAB_004664dc;
    }
    if (iVar2 == 5) goto LAB_004664da;
    if (iVar2 == 7) {
      *param_2 = 1;
    }
    else if (iVar2 == 8) {
      uVar3 = 0x10;
      goto LAB_004664dc;
    }
  }
  __ctrlfp();
  if ((*param_2 != 8) && (_DAT_0047b4e8 == 0)) {
    iVar2 = __matherr();
    if (iVar2 != 0) goto LAB_00466567;
  }
  __set_errno(*param_2);
LAB_00466567:
  ___security_check_cookie_4(local_14 ^ unaff_retaddr);
  return;
}


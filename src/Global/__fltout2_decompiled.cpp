
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __fltout2(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint unaff_retaddr;
  undefined4 in_stack_ffffffb8;
  undefined2 uVar4;
  short local_30;
  char local_2e;
  char local_2c [24];
  uint local_14;
  uint uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffb8 >> 0x10);
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  ___dtold(&local_14,&param_1);
  iVar3 = __I10_OUTPUT(local_14,uStack_10,(short *)CONCAT22(uVar4,uStack_c),0x11,0,&local_30);
  pcVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2e;
  param_3[1] = (int)local_30;
  _strcpy(param_4,local_2c);
  piVar1[3] = (int)pcVar2;
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
}


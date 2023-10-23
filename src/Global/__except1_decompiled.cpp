
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int _Value;
  uint unaff_retaddr;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  
  local_14 = _DAT_0047a630 ^ unaff_retaddr;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc(local_90,&param_5,param_1,param_2,&param_3,&param_4);
  }
  _Value = __errcode((byte)param_1);
  if ((_DAT_0047b4e8 == 0) && (_Value != 0)) {
    __umatherr(_Value,param_2);
  }
  else {
    __set_errno(_Value);
    __ctrlfp();
  }
  ___security_check_cookie_4(local_14 ^ unaff_retaddr);
  return;
}


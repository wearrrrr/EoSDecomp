
undefined4 FUN_00423801(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(uint *)(param_1 + 0x18) & 3) != 0) {
    local_1c = 0x18;
    local_18 = 0x10;
    local_10 = 2;
    local_14 = *(undefined4 *)(param_1 + 0x18);
    local_c = 0xfffffc18;
    local_8 = 1000;
                    /* WARNING: Load size is inaccurate */
    iVar1 = (**(code **)(*supervisor.dinput_related_ptr_1 + 0x18))
                      (supervisor.dinput_related_ptr_1,4,&local_1c,param_2);
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}


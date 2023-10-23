
undefined4 __thiscall FUN_00423da0(void *this,int param_1)

{
  int iVar1;
  
  if ((supervisor.dinput_related_ptr_1 == (void *)0x0) &&
     (iVar1 = (**(code **)(*(int *)supervisor.field3_0xc._0_4_ + 0xc))
                        (supervisor.field3_0xc._0_4_,param_1 + 4,0x6c6d2c,0,this), iVar1 < 0)) {
    return 1;
  }
  return 0;
}


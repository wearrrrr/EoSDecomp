
bool __cdecl FUN_0042fc80(int param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = __ftol2((double)((((float)*(int *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) *
                             _55_0f) / (float)*(int *)(param_1 + 0x14)));
    *(int *)(param_1 + 0x10) = (int)lVar2;
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  bVar1 = *(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x14);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    Supervisor::tick_timer(&supervisor,(int *)(param_1 + 0x2c),(float *)(param_1 + 0x28));
  }
  return bVar1;
}


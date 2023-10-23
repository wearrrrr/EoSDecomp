
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl reduce_angle(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  param_1 = param_1 + param_2;
  do {
    if (param_1 <= _Pi_f) break;
    param_1 = param_1 - _Pi_2_f;
    iVar2 = local_8 + 1;
    bVar1 = local_8 < 0x11;
    local_8 = iVar2;
  } while (bVar1);
  do {
    if (__Pi_f <= param_1) break;
    param_1 = param_1 + _Pi_2_f;
    bVar1 = local_8 < 0x11;
    local_8 = local_8 + 1;
  } while (bVar1);
  return (float10)param_1;
}


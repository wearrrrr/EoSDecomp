
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ___freetlocinfo(void *param_1)

{
  int *piVar1;
  void **ppvVar2;
  
  if (((*(int *)((int)param_1 + 0x3c) != _DAT_006e64f0) && (*(int *)((int)param_1 + 0x3c) != 0)) &&
     (**(int **)((int)param_1 + 0x2c) == 0)) {
    piVar1 = *(int **)((int)param_1 + 0x34);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != _DAT_006e6884)) {
      _free(piVar1);
      ___free_lconv_mon(*(int *)((int)param_1 + 0x3c));
    }
    piVar1 = *(int **)((int)param_1 + 0x30);
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != _DAT_006e6888)) {
      _free(piVar1);
      ___free_lconv_num(*(void ***)((int)param_1 + 0x3c));
    }
    _free(*(void **)((int)param_1 + 0x2c));
    _free(*(void **)((int)param_1 + 0x3c));
  }
  piVar1 = *(int **)((int)param_1 + 0x40);
  if (((piVar1 != _DAT_006e6880) && (piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
    _free(piVar1);
    _free(*(void **)((int)param_1 + 0x44));
  }
  ppvVar2 = *(void ***)((int)param_1 + 0x50);
  if (((ppvVar2 != _DAT_006e64ec) && (ppvVar2 != (void **)0x0)) && (ppvVar2[0x2d] == (void *)0x0)) {
    __free_lc_time(ppvVar2);
    _free(*(void **)((int)param_1 + 0x50));
  }
  _free(param_1);
  return;
}


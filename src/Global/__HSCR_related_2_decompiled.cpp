
int __cdecl __HSCR_related_2(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int local_8;
  
  local_8 = 0;
  while ((*(int *)(param_1 + 4) != 0 &&
         ((*(int *)(*(int *)(param_1 + 4) + 8) == 0 ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xc),
          *(uint *)(param_2 + 0xc) <= uVar1 && uVar1 != *(uint *)(param_2 + 0xc)))))) {
    param_1 = *(int *)(param_1 + 4);
    local_8 = local_8 + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 4);
  pvVar4 = _malloc(0xc);
  *(void **)(param_1 + 4) = pvVar4;
  **(int **)(param_1 + 4) = param_1;
  iVar3 = *(int *)(param_1 + 4);
  *(int *)(iVar3 + 8) = param_2;
  *(undefined4 *)(iVar3 + 4) = uVar2;
  return local_8;
}



undefined4 * __cdecl
_png_memset_check(undefined4 param_1,undefined4 *param_2,undefined param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined *)puVar2 = param_3;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return param_2;
}


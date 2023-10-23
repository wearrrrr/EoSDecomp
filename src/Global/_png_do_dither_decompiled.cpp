
void __cdecl _png_do_dither(int *param_1,byte *param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  cVar1 = *(char *)(param_1 + 2);
  iVar5 = *param_1;
  if (((cVar1 == '\x02') && (param_3 != 0)) &&
     (iVar3 = iVar5, pbVar4 = param_2, *(char *)((int)param_1 + 9) == '\b')) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      bVar2 = *param_2;
      pbVar6 = param_2 + 1;
      pbVar7 = param_2 + 2;
      param_2 = param_2 + 3;
      *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar6 & 0xf8) << 2 | (int)(uint)*pbVar7 >> 3) +
                         param_3);
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    if (((cVar1 != '\x06') || (param_3 == 0)) ||
       (iVar3 = iVar5, pbVar4 = param_2, *(char *)((int)param_1 + 9) != '\b')) {
      if (cVar1 != '\x03') {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      if (*(char *)((int)param_1 + 9) != '\b') {
        return;
      }
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_2 = *(byte *)((uint)*param_2 + param_4);
        param_2 = param_2 + 1;
      }
      return;
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      bVar2 = *param_2;
      pbVar6 = param_2 + 1;
      pbVar7 = param_2 + 2;
      param_2 = param_2 + 4;
      *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar6 & 0xf8) << 2 | (int)(uint)*pbVar7 >> 3) +
                         param_3);
      pbVar4 = pbVar4 + 1;
    }
  }
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 9);
  *(undefined *)(param_1 + 2) = 3;
  *(undefined *)((int)param_1 + 10) = 1;
  param_1[1] = (uint)*(byte *)((int)param_1 + 9) * iVar5 + 7 >> 3;
  return;
}


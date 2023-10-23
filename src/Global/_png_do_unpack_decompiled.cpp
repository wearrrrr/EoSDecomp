
void __cdecl _png_do_unpack(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar2 = *(byte *)((int)param_1 + 9);
  if (bVar2 < 8) {
    iVar3 = *param_1;
    if (bVar2 == 1) {
      pbVar5 = (byte *)((iVar3 - 1U >> 3) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = 7 - (iVar3 - 1U & 7);
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 1;
        if (iVar4 == 7) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 2) {
      pbVar5 = (byte *)((iVar3 - 1U >> 2) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = (iVar3 - 1U & 3) * -2 + 6;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 3;
        if (iVar4 == 6) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 4) {
      pbVar5 = (byte *)((iVar3 - 1U >> 1) + param_2);
      pbVar6 = (byte *)(iVar3 + -1 + param_2);
      iVar4 = (iVar3 - 1U & 1) * -4 + 4;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 0xf;
        if (iVar4 == 4) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = 4;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    *(undefined *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * iVar3;
  }
  return;
}


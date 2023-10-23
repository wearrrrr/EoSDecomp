
uint __thiscall __sub_43C920(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    pbVar5 = (byte *)(*(int *)((int)this + 0x10) + 0x14);
    pbVar2 = param_1;
    pbVar6 = pbVar5;
LAB_0043c939:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0043c95d;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
          if (bVar1 != 0) goto LAB_0043c939;
        }
        iVar3 = 0;
      }
      else {
LAB_0043c95d:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar6 + 0x114;
      pbVar2 = param_1;
      pbVar6 = pbVar5;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  return 0xffffffff;
}


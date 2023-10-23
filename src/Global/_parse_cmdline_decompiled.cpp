
void __thiscall _parse_cmdline(void *this,byte **param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *in_EAX;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  int *unaff_ESI;
  
  bVar1 = false;
  *unaff_ESI = 0;
  *param_2 = 1;
  if (param_1 != (byte **)0x0) {
    *param_1 = (byte *)this;
    param_1 = param_1 + 1;
  }
  do {
    if (*in_EAX == 0x22) {
      bVar1 = !bVar1;
      pbVar3 = in_EAX + 1;
      bVar5 = 0x22;
    }
    else {
      *unaff_ESI = *unaff_ESI + 1;
      if ((byte *)this != (byte *)0x0) {
        *(byte *)this = *in_EAX;
        this = (void *)((int)this + 1);
      }
      bVar5 = *in_EAX;
      pbVar3 = in_EAX + 1;
      if (((&DAT_006e6661)[bVar5] & 4) != 0) {
        *unaff_ESI = *unaff_ESI + 1;
        if ((byte *)this != (byte *)0x0) {
          *(byte *)this = *pbVar3;
          this = (void *)((int)this + 1);
        }
        pbVar3 = in_EAX + 2;
      }
      if (bVar5 == 0) {
        pbVar3 = pbVar3 + -1;
        goto LAB_00464100;
      }
    }
    in_EAX = pbVar3;
  } while ((bVar1) || ((bVar5 != 0x20 && (bVar5 != 9))));
  if ((byte *)this != (byte *)0x0) {
    *(byte *)((int)this + -1) = 0;
  }
LAB_00464100:
  bVar1 = false;
  while (*pbVar3 != 0) {
    for (; (*pbVar3 == 0x20 || (*pbVar3 == 9)); pbVar3 = pbVar3 + 1) {
    }
    if (*pbVar3 == 0) break;
    if (param_1 != (byte **)0x0) {
      *param_1 = (byte *)this;
      param_1 = param_1 + 1;
    }
    *param_2 = *param_2 + 1;
    while( true ) {
      bVar2 = true;
      uVar6 = 0;
      for (; *pbVar3 == 0x5c; pbVar3 = pbVar3 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar3 == 0x22) {
        pbVar4 = pbVar3;
        if ((uVar6 & 1) == 0) {
          if ((!bVar1) || (pbVar4 = pbVar3 + 1, *pbVar4 != 0x22)) {
            bVar2 = false;
            pbVar4 = pbVar3;
          }
          bVar1 = !bVar1;
        }
        uVar6 = uVar6 >> 1;
        pbVar3 = pbVar4;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((byte *)this != (byte *)0x0) {
          *(byte *)this = 0x5c;
          this = (void *)((int)this + 1);
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      bVar5 = *pbVar3;
      if ((bVar5 == 0) || ((!bVar1 && ((bVar5 == 0x20 || (bVar5 == 9)))))) break;
      if (bVar2) {
        if ((byte *)this == (byte *)0x0) {
          if (((&DAT_006e6661)[bVar5] & 4) != 0) {
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
        }
        else {
          if (((&DAT_006e6661)[bVar5] & 4) != 0) {
            *(byte *)this = bVar5;
            this = (void *)((int)this + 1);
            pbVar3 = pbVar3 + 1;
            *unaff_ESI = *unaff_ESI + 1;
          }
          *(byte *)this = *pbVar3;
          this = (void *)((int)this + 1);
        }
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    if ((byte *)this != (byte *)0x0) {
      *(byte *)this = 0;
      this = (void *)((int)this + 1);
    }
    *unaff_ESI = *unaff_ESI + 1;
  }
  if (param_1 != (byte **)0x0) {
    *param_1 = (byte *)0x0;
  }
  *param_2 = *param_2 + 1;
  return;
}


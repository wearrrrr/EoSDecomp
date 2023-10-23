
undefined4 __thiscall OOAnalyzer::cls_0x43c770::meth_0x43c790(cls_0x43c770 *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  cls_0x43c310 *this_00;
  
  iVar1 = cls_0x43c310::meth_0x43c380((cls_0x43c310 *)this->mbr_0x0);
  this_00 = (cls_0x43c310 *)this->mbr_0x0;
  if (iVar1 == 0x33474250) {
    uVar2 = cls_0x43c310::meth_0x43c310(this_00);
    this->mbr_0x8 = uVar2;
    uVar2 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
    this->mbr_0xc = uVar2;
    iVar1 = (**(code **)(*(int *)this->mbr_0x0 + 0xc))(uVar2);
    if (iVar1 != 0) {
      pvVar3 = malloc(this->mbr_0x8 * 0x114);
      this->mbr_0x10 = (dword)pvVar3;
      if (pvVar3 != (void *)0x0) {
        uVar2 = 0;
        if (this->mbr_0x8 != 0) {
          iVar1 = 0;
          do {
            uVar4 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
            *(uint *)(iVar1 + 4 + this->mbr_0x10) = uVar4;
            uVar4 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
            *(uint *)(iVar1 + this->mbr_0x10) = uVar4;
            uVar4 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
            *(uint *)(iVar1 + 0x10 + this->mbr_0x10) = uVar4;
            uVar4 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
            *(uint *)(iVar1 + 0xc + this->mbr_0x10) = uVar4;
            uVar4 = cls_0x43c310::meth_0x43c310((cls_0x43c310 *)this->mbr_0x0);
            *(uint *)(iVar1 + 8 + this->mbr_0x10) = uVar4;
            iVar5 = cls_0x43c310::meth_0x43c3c0
                              ((cls_0x43c310 *)this->mbr_0x0,iVar1 + 0x14 + this->mbr_0x10,0x100);
            if (iVar5 == 0) {
              if ((int *)this->mbr_0x0 != (int *)0x0) {
                (**(code **)(*(int *)this->mbr_0x0 + 0x1c))(1);
                this->mbr_0x0 = 0;
              }
              if ((void *)this->mbr_0x10 != (void *)0x0) {
                _free((void *)this->mbr_0x10);
                this->mbr_0x10 = 0;
              }
              return 0;
            }
            uVar2 = uVar2 + 1;
            iVar1 = iVar1 + 0x114;
          } while (uVar2 < this->mbr_0x8);
        }
        return 1;
      }
      if ((int *)this->mbr_0x0 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*(int *)this->mbr_0x0 + 0x1c))(1);
      this->mbr_0x0 = 0;
      return 0;
    }
    this_00 = (cls_0x43c310 *)this->mbr_0x0;
  }
  if (this_00 == (cls_0x43c310 *)0x0) {
    return 0;
  }
  (**(code **)(this_00->mbr_0x0 + 0x1c))(1);
  this->mbr_0x0 = 0;
  return 0;
}


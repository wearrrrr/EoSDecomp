
undefined4 __thiscall OOAnalyzer::cls_0x43c770::meth_0x43ca90(cls_0x43c770 *this,LPCSTR param_1)

{
  int iVar1;
  cls_0x46cb9c *pcVar2;
  undefined4 uVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &__SE_handler_46934B;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = __sub_43C8D0(this);
  if (iVar1 != 0) {
    pcVar2 = (cls_0x46cb9c *)malloc(0x24);
    local_4 = 0;
    if (pcVar2 == (cls_0x46cb9c *)0x0) {
      pcVar2 = (cls_0x46cb9c *)0x0;
    }
    else {
      pcVar2 = cls_0x46cb9c::cls_0x46cb9c(pcVar2);
    }
    local_4 = 0xffffffff;
    this->mbr_0x0 = (dword)pcVar2;
    if (pcVar2 != (cls_0x46cb9c *)0x0) {
      iVar1 = cls_0x46cb9c::meth_0x43c4a0(pcVar2,param_1);
      if (iVar1 != 0) {
        uVar3 = meth_0x43c790(this);
        ExceptionList = local_c;
        return uVar3;
      }
      if ((int *)this->mbr_0x0 != (int *)0x0) {
        (**(code **)(*(int *)this->mbr_0x0 + 0x1c))(1);
        this->mbr_0x0 = 0;
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


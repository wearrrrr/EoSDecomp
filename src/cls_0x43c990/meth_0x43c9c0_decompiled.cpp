
void * __thiscall
OOAnalyzer::cls_0x43c990::meth_0x43c9c0(cls_0x43c990 *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  void *_Memory;
  size_t *unaff_EBX;
  int iVar2;
  size_t _Size;
  undefined4 *unaff_EDI;
  
  if ((int *)this->mbr_0x0 == (int *)0x0) {
    return (void *)0x0;
  }
  if (((param_3 < (int *)this->mbr_0x8) && (param_1 != 0)) && (param_2 != 0)) {
    iVar2 = (int)param_3 * 0x114;
    iVar1 = (**(code **)(*(int *)this->mbr_0x0 + 0xc))
                      (*(undefined4 *)(this->mbr_0x10 + 0xc + iVar2));
    if (iVar1 != 0) {
      if (param_3 == (int *)(this->mbr_0x8 - 1)) {
        _Size = this->mbr_0xc - *(int *)(this->mbr_0x10 + 0xc + iVar2);
      }
      else {
        _Size = *(int *)(this->mbr_0x10 + 0x120 + iVar2) - *(int *)(this->mbr_0x10 + 0xc + iVar2);
      }
      _Memory = _malloc(_Size);
      if (_Memory != (void *)0x0) {
        iVar1 = (**(code **)(*(int *)this->mbr_0x0 + 0x14))(_Memory,_Size);
        if (iVar1 != 0) {
          *unaff_EDI = *(undefined4 *)(this->mbr_0x10 + 0x10 + iVar2);
          *unaff_EBX = _Size;
          return _Memory;
        }
        _free(_Memory);
      }
    }
  }
  return (void *)0x0;
}


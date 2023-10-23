
uint __thiscall ___tolower_mt(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  BOOL unaff_EDI;
  LPCSTR _LpSrcStr;
  undefined4 local_8;
  
  uVar2 = param_2;
  uVar1 = param_1;
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x40 < (int)param_2) && ((int)param_2 < 0x5b)) {
      return param_2 + 0x20;
    }
  }
  else {
    _LpSrcStr = (LPCSTR)0x1;
    local_8 = this;
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        uVar3 = *(byte *)(*(int *)(param_1 + 0x48) + param_2 * 2) & 1;
      }
      else {
        uVar3 = ___isctype_mt(this,param_1,param_2,1);
      }
      if (uVar3 == 0) {
        return uVar2;
      }
    }
    if ((*(byte *)(*(int *)(uVar1 + 0x48) + 1 + ((int)uVar2 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar2) & 0xffff00ff;
    }
    else {
      uVar3 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar2,(char)(uVar2 >> 8));
      param_1 = CONCAT22((short)uVar3,(undefined2)param_1) & 0xff00ffff;
      _LpSrcStr = (LPCSTR)0x2;
    }
    iVar4 = ___crtLCMapStringA(*(_locale_t *)(uVar1 + 0x14),(LPCWSTR)&DAT_00000100,(DWORD)&param_1,
                               _LpSrcStr,(int)&local_8,(LPSTR)0x3,*(int *)(uVar1 + 4),1,unaff_EDI);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        return (uint)CONCAT11((undefined)local_8,local_8._1_1_);
      }
      return (uint)local_8 & 0xff;
    }
  }
  return uVar2;
}


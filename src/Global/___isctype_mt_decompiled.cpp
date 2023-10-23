
uint __thiscall ___isctype_mt(void *this,int param_1,int param_2,uint param_3)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  uint local_8;
  
  if (param_2 + 1U < 0x101) {
    param_2._2_2_ = *(ushort *)(*(int *)(param_1 + 0x48) + param_2 * 2);
  }
  else {
    if ((*(byte *)(*(int *)(param_1 + 0x48) + 1 + (param_2 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_2) & 0xffff00ff;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      local_8 = CONCAT31(CONCAT21((short)((uint)this >> 0x10),(char)param_2),
                         (char)((uint)param_2 >> 8)) & 0xff00ffff;
      _LpSrcStr = (LPCSTR)0x2;
    }
    BVar1 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_8,_LpSrcStr,(int)&param_2 + 2,
                       *(LPWORD *)(param_1 + 4),*(int *)(param_1 + 0x14),1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_2._2_2_ & param_3;
}


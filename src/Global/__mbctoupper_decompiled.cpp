
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Different Base Names
    __mbctolower
    __mbctoupper
   
   Library: Visual Studio 2003 Release */

uint __cdecl __mbctoupper(uint _Ch)

{
  _ptiddata p_Var1;
  pthreadmbcinfo ptVar2;
  int iVar3;
  BOOL unaff_EBX;
  undefined2 local_c;
  undefined4 local_8;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadmbcinfo)p_Var1->_tpxcptinfoptrs;
  if (ptVar2 != _DAT_006e6654) {
    ptVar2 = ___updatetmbcinfo();
  }
  if (_Ch < 0x100) {
    if ((ptVar2->mbctype[_Ch + 5] & 0x20) != 0) {
      _Ch = (uint)(char)ptVar2->mbcasemap[_Ch + 4];
    }
  }
  else if (((ptVar2->mbctype[(_Ch >> 8 & 0xff) + 5] & 4) != 0) &&
          (iVar3 = ___crtLCMapStringA(*(_locale_t *)ptVar2->mbulinfo,(LPCWSTR)&DAT_00000200,
                                      (DWORD)&local_8,(LPCSTR)0x2,(int)&local_c,(LPSTR)0x2,
                                      ptVar2->mbcodepage,1,unaff_EBX), iVar3 != 0)) {
    _Ch = (uint)CONCAT11((undefined)local_c,local_c._1_1_);
  }
  return _Ch;
}


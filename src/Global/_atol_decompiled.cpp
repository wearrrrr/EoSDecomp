
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Release */

long __cdecl _atol(char *_Str)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  int iVar4;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *this;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != _DAT_0047aa9c) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  while( true ) {
    if ((int)ptVar2->lc_category[1].refcount < 2) {
      this = ptVar2->lc_category[3].refcount;
      uVar3 = *(byte *)((int)this + (uint)(byte)*_Str * 2) & 8;
    }
    else {
      uVar3 = ___isctype_mt(this,(int)ptVar2,(uint)(byte)*_Str,8);
      this = extraout_ECX_01;
    }
    if (uVar3 == 0) break;
    _Str = (char *)((byte *)_Str + 1);
  }
  uVar3 = (uint)(byte)*_Str;
  pbVar7 = (byte *)_Str + 1;
  if ((uVar3 == 0x2d) || (uVar5 = uVar3, uVar3 == 0x2b)) {
    uVar5 = (uint)*pbVar7;
    pbVar7 = (byte *)_Str + 2;
  }
  iVar4 = 0;
  while( true ) {
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      iVar6 = -1;
    }
    else {
      iVar6 = uVar5 - 0x30;
    }
    if (iVar6 == -1) break;
    iVar4 = iVar6 + iVar4 * 10;
    uVar5 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if (uVar3 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}


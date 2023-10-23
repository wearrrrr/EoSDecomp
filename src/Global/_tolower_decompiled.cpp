
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 2003 Release */

int __cdecl _tolower(int _C)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  uint uVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  
  p_Var1 = __getptd();
  ptVar2 = (pthreadlocinfo)p_Var1->_tfpecode;
  this = extraout_ECX;
  if (ptVar2 != _DAT_0047aa9c) {
    ptVar2 = ___updatetlocinfo();
    this = extraout_ECX_00;
  }
  uVar3 = ___tolower_mt(this,(uint)ptVar2,_C);
  return uVar3;
}


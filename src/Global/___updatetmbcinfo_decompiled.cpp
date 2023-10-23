
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___updatetmbcinfo
   
   Library: Visual Studio 2003 Release */

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  _ptiddata p_Var1;
  pthreadmbcinfo _Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = (pthreadmbcinfo)p_Var1->_tpxcptinfoptrs;
  if (_Memory != _DAT_006e6654) {
    if ((_Memory != (pthreadmbcinfo)0x0) &&
       (_Memory->refcount = _Memory->refcount + -1, _Memory->refcount == 0)) {
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = _DAT_006e6654;
    _Memory = _DAT_006e6654;
    _DAT_006e6654->refcount = _DAT_006e6654->refcount + 1;
  }
  FUN_00466e30();
  return _Memory;
}


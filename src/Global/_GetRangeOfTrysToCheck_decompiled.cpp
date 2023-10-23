
/* Library Function - Single Match
    struct _s_TryBlockMapEntry const * __cdecl _GetRangeOfTrysToCheck(struct _s_FuncInfo const
   *,int,int,unsigned int *,unsigned int *)
   
   Library: Visual Studio 2003 Release */

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  TryBlockMapEntry *pTVar1;
  _s_FuncInfo *p_Var2;
  _s_FuncInfo *p_Var3;
  _s_FuncInfo *local_8;
  
  p_Var2 = param_1;
  local_8 = (_s_FuncInfo *)param_1->nTryBlocks;
  pTVar1 = param_1->pTryBlockMap;
  p_Var3 = local_8;
  param_1 = local_8;
  if (-1 < param_2) {
    do {
      if (p_Var3 == (_s_FuncInfo *)0xffffffff) {
        _inconsistency();
      }
      p_Var3 = (_s_FuncInfo *)((int)&p_Var3[-1].pIPToStateMap + 3);
      if (((pTVar1[(int)p_Var3].tryHigh < param_3) && (param_3 <= pTVar1[(int)p_Var3].catchHigh)) ||
         (p_Var3 == (_s_FuncInfo *)0xffffffff)) {
        param_2 = param_2 + -1;
        local_8 = param_1;
        param_1 = p_Var3;
      }
    } while (-1 < param_2);
  }
  p_Var3 = (_s_FuncInfo *)((int)&p_Var3->magicNumber_and_bbtFlags + 1);
  *param_4 = (uint)p_Var3;
  *param_5 = (uint)local_8;
  if (((_s_FuncInfo *)p_Var2->nTryBlocks <= local_8 && local_8 != (_s_FuncInfo *)p_Var2->nTryBlocks)
     || (local_8 < p_Var3)) {
    _inconsistency();
  }
  return pTVar1 + (int)p_Var3;
}


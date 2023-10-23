
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __cdecl BuildCatchObject(struct EHExceptionRecord *,void *,struct _s_HandlerType const
   *,struct _s_CatchableType const *)
   
   Library: Visual Studio 2003 Release */

void __cdecl
BuildCatchObject(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
                _s_CatchableType *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *pvVar3;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  byte *in_ECX;
  int *in_EDX;
  size_t _Size;
  
  if (*(int *)((int)param_2 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)((int)param_2 + 4) + 8) == '\0') {
    return;
  }
  if ((*(int *)((int)param_2 + 8) == 0) && ((*(byte *)((int)param_2 + 3) & 0x80) == 0)) {
    return;
  }
                    /* WARNING: Load size is inaccurate */
  if (-1 < (int)*param_2) {
    in_EDX = (int *)(*(int *)((int)param_2 + 8) + 0xc + (int)in_EDX);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  if ((*param_2 & 8) == 0) {
    if ((*in_ECX & 1) == 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        bVar1 = _ValidateRead(pvVar3,1);
        if ((CONCAT31(extraout_var_03,bVar1) != 0) &&
           (bVar1 = FID_conflict__ValidateRead(in_EDX,1), CONCAT31(extraout_var_04,bVar1) != 0)) {
          _Size = *(size_t *)(in_ECX + 0x14);
          pvVar3 = (void *)_AdjustPointer__YAPAXPAXABUPMD___Z((int *)(in_ECX + 8));
          _memcpy_0(in_EDX,pvVar3,_Size);
          return;
        }
      }
      else {
        bVar1 = _ValidateRead(pvVar3,1);
        if (((CONCAT31(extraout_var_05,bVar1) != 0) &&
            (bVar1 = FID_conflict__ValidateRead(in_EDX,1), CONCAT31(extraout_var_06,bVar1) != 0)) &&
           (iVar2 = _ValidateExecute(*(_func_int **)(in_ECX + 0x18)), iVar2 != 0)) {
          if ((*in_ECX & 4) != 0) {
            _AdjustPointer__YAPAXPAXABUPMD___Z((int *)(in_ECX + 8));
            __CallMemberFunction0__YGXPAX0_Z(in_EDX,*(undefined **)(in_ECX + 0x18));
            return;
          }
          _AdjustPointer__YAPAXPAXABUPMD___Z((int *)(in_ECX + 8));
          __CallMemberFunction0__YGXPAX0_Z(in_EDX,*(undefined **)(in_ECX + 0x18));
          return;
        }
      }
    }
    else {
      bVar1 = _ValidateRead(pvVar3,1);
      if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
         (bVar1 = FID_conflict__ValidateRead(in_EDX,1), CONCAT31(extraout_var_02,bVar1) != 0)) {
        _memcpy_0(in_EDX,*(void **)(param_1 + 0x18),*(size_t *)(in_ECX + 0x14));
        if (*(int *)(in_ECX + 0x14) != 4) {
          return;
        }
        if (*in_EDX == 0) {
          return;
        }
        goto LAB_00461cb4;
      }
    }
  }
  else {
    bVar1 = _ValidateRead(pvVar3,1);
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       (bVar1 = FID_conflict__ValidateRead(in_EDX,1), CONCAT31(extraout_var_00,bVar1) != 0)) {
      *in_EDX = *(int *)(param_1 + 0x18);
LAB_00461cb4:
      iVar2 = _AdjustPointer__YAPAXPAXABUPMD___Z((int *)(in_ECX + 8));
      *in_EDX = iVar2;
      return;
    }
  }
  _inconsistency();
  return;
}


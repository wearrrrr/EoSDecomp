
/* Library Function - Single Match
    void __cdecl CatchIt(struct EHExceptionRecord *,struct EHRegistrationNode *,struct _CONTEXT
   *,void *,struct _s_FuncInfo const *,struct _s_HandlerType const *,struct _s_CatchableType const
   *,struct _s_TryBlockMapEntry const *,int,struct EHRegistrationNode *,unsigned char)
   
   Library: Visual Studio 2003 Release */

void __cdecl
CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  int in_ECX;
  void *unaff_EBX;
  _s_HandlerType *unaff_EBP;
  _s_HandlerType *unaff_ESI;
  int *unaff_EDI;
  _s_CatchableType *unaff_retaddr;
  
  if (in_ECX != 0) {
    BuildCatchObject(param_1,unaff_EBX,unaff_EBP,unaff_retaddr);
  }
  if (param_6 == (_s_HandlerType *)0x0) {
    param_6 = unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_6,param_1);
  ___FrameUnwindToState((int)unaff_ESI,param_3,(int)param_4,*unaff_EDI);
  unaff_ESI->dispCatchObj = unaff_EDI[1] + 1;
  pvVar1 = (void *)_CallCatchBlock__YAPAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PBU_s_FuncInfo__PAXHK_Z
                             (*(void **)((int)unaff_EBX + 0xc),param_1,(int)unaff_ESI,param_2,
                              param_4,(int)param_5,0x100);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,(EHRegistrationNode *)unaff_ESI);
  }
  return;
}


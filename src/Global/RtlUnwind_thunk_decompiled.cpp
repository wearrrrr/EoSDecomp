
void RtlUnwind_thunk(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,
                    PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x004690fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


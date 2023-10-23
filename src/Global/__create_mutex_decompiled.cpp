
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __create_mutex(void)

{
  int result;
  DWORD lastError;
  
  ___mutex_6C6C00 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,"Touhou Koumakyou App");
  if (___mutex_6C6C00 == (HANDLE)0x0) {
    result = -1;
  }
  else {
    lastError = GetLastError();
    if (lastError == ERROR_ALREADY_EXISTS) {
      LogBuffer::write_error(&LogBuffer,"“ñ‚Â‚Í‹N“®‚Å‚«‚Ü‚¹‚ñ\n");
      result = -1;
    }
    else {
      result = 0;
    }
  }
  return result;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ___security_init_cookie(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  DVar1 = GetCurrentProcessId();
  DVar2 = GetCurrentThreadId();
  DVar3 = GetTickCount();
  QueryPerformanceCounter(&local_14);
  _DAT_0047a630 =
       local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
       local_14.u.HighPart ^ local_14.u.LowPart;
  if (_DAT_0047a630 == 0) {
    _DAT_0047a630 = 0xbb40e64e;
  }
  return;
}


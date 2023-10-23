
char * __cdecl __strdate(char *param_1)

{
  _SYSTEMTIME local_18;
  
  GetLocalTime(&local_18);
  param_1[8] = '\0';
  param_1[5] = '/';
  param_1[2] = '/';
  *param_1 = (char)((ulonglong)local_18.wMonth / 10) + '0';
  param_1[1] = (char)((ulonglong)local_18.wMonth % 10) + '0';
  param_1[3] = (char)((ulonglong)local_18.wDay / 10) + '0';
  param_1[4] = (char)((ulonglong)local_18.wDay % 10) + '0';
  param_1[6] = (char)(((uint)local_18.wYear % 100) / 10) + '0';
  param_1[7] = (char)(((uint)local_18.wYear % 100) % 10) + '0';
  return param_1;
}


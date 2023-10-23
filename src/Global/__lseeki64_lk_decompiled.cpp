
/* Library Function - Single Match
    __lseeki64_lk
   
   Library: Visual Studio 2003 Release */

undefined8 __cdecl __lseeki64_lk(uint param_1,LONG param_2,long param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  DWORD DVar4;
  long local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = __errno();
    *piVar2 = 9;
LAB_004679b3:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        __dosmaperr(DVar3);
        goto LAB_004679b3;
      }
    }
    pbVar1 = (byte *)(*(int *)(&DAT_006e68a0 + ((int)param_1 >> 5) * 4) + 4 +
                     (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}


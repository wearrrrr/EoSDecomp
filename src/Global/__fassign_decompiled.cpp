
/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    __atodbl((_CRT_DOUBLE *)&local_c,(byte *)number);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  __atoflt((_CRT_DOUBLE *)&flag,(byte *)number);
  *(int *)argument = flag;
  return;
}


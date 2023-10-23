
undefined4 __cdecl _sprintf(char *base,byte *param_2)

{
  undefined4 result;
  FILE file;
  
  file._cnt = 0x7fffffff;
  file._flag = 0x42;
  file._base = base;
  file._ptr = base;
  result = __output(&file,param_2,(int **)&stack0x0000000c);
  if (base != (char *)0x0) {
    file._cnt = file._cnt + -1;
    if (file._cnt < 0) {
      __flsbuf(0,&file);
    }
    else {
      *file._ptr = '\0';
    }
  }
  return result;
}


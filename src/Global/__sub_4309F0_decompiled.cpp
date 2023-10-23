
char * __cdecl __sub_4309F0(char *first_str,char *second_str,int *param_3,int param_4)

{
  int compare;
  
  while( true ) {
    if (param_4 == 0) {
      return (char *)0x0;
    }
    *param_3 = *(int *)(first_str + 4);
    compare = _strncmp(first_str,second_str,4);
    if (compare == 0) break;
    param_4 = param_4 - (*param_3 + 8);
    first_str = first_str + *param_3 + 8;
  }
  return first_str + 8;
}


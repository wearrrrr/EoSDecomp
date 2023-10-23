
void __cdecl _fopen(char *filename,char *mode)

{
                    /* FILENAME, MODE, SHFLAG
                       Always opens with 0x40, indicating O_BINARY mode */
  __fsopen(filename,mode,0x40);
  return;
}


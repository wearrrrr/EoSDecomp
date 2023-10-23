
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl __read_file_to_buffer(char *filename,int is_not_in_dat)

{
  char *searchFileName;
  char *buffer;
  FILE *file;
  size_t fileSize;
  int *local_10;
  char *local_c;
  int local_8;
  
  local_10 = (int *)0xffffffff;
                    /* Normalize path name, check if it's "/" or "\" */
  if (is_not_in_dat == 0) {
    searchFileName = _strrchr(filename,L'\\');
    if (searchFileName == (char *)0x0) {
      local_c = filename;
    }
    else {
      local_c = searchFileName + 1;
    }
    searchFileName = _strrchr(local_c,L'/');
    if (searchFileName == (char *)0x0) {
      local_c = filename;
    }
    else {
      local_c = searchFileName + 1;
    }
    if (___dword_69D900 != 0) {
      local_8 = 0;
      while ((local_8 < 0x10 &&
             ((*(int *)(___dword_69D900 + local_8 * 4) == 0 ||
              (local_10 = (int *)__sub_43C920(*(void **)(___dword_69D900 + local_8 * 4),
                                              (byte *)local_c), (int)local_10 < 0))))) {
        local_8 = local_8 + 1;
      }
    }
    if ((int)local_10 < 0) {
      return (char *)0x0;
    }
  }
  if ((int)local_10 < 0) {
    __stub_3();
    file = (FILE *)_fopen(filename,"rb");
    if (file == (FILE *)0x0) {
      __stub_3();
      buffer = (char *)0x0;
    }
    else {
      _fseek(file,0,2);
      fileSize = _ftell(file);
      ___current_filesize = fileSize;
      _fseek(file,0,0);
      buffer = (char *)_malloc(fileSize);
      _fread(buffer,1,fileSize,file);
      _fclose(file);
    }
  }
  else {
    __stub_3();
    buffer = (char *)OOAnalyzer::cls_0x43c990::meth_0x43cb40
                               (*(cls_0x43c990 **)(___dword_69D900 + local_8 * 4),local_10);
    ___current_filesize =
         OOAnalyzer::cls_0x43c990::meth_0x43c990
                   (*(cls_0x43c990 **)(___dword_69D900 + local_8 * 4),(uint)local_10);
  }
  return buffer;
}


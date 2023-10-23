
int __cdecl __CATK_related_1(FILE *file,ScorefileCatk *catk)

{
  int result;
  int j;
  int *piVar1;
  ScorefileCatk *scorefile_catk;
  int i;
  int *local_8;
  
  if (catk == (ScorefileCatk *)0x0) {
    result = -1;
  }
  else {
    local_8 = (int *)(file->_base + (int)&file->_ptr);
    for (i = file->_file - (int)file->_base; 0 < i; i = i - (uint)*(ushort *)piVar1) {
      if ((*local_8 == 0x4b544143) && (*(char *)(local_8 + 2) == '\x10')) {
        if (0x3f < *(ushort *)(local_8 + 4)) break;
        piVar1 = local_8;
        scorefile_catk = catk + *(ushort *)(local_8 + 4);
        for (j = 0x10; j != 0; j = j + -1) {
          *(int *)scorefile_catk->magic__CATK = *piVar1;
          piVar1 = piVar1 + 1;
          scorefile_catk = (ScorefileCatk *)&scorefile_catk->size_1;
        }
      }
      piVar1 = local_8 + 1;
      local_8 = (int *)((int)local_8 + (uint)*(ushort *)(local_8 + 1));
    }
    result = 0;
  }
  return result;
}


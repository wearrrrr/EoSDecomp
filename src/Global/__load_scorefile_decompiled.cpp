
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl __load_scorefile(char *filename)

{
  char *pcVar1;
  void *pvVar2;
  int local_24;
  int *local_20;
  int i;
  char *local_18;
  short local_14;
  byte local_d;
  int local_c;
  char *bytesAllocated;
  
  bytesAllocated = __read_file_to_buffer(filename,1);
  if (bytesAllocated != (char *)0x0) {
    if (___current_filesize < 0x14) {
      _free(bytesAllocated);
    }
    else {
      local_14 = 0;
      local_d = 0;
      local_c = 0;
      pcVar1 = bytesAllocated;
      for (i = ___current_filesize - 2; local_18 = pcVar1 + 1, 0 < i; i = i + -1) {
        local_d = (byte)((int)((byte)(local_d + *local_18) & 0xe0) >> 5) |
                  (byte)(((byte)(local_d + *local_18) & 0x1f) << 3);
        pcVar1[2] = pcVar1[2] ^ local_d;
        if (1 < local_c) {
          local_14 = local_14 + (ushort)(byte)pcVar1[2];
        }
        local_c = local_c + 1;
        pcVar1 = local_18;
      }
      if (*(short *)(bytesAllocated + 2) == local_14) {
        local_20 = (int *)(bytesAllocated + *(int *)(bytesAllocated + 8));
        local_24 = *(int *)(bytesAllocated + 0x10) - *(int *)(bytesAllocated + 8);
        while ((0 < local_24 && (*local_20 != 0x4b364854))) {
          local_20 = (int *)((int)local_20 + (uint)*(ushort *)(local_20 + 1));
          local_24 = local_24 - (uint)*(ushort *)(local_20 + 1);
        }
        if (0 < local_24) goto LAB_0042b248;
        _free(bytesAllocated);
      }
      else {
        _free(bytesAllocated);
      }
    }
  }
  bytesAllocated = (char *)_malloc(0x14);
  *(undefined4 *)(bytesAllocated + 8) = 0x14;
  *(undefined4 *)(bytesAllocated + 0x10) = 0x14;
LAB_0042b248:
  pvVar2 = _malloc(0xc);
  *(void **)(bytesAllocated + 0xc) = pvVar2;
  *(undefined4 *)(*(int *)(bytesAllocated + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)(bytesAllocated + 0xc) + 8) = 0;
  **(undefined4 **)(bytesAllocated + 0xc) = 0;
  return bytesAllocated;
}


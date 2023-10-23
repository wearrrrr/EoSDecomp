
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Release */

int __cdecl __isatty(int _FileHandle)

{
  if (___uNumber_1 <= (uint)_FileHandle) {
    return 0;
  }
  return (int)*(char *)(*(int *)(&DAT_006e68a0 + (_FileHandle >> 5) * 4) + 4 +
                       (_FileHandle & 0x1fU) * 0x24) & 0x40;
}


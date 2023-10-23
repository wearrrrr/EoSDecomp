
void __cdecl __unlock(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_0047a740 + param_1 * 8));
  return;
}


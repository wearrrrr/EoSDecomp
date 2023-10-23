
long __fastcall Ending::__sub_40F4D0(Ending *ending)

{
  long lVar1;
  
  lVar1 = _atoi(*(char **)(ending->field1_0x4 + 0x1168));
  while (**(char **)(ending->field1_0x4 + 0x1168) != '\0') {
    *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
  }
  while (**(char **)(ending->field1_0x4 + 0x1168) == '\0') {
    *(int *)(ending->field1_0x4 + 0x1168) = *(int *)(ending->field1_0x4 + 0x1168) + 1;
  }
  return lVar1;
}


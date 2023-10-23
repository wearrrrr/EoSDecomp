
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ___updatetlocinfo_lk(void)

{
  int *piVar1;
  int *piVar2;
  _ptiddata p_Var3;
  
  p_Var3 = __getptd();
  piVar1 = (int *)p_Var3->_tfpecode;
  if (piVar1 != _DAT_0047aa9c) {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xb];
      *piVar1 = *piVar1 + -1;
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xd];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0xc];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      piVar2 = (int *)piVar1[0x10];
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar2 + -1;
      }
      *(int *)(piVar1[0x13] + 0xb4) = *(int *)(piVar1[0x13] + 0xb4) + -1;
    }
    p_Var3->_tfpecode = (int)_DAT_0047aa9c;
    *_DAT_0047aa9c = *_DAT_0047aa9c + 1;
    piVar2 = (int *)_DAT_0047aa9c[0xb];
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = (int *)_DAT_0047aa9c[0xd];
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = (int *)_DAT_0047aa9c[0xc];
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    piVar2 = (int *)_DAT_0047aa9c[0x10];
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
    *(int *)(_DAT_0047aa9c[0x13] + 0xb4) = *(int *)(_DAT_0047aa9c[0x13] + 0xb4) + 1;
    if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != (int *)&DAT_0047aa48)) {
      ___freetlocinfo(piVar1);
    }
  }
  return p_Var3->_tfpecode;
}



/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  code **ppcVar4;
  code *pcVar5;
  void *local_30;
  void *local_2c;
  _ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    ppcVar4 = (code **)&DAT_006e6568;
    pcVar5 = _DAT_006e6568;
LAB_00468805:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        ppcVar4 = (code **)&DAT_006e6574;
        pcVar5 = _DAT_006e6574;
      }
      else if (_SigNum == 0x15) {
        ppcVar4 = (code **)&DAT_006e656c;
        pcVar5 = _DAT_006e656c;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        ppcVar4 = (code **)&DAT_006e6570;
        pcVar5 = _DAT_006e6570;
      }
      goto LAB_00468805;
    }
    local_28 = __getptd();
    uVar2 = _siglookup(extraout_ECX,(uint)local_28->_initaddr);
    ppcVar4 = (code **)(uVar2 + 8);
    pcVar5 = *ppcVar4;
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_2c = local_28->_initarg;
    local_28->_initarg = (void *)0x0;
    if (_SigNum == 8) {
      local_30 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_00468864;
    }
  }
  else {
LAB_00468864:
    iVar3 = _DAT_0047b220;
    if (_SigNum == 8) {
      for (; iVar3 < _DAT_0047b224 + _DAT_0047b220; iVar3 = iVar3 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar3 * 0xc + 8) = 0;
      }
      goto LAB_00468892;
    }
  }
  *ppcVar4 = (code *)0x0;
LAB_00468892:
  FUN_004688b3(0);
  if (_SigNum == 8) {
    (*pcVar5)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar5)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_2c;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_30;
  }
  return 0;
}


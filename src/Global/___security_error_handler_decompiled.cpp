
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ___security_error_handler(int param_1)

{
  DWORD DVar1;
  size_t sVar2;
  char *_Dest;
  char *_Source;
  uint unaff_retaddr;
  CHAR local_12c [260];
  undefined local_28;
  char *local_24;
  uint local_20;
  undefined *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004702f0;
  uStack_c = 0x45f2ef;
  local_20 = _DAT_0047a630 ^ unaff_retaddr;
  if (_DAT_006e6244 == (code *)0x0) {
    if (param_1 == 1) {
      _Source = "Buffer overrun detected!";
      local_24 = 
      "A buffer overrun has been detected which has corrupted the program\'s\ninternal state.  The program cannot safely continue execution and must\nnow be terminated.\n"
      ;
    }
    else {
      _Source = "Unknown security failure detected!";
      local_24 = 
      "A security error of unknown cause has been detected which has\ncorrupted the program\'s internal state.  The program cannot safely\ncontinue execution and must now be terminated.\n"
      ;
    }
    local_28 = 0;
    DVar1 = GetModuleFileNameA((HMODULE)0x0,local_12c,0x104);
    if (DVar1 == 0) {
      _strcpy(local_12c,"<program name unknown>");
    }
    _Dest = local_12c;
    sVar2 = _strlen(local_12c);
    if (0x3c < sVar2 + 0xb) {
      sVar2 = _strlen(local_12c);
      _Dest = &stack0xfffffea3 + sVar2;
      _strncpy(_Dest,"...",3);
    }
    _strlen(_Dest);
    local_1c = &stack0xfffffec8;
    _strcpy(&stack0xfffffec8,_Source);
    _strcat(&stack0xfffffec8,"\n\n");
    _strcat(&stack0xfffffec8,"Program: ");
    _strcat(&stack0xfffffec8,_Dest);
    _strcat(&stack0xfffffec8,"\n\n");
    _strcat(&stack0xfffffec8,local_24);
    ___crtMessageBoxA(&stack0xfffffec8,"Microsoft Visual C++ Runtime Library",0x12010);
  }
  else {
    local_8 = (undefined *)0x0;
    (*_DAT_006e6244)();
    local_8 = (undefined *)0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __exit(3);
}


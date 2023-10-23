
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 2003 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  LPWORD pWVar7;
  LCID Locale;
  undefined *puVar8;
  void *_Memory;
  LPWORD pWVar9;
  undefined4 uStackY_58;
  int local_28;
  BOOL local_24;
  WORD local_20 [2];
  undefined *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00474888;
  uStack_c = 0x466589;
  _Memory = (void *)0x0;
  if (_f_use == 0) {
    BVar2 = GetStringTypeW(1,(LPCWSTR)&__0f,1,local_20);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x78) {
        _f_use = 2;
      }
    }
    else {
      _f_use = 1;
    }
  }
  if ((_f_use == 2) || (_f_use == 0)) {
    Locale = _Code_page;
    if (_Code_page == 0) {
      Locale = _DAT_006e6520;
    }
    pWVar9 = _LpCharType;
    if (_LpCharType == (LPWORD)0x0) {
      pWVar9 = _DAT_006e6530;
    }
    pWVar7 = (LPWORD)___ansicp(Locale);
    if (pWVar7 != (LPWORD)0xffffffff) {
      if (pWVar7 != pWVar9) {
        uStackY_58 = 0x466700;
        _Memory = (void *)___convertcp((UINT)pWVar9,(UINT)pWVar7,(char *)_DWInfoType,
                                       (size_t *)&_LpSrcStr,(LPSTR)0x0,0);
        _DWInfoType = (DWORD)_Memory;
        if (_Memory == (void *)0x0) {
          return 0;
        }
      }
      BVar2 = GetStringTypeA(Locale,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                             (LPWORD)_CchSrc);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
        return BVar2;
      }
      return BVar2;
    }
  }
  else if (_f_use == 1) {
    local_24 = 0;
    local_28 = 0;
    if (_LpCharType == (LPWORD)0x0) {
      _LpCharType = _DAT_006e6530;
    }
    uStackY_58 = 0x46661b;
    iVar4 = MultiByteToWideChar((UINT)_LpCharType,(uint)(_BError != 0) * 8 + 1,(LPCSTR)_DWInfoType,
                                (int)_LpSrcStr,(LPWSTR)0x0,0);
    if (iVar4 != 0) {
      local_8 = (undefined *)0x0;
      puVar5 = (undefined *)(iVar4 * 2 + 3U & 0xfffffffc);
      iVar1 = -(int)puVar5;
      puVar6 = &stack0xffffffc4 + iVar1;
      local_1c = &stack0xffffffc4 + iVar1;
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar4 * 2;
      *(undefined4 *)(&stack0xffffffbc + iVar1) = 0;
      *(undefined **)(&stack0xffffffb8 + iVar1) = &stack0xffffffc4 + iVar1;
      *(undefined4 *)(&stack0xffffffb4 + iVar1) = 0x46664d;
      _memset(*(void **)(&stack0xffffffb8 + iVar1),*(int *)(&stack0xffffffbc + iVar1),
              *(size_t *)((int)local_20 + iVar1 + -0x20));
      local_8 = (undefined *)0xffffffff;
      if (&stack0xffffffc4 == puVar5) {
        *(int *)((int)local_20 + iVar1 + -0x20) = iVar4;
        *(undefined4 *)(&stack0xffffffbc + iVar1) = 2;
        *(undefined4 *)(&stack0xffffffb8 + iVar1) = 0x466677;
        puVar6 = (undefined *)
                 _calloc(*(size_t *)(&stack0xffffffbc + iVar1),
                         *(size_t *)((int)local_20 + iVar1 + -0x20));
        if (puVar6 == (undefined *)0x0) {
          return 0;
        }
        local_28 = 1;
      }
      *(int *)((int)local_20 + iVar1 + -0x20) = iVar4;
      *(undefined **)(&stack0xffffffbc + iVar1) = puVar6;
      *(LPCSTR *)(&stack0xffffffb8 + iVar1) = _LpSrcStr;
      *(DWORD *)(&stack0xffffffb4 + iVar1) = _DWInfoType;
      *(undefined4 *)(&stack0xffffffb0 + iVar1) = 1;
      *(LPWORD *)(&stack0xffffffac + iVar1) = _LpCharType;
      puVar8 = (undefined *)((int)&uStackY_58 + iVar1);
      *(undefined4 *)((int)&uStackY_58 + iVar1) = 0x466699;
      iVar4 = MultiByteToWideChar(*(UINT *)(&stack0xffffffac + iVar1),
                                  *(DWORD *)(&stack0xffffffb0 + iVar1),
                                  *(LPCSTR *)(&stack0xffffffb4 + iVar1),
                                  *(int *)(&stack0xffffffb8 + iVar1),
                                  *(LPWSTR *)(&stack0xffffffbc + iVar1),
                                  *(int *)((int)local_20 + iVar1 + -0x20));
      puVar5 = puVar8;
      if (iVar4 != 0) {
        *(int *)(puVar8 + -4) = _CchSrc;
        *(int *)(puVar8 + -8) = iVar4;
        *(undefined **)(puVar8 + -0xc) = puVar6;
        *(_locale_t *)(puVar8 + -0x10) = _Plocinfo;
        puVar5 = puVar8 + -0x14;
        *(undefined4 *)(puVar8 + -0x14) = 0x4666ab;
        local_24 = GetStringTypeW(*(DWORD *)(puVar8 + -0x10),*(LPCWSTR *)(puVar8 + -0xc),
                                  *(int *)(puVar8 + -8),*(LPWORD *)(puVar8 + -4));
      }
      if (local_28 != 0) {
        *(undefined **)(puVar5 + -4) = puVar6;
        *(undefined4 *)(puVar5 + -8) = 0x4666ba;
        _free(*(void **)(puVar5 + -4));
        return local_24;
      }
      return local_24;
    }
  }
  return 0;
}


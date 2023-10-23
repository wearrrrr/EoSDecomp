
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2003 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  int iVar1;
  DWORD DVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  LPCSTR pCVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined4 uStackY_74;
  uint local_4c;
  size_t local_44;
  UINT local_40;
  int local_3c;
  LPCSTR local_38;
  undefined *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined *local_1c;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00474a10;
  uStack_c = 0x4679e8;
  if (_DAT_006e6564 == 0) {
    uStackY_74 = 0x467a09;
    iVar1 = LCMapStringW(0,0x100,(LPCWSTR)&__0f,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == ERROR_CALL_NOT_IMPLEMENTED) {
        _DAT_006e6564 = 2;
      }
    }
    else {
      _DAT_006e6564 = 1;
    }
  }
  pcVar11 = (char *)_DwMapFlag;
  pCVar6 = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    do {
      pCVar6 = pCVar6 + -1;
      if (*pcVar11 == '\0') goto LAB_00467a42;
      pcVar11 = pcVar11 + 1;
    } while (pCVar6 != (LPCSTR)0x0);
    pCVar6 = (LPCSTR)0xffffffff;
LAB_00467a42:
    _LpSrcStr = _LpSrcStr + (-1 - (int)pCVar6);
  }
  if ((_DAT_006e6564 != 2) && (_DAT_006e6564 != 0)) {
    if (_DAT_006e6564 == 1) {
      iVar1 = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0;
      if (_CchDest == 0) {
        _CchDest = _DAT_006e6530;
      }
      uStackY_74 = 0x467aa2;
      iVar3 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                                  (int)_LpSrcStr,(LPWSTR)0x0,0);
      local_2c = iVar3;
      if (iVar3 != 0) {
        puVar4 = (undefined *)(iVar3 * 2 + 3U & 0xfffffffc);
        iVar5 = -(int)puVar4;
        local_1c = &stack0xffffffa8 + iVar5;
        local_30 = &stack0xffffffa8 + iVar5;
        local_8 = (undefined *)0xffffffff;
        if (&stack0xffffffa8 == puVar4) {
          *(int *)(&stack0xffffffa4 + iVar5) = iVar3 * 2;
          *(undefined4 *)(&stack0xffffffa0 + iVar5) = 0x467afb;
          local_30 = (undefined *)_malloc(*(size_t *)(&stack0xffffffa4 + iVar5));
          if (local_30 == (undefined *)0x0) {
            return 0;
          }
          local_24 = 1;
        }
        *(int *)(&stack0xffffffa4 + iVar5) = iVar3;
        *(undefined **)(&stack0xffffffa0 + iVar5) = local_30;
        *(LPCSTR *)(&stack0xffffff9c + iVar5) = _LpSrcStr;
        *(DWORD *)(&stack0xffffff98 + iVar5) = _DwMapFlag;
        *(undefined4 *)(&stack0xffffff94 + iVar5) = 1;
        *(int *)(&stack0xffffff90 + iVar5) = _CchDest;
        puVar7 = (undefined *)((int)&uStackY_74 + iVar5);
        *(undefined4 *)((int)&uStackY_74 + iVar5) = 0x467b23;
        iVar5 = MultiByteToWideChar(*(UINT *)(&stack0xffffff90 + iVar5),
                                    *(DWORD *)(&stack0xffffff94 + iVar5),
                                    *(LPCSTR *)(&stack0xffffff98 + iVar5),
                                    *(int *)(&stack0xffffff9c + iVar5),
                                    *(LPWSTR *)(&stack0xffffffa0 + iVar5),
                                    *(int *)(&stack0xffffffa4 + iVar5));
        puVar4 = puVar7;
        if (iVar5 != 0) {
          *(undefined4 *)(puVar7 + -4) = 0;
          *(undefined4 *)(puVar7 + -8) = 0;
          *(int *)(puVar7 + -0xc) = iVar3;
          *(undefined **)(puVar7 + -0x10) = local_30;
          *(LPCWSTR *)(puVar7 + -0x14) = _LocaleName;
          *(_locale_t *)(puVar7 + -0x18) = _Plocinfo;
          puVar8 = puVar7 + -0x1c;
          *(undefined4 *)(puVar7 + -0x1c) = 0x467b3d;
          iVar1 = LCMapStringW(*(LCID *)(puVar7 + -0x18),*(DWORD *)(puVar7 + -0x14),
                               *(LPCWSTR *)(puVar7 + -0x10),*(int *)(puVar7 + -0xc),
                               *(LPWSTR *)(puVar7 + -8),*(int *)(puVar7 + -4));
          local_20 = iVar1;
          puVar4 = puVar8;
          if (iVar1 != 0) {
            if (((uint)_LocaleName & 0x400) == 0) {
              puVar4 = (undefined *)(iVar1 * 2 + 3U & 0xfffffffc);
              *(undefined4 *)(puVar8 + -4) = 0x467b92;
              iVar5 = -(int)puVar4;
              local_1c = puVar8 + iVar5;
              local_34 = puVar8 + iVar5;
              local_8 = (undefined *)0xffffffff;
              if (puVar8 == puVar4) {
                *(int *)(puVar8 + iVar5 + -4) = iVar1 * 2;
                *(undefined4 *)(puVar8 + iVar5 + -8) = 0x467bc9;
                local_34 = (undefined *)_malloc(*(size_t *)(puVar8 + iVar5 + -4));
                puVar4 = puVar8 + iVar5;
                if (local_34 == (undefined *)0x0) goto LAB_00467c11;
                local_28 = 1;
              }
              *(int *)(puVar8 + iVar5 + -4) = iVar1;
              *(undefined **)(puVar8 + iVar5 + -8) = local_34;
              *(int *)(puVar8 + iVar5 + -0xc) = iVar3;
              *(undefined **)(puVar8 + iVar5 + -0x10) = local_30;
              *(LPCWSTR *)(puVar8 + iVar5 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar8 + iVar5 + -0x18) = _Plocinfo;
              puVar10 = puVar8 + iVar5 + -0x1c;
              *(undefined4 *)(puVar8 + iVar5 + -0x1c) = 0x467bec;
              iVar3 = LCMapStringW(*(LCID *)(puVar8 + iVar5 + -0x18),
                                   *(DWORD *)(puVar8 + iVar5 + -0x14),
                                   *(LPCWSTR *)(puVar8 + iVar5 + -0x10),
                                   *(int *)(puVar8 + iVar5 + -0xc),*(LPWSTR *)(puVar8 + iVar5 + -8),
                                   *(int *)(puVar8 + iVar5 + -4));
              puVar4 = puVar10;
              if (iVar3 != 0) {
                *(undefined4 *)(puVar10 + -4) = 0;
                *(undefined4 *)(puVar10 + -8) = 0;
                if (_LpDestStr == (LPSTR)0x0) {
                  *(undefined4 *)(puVar10 + -0xc) = 0;
                  *(undefined4 *)(puVar10 + -0x10) = 0;
                }
                else {
                  *(LPSTR *)(puVar10 + -0xc) = _LpDestStr;
                  *(int *)(puVar10 + -0x10) = _CchSrc;
                }
                *(int *)(puVar10 + -0x14) = iVar1;
                *(undefined **)(puVar10 + -0x18) = local_34;
                *(undefined4 *)(puVar10 + -0x1c) = 0;
                *(int *)(puVar10 + -0x20) = _CchDest;
                puVar4 = puVar10 + -0x24;
                *(undefined4 *)(puVar10 + -0x24) = 0x467c0f;
                iVar1 = WideCharToMultiByte(*(UINT *)(puVar10 + -0x20),*(DWORD *)(puVar10 + -0x1c),
                                            *(LPCWSTR *)(puVar10 + -0x18),*(int *)(puVar10 + -0x14),
                                            *(LPSTR *)(puVar10 + -0x10),*(int *)(puVar10 + -0xc),
                                            *(LPCSTR *)(puVar10 + -8),*(LPBOOL *)(puVar10 + -4));
              }
            }
            else if ((_LpDestStr != (LPSTR)0x0) && (iVar1 <= (int)_LpDestStr)) {
              *(LPSTR *)(puVar8 + -4) = _LpDestStr;
              *(int *)(puVar8 + -8) = _CchSrc;
              *(int *)(puVar8 + -0xc) = iVar3;
              *(undefined **)(puVar8 + -0x10) = local_30;
              *(LPCWSTR *)(puVar8 + -0x14) = _LocaleName;
              *(_locale_t *)(puVar8 + -0x18) = _Plocinfo;
              puVar9 = puVar8 + -0x1c;
              *(undefined4 *)(puVar8 + -0x1c) = 0x467b78;
              LCMapStringW(*(LCID *)(puVar8 + -0x18),*(DWORD *)(puVar8 + -0x14),
                           *(LPCWSTR *)(puVar8 + -0x10),*(int *)(puVar8 + -0xc),
                           *(LPWSTR *)(puVar8 + -8),*(int *)(puVar8 + -4));
              puVar4 = puVar9;
            }
          }
        }
LAB_00467c11:
        if (local_28 != 0) {
          *(undefined **)(puVar4 + -4) = local_34;
          *(undefined4 *)(puVar4 + -8) = 0x467c1e;
          _free(*(void **)(puVar4 + -4));
        }
        if (local_24 != 0) {
          *(undefined **)(puVar4 + -4) = local_30;
          *(undefined4 *)(puVar4 + -8) = 0x467c2c;
          _free(*(void **)(puVar4 + -4));
          return iVar1;
        }
        return iVar1;
      }
    }
    return 0;
  }
  local_38 = (LPCSTR)0x0;
  pcVar11 = (char *)0x0;
  local_3c = 0;
  if (_Plocinfo == (_locale_t)0x0) {
    _Plocinfo = _DAT_006e6520;
  }
  if (_CchDest == 0) {
    _CchDest = _DAT_006e6530;
  }
  local_40 = ___ansicp((LCID)_Plocinfo);
  if (local_40 == 0xffffffff) {
    return 0;
  }
  if (local_40 == _CchDest) {
    uStackY_74 = 0x467d7d;
    local_4c = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,(LPCSTR)_DwMapFlag,(int)_LpSrcStr,
                            (LPSTR)_CchSrc,(int)_LpDestStr);
    goto LAB_00467d7f;
  }
  uStackY_74 = 0x467c89;
  local_38 = (LPCSTR)___convertcp(_CchDest,local_40,(char *)_DwMapFlag,(size_t *)&_LpSrcStr,
                                  (LPSTR)0x0,0);
  if (local_38 == (LPCSTR)0x0) {
    return 0;
  }
  uStackY_74 = 0x467ca5;
  local_44 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_38,(int)_LpSrcStr,(LPSTR)0x0,0);
  if (local_44 != 0) {
    local_8 = (undefined *)0x0;
    local_1c = &stack0xffffffa8;
    pcVar11 = &stack0xffffffa8;
    _memset(&stack0xffffffa8,0,local_44);
    local_8 = (undefined *)0xffffffff;
    if (&stack0x00000000 == (undefined *)0x58) {
      pcVar11 = (char *)_malloc(local_44);
      if (pcVar11 != (char *)0x0) {
        _memset(pcVar11,0,local_44);
        local_3c = 1;
        goto LAB_00467d10;
      }
    }
    else {
LAB_00467d10:
      uStackY_74 = 0x467d26;
      local_44 = LCMapStringA((LCID)_Plocinfo,(DWORD)_LocaleName,local_38,(int)_LpSrcStr,pcVar11,
                              local_44);
      if (local_44 != 0) {
        uStackY_74 = 0x467d47;
        iVar1 = ___convertcp(local_40,_CchDest,pcVar11,&local_44,(LPSTR)_CchSrc,(int)_LpDestStr);
        local_4c = (uint)(iVar1 != 0);
        goto LAB_00467d57;
      }
    }
    local_4c = 0;
  }
LAB_00467d57:
  if (local_3c != 0) {
    _free(pcVar11);
  }
LAB_00467d7f:
  if (local_38 != (LPCSTR)0x0) {
    _free(local_38);
    return local_4c;
  }
  return local_4c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __setmbcp_lk(UINT param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  int iVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint unaff_retaddr;
  CPINFO local_20;
  uint local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  if (param_1 != 0) {
    iVar8 = 0;
    uVar4 = 0;
LAB_00466e5e:
    if (*(UINT *)(&DAT_0047b3f8 + uVar4) != param_1) goto code_r0x00466e66;
    puVar11 = (undefined4 *)&DAT_006e6660;
    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_c = 0;
    *(undefined *)puVar11 = 0;
    pbVar9 = &DAT_0047b408 + iVar8 * 0x30;
    do {
      bVar3 = *pbVar9;
      pbVar10 = pbVar9;
      while ((bVar3 != 0 && (bVar2 = pbVar10[1], bVar2 != 0))) {
        uVar4 = (uint)bVar3;
        if (uVar4 <= bVar2) {
          bVar3 = (&DAT_0047b3f0)[local_c];
          do {
            (&DAT_006e6661)[uVar4] = (&DAT_006e6661)[uVar4] | bVar3;
            uVar4 = uVar4 + 1;
          } while (uVar4 <= bVar2);
        }
        pbVar10 = pbVar10 + 2;
        bVar3 = *pbVar10;
      }
      local_c = local_c + 1;
      pbVar9 = pbVar9 + 8;
    } while (local_c < 4);
    _CodePage_006e6764 = param_1;
    _DAT_006e6658 = 1;
    _DAT_006e6650 = _CPtoLCID();
    _DAT_006e6770 = *(undefined4 *)(&DAT_0047b3fc + extraout_ECX);
    _DAT_006e6774 = *(undefined4 *)(&DAT_0047b400 + extraout_ECX);
    _DAT_006e6778 = *(undefined4 *)(&DAT_0047b404 + extraout_ECX);
    goto LAB_00466fb3;
  }
LAB_00466fae:
  _setSBCS();
LAB_00466fb3:
  _setSBUpLow();
LAB_00466fbf:
  ___security_check_cookie_4(local_8 ^ unaff_retaddr);
  return;
code_r0x00466e66:
  uVar4 = uVar4 + 0x30;
  iVar8 = iVar8 + 1;
  if (0xef < uVar4) goto code_r0x00466e71;
  goto LAB_00466e5e;
code_r0x00466e71:
  BVar5 = GetCPInfo(param_1,&local_20);
  if (BVar5 != 1) {
    if (_DAT_006e655c == 0) goto LAB_00466fbf;
    goto LAB_00466fae;
  }
  puVar11 = (undefined4 *)&DAT_006e6660;
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined *)puVar11 = 0;
  _CodePage_006e6764 = param_1;
  _DAT_006e6650 = 0;
  if (local_20.MaxCharSize < 2) {
    _DAT_006e6658 = 0;
  }
  else {
    if (local_20.LeadByte[0] != '\0') {
      pBVar6 = local_20.LeadByte + 1;
      do {
        bVar3 = *pBVar6;
        if (bVar3 == 0) break;
        for (uVar4 = (uint)pBVar6[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
          (&DAT_006e6661)[uVar4] = (&DAT_006e6661)[uVar4] | 4;
        }
        pBVar1 = pBVar6 + 1;
        pBVar6 = pBVar6 + 2;
      } while (*pBVar1 != 0);
    }
    uVar4 = 1;
    do {
      (&DAT_006e6661)[uVar4] = (&DAT_006e6661)[uVar4] | 8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xff);
    _DAT_006e6650 = _CPtoLCID();
    _DAT_006e6658 = extraout_ECX_00;
  }
  _DAT_006e6770 = 0;
  _DAT_006e6774 = 0;
  _DAT_006e6778 = 0;
  goto LAB_00466fb3;
}


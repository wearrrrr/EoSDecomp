
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __output(FILE *param_1,byte *param_2,int **param_3)

{
  byte bVar1;
  byte *pbVar2;
  int **ppiVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  byte bVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  uint unaff_retaddr;
  int local_258 [127];
  undefined4 local_59;
  int *local_50;
  int *local_4c;
  size_t local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined local_20;
  char local_1f;
  int local_1c;
  size_t local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = _DAT_0047a630 ^ unaff_retaddr;
  local_18 = 0;
  local_1c = 0;
  local_30 = (int *)0x0;
  bVar9 = *param_2;
  iVar7 = 0;
  pbVar2 = param_2;
  ppiVar3 = param_3;
  do {
    if ((bVar9 == 0) || (param_2 = pbVar2 + 1, local_1c < 0)) {
      ___security_check_cookie_4(local_8 ^ unaff_retaddr);
      return;
    }
    if (((char)bVar9 < ' ') || ('x' < (char)bVar9)) {
      uVar5 = 0;
    }
    else {
                    /* Dynamically attempting to write code with calls IsProcessorFeaturePresent ???
                        */
      uVar5 = (int)"GAIsProcessorFeaturePresent"[(char)bVar9 + 10] & 0xf;
    }
    local_3c = (int)(char)(&DAT_00470090)[uVar5 * 8 + iVar7] >> 4;
    param_3 = ppiVar3;
    switch((int)(char)(&DAT_00470090)[uVar5 * 8 + iVar7] >> 4) {
    case 0:
switchD_0045eb6f_caseD_0:
      local_2c = 0;
      if ((*(byte *)(_DAT_0047b2d8 + 1 + (uint)bVar9 * 2) & 0x80) != 0) {
        _write_char(param_1);
        param_2 = pbVar2 + 2;
      }
      _write_char(param_1);
      break;
    case 1:
      local_10 = (int *)0xffffffff;
      local_40 = 0;
      local_38 = 0;
      local_28 = (int *)0x0;
      local_24 = 0;
      local_c = 0;
      local_2c = 0;
      break;
    case 2:
      if (bVar9 == 0x20) {
        local_c = local_c | 2;
      }
      else if (bVar9 == 0x23) {
        local_c = local_c | 0x80;
      }
      else if (bVar9 == 0x2b) {
        local_c = local_c | 1;
      }
      else if (bVar9 == 0x2d) {
        local_c = local_c | 4;
      }
      else if (bVar9 == 0x30) {
        local_c = local_c | 8;
      }
      break;
    case 3:
      if (bVar9 == 0x2a) {
        local_28 = *ppiVar3;
        param_3 = ppiVar3 + 1;
        if ((int)local_28 < 0) {
          local_c = local_c | 4;
          local_28 = (int *)-(int)local_28;
        }
      }
      else {
        local_28 = (int *)((char)bVar9 + -0x30 + (int)local_28 * 10);
      }
      break;
    case 4:
      local_10 = (int *)0x0;
      break;
    case 5:
      if (bVar9 == 0x2a) {
        local_10 = *ppiVar3;
        param_3 = ppiVar3 + 1;
        if ((int)local_10 < 0) {
          local_10 = (int *)0xffffffff;
        }
      }
      else {
        local_10 = (int *)((char)bVar9 + -0x30 + (int)local_10 * 10);
      }
      break;
    case 6:
      if (bVar9 == 0x49) {
        bVar1 = *param_2;
        if ((bVar1 == 0x36) && (pbVar2[2] == 0x34)) {
          param_2 = pbVar2 + 3;
          local_c = local_c | 0x8000;
        }
        else if ((bVar1 == 0x33) && (pbVar2[2] == 0x32)) {
          param_2 = pbVar2 + 3;
          local_c = local_c & 0xffff7fff;
        }
        else if (((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
                 ((bVar1 != 0x75 && (bVar1 != 0x78)))) && (bVar1 != 0x58)) {
          local_3c = 0;
          goto switchD_0045eb6f_caseD_0;
        }
      }
      else if (bVar9 == 0x68) {
        local_c = local_c | 0x20;
      }
      else if (bVar9 == 0x6c) {
        local_c = local_c | 0x10;
      }
      else if (bVar9 == 0x77) {
        local_c = local_c | 0x800;
      }
      break;
    case 7:
      if ((char)bVar9 < 'h') {
        if ((char)bVar9 < 'e') {
          if ((char)bVar9 < 'Y') {
            if (bVar9 != 0x58) {
              if (bVar9 == 0x43) {
                if ((local_c & 0x830) == 0) {
                  local_c = local_c | 0x800;
                }
                goto LAB_0045edf1;
              }
              if ((bVar9 != 0x45) && (bVar9 != 0x47)) {
                if (bVar9 == 0x53) {
                  if ((local_c & 0x830) == 0) {
                    local_c = local_c | 0x800;
                  }
                  goto LAB_0045ed77;
                }
                goto LAB_0045f148;
              }
              local_40 = 1;
              bVar9 = bVar9 + 0x20;
              goto LAB_0045edc2;
            }
LAB_0045f000:
            local_34 = 7;
LAB_0045f003:
            local_18 = 0x10;
            if ((local_c & 0x80) != 0) {
              local_20 = 0x30;
              local_1f = (char)local_34 + 'Q';
              local_24 = 2;
            }
            goto LAB_0045ee3f;
          }
          if (bVar9 == 0x5a) {
            param_3 = ppiVar3 + 1;
            piVar8 = *ppiVar3;
            piVar6 = _DAT_0047a734;
            piVar4 = _DAT_0047a734;
            if ((piVar8 == (int *)0x0) ||
               (local_14 = (int *)piVar8[1], piVar4 = _DAT_0047a734, local_14 == (int *)0x0))
            goto LAB_0045ef74;
            local_18 = (size_t)*(wchar_t *)piVar8;
            if ((local_c & 0x800) == 0) {
              local_2c = 0;
            }
            else {
              local_18 = (int)local_18 / 2;
              local_2c = 1;
            }
          }
          else if (bVar9 == 99) {
LAB_0045edf1:
            if ((local_c & 0x810) == 0) {
              local_258[0]._0_1_ = *(char *)ppiVar3;
              local_18 = 1;
            }
            else {
              local_18 = _wctomb((char *)local_258,*(wchar_t *)ppiVar3);
              if ((int)local_18 < 0) {
                local_38 = 1;
              }
            }
            param_3 = ppiVar3 + 1;
            local_14 = local_258;
          }
          else if (bVar9 == 100) goto LAB_0045ee34;
        }
        else {
LAB_0045edc2:
          local_c = local_c | 0x40;
          piVar8 = local_258;
          piVar6 = local_258;
          if ((int)local_10 < 0) {
            local_10 = (int *)0x6;
          }
          else if (local_10 == (int *)0x0) {
            if (bVar9 == 0x67) {
              local_10 = (int *)0x1;
            }
          }
          else {
            if (0x200 < (int)local_10) {
              local_10 = (int *)&DAT_00000200;
            }
            if ((0xa3 < (int)local_10) &&
               (local_14 = local_258, local_30 = (int *)_malloc((size_t)((int)local_10 + 0x15d)),
               piVar8 = local_30, piVar6 = local_30, local_30 == (int *)0x0)) {
              local_10 = (int *)0xa3;
              piVar8 = local_258;
              piVar6 = local_14;
            }
          }
          local_14 = piVar6;
          local_50 = *ppiVar3;
          param_3 = ppiVar3 + 2;
          local_4c = ppiVar3[1];
          (*_DAT_0047a71c)(&local_50,piVar8,(int)(char)bVar9,local_10,local_40);
          uVar5 = local_c & 0x80;
          if ((uVar5 != 0) && (local_10 == (int *)0x0)) {
            (*_DAT_0047a728)(piVar8);
          }
          if ((bVar9 == 0x67) && (uVar5 == 0)) {
            (*_DAT_0047a720)(piVar8);
          }
          piVar6 = piVar8;
          piVar4 = local_14;
          if (*(char *)piVar8 == '-') {
            local_c = local_c | 0x100;
            piVar6 = (int *)((int)piVar8 + 1);
            piVar4 = (int *)((int)piVar8 + 1);
          }
LAB_0045ef74:
          local_14 = piVar4;
          local_18 = _strlen((char *)piVar6);
        }
LAB_0045f148:
        uVar5 = local_c;
        if (local_38 == 0) {
          if ((local_c & 0x40) != 0) {
            if ((local_c & 0x100) == 0) {
              if ((local_c & 1) == 0) {
                if ((local_c & 2) == 0) goto LAB_0045f180;
                local_20 = 0x20;
              }
              else {
                local_20 = 0x2b;
              }
            }
            else {
              local_20 = 0x2d;
            }
            local_24 = 1;
          }
LAB_0045f180:
          pcVar10 = (char *)((int)local_28 + (-local_18 - local_24));
          if ((local_c & 0xc) == 0) {
            _write_multi_char(0x20,(int)pcVar10,param_1);
          }
          _write_string(local_24);
          if (((uVar5 & 8) != 0) && ((uVar5 & 4) == 0)) {
            _write_multi_char(0x30,(int)pcVar10,param_1);
          }
          if ((local_2c == 0) || ((int)local_18 < 1)) {
            _write_string(local_18);
          }
          else {
            local_44 = local_18;
            piVar8 = local_14;
            do {
              local_44 = local_44 - 1;
              iVar7 = _wctomb((char *)((int)&local_59 + 1),*(wchar_t *)piVar8);
              piVar8 = (int *)((int)piVar8 + 2);
              if (iVar7 < 1) break;
              _write_string(iVar7);
            } while (local_44 != 0);
          }
          if ((local_c & 4) != 0) {
            _write_multi_char(0x20,(int)pcVar10,param_1);
          }
        }
      }
      else {
        if (bVar9 == 0x69) {
LAB_0045ee34:
          local_c = local_c | 0x40;
LAB_0045ee38:
          local_18 = 10;
LAB_0045ee3f:
          if ((local_c & 0x8000) == 0) {
            param_3 = ppiVar3 + 1;
            if ((local_c & 0x20) == 0) {
              piVar8 = *ppiVar3;
              if ((local_c & 0x40) == 0) {
                piVar6 = (int *)0x0;
                goto LAB_0045f098;
              }
            }
            else if ((local_c & 0x40) == 0) {
              piVar8 = (int *)(uint)*(ushort *)ppiVar3;
            }
            else {
              piVar8 = (int *)(int)*(short *)ppiVar3;
            }
            piVar6 = (int *)((int)piVar8 >> 0x1f);
          }
          else {
            piVar8 = *ppiVar3;
            piVar6 = ppiVar3[1];
            param_3 = ppiVar3 + 2;
          }
LAB_0045f098:
          if ((((local_c & 0x40) != 0) && ((int)piVar6 < 1)) && ((int)piVar6 < 0)) {
            bVar11 = piVar8 != (int *)0x0;
            piVar8 = (int *)-(int)piVar8;
            piVar6 = (int *)-(int)((int)piVar6 + (uint)bVar11);
            local_c = local_c | 0x100;
          }
          uVar12 = CONCAT44(piVar6,piVar8);
          if ((local_c & 0x8000) == 0) {
            piVar6 = (int *)0x0;
          }
          if ((int)local_10 < 0) {
            local_10 = (int *)0x1;
          }
          else {
            local_c = local_c & 0xfffffff7;
            if (0x200 < (int)local_10) {
              local_10 = (int *)&DAT_00000200;
            }
          }
          if (((uint)piVar8 | (uint)piVar6) == 0) {
            local_24 = 0;
          }
          piVar8 = &local_59;
          while( true ) {
            piVar4 = local_10;
            uVar5 = (uint)uVar12;
            local_10 = (int *)((int)local_10 + -1);
            if (((int)piVar4 < 1) && ((uVar5 | (uint)piVar6) == 0)) break;
            uVar12 = __aulldvrm(uVar5,(uint)piVar6,local_18,(int)local_18 >> 0x1f);
            piVar6 = (int *)((ulonglong)uVar12 >> 0x20);
            iVar7 = extraout_ECX + 0x30;
            local_44 = uVar5;
            if (0x39 < iVar7) {
              iVar7 = iVar7 + local_34;
            }
            *(char *)piVar8 = (char)iVar7;
            piVar8 = (int *)((int)piVar8 + -1);
          }
          local_18 = (int)&local_59 + -(int)piVar8;
          local_14 = (int *)((int)piVar8 + 1);
          if (((local_c & 0x200) != 0) &&
             ((*(char *)(int *)((int)piVar8 + 1) != '0' || (local_18 == 0)))) {
            *(char *)piVar8 = '0';
            local_18 = (int)&local_59 + -(int)piVar8 + 1;
            local_14 = piVar8;
          }
          goto LAB_0045f148;
        }
        if (bVar9 != 0x6e) {
          if (bVar9 == 0x6f) {
            local_18 = 8;
            if ((local_c & 0x80) != 0) {
              local_c = local_c | 0x200;
            }
            goto LAB_0045ee3f;
          }
          if (bVar9 == 0x70) {
            local_10 = (int *)0x8;
            goto LAB_0045f000;
          }
          if (bVar9 == 0x73) {
LAB_0045ed77:
            piVar8 = local_10;
            if (local_10 == (int *)0xffffffff) {
              piVar8 = (int *)0x7fffffff;
            }
            param_3 = ppiVar3 + 1;
            local_14 = *ppiVar3;
            if ((local_c & 0x810) == 0) {
              piVar6 = local_14;
              if (local_14 == (int *)0x0) {
                piVar6 = _DAT_0047a734;
                local_14 = _DAT_0047a734;
              }
              for (; (piVar8 != (int *)0x0 &&
                     (piVar8 = (int *)((int)piVar8 + -1), *(char *)piVar6 != '\0'));
                  piVar6 = (int *)((int)piVar6 + 1)) {
              }
              local_18 = (int)piVar6 - (int)local_14;
            }
            else {
              if (local_14 == (int *)0x0) {
                local_14 = _DAT_0047a738;
              }
              local_2c = 1;
              for (piVar6 = local_14;
                  (piVar8 != (int *)0x0 &&
                  (piVar8 = (int *)((int)piVar8 + -1), *(wchar_t *)piVar6 != L'\0'));
                  piVar6 = (int *)((int)piVar6 + 2)) {
              }
              local_18 = (int)piVar6 - (int)local_14 >> 1;
            }
            goto LAB_0045f148;
          }
          if (bVar9 != 0x75) {
            if (bVar9 != 0x78) goto LAB_0045f148;
            local_34 = 0x27;
            goto LAB_0045f003;
          }
          goto LAB_0045ee38;
        }
        param_3 = ppiVar3 + 1;
        if ((local_c & 0x20) == 0) {
          **ppiVar3 = local_1c;
        }
        else {
          *(wchar_t *)*ppiVar3 = (wchar_t)local_1c;
        }
        local_38 = 1;
      }
      if (local_30 != (int *)0x0) {
        _free(local_30);
        local_30 = (int *)0x0;
      }
    }
    bVar9 = *param_2;
    iVar7 = local_3c;
    pbVar2 = param_2;
    ppiVar3 = param_3;
  } while( true );
}


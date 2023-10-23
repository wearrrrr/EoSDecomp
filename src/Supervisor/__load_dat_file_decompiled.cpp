
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Supervisor::__load_dat_file(Supervisor *this,int dat_index,char *filename)

{
  byte *pbVar1;
  byte bVar2;
  void *pvVar3;
  cls_0x43c770 *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  
  __EH_prolog();
  *(uint *)(unaff_EBP + -0x14) = _DAT_0047a630 ^ *(uint *)(unaff_EBP + 4);
  *(undefined4 *)(unaff_EBP + -0xa8) = extraout_ECX;
  if (*(int *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) != 0) {
    *(int *)(unaff_EBP + -0xac) =
         *(int *)(unaff_EBP + -0xa8) + 0x1fc + *(int *)(unaff_EBP + 8) * 0x20;
    *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + 0xc);
    do {
      bVar2 = **(byte **)(unaff_EBP + -0xb0);
      *(byte *)(unaff_EBP + -0xb1) = bVar2;
      bVar7 = bVar2 < **(byte **)(unaff_EBP + -0xac);
      if (bVar2 != **(byte **)(unaff_EBP + -0xac)) {
LAB_0042442a:
        *(uint *)(unaff_EBP + -0xb8) = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00424435;
      }
      if (*(char *)(unaff_EBP + -0xb1) == '\0') break;
      bVar2 = *(byte *)(*(int *)(unaff_EBP + -0xb0) + 1);
      *(byte *)(unaff_EBP + -0xb2) = bVar2;
      pbVar1 = (byte *)(*(int *)(unaff_EBP + -0xac) + 1);
      bVar7 = bVar2 < *pbVar1;
      if (bVar2 != *pbVar1) goto LAB_0042442a;
      *(int *)(unaff_EBP + -0xb0) = *(int *)(unaff_EBP + -0xb0) + 2;
      *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0xac) + 2;
    } while (*(char *)(unaff_EBP + -0xb2) != '\0');
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
LAB_00424435:
    *(undefined4 *)(unaff_EBP + -0xbc) = *(undefined4 *)(unaff_EBP + -0xb8);
    if (*(int *)(unaff_EBP + -0xbc) == 0) goto LAB_00424634;
  }
  __sub_4242F3(*(Supervisor **)(unaff_EBP + -0xa8),*(int *)(unaff_EBP + 8));
  pvVar3 = malloc(0x14);
  *(void **)(unaff_EBP + -0x9c) = pvVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x9c) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc0) = 0;
  }
  else {
    pcVar4 = OOAnalyzer::cls_0x43c770::cls_0x43c770(*(cls_0x43c770 **)(unaff_EBP + -0x9c));
    *(cls_0x43c770 **)(unaff_EBP + -0xc0) = pcVar4;
  }
  *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0xc0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) =
       *(undefined4 *)(unaff_EBP + -0x98);
  __stub_4();
  iVar5 = OOAnalyzer::cls_0x43c770::meth_0x43ca90
                    (*(cls_0x43c770 **)
                      (*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4),
                     *(LPCSTR *)(unaff_EBP + 0xc));
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -0xa4) =
         *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4);
    *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0xa4);
    if (*(int *)(unaff_EBP + -0xa0) == 0) {
      *(undefined4 *)(unaff_EBP + -0xd4) = 0;
    }
    else {
      __sub_43C8D0_thunk(*(void **)(unaff_EBP + -0xa0));
      _free(*(void **)(unaff_EBP + -0xa0));
      *(undefined4 *)(unaff_EBP + -0xd4) = *(undefined4 *)(unaff_EBP + -0xa0);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) = 0;
    *(undefined4 *)(*(int *)(unaff_EBP + -0xa8) + 0x1bc + *(int *)(unaff_EBP + 8) * 4) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(unaff_EBP + 0xc);
    *(int *)(unaff_EBP + -200) =
         *(int *)(unaff_EBP + -0xa8) + 0x1fc + *(int *)(unaff_EBP + 8) * 0x20;
    *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -200);
    do {
      *(undefined *)(unaff_EBP + -0xcd) = **(undefined **)(unaff_EBP + -0xc4);
      **(undefined **)(unaff_EBP + -200) = *(undefined *)(unaff_EBP + -0xcd);
      *(int *)(unaff_EBP + -0xc4) = *(int *)(unaff_EBP + -0xc4) + 1;
      *(int *)(unaff_EBP + -200) = *(int *)(unaff_EBP + -200) + 1;
    } while (*(char *)(unaff_EBP + -0xcd) != '\0');
    _sprintf((char *)(unaff_EBP + -0x94),(byte *)"ver%.4x.dat");
    uVar6 = __sub_43C920(*(void **)(*(int *)(unaff_EBP + -0xa8) + 0x1bc +
                                   *(int *)(unaff_EBP + 8) * 4),(byte *)(unaff_EBP + -0x94));
    *(uint *)(unaff_EBP + -0x10) = uVar6;
    if (*(int *)(unaff_EBP + -0x10) < 0) {
      LogBuffer::write_error(&LogBuffer,"error : データのバージョンが違います\n");
    }
  }
LAB_00424634:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  ___security_check_cookie_4(*(uint *)(unaff_EBP + -0x14) ^ *(uint *)(unaff_EBP + 4));
  return;
}


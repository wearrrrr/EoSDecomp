
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  uVar3 = param_1 & 0x1f;
  bVar2 = true;
  local_8 = uVar3;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    __set_statfp();
    uVar3 = param_1 & 0x17;
    goto LAB_004626c1;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    __set_statfp();
    uVar3 = param_1 & 0x1b;
    goto LAB_004626c1;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (*param_2 != __0d) {
        fVar5 = __decomp(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c);
        dVar1 = (double)fVar5;
        local_c = local_c + -0x600;
        if (local_c < -0x432) {
          local_14 = dVar1 * __0d;
          bVar4 = bVar2;
        }
        else {
          local_14 = (double)((ulonglong)dVar1 & 0xfffffffffffff | 0x10000000000000);
          if (local_c < -0x3fd) {
            local_c = -0x3fd - local_c;
            do {
              if ((((ulonglong)local_14 & 1) != 0) && (!bVar4)) {
                bVar4 = bVar2;
              }
              uVar3 = (uint)local_14 >> 1;
              if (((ulonglong)local_14 & 0x100000000) != 0) {
                local_14._3_1_ = (byte)((ulonglong)local_14 >> 0x18) >> 1;
                local_14._0_3_ = (undefined3)uVar3;
                local_14._0_4_ = CONCAT13(local_14._3_1_,(undefined3)local_14) | 0x80000000;
                uVar3 = (uint)local_14;
              }
              local_14._0_4_ = uVar3;
              local_14 = (double)CONCAT44(local_14._4_4_ >> 1,(uint)local_14);
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (dVar1 < __0d) {
            local_14 = -local_14;
          }
        }
        *param_2 = local_14;
        bVar2 = bVar4;
      }
      if (bVar2) {
        __set_statfp();
      }
      uVar3 = local_8 & 0xfffffffd;
      local_8 = uVar3;
    }
    goto LAB_004626c1;
  }
  __set_statfp();
  uVar3 = param_3 & 0xc00;
  dVar1 = _DAT_0047acc8;
  if (uVar3 == 0) {
    if (*param_2 <= __0d) {
      dVar1 = -_DAT_0047acc8;
    }
LAB_004625df:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      dVar1 = _DAT_0047acd8;
      if (*param_2 <= __0d) {
        dVar1 = -_DAT_0047acc8;
      }
      goto LAB_004625df;
    }
    if (uVar3 == 0x800) {
      if (*param_2 <= __0d) {
        dVar1 = -_DAT_0047acd8;
      }
      goto LAB_004625df;
    }
    if (uVar3 == 0xc00) {
      dVar1 = _DAT_0047acd8;
      if (*param_2 <= __0d) {
        dVar1 = -_DAT_0047acd8;
      }
      goto LAB_004625df;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_004626c1:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    __set_statfp();
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}


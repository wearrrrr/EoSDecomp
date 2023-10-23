
void __thiscall UnknownB::__sub_422900(void *this,undefined4 *param_1)

{
  char cVar1;
  LPMIDIHDR _Memory;
  bool bVar2;
  void *pvVar3;
  LPSTR pCVar4;
  undefined3 extraout_var;
  uint uVar5;
  int iVar6;
  int iVar7;
  LPMIDIHDR pmVar8;
  longlong lVar9;
  undefined8 uVar10;
  int local_30;
  int local_2c;
  byte local_18;
  byte bStack_17;
  byte bStack_14;
  char cStack_11;
  undefined4 local_d;
  undefined uStack_9;
  
  bStack_17 = *(byte *)param_1[5];
  if (bStack_17 < 0x80) {
    bStack_17 = *(byte *)(param_1 + 3);
  }
  else {
    param_1[5] = param_1[5] + 1;
  }
  switch(bStack_17 & 0xf0) {
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb0:
  case 0xe0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = (uint)*(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    break;
  case 0xc0:
  case 0xd0:
    local_18 = *(byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    local_d = 0;
    break;
  case 0xf0:
    if (bStack_17 == 0xf0) {
      if (*(int *)((int)this + *(int *)((int)this + 0x90) * 4 + 0x10) != 0) {
        __sub_422560(this,*(LPMIDIHDR *)((int)this + *(int *)((int)this + 0x90) * 4 + 0x10));
      }
      pvVar3 = _malloc(0x40);
      *(void **)((int)this + *(int *)((int)this + 0x90) * 4 + 0x10) = pvVar3;
      _Memory = *(LPMIDIHDR *)((int)this + *(int *)((int)this + 0x90) * 4 + 0x10);
      iVar6 = __sub_421D90((byte **)(param_1 + 5));
      pmVar8 = _Memory;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        pmVar8->lpData = (LPSTR)0x0;
        pmVar8 = (LPMIDIHDR)&pmVar8->dwBufferLength;
      }
      pCVar4 = (LPSTR)_malloc(iVar6 + 1);
      _Memory->lpData = pCVar4;
      *_Memory->lpData = -0x10;
      _Memory->dwFlags = 0;
      _Memory->dwBufferLength = iVar6 + 1;
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < iVar6) {
        _Memory->lpData[CONCAT13(uStack_9,local_d._1_3_) + 1] = *(CHAR *)param_1[5];
        param_1[5] = param_1[5] + 1;
        iVar7 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar7;
        uStack_9 = (undefined)((uint)iVar7 >> 0x18);
      }
      bVar2 = MIDIHDR::__sub_421B90((MIDIHDR *)((int)this + 0x13c),_Memory);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        _free(_Memory->lpData);
        _free(_Memory);
        *(undefined4 *)((int)this + *(int *)((int)this + 0x90) * 4 + 0x10) = 0;
      }
      *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 1;
      uVar5 = *(uint *)((int)this + 0x90) & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      *(uint *)((int)this + 0x90) = uVar5;
    }
    else if (bStack_17 == 0xff) {
      cVar1 = *(char *)param_1[5];
      param_1[5] = param_1[5] + 1;
      iVar6 = __sub_421D90((byte **)(param_1 + 5));
      if (cVar1 == '/') {
        *param_1 = 0;
        return;
      }
      if (cVar1 == 'Q') {
        lVar9 = __allmul(*(uint *)((int)this + 0x128),*(uint *)((int)this + 300),
                         *(uint *)((int)this + 0x11c),(int)*(uint *)((int)this + 0x11c) >> 0x1f);
        lVar9 = __allmul((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),1000,0);
        uVar10 = __aulldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),*(uint *)((int)this + 0x120)
                           ,(int)*(uint *)((int)this + 0x120) >> 0x1f);
        uVar5 = *(uint *)((int)this + 0x130);
        *(uint *)((int)this + 0x130) = uVar5 + (uint)uVar10;
        *(uint *)((int)this + 0x134) =
             *(int *)((int)this + 0x134) + (int)((ulonglong)uVar10 >> 0x20) +
             (uint)CARRY4(uVar5,(uint)uVar10);
        *(undefined4 *)((int)this + 0x128) = 0;
        *(undefined4 *)((int)this + 300) = 0;
        *(undefined4 *)((int)this + 0x120) = 0;
        local_d = local_d & 0xff;
        uStack_9 = 0;
        while (CONCAT13(uStack_9,local_d._1_3_) < iVar6) {
          *(uint *)((int)this + 0x120) =
               *(int *)((int)this + 0x120) * 0x100 + (uint)*(byte *)param_1[5] +
               *(int *)((int)this + 0x120);
          param_1[5] = param_1[5] + 1;
          iVar7 = CONCAT13(uStack_9,local_d._1_3_) + 1;
          local_d._1_3_ = (undefined3)iVar7;
          uStack_9 = (undefined)((uint)iVar7 >> 0x18);
        }
      }
      else {
        param_1[5] = param_1[5] + iVar6;
      }
    }
  }
  switch(bStack_17 & 0xf0) {
  case 0x90:
    if ((local_d & 0xff) != 0) {
      local_18 = local_18 + *(char *)((int)this + 0x2c4);
      *(byte *)((int)this +
               ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
               (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x154) =
           *(byte *)((int)this +
                    ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
                    (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x154) | (byte)(1 << (local_18 & 7));
      break;
    }
  case 0x80:
    local_18 = local_18 + *(char *)((int)this + 0x2c4);
    *(byte *)((int)this +
             ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
             (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x154) =
         *(byte *)((int)this +
                  ((int)(CONCAT12(bStack_17,CONCAT11(bStack_17,local_18)) & 0xff) >> 3) +
                  (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x154) & ~(byte)(1 << (local_18 & 7));
    break;
  case 0xb0:
    switch(local_18) {
    case 0:
      *(undefined *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x165) = (undefined)local_d;
      break;
    case 2:
      local_2c = *(int *)((int)this + 0x138);
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < *(int *)((int)this + 0x114)) {
        *(undefined4 *)(local_2c + 0x18) = *(undefined4 *)(local_2c + 0x14);
        *(undefined4 *)(local_2c + 0x1c) = *(undefined4 *)(local_2c + 4);
        iVar6 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar6;
        local_2c = local_2c + 0x20;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      *(undefined4 *)((int)this + 0x2ec) = *(undefined4 *)((int)this + 0x120);
      *(undefined4 *)((int)this + 0x2f0) = *(undefined4 *)((int)this + 0x128);
      *(undefined4 *)((int)this + 0x2f4) = *(undefined4 *)((int)this + 300);
      *(undefined4 *)((int)this + 0x2f8) = *(undefined4 *)((int)this + 0x130);
      *(undefined4 *)((int)this + 0x2fc) = *(undefined4 *)((int)this + 0x134);
      break;
    case 4:
      local_30 = *(int *)((int)this + 0x138);
      local_d = local_d & 0xff;
      uStack_9 = 0;
      while (CONCAT13(uStack_9,local_d._1_3_) < *(int *)((int)this + 0x114)) {
        *(undefined4 *)(local_30 + 0x14) = *(undefined4 *)(local_30 + 0x18);
        *(undefined4 *)(local_30 + 4) = *(undefined4 *)(local_30 + 0x1c);
        iVar6 = CONCAT13(uStack_9,local_d._1_3_) + 1;
        local_d._1_3_ = (undefined3)iVar6;
        local_30 = local_30 + 0x20;
        uStack_9 = (undefined)((uint)iVar6 >> 0x18);
      }
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x2ec);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x2f0);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x2f4);
      *(undefined4 *)((int)this + 0x130) = *(undefined4 *)((int)this + 0x2f8);
      *(undefined4 *)((int)this + 0x134) = *(undefined4 *)((int)this + 0x2fc);
      break;
    case 7:
      *(undefined *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x169) = (undefined)local_d;
      lVar9 = __ftol2((double)((float)(local_d & 0xff) * *(float *)((int)this + 0x2c8)));
      bStack_14 = (byte)lVar9;
      cStack_11 = (char)((ulonglong)lVar9 >> 0x18);
      if (cStack_11 < '\0') {
        bStack_14 = 0;
      }
      else if (0x7f < (int)lVar9) {
        bStack_14 = 0x7f;
      }
      *(byte *)((int)this + ((CONCAT11(bStack_14,bStack_17) & 0xffff0f) & 0xff) * 0x17 + 0x16a) =
           bStack_14;
      local_d = (uint)bStack_14;
      break;
    case 10:
      *(undefined *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x166) = (undefined)local_d;
      break;
    case 0x5b:
      *(undefined *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x167) = (undefined)local_d;
      break;
    case 0x5d:
      *(undefined *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x168) = (undefined)local_d;
    }
    break;
  case 0xc0:
    *(byte *)((int)this + (uint)(bStack_17 & 0xffff0f) * 0x17 + 0x164) = local_18;
  }
  if (bStack_17 < 0xf0) {
    MIDIHDR::__sub_421BE0((MIDIHDR *)((int)this + 0x13c),bStack_17,local_18,(undefined)local_d);
  }
  *(byte *)(param_1 + 3) = bStack_17;
  iVar6 = __sub_421D90((byte **)(param_1 + 5));
  param_1[1] = param_1[1] + iVar6;
  return;
}


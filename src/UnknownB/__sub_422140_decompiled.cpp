
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UnknownB::__sub_422140(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined local_3c;
  undefined uStack_3b;
  undefined uStack_3a;
  undefined uStack_39;
  uint local_38;
  int local_30;
  undefined local_20;
  undefined uStack_1f;
  undefined uStack_1e;
  undefined uStack_1d;
  undefined *local_c;
  int local_8;
  
  iVar2 = _DAT_0047a630;
  __sub_4220B0(this);
  iVar7 = *(int *)((int)this + param_1 * 4 + 0x94);
  if (iVar7 == 0) {
    __stub_3();
  }
  else {
    uVar1 = *(undefined4 *)(iVar7 + 4);
    puVar5 = (undefined2 *)(iVar7 + 8);
    uStack_1d = (undefined)((uint)uVar1 >> 0x18);
    uStack_1e = (undefined)((uint)uVar1 >> 0x10);
    uStack_1f = (undefined)((uint)uVar1 >> 8);
    local_20 = (undefined)uVar1;
    local_30 = CONCAT13(local_20,CONCAT12(uStack_1f,CONCAT11(uStack_1e,uStack_1d)));
    local_c = (undefined *)((int)puVar5 + local_30);
    uVar3 = __word_byte_swap(CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5));
    *(uint *)((int)this + 0x118) = (uint)uVar3;
    uVar3 = __word_byte_swap(CONCAT22(extraout_var,*(undefined2 *)(iVar7 + 0xc)));
    *(uint *)((int)this + 0x11c) = (uint)uVar3;
    uVar3 = __word_byte_swap(CONCAT22(extraout_var_00,*(undefined2 *)(iVar7 + 10)));
    *(uint *)((int)this + 0x114) = (uint)uVar3;
    pvVar4 = _malloc(*(int *)((int)this + 0x114) << 5);
    *(void **)((int)this + 0x138) = pvVar4;
    puVar8 = *(undefined4 **)((int)this + 0x138);
    for (uVar6 = (uint)(*(int *)((int)this + 0x114) << 5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    for (local_8 = 0; local_8 < *(int *)((int)this + 0x114); local_8 = local_8 + 1) {
      uVar1 = *(undefined4 *)(local_c + 4);
      uStack_39 = (undefined)((uint)uVar1 >> 0x18);
      uStack_3a = (undefined)((uint)uVar1 >> 0x10);
      uStack_3b = (undefined)((uint)uVar1 >> 8);
      local_38._0_3_ = CONCAT12(uStack_3b,CONCAT11(uStack_3a,uStack_39));
      local_3c = (undefined)uVar1;
      local_38 = CONCAT13(local_3c,(uint3)local_38);
      *(uint *)(*(int *)((int)this + 0x138) + 8 + local_8 * 0x20) = local_38;
      pvVar4 = _malloc(local_38);
      *(void **)(*(int *)((int)this + 0x138) + 0x10 + local_8 * 0x20) = pvVar4;
      *(undefined4 *)(local_8 * 0x20 + *(int *)((int)this + 0x138)) = 1;
      puVar8 = (undefined4 *)(local_c + 8);
      puVar9 = *(undefined4 **)(*(int *)((int)this + 0x138) + 0x10 + local_8 * 0x20);
      for (uVar6 = local_38 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = (uint3)local_38 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_c = (undefined *)((int)(local_c + 8) + local_38);
    }
    *(undefined4 *)((int)this + 0x120) = 1000000;
  }
  ___security_check_cookie_4(iVar2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UnknownB::__sub_422680(void *this)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint local_14;
  uint local_10;
  int local_8;
  
  bVar2 = false;
  lVar4 = __allmul(*(uint *)((int)this + 0x128),*(uint *)((int)this + 300),
                   *(uint *)((int)this + 0x11c),(int)*(uint *)((int)this + 0x11c) >> 0x1f);
  lVar4 = __allmul((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),1000,0);
  uVar5 = __aulldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),*(uint *)((int)this + 0x120),
                    (int)*(uint *)((int)this + 0x120) >> 0x1f);
  local_14 = *(uint *)((int)this + 0x130) + (uint)uVar5;
  local_10 = *(int *)((int)this + 0x134) + (int)((ulonglong)uVar5 >> 0x20) +
             (uint)CARRY4(*(uint *)((int)this + 0x130),(uint)uVar5);
  if (*(int *)((int)this + 0x2e0) != 0) {
    if (*(int *)((int)this + 0x2e4) <= *(int *)((int)this + 0x2e8)) {
      *(undefined4 *)((int)this + 0x2c8) = 0;
      return;
    }
    *(float *)((int)this + 0x2c8) =
         _1_0f - (float)*(int *)((int)this + 0x2e8) / (float)*(int *)((int)this + 0x2e4);
    lVar4 = __ftol2((double)(*(float *)((int)this + 0x2c8) * _28_0f));
    if ((int)lVar4 != *(int *)((int)this + 0x2cc)) {
      __sub_423260(this,0);
    }
    lVar4 = __ftol2((double)(*(float *)((int)this + 0x2c8) * _28_0f));
    *(int *)((int)this + 0x2cc) = (int)lVar4;
    *(int *)((int)this + 0x2e8) = *(int *)((int)this + 0x2e8) + 1;
  }
  local_8 = 0;
  do {
    if (*(int *)((int)this + 0x114) <= local_8) {
      uVar1 = *(uint *)((int)this + 0x128);
      *(uint *)((int)this + 0x128) = uVar1 + 1;
      *(uint *)((int)this + 300) = *(int *)((int)this + 300) + (uint)(0xfffffffe < uVar1);
      if (!bVar2) {
        __sub_4223C0(this);
      }
      return;
    }
    if (*(int *)(local_8 * 0x20 + *(int *)((int)this + 0x138)) != 0) {
      bVar2 = true;
      while (*(int *)(local_8 * 0x20 + *(int *)((int)this + 0x138)) != 0) {
        uVar1 = *(uint *)(*(int *)((int)this + 0x138) + 4 + local_8 * 0x20);
        uVar3 = (int)uVar1 >> 0x1f;
        if ((local_10 < uVar3) || ((local_10 <= uVar3 && (local_14 < uVar1)))) break;
        __sub_422900(this,(undefined4 *)(local_8 * 0x20 + *(int *)((int)this + 0x138)));
        lVar4 = __allmul(*(uint *)((int)this + 0x128),*(uint *)((int)this + 300),
                         *(uint *)((int)this + 0x11c),(int)*(uint *)((int)this + 0x11c) >> 0x1f);
        lVar4 = __allmul((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),1000,0);
        uVar5 = __aulldiv((uint)lVar4,(uint)((ulonglong)lVar4 >> 0x20),*(uint *)((int)this + 0x120),
                          (int)*(uint *)((int)this + 0x120) >> 0x1f);
        local_14 = *(uint *)((int)this + 0x130) + (uint)uVar5;
        local_10 = *(int *)((int)this + 0x134) + (int)((ulonglong)uVar5 >> 0x20) +
                   (uint)CARRY4(*(uint *)((int)this + 0x130),(uint)uVar5);
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}


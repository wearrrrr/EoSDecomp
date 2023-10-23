
uint __thiscall virt_meth_0x43c570(void *this)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char in_stack_00000004;
  
  uVar4 = 1 << (in_stack_00000004 - 1U & 0x1f);
  uVar3 = 0;
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  do {
    if (uVar4 == 0) {
      return uVar3;
    }
    if (*(char *)((int)this + 0x10) == -0x80) {
      uVar2 = OOAnalyzer::cls_0x46cbe8::virt_meth_0x43cfb0((cls_0x46cbe8 *)((int)this + 0x18));
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 == 0xffffffff) {
        return 0;
      }
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      *(uint *)((int)this + 0x14) = *(int *)((int)this + 0x14) + uVar2;
    }
    if ((*(byte *)((int)this + 0x10) & *(byte *)((int)this + 0xc)) != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 >> 1;
    bVar1 = *(byte *)((int)this + 0x10) >> 1;
    *(byte *)((int)this + 0x10) = bVar1;
    if (bVar1 == 0) {
      *(undefined *)((int)this + 0x10) = 0x80;
    }
  } while( true );
}


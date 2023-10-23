
void __thiscall UnknownB::__sub_4220B0(void *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < *(int *)((int)this + 0x114); local_8 = local_8 + 1) {
    _free(*(void **)(*(int *)((int)this + 0x138) + 0x10 + local_8 * 0x20));
  }
  _free(*(void **)((int)this + 0x138));
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  return;
}


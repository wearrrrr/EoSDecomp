
void __thiscall UnknownB::__sub_423260(void *this,int param_1)

{
  longlong lVar1;
  int local_18;
  int local_c;
  
  if (*(int *)((int)this + 0x2d4) == 0) {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      lVar1 = __ftol2((double)((float)(uint)*(byte *)((int)this + local_c * 0x17 + 0x169) *
                              *(float *)((int)this + 0x2c8)));
      local_18 = (int)lVar1 + param_1;
      if (local_18 < 0) {
        local_18 = 0;
      }
      else if (0x7f < local_18) {
        local_18 = 0x7f;
      }
      MIDIHDR::__sub_421BE0((MIDIHDR *)((int)this + 0x13c),(char)local_c + -0x50,7,(char)local_18);
    }
  }
  return;
}



cls_0x46c680 * __thiscall
UnknownF::__sub_43AC90(void *this,int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  uint local_8;
  
  *(cls_0x46c680__vftable_46c680 **)this = &__UnknownH_FuncPtr;
  pvVar1 = malloc(param_3 << 2);
  *(void **)((int)this + 4) = pvVar1;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    *(undefined4 *)(*(int *)((int)this + 4) + local_8 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
  }
  *(undefined4 *)((int)this + 8) = param_2;
  *(uint *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  CSound::FillBufferWithSound((CSound *)this,**(int ***)((int)this + 4),0);
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(*(int *)((int)this + 4) + local_8 * 4) + 0x34))
              (*(undefined4 *)(*(int *)((int)this + 4) + local_8 * 4),0);
  }
  return (cls_0x46c680 *)this;
}


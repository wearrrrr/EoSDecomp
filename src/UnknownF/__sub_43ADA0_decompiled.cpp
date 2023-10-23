
cls_0x46c680 * __thiscall UnknownF::__sub_43ADA0(void *this)

{
  CWaveFile *local_8;
  
  *(cls_0x46c680__vftable_46c680 **)this = &__UnknownH_FuncPtr;
  for (local_8 = (CWaveFile *)0x0; local_8 < *(CWaveFile **)((int)this + 0x10);
      local_8 = (CWaveFile *)((int)&local_8->m_pwfx + 1)) {
    if (*(int *)(*(int *)((int)this + 4) + (int)local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)((int)this + 4) + (int)local_8 * 4) + 8))
                (*(undefined4 *)(*(int *)((int)this + 4) + (int)local_8 * 4));
      *(undefined4 *)(*(int *)((int)this + 4) + (int)local_8 * 4) = 0;
    }
  }
  if (*(int *)((int)this + 4) != 0) {
    _free(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    local_8 = (CWaveFile *)this;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    local_8 = *(CWaveFile **)((int)this + 0xc);
    if (local_8 != (CWaveFile *)0x0) {
      CWaveFile::__sub_43BA10(local_8);
      _free(local_8);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (cls_0x46c680 *)local_8;
}



undefined4 __thiscall __sub_43C8D0(void *this)

{
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (*this != (int *)0x0) {
    (**(code **)(**this + 0x1c))(1);
    *(undefined4 *)this = 0;
  }
  if (*(void **)((int)this + 0x10) != (void *)0x0) {
    _free(*(void **)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  _free(*(void **)((int)this + 4));
  return 1;
}


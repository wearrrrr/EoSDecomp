
void __thiscall Supervisor::__sub_4242F3(Supervisor *this,int param_1)

{
  void *this_00;
  
  if (*(int *)(this->field17_0x194 + param_1 * 4 + 0x28) != 0) {
    __sub_43C8D0(*(void **)(this->field17_0x194 + param_1 * 4 + 0x28));
    this_00 = *(void **)(this->field17_0x194 + param_1 * 4 + 0x28);
    if (this_00 != (void *)0x0) {
      __sub_43C8D0_thunk(this_00);
      _free(this_00);
    }
    *(undefined4 *)(this->field17_0x194 + param_1 * 4 + 0x28) = 0;
  }
  return;
}


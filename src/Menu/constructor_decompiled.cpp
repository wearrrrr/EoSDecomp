
Menu * __thiscall Menu::constructor(Menu *this)

{
  AnmVm *vm;
  int i;
  
  i = 122;
  vm = (AnmVm *)this;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(vm);
    vm = vm + 1;
  }
  return this;
}


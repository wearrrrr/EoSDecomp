
AsciiManagerBigChild * __thiscall AsciiManagerBigChild::constructor(AsciiManagerBigChild *this)

{
  AnmVm *vm;
  int i;
  
  i = 6;
  vm = this->vms_8;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(vm);
    vm = vm + 1;
  }
  AnmVm::constructor(&this->vm_668);
  return this;
}


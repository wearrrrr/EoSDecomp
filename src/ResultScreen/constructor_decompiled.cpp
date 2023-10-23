
ResultScreen * __thiscall ResultScreen::constructor(ResultScreen *this)

{
  undefined4 *local_58;
  int k;
  AnmVm *vm;
  int j;
  AnmVm *local_20;
  int i;
  
  i = 38;
  local_20 = (AnmVm *)(this->field0_0x0 + 0x40);
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(local_20);
    local_20 = local_20 + 1;
  }
  j = 16;
  vm = (AnmVm *)(this->field0_0x0 + 0x28a0);
  while (j = j + -1, -1 < j) {
    AnmVm::constructor(vm);
    vm = vm + 1;
  }
  AnmVm::constructor((AnmVm *)(this->field0_0x0 + 0x39a0));
  k = 20;
  local_58 = (undefined4 *)(this->field0_0x0 + 0x3ab0);
  while (k = k + -1, -1 < k) {
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58 = local_58 + 3;
  }
  _memset(this,0,22192);
  *(undefined4 *)(this->field0_0x0 + 0x10) = 1;
  return this;
}


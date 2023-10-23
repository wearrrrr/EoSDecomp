
EffectManager * __thiscall EffectManager::constructor(EffectManager *this)

{
  AnmVm *vm;
  int i;
  
  i = 0x201;
  vm = (AnmVm *)this->effects_array;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(vm);
    Timer::constructor((Timer *)((int)&vm[1].matrix.field0_0x0 + 0x18));
    vm = (AnmVm *)((int)&vm[1].matrix.field0_0x0 + 0x30);
  }
  __sub_40E340(this);
  return this;
}


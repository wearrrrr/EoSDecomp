
Player * __thiscall Player::constructor(Player *this)

{
  AnmVm *vm;
  int local_5c;
  Timer *timer;
  int local_48;
  int local_3c;
  int local_30;
  int local_24;
  AnmVm *vm_array;
  int i;
  
  AnmVm::constructor(&this->vm_0);
  i = 3;
  vm_array = this->vms_1;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor(vm_array);
    vm_array = vm_array + 1;
  }
  local_24 = 2;
  do {
    local_24 = local_24 + -1;
  } while (-1 < local_24);
  local_30 = 32;
  do {
    local_30 = local_30 + -1;
  } while (-1 < local_30);
  local_3c = 32;
  do {
    local_3c = local_3c + -1;
  } while (-1 < local_3c);
  local_48 = 2;
  timer = this->timer_array_9B8;
  while (local_48 = local_48 + -1, -1 < local_48) {
    Timer::constructor(timer);
    timer = timer + 1;
  }
  Timer::constructor(&this->timer_9E8);
  local_5c = 80;
  vm = (AnmVm *)this->bullets;
  while (local_5c = local_5c + -1, -1 < local_5c) {
    AnmVm::constructor(vm);
    Timer::constructor(&vm[1].current_time_in_script);
    vm = (AnmVm *)((int)&vm[1].matrix.field0_0x0 + 0xc);
  }
  Timer::constructor(&this->timer_75A8);
  Timer::constructor(&this->timer_75B4);
  PlayerInnerC::constructor((PlayerInnerC *)&this->player_inner);
  return this;
}


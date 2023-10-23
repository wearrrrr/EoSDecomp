
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Menu::__sub_438EF8(Menu *this,AnmVm *vm,int param_2,int param_3,int optionToModify)

{
  float fVar1;
  
  if (param_3 == optionToModify) {
    if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
      vm->color = 0x800000ff;
    }
    else if (vm->sprite_number_duplicate < 0x122) {
      AnmManager::set_vm_sprite(anm_manager_ptr,vm,vm->sprite_number_duplicate + 0x7a);
    }
    else {
      AnmManager::set_vm_sprite(anm_manager_ptr,vm,vm->sprite_number_duplicate + 0x73);
    }
    fVar1 = ram0x0046c4c4;
    (vm->pos_2).x = ram0x0046c4c4;
    (vm->pos_2).y = fVar1;
    (vm->pos_2).z = 0.0;
  }
  else {
    if ((supervisor.config.flags >> 8 & 1 | supervisor.config.flags & 1) == 0) {
      vm->color = 0x80202050;
    }
    else {
      AnmManager::set_vm_sprite(anm_manager_ptr,vm,(int)vm->sprite_number_duplicate);
    }
    vm->scale_x = 1.0;
    vm->scale_y = 1.0;
    (vm->pos_2).x = 0.0;
    (vm->pos_2).y = 0.0;
    (vm->pos_2).z = 0.0;
  }
  if (param_2 == *(int *)(this + 0x81a0)) {
    if ((supervisor.config.flags & 1) == 0) {
      vm->color = vm->color & 0xffffff | 0xff000000;
    }
    else {
      vm->color = vm->color & 0xffffff | 0xff000000;
    }
    fVar1 = _4_0f;
    (vm->pos_2).x = _4_0f + (vm->pos_2).x;
    (vm->pos_2).y = fVar1 + (vm->pos_2).y;
    (vm->pos_2).z = (vm->pos_2).z + 0.0;
  }
  else {
    if ((supervisor.config.flags & 1) == 0) {
      vm->color = vm->color & 0xffffff | 0x80000000;
    }
    else {
      vm->color = vm->color & 0xffffff | 0x80000000;
    }
    (vm->pos_2).x = (vm->pos_2).x + 0.0;
    (vm->pos_2).y = (vm->pos_2).y + 0.0;
    (vm->pos_2).z = (vm->pos_2).z + 0.0;
  }
  return;
}


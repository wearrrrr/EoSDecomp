
void __thiscall AnmManager::__sub_4051B0(AnmManager *this,AnmVm *vm,int script_index)

{
  vm->anm_file_index = (int16_t)script_index;
  (vm->pos).x = 0.0;
  (vm->pos).y = 0.0;
  (vm->pos).z = 0.0;
  (vm->pos_2).x = 0.0;
  (vm->pos_2).y = 0.0;
  (vm->pos_2).z = 0.0;
  vm->font_height = 15;
  vm->font_width = 15;
  set_vm_script(this,vm,(AnmRawScript *)this->scripts[script_index]);
  return;
}


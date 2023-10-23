
int __thiscall AnmManager::set_vm_sprite(AnmManager *this,AnmVm *vm,int sprite_number)

{
  int result;
  
  if ((int)this->sprites[sprite_number].source_file_index < 0) {
    result = -1;
  }
  else {
    vm->sprite_number = (int16_t)sprite_number;
    vm->sprite = this->sprites + sprite_number;
    D3DMATRIX::set_identity(&vm->matrix);
    (vm->matrix).field0_0x0.field0._11 = vm->sprite->width_px / vm->sprite->texture_width;
    (vm->matrix).field0_0x0.field0._22 = vm->sprite->height_px / vm->sprite->texture_height;
    result = 0;
  }
  return result;
}


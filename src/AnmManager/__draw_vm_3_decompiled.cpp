
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::__draw_vm_3(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  int result;
  
  if ((vm->flags & 1) == 0) {
    result = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    result = -1;
  }
  else if (vm->color == 0) {
    result = -1;
  }
  else {
    _SPRITE_VERTEX_BUFFER_B_3__position_x = (vm->sprite->width_px * vm->scale_x) / _2_0f;
    _SPRITE_VERTEX_BUFFER_B_3__position_y = (vm->sprite->height_px * vm->scale_y) / _2_0f;
    if ((vm->flags >> 8 & 1) == 0) {
      _SPRITE_VERTEX_BUFFER_B_2__position_x = (vm->pos).x - _SPRITE_VERTEX_BUFFER_B_3__position_x;
      fVar1 = (vm->pos).x;
    }
    else {
      _SPRITE_VERTEX_BUFFER_B_2__position_x = (vm->pos).x;
      fVar1 = _SPRITE_VERTEX_BUFFER_B_3__position_x + (vm->pos).x;
    }
    _SPRITE_VERTEX_BUFFER_B_3__position_x = _SPRITE_VERTEX_BUFFER_B_3__position_x + fVar1;
    if ((vm->flags >> 8 & 2) == 0) {
      _SPRITE_VERTEX_BUFFER_B_1__position_y = (vm->pos).y - _SPRITE_VERTEX_BUFFER_B_3__position_y;
      fVar1 = (vm->pos).y;
    }
    else {
      _SPRITE_VERTEX_BUFFER_B_1__position_y = (vm->pos).y;
      fVar1 = _SPRITE_VERTEX_BUFFER_B_3__position_y + (vm->pos).y;
    }
    _SPRITE_VERTEX_BUFFER_B_3__position_y = _SPRITE_VERTEX_BUFFER_B_3__position_y + fVar1;
    _SPRITE_VERTEX_BUFFER_B_0___position_x_ = _SPRITE_VERTEX_BUFFER_B_2__position_x;
    _SPRITE_VERTEX_BUFFER_B_0__position_y = _SPRITE_VERTEX_BUFFER_B_1__position_y;
    _SPRITE_VERTEX_BUFFER_B_1__position_x = _SPRITE_VERTEX_BUFFER_B_3__position_x;
    _SPRITE_VERTEX_BUFFER_B_2__position_y = _SPRITE_VERTEX_BUFFER_B_3__position_y;
    result = __sub_432730(this,vm,0);
  }
  return result;
}


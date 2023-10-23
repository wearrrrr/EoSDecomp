
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::__draw_vm_2(AnmManager *this,AnmVm *vm)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int result;
  float10 fVar8;
  
  if ((vm->rotation).z == (float)__0f) {
    result = __draw_vm_1(this,vm);
  }
  else if ((vm->flags & 1) == 0) {
    result = -1;
  }
  else if ((vm->flags >> 1 & 1) == 0) {
    result = -1;
  }
  else if (vm->color == 0) {
    result = -1;
  }
  else {
    fVar8 = (float10)(vm->rotation).z;
    fVar3 = (float10)fcos(fVar8);
    fVar8 = (float10)fsin(fVar8);
    fVar1 = (float)fVar3;
    fVar2 = (float)fVar8;
    fVar4 = ROUND((vm->pos).x);
    fVar5 = ROUND((vm->pos).y);
    fVar6 = ROUND((vm->sprite->width_px * vm->scale_x) / _2_0f);
    fVar7 = ROUND((vm->sprite->height_px * vm->scale_y) / _2_0f);
    __sub_432C80((float *)&SPRITE_VERTEX_BUFFER_B_0___position_x_,-fVar6 - __5f,-fVar7 - __5f,fVar2,
                 fVar1,fVar4,fVar5);
    __sub_432C80((float *)&SPRITE_VERTEX_BUFFER_B_1__position_x,fVar6 - __5f,-fVar7 - __5f,fVar2,
                 fVar1,fVar4,fVar5);
    __sub_432C80((float *)&SPRITE_VERTEX_BUFFER_B_2__position_x,-fVar6 - __5f,fVar7 - __5f,fVar2,
                 fVar1,fVar4,fVar5);
    __sub_432C80((float *)&SPRITE_VERTEX_BUFFER_B_3__position_x,fVar6 - __5f,fVar7 - __5f,fVar2,
                 fVar1,fVar4,fVar5);
    _SPRITE_VERTEX_BUFFER_B_0__position_z = (vm->pos).z;
    if ((vm->flags >> 8 & 1) != 0) {
      _SPRITE_VERTEX_BUFFER_B_0___position_x_ = _SPRITE_VERTEX_BUFFER_B_0___position_x_ + fVar6;
      _SPRITE_VERTEX_BUFFER_B_1__position_x = _SPRITE_VERTEX_BUFFER_B_1__position_x + fVar6;
      _SPRITE_VERTEX_BUFFER_B_2__position_x = _SPRITE_VERTEX_BUFFER_B_2__position_x + fVar6;
      _SPRITE_VERTEX_BUFFER_B_3__position_x = _SPRITE_VERTEX_BUFFER_B_3__position_x + fVar6;
    }
    if ((vm->flags >> 8 & 2) != 0) {
      _SPRITE_VERTEX_BUFFER_B_0__position_y = _SPRITE_VERTEX_BUFFER_B_0__position_y + fVar7;
      _SPRITE_VERTEX_BUFFER_B_1__position_y = _SPRITE_VERTEX_BUFFER_B_1__position_y + fVar7;
      _SPRITE_VERTEX_BUFFER_B_2__position_y = _SPRITE_VERTEX_BUFFER_B_2__position_y + fVar7;
      _SPRITE_VERTEX_BUFFER_B_3__position_y = _SPRITE_VERTEX_BUFFER_B_3__position_y + fVar7;
    }
    _SPRITE_VERTEX_BUFFER_B_1__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
    _SPRITE_VERTEX_BUFFER_B_2__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
    _SPRITE_VERTEX_BUFFER_B_3__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
    result = __sub_432730(this,vm,0);
  }
  return result;
}


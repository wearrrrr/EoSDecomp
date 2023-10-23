
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall AnmManager::__sub_432730(AnmManager *this,AnmVm *vm,int round_inputs)

{
  if (round_inputs != 0) {
    _SPRITE_VERTEX_BUFFER_B_0___position_x_ = ROUND(_SPRITE_VERTEX_BUFFER_B_0___position_x_) - __5f;
    _SPRITE_VERTEX_BUFFER_B_1__position_x = ROUND(_SPRITE_VERTEX_BUFFER_B_1__position_x) - __5f;
    _SPRITE_VERTEX_BUFFER_B_0__position_y = ROUND(_SPRITE_VERTEX_BUFFER_B_0__position_y) - __5f;
    _SPRITE_VERTEX_BUFFER_B_2__position_y = ROUND(_SPRITE_VERTEX_BUFFER_B_2__position_y) - __5f;
    _SPRITE_VERTEX_BUFFER_B_1__position_y = _SPRITE_VERTEX_BUFFER_B_0__position_y;
    _SPRITE_VERTEX_BUFFER_B_2__position_x = _SPRITE_VERTEX_BUFFER_B_0___position_x_;
    _SPRITE_VERTEX_BUFFER_B_3__position_x = _SPRITE_VERTEX_BUFFER_B_1__position_x;
    _SPRITE_VERTEX_BUFFER_B_3__position_y = _SPRITE_VERTEX_BUFFER_B_2__position_y;
  }
  _SPRITE_VERTEX_BUFFER_B_0__position_z = (vm->pos).z;
  _SPRITE_VERTEX_BUFFER_B_1__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
  _SPRITE_VERTEX_BUFFER_B_2__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
  _SPRITE_VERTEX_BUFFER_B_3__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
  if (this->current_sprite != vm->sprite) {
    this->current_sprite = vm->sprite;
    _SPRITE_VERTEX_BUFFER_B_0__texture_uv_x = (vm->sprite->uv_start).x + (vm->uv_scroll_pos).x;
    _SPRITE_VERTEX_BUFFER_B_1__texture_uv_x = (vm->sprite->uv_end).x + (vm->uv_scroll_pos).x;
    _SPRITE_VERTEX_BUFFER_B_0__texture_uv_y = (vm->sprite->uv_start).y + (vm->uv_scroll_pos).y;
    _SPRITE_VERTEX_BUFFER_B_2__texture_uv_y = (vm->sprite->uv_end).y + (vm->uv_scroll_pos).y;
    _SPRITE_VERTEX_BUFFER_B_1__texture_uv_y = _SPRITE_VERTEX_BUFFER_B_0__texture_uv_y;
    _SPRITE_VERTEX_BUFFER_B_2__texture_uv_x = _SPRITE_VERTEX_BUFFER_B_0__texture_uv_x;
    _SPRITE_VERTEX_BUFFER_B_3__texture_uv_x = _SPRITE_VERTEX_BUFFER_B_1__texture_uv_x;
    _SPRITE_VERTEX_BUFFER_B_3__texture_uv_y = _SPRITE_VERTEX_BUFFER_B_2__texture_uv_y;
    if (this->current_texture != (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index])
    {
      this->current_texture = (IDirect3DTexture8 *)this->textures[vm->sprite->source_file_index];
      (*(code *)(supervisor.d3d_device)->vtable->SetTexture)
                (supervisor.d3d_device,0,this->current_texture);
    }
  }
  if (this->current_unknown != '\x02') {
    if ((supervisor.config.flags >> 1 & 1) == 0) {
      (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x104);
    }
    else {
      (*(code *)(supervisor.d3d_device)->vtable->SetVertexShader)(supervisor.d3d_device,0x144);
    }
    this->current_unknown = '\x02';
  }
  set_render_state_for_vm(this,vm);
  if ((supervisor.config.flags >> 1 & 1) == 0) {
    (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
              (supervisor.d3d_device,5,2,&SPRITE_VERTEX_BUFFER_B_0___position_x_,0x18);
  }
  else {
    _SPRITE_VERTEX_BUFFER_A_0___position_x_ = _SPRITE_VERTEX_BUFFER_B_0___position_x_;
    _SPRITE_VERTEX_BUFFER_A_0__position_y = _SPRITE_VERTEX_BUFFER_B_0__position_y;
    _SPRITE_VERTEX_BUFFER_A_0__position_z = _SPRITE_VERTEX_BUFFER_B_0__position_z;
    _SPRITE_VERTEX_BUFFER_A_1__position_x = _SPRITE_VERTEX_BUFFER_B_1__position_x;
    _SPRITE_VERTEX_BUFFER_A_1__position_y = _SPRITE_VERTEX_BUFFER_B_1__position_y;
    _SPRITE_VERTEX_BUFFER_A_1__position_z = _SPRITE_VERTEX_BUFFER_B_1__position_z;
    _SPRITE_VERTEX_BUFFER_A_2__position_x = _SPRITE_VERTEX_BUFFER_B_2__position_x;
    _SPRITE_VERTEX_BUFFER_A_2__position_y = _SPRITE_VERTEX_BUFFER_B_2__position_y;
    _SPRITE_VERTEX_BUFFER_A_2__position_z = _SPRITE_VERTEX_BUFFER_B_2__position_z;
    _SPRITE_VERTEX_BUFFER_A_3__position_x = _SPRITE_VERTEX_BUFFER_B_3__position_x;
    _SPRITE_VERTEX_BUFFER_A_3__position_y = _SPRITE_VERTEX_BUFFER_B_3__position_y;
    _SPRITE_VERTEX_BUFFER_A_3__position_z = _SPRITE_VERTEX_BUFFER_B_3__position_z;
    _SPRITE_VERTEX_BUFFER_A_0__texture_uv_x = (vm->sprite->uv_start).x + (vm->uv_scroll_pos).x;
    _SPRITE_VERTEX_BUFFER_A_1__texture_uv_x = (vm->sprite->uv_end).x + (vm->uv_scroll_pos).x;
    _SPRITE_VERTEX_BUFFER_A_0__texture_uv_y = (vm->sprite->uv_start).y + (vm->uv_scroll_pos).y;
    _SPRITE_VERTEX_BUFFER_A_2__texture_uv_y = (vm->sprite->uv_end).y + (vm->uv_scroll_pos).y;
    _SPRITE_VERTEX_BUFFER_A_1__texture_uv_y = _SPRITE_VERTEX_BUFFER_A_0__texture_uv_y;
    _SPRITE_VERTEX_BUFFER_A_2__texture_uv_x = _SPRITE_VERTEX_BUFFER_A_0__texture_uv_x;
    _SPRITE_VERTEX_BUFFER_A_3__texture_uv_x = _SPRITE_VERTEX_BUFFER_A_1__texture_uv_x;
    _SPRITE_VERTEX_BUFFER_A_3__texture_uv_y = _SPRITE_VERTEX_BUFFER_A_2__texture_uv_y;
    (*(code *)(supervisor.d3d_device)->vtable->DrawPrimitiveUP)
              (supervisor.d3d_device,5,2,&SPRITE_VERTEX_BUFFER_A_0___position_x_,0x1c);
  }
  return 0;
}


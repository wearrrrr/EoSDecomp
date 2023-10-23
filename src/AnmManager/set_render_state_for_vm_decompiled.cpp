
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AnmManager::set_render_state_for_vm(AnmManager *this,AnmVm *vm)

{
  if ((uint)this->current_blend_mode != (vm->flags >> 2 & 1)) {
    this->current_blend_mode = (byte)(vm->flags >> 2) & 1;
    if (this->current_blend_mode == '\0') {
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x14,6);
    }
    else {
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x14,2);
    }
  }
  if ((((supervisor.config.flags & 1) == 0) && ((supervisor.config.flags >> 8 & 1) == 0)) &&
     ((uint)this->current_colorop != (vm->flags >> 3 & 1))) {
    this->current_colorop = (byte)(vm->flags >> 3) & 1;
    if (this->current_colorop == '\0') {
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,4);
    }
    else {
      (*(code *)(supervisor.d3d_device)->vtable->SetTextureStageState)(supervisor.d3d_device,0,1,7);
    }
  }
  if ((supervisor.config.flags >> 1 & 1) == 0) {
    if (this->current_texture_factor != vm->color) {
      this->current_texture_factor = vm->color;
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)
                (supervisor.d3d_device,0x3c,this->current_texture_factor);
    }
  }
  else {
    _SPRITE_VERTEX_BUFFER_A_0__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_A_1__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_A_2__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_A_3__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_C_0__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_C_1__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_C_2__diffuse = vm->color;
    _SPRITE_VERTEX_BUFFER_C_3__diffuse = vm->color;
  }
  if (((supervisor.config.flags >> 6 & 1) == 0) &&
     ((uint)this->current_zwrite_disable != (vm->flags >> 0xc & 1))) {
    this->current_zwrite_disable = (byte)(vm->flags >> 0xc) & 1;
    if (this->current_zwrite_disable == '\0') {
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0xe,1);
    }
    else {
      (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0xe,0);
    }
  }
  return;
}


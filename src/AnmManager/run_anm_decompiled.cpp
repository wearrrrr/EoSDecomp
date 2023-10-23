
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall AnmManager::run_anm(AnmManager *this,AnmVm *vm)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  float10 fVar6;
  longlong lVar7;
  undefined local_120;
  int local_e0;
  float local_3c;
  int local_38;
  int local_34;
  float local_30;
  D3DCOLOR local_2c;
  D3DCOLOR local_28;
  AnmRawInstr *ptr_instruction;
  uint32_t *local_20;
  uint32_t *local_1c;
  uint32_t *local_18;
  uint32_t *local_14;
  uint32_t *local_10;
  uint32_t *local_c;
  AnmRawInstr *ptr_instruction2;
  
  if (vm->current_instruction == (AnmRawInstr *)0x0) {
    return 1;
  }
  if (vm->pending_interrupt == 0) goto anm_next;
anm_interrupt:
  ptr_instruction = (AnmRawInstr *)0x0;
  for (ptr_instruction2 = vm->beginning_of_script;
      (((ptr_instruction2->opcode != '\x16' ||
        ((int)vm->pending_interrupt != ptr_instruction2->args[0])) &&
       (ptr_instruction2->opcode != '\0')) && (ptr_instruction2->opcode != '\x0f'));
      ptr_instruction2 =
           (AnmRawInstr *)((int)ptr_instruction2->args + (uint)ptr_instruction2->argsize)) {
    if ((ptr_instruction2->opcode == '\x16') && (ptr_instruction2->args[0] == 0xffffffff)) {
      ptr_instruction = ptr_instruction2;
    }
  }
  vm->pending_interrupt = 0;
  vm->flags = vm->flags & 0xffffdfff;
  if (ptr_instruction2->opcode != '\x16') {
    if (ptr_instruction == (AnmRawInstr *)0x0) {
      Timer::sub(&vm->current_time_in_script,1);
      goto anm_break;
    }
    ptr_instruction2 = ptr_instruction;
  }
  vm->current_instruction =
       (AnmRawInstr *)((int)ptr_instruction2->args + (uint)ptr_instruction2->argsize);
  (vm->current_time_in_script).current = (int)(short)vm->current_instruction->time;
  (vm->current_time_in_script).subframe = 0.0;
  (vm->current_time_in_script).previous = -999;
  vm->flags = vm->flags | 1;
anm_next:
  ptr_instruction2 = vm->current_instruction;
  if ((vm->current_time_in_script).current < (int)(short)ptr_instruction2->time) goto anm_break;
  switch(ptr_instruction2->opcode) {
  case '\0':
    vm->flags = vm->flags & 0xfffffffe;
  case '\x0f':
    vm->current_instruction = (AnmRawInstr *)0x0;
    return 1;
  case '\x01':
    vm->flags = vm->flags | 1;
    set_vm_sprite(this,vm,ptr_instruction2->args[0] + this->sprite_indices[vm->anm_file_index]);
    vm->time_of_last_sprite_set = (vm->current_time_in_script).current;
    break;
  case '\x02':
    vm->scale_x = (float)ptr_instruction2->args[0];
    vm->scale_y = (float)ptr_instruction2->args[1];
    break;
  case '\x03':
    *(char *)((int)&vm->color + 3) = (char)ptr_instruction2->args[0];
    break;
  case '\x04':
    vm->color = vm->color & 0xff000000 | ptr_instruction2->args[0] & 0xffffff;
    break;
  case '\x05':
    goto anm_5__jump;
  case '\a':
    vm->flags = vm->flags & 0xffffff3f | (vm->flags >> 6 & 3 ^ 1) << 6;
    vm->scale_x = vm->scale_x * _1_0f;
    break;
  case '\b':
    vm->flags = vm->flags & 0xffffff3f | (vm->flags >> 6 & 3 ^ 2) << 6;
    vm->scale_y = vm->scale_y * _1_0f;
    break;
  case '\t':
    (vm->rotation).x = (float)ptr_instruction2->args[0];
    (vm->rotation).y = (float)ptr_instruction2->args[1];
    local_10 = ptr_instruction2->args + 2;
    (vm->rotation).z = (float)*local_10;
    break;
  case '\n':
    (vm->angle_velocity).x = (float)ptr_instruction2->args[0];
    (vm->angle_velocity).y = (float)ptr_instruction2->args[1];
    local_14 = ptr_instruction2->args + 2;
    (vm->angle_velocity).z = (float)*local_14;
    break;
  case '\v':
    vm->scale_interp_final_x = (float)ptr_instruction2->args[0];
    local_18 = ptr_instruction2->args + 1;
    vm->scale_interp_final_y = (float)*local_18;
    vm->scale_interp_end_time = 0;
    break;
  case '\f':
    local_20 = ptr_instruction2->args;
    vm->alpha_interp_initial = vm->color;
    vm->alpha_interp_final = vm->color & 0xffffff | *local_20 << 0x18;
    vm->alpha_interp_end_time = *(uint16_t *)(ptr_instruction2->args + 1);
    (vm->alpha_interp_time).current = 0;
    (vm->alpha_interp_time).subframe = 0.0;
    (vm->alpha_interp_time).previous = -999;
    break;
  case '\r':
    vm->flags = vm->flags | 4;
    break;
  case '\x0e':
    vm->flags = vm->flags & 0xfffffffb;
    break;
  case '\x10':
    vm->flags = vm->flags | 1;
    local_c = ptr_instruction2->args;
    uVar1 = *(ushort *)(ptr_instruction2->args + 1);
    if (uVar1 == 0) {
      local_e0 = 0;
    }
    else {
      uVar4 = Rng::rand_word(&Rng);
      local_e0 = (int)((ulonglong)uVar4 % (ulonglong)(longlong)(int)(uint)uVar1);
    }
    set_vm_sprite(this,vm,*local_c + local_e0 + this->sprite_indices[vm->anm_file_index]);
    vm->time_of_last_sprite_set = (vm->current_time_in_script).current;
    break;
  case '\x11':
    if ((vm->flags >> 5 & 1) == 0) {
      fVar2 = (float)ptr_instruction2->args[2];
      fVar3 = (float)ptr_instruction2->args[1];
      (vm->pos).x = (float)ptr_instruction2->args[0];
      (vm->pos).y = fVar3;
      (vm->pos).z = fVar2;
    }
    else {
      fVar2 = (float)ptr_instruction2->args[2];
      fVar3 = (float)ptr_instruction2->args[1];
      (vm->pos_2).x = (float)ptr_instruction2->args[0];
      (vm->pos_2).y = fVar3;
      (vm->pos_2).z = fVar2;
    }
    break;
  case '\x12':
    vm->flags = vm->flags & 0xfffff3ff;
    goto LAB_00433f53;
  case '\x13':
    vm->flags = vm->flags & 0xfffff3ff | 0x400;
    goto LAB_00433f53;
  case '\x14':
    vm->flags = vm->flags & 0xfffff3ff | 0x800;
LAB_00433f53:
    if ((vm->flags >> 5 & 1) == 0) {
      (vm->pos_interp_initial).x = (vm->pos).x;
      (vm->pos_interp_initial).y = (vm->pos).y;
      (vm->pos_interp_initial).z = (vm->pos).z;
    }
    else {
      (vm->pos_interp_initial).x = (vm->pos_2).x;
      (vm->pos_interp_initial).y = (vm->pos_2).y;
      (vm->pos_interp_initial).z = (vm->pos_2).z;
    }
    fVar2 = (float)ptr_instruction2->args[2];
    fVar3 = (float)ptr_instruction2->args[1];
    (vm->pos_interp_final).x = (float)ptr_instruction2->args[0];
    (vm->pos_interp_final).y = fVar3;
    (vm->pos_interp_final).z = fVar2;
    vm->pos_interp_end_time = *(uint16_t *)(ptr_instruction2->args + 3);
    (vm->pos_interp_time).current = 0;
    (vm->pos_interp_time).subframe = 0.0;
    (vm->pos_interp_time).previous = -999;
    break;
  case '\x15':
    goto anm_21__anm_halt;
  case '\x17':
    vm->flags = vm->flags | 0x300;
    break;
  case '\x18':
    goto anm_24__anm_halt_invisible;
  case '\x19':
    vm->flags = vm->flags & 0xffffffdf | (ptr_instruction2->args[0] & 1) << 5;
    break;
  case '\x1a':
    vm->auto_rotate = *(uint16_t *)ptr_instruction2->args;
    break;
  case '\x1b':
    (vm->uv_scroll_pos).x = (vm->uv_scroll_pos).x + (float)ptr_instruction2->args[0];
    if ((vm->uv_scroll_pos).x < _1_0f) {
      if ((vm->uv_scroll_pos).x < (float)__0f) {
        (vm->uv_scroll_pos).x = (vm->uv_scroll_pos).x + _1_0f;
      }
    }
    else {
      (vm->uv_scroll_pos).x = (vm->uv_scroll_pos).x - _1_0f;
    }
    break;
  case '\x1c':
    (vm->uv_scroll_pos).y = (vm->uv_scroll_pos).y + (float)ptr_instruction2->args[0];
    if ((vm->uv_scroll_pos).y < _1_0f) {
      if ((vm->uv_scroll_pos).y < (float)__0f) {
        (vm->uv_scroll_pos).y = (vm->uv_scroll_pos).y + _1_0f;
      }
    }
    else {
      (vm->uv_scroll_pos).y = (vm->uv_scroll_pos).y - _1_0f;
    }
    break;
  case '\x1d':
    vm->flags = vm->flags & 0xfffffffe | ptr_instruction2->args[0] & 1;
    break;
  case '\x1e':
    vm->scale_interp_final_x = (float)ptr_instruction2->args[0];
    vm->scale_interp_final_y = (float)ptr_instruction2->args[1];
    local_1c = ptr_instruction2->args + 2;
    vm->scale_interp_end_time = *(uint16_t *)local_1c;
    (vm->scale_interp_time).current = 0;
    (vm->scale_interp_time).subframe = 0.0;
    (vm->scale_interp_time).previous = -999;
    vm->scale_interp_inital_x = vm->scale_x;
    vm->scale_interp_inital_y = vm->scale_y;
    break;
  case '\x1f':
    vm->flags = vm->flags & 0xffffefff | (ptr_instruction2->args[0] & 1) << 0xc;
  }
  vm->current_instruction =
       (AnmRawInstr *)((int)ptr_instruction2->args + (uint)ptr_instruction2->argsize);
  goto anm_next;
anm_24__anm_halt_invisible:
  vm->flags = vm->flags & 0xfffffffe;
anm_21__anm_halt:
  if (vm->pending_interrupt == 0) {
    vm->flags = vm->flags | 0x2000;
    Timer::sub(&vm->current_time_in_script,1);
anm_break:
    if ((vm->angle_velocity).x != (float)__0f) {
      fVar6 = reduce_angle((vm->rotation).x,supervisor.game_speed * (vm->angle_velocity).x);
      (vm->rotation).x = (float)fVar6;
    }
    if ((vm->angle_velocity).y != (float)__0f) {
      fVar6 = reduce_angle((vm->rotation).y,supervisor.game_speed * (vm->angle_velocity).y);
      (vm->rotation).y = (float)fVar6;
    }
    if ((vm->angle_velocity).z != (float)__0f) {
      fVar6 = reduce_angle((vm->rotation).z,supervisor.game_speed * (vm->angle_velocity).z);
      (vm->rotation).z = (float)fVar6;
    }
    if ((short)vm->scale_interp_end_time < 1) {
      vm->scale_y = supervisor.game_speed * vm->scale_interp_final_y + vm->scale_y;
      vm->scale_x = supervisor.game_speed * vm->scale_interp_final_x + vm->scale_x;
    }
    else {
      (vm->scale_interp_time).previous = (vm->scale_interp_time).current;
      Supervisor::tick_timer
                (&supervisor,&(vm->scale_interp_time).current,&(vm->scale_interp_time).subframe);
      if ((vm->scale_interp_time).current < (int)(short)vm->scale_interp_end_time) {
        vm->scale_x = (((float)(vm->scale_interp_time).current + (vm->scale_interp_time).subframe) *
                      (vm->scale_interp_final_x - vm->scale_interp_inital_x)) /
                      (float)(int)(short)vm->scale_interp_end_time + vm->scale_interp_inital_x;
        vm->scale_y = (((float)(vm->scale_interp_time).current + (vm->scale_interp_time).subframe) *
                      (vm->scale_interp_final_y - vm->scale_interp_inital_y)) /
                      (float)(int)(short)vm->scale_interp_end_time + vm->scale_interp_inital_y;
      }
      else {
        vm->scale_y = vm->scale_interp_final_y;
        vm->scale_x = vm->scale_interp_final_x;
        vm->scale_interp_end_time = 0;
        vm->scale_interp_final_y = 0.0;
        vm->scale_interp_final_x = 0.0;
      }
      if ((vm->flags >> 6 & 1) != 0) {
        vm->scale_x = vm->scale_x * _1_0f;
      }
      if ((vm->flags >> 6 & 2) != 0) {
        vm->scale_y = vm->scale_y * _1_0f;
      }
    }
    if (0 < (short)vm->alpha_interp_end_time) {
      (vm->alpha_interp_time).previous = (vm->alpha_interp_time).current;
      Supervisor::tick_timer
                (&supervisor,&(vm->alpha_interp_time).current,&(vm->alpha_interp_time).subframe);
      local_2c = vm->alpha_interp_initial;
      local_28 = vm->alpha_interp_final;
      local_30 = ((float)(vm->alpha_interp_time).current + (vm->alpha_interp_time).subframe) /
                 (float)(int)(short)vm->alpha_interp_end_time;
      if (_1_0f <= local_30) {
        local_30 = 1.0;
      }
      for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
        lVar7 = __ftol2((double)(((float)(uint)*(byte *)((int)&local_28 + local_38) -
                                 (float)(uint)*(byte *)((int)&local_2c + local_38)) * local_30 +
                                (float)(uint)*(byte *)((int)&local_2c + local_38)));
        local_34 = (int)lVar7;
        if (local_34 < 0) {
          local_34 = 0;
        }
        if (local_34 < 0x100) {
          local_120 = (undefined)local_34;
        }
        else {
          local_120 = 0xff;
        }
        *(undefined *)((int)&local_2c + local_38) = local_120;
      }
      vm->color = local_2c;
      if ((int)(short)vm->alpha_interp_end_time <= (vm->alpha_interp_time).current) {
        vm->alpha_interp_end_time = 0;
      }
    }
    if (vm->pos_interp_end_time != 0) {
      local_3c = ((float)(vm->pos_interp_time).current + (vm->pos_interp_time).subframe) /
                 (float)(int)(short)vm->pos_interp_end_time;
      if (_1_0f <= local_3c) {
        local_3c = 1.0;
      }
      uVar5 = vm->flags >> 10 & 3;
      if (uVar5 == 1) {
        local_3c = _1_0f - (_1_0f - local_3c) * (_1_0f - local_3c);
      }
      else if (uVar5 == 2) {
        local_3c = _1_0f - local_3c;
        local_3c = _1_0f - local_3c * local_3c * local_3c * local_3c;
      }
      if ((vm->flags >> 5 & 1) == 0) {
        (vm->pos).x = (_1_0f - local_3c) * (vm->pos_interp_initial).x +
                      local_3c * (vm->pos_interp_final).x;
        (vm->pos).y = (_1_0f - local_3c) * (vm->pos_interp_initial).y +
                      local_3c * (vm->pos_interp_final).y;
        (vm->pos).z = (_1_0f - local_3c) * (vm->pos_interp_initial).z +
                      local_3c * (vm->pos_interp_final).z;
      }
      else {
        (vm->pos_2).x =
             (_1_0f - local_3c) * (vm->pos_interp_initial).x + local_3c * (vm->pos_interp_final).x;
        (vm->pos_2).y =
             (_1_0f - local_3c) * (vm->pos_interp_initial).y + local_3c * (vm->pos_interp_final).y;
        (vm->pos_2).z =
             (_1_0f - local_3c) * (vm->pos_interp_initial).z + local_3c * (vm->pos_interp_final).z;
      }
      if ((int)(short)vm->pos_interp_end_time <= (vm->pos_interp_time).current) {
        vm->pos_interp_end_time = 0;
      }
      (vm->pos_interp_time).previous = (vm->pos_interp_time).current;
      Supervisor::tick_timer
                (&supervisor,&(vm->pos_interp_time).current,&(vm->pos_interp_time).subframe);
    }
    (vm->current_time_in_script).previous = (vm->current_time_in_script).current;
    Supervisor::tick_timer
              (&supervisor,&(vm->current_time_in_script).current,
               &(vm->current_time_in_script).subframe);
    return 0;
  }
  goto anm_interrupt;
anm_5__jump:
  vm->current_instruction =
       (AnmRawInstr *)((int)vm->beginning_of_script->args + (ptr_instruction2->args[0] - 4));
  (vm->current_time_in_script).current = (int)(short)vm->current_instruction->time;
  goto anm_next;
}


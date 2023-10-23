
/* WARNING: Removing unreachable block (ram,0x004268b2) */
/* WARNING: Removing unreachable block (ram,0x00426be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Player::check_bullet_collisions(Player *this,Float3 *position,Float3 *size,int *hit_by_bomb_out)

{
  Float3 *pFVar1;
  Float3 *pFVar2;
  float fVar3;
  short sVar4;
  int local_d4;
  short local_80;
  Float3 local_40;
  int local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_c;
  PlayerBullet *bullets;
  AnmManager *anm_mgr;
  
  local_34 = 0;
  local_30 = position->x - size->x / _2_0f;
  local_2c = position->y - size->y / _2_0f;
  local_18 = size->x / _2_0f + position->x;
  local_14 = size->y / _2_0f + position->y;
  bullets = this->bullets;
  if (hit_by_bomb_out != (int *)0x0) {
    *hit_by_bomb_out = 0;
  }
  for (local_c = 0; local_c < 0x50; local_c = local_c + 1) {
    if ((bullets->state != 0) && ((bullets->state == 1 || (bullets->short_150 == 2)))) {
      local_40.x = (bullets->position).x - (bullets->size).x / _2_0f;
      local_40.y = (bullets->position).y - (bullets->size).y / _2_0f;
      local_24 = (bullets->size).x / _2_0f + (bullets->position).x;
      local_20 = (bullets->size).y / _2_0f + (bullets->position).y;
      if ((local_40.y <= local_14) &&
         (((local_40.x <= local_18 && (local_2c <= local_20)) && (local_30 <= local_24)))) {
        if ((this->player_inner).dword_0 == 0) {
          local_d4 = (int)bullets->short_14C;
        }
        else if ((int)bullets->short_14C / 3 == 0) {
          local_d4 = 1;
        }
        else {
          local_d4 = (int)bullets->short_14C / 3;
        }
        local_34 = local_34 + local_d4;
        if (bullets->short_150 == 2) {
          bullets->short_14C =
               (int16_t)((int)((int)bullets->short_14C + ((int)bullets->short_14C >> 0x1f & 3U)) >>
                        2);
          if (bullets->short_14C == 0) {
            bullets->short_14C = 1;
          }
          switch((bullets->primary_vm).anm_file_index) {
          case 0x441:
            (bullets->size).x = 32.0;
            (bullets->size).y = 32.0;
            break;
          case 0x442:
            (bullets->size).x = 42.0;
            (bullets->size).y = 42.0;
            break;
          case 0x443:
            (bullets->size).x = 48.0;
            (bullets->size).y = 48.0;
            break;
          case 0x444:
            (bullets->size).x = 48.0;
            (bullets->size).y = 48.0;
          }
          if ((bullets->timer_140).current % 6 == 0) {
            EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),5,
                       &bullets->position,1,0xffffffff);
          }
        }
        anm_mgr = anm_manager_ptr;
        if (bullets->short_150 == 3) {
          this->byte_9E4 = this->byte_9E4 + '\x01';
          if ((this->byte_9E4 & 7) == 0) {
            local_40.y = position->y;
            local_40.z = position->z;
            local_40.x = (bullets->position).x;
            EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),5,&local_40,1,
                       0xffffffff);
          }
        }
        else {
          if (bullets->state == 1) {
            sVar4 = (bullets->primary_vm).anm_file_index;
            local_80 = sVar4 + 0x20;
            (bullets->primary_vm).anm_file_index = local_80;
            AnmManager::set_vm_script
                      (anm_mgr,&bullets->primary_vm,(AnmRawScript *)anm_mgr->scripts[sVar4 + 0x20]);
            EffectManager::spawn_effect
                      ((EffectManager *)
                       ((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c),5,
                       &bullets->position,1,0xffffffff);
            (bullets->position).z = 0.1;
          }
          bullets->state = 2;
          bullets->float_128 = bullets->float_128 / _8_0f;
          bullets->float_12C = bullets->float_12C / _8_0f;
        }
      }
    }
    bullets = bullets + 1;
  }
  for (local_c = 0; local_c < 0x20; local_c = local_c + 1) {
    fVar3 = this->size_array_638[local_c].x;
    if (fVar3 < (float)__0f == (fVar3 == (float)__0f)) {
      pFVar1 = this->size_array_638 + local_c;
      fVar3 = _1_0f / _2_0f;
      pFVar2 = this->position_array_4B8 + local_c;
      local_40.z = pFVar2->z - fVar3 * pFVar1->z;
      local_40.y = pFVar2->y - fVar3 * pFVar1->y;
      local_40.x = pFVar2->x - fVar3 * pFVar1->x;
      pFVar1 = this->size_array_638 + local_c;
      fVar3 = _1_0f / _2_0f;
      pFVar2 = this->position_array_4B8 + local_c;
      local_1c = fVar3 * pFVar1->z + pFVar2->z;
      local_20 = fVar3 * pFVar1->y + pFVar2->y;
      local_24 = fVar3 * pFVar1->x + pFVar2->x;
      if (((local_40.x <= local_18) && (local_30 <= local_24)) &&
         ((local_40.y <= local_14 && (local_2c <= local_20)))) {
        local_34 = local_34 + this->dword_array_7B8[local_c];
        this->dword_array_838[local_c] =
             this->dword_array_838[local_c] + this->dword_array_7B8[local_c];
        this->byte_9E4 = this->byte_9E4 + '\x01';
        if ((this->byte_9E4 & 3) == 0) {
          EffectManager::spawn_effect
                    ((EffectManager *)((int)&enemy_manager.template.vms[0].matrix.field0_0x0 + 0x3c)
                     ,3,position,1,0xffffffff);
        }
        if (((this->player_inner).dword_0 != 0) && (hit_by_bomb_out != (int *)0x0)) {
          *hit_by_bomb_out = 1;
        }
      }
    }
  }
  return local_34;
}


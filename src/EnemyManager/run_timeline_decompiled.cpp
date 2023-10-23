
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall EnemyManager::run_timeline(EnemyManager *this)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  float10 fVar4;
  Float3 local_4c;
  Float3 local_40;
  float *local_34;
  Float3 local_30;
  Float3 local_24;
  float *local_18;
  Float3 *local_14;
  Float3 *local_10;
  int local_c;
  float *local_8;
  
  if ((this->timeline_time).previous == 0) {
    (this->timeline_time).previous = (int32_t)enemy_manager.template.primary_vm.rotation.x;
  }
  bVar3 = Gui::msg_is_active(&gui);
  if (((CONCAT31(extraout_var,bVar3) == 0) &&
      (local_c = game_manager.lives_remaining * -0xf0 + 0x960,
      this[1].stg_ecl_anm_filename != (char *)(this->timeline_time).subframe)) &&
     ((int)this[1].stg_ecl_anm_filename % local_c == 0)) {
    GameManager::increase_rank(&game_manager,100);
  }
  while (fVar2 = game_manager.__float2_1a54.x, -1 < *(short *)(this->timeline_time).previous) {
    if (this[1].stg_ecl_anm_filename == (char *)(int)*(short *)(this->timeline_time).previous) {
      switch(*(undefined2 *)((this->timeline_time).previous + 4)) {
      case 0:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_10 = (Float3 *)(iVar1 + 8);
          create_enemy(this,*(word *)((this->timeline_time).previous + 2),local_10,
                       CONCAT22((short)((uint)local_10 >> 0x10),*(undefined2 *)(iVar1 + 0x14)),
                       (byte)*(undefined2 *)(iVar1 + 0x16),*(int *)(iVar1 + 0x18));
        }
        break;
      case 1:
        if (gui.boss_present == false) {
          create_enemy(this,*(word *)((this->timeline_time).previous + 2),
                       (Float3 *)((this->timeline_time).previous + 8),-1,0xff,-1);
        }
        break;
      case 2:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_14 = (Float3 *)(iVar1 + 8);
          local_8 = create_enemy(this,*(word *)((this->timeline_time).previous + 2),local_14,
                                 CONCAT22((short)((uint)local_14 >> 0x10),
                                          *(undefined2 *)(iVar1 + 0x14)),
                                 (byte)*(undefined2 *)(iVar1 + 0x16),*(int *)(iVar1 + 0x18));
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 3:
        if (gui.boss_present == false) {
          local_8 = create_enemy(this,*(word *)((this->timeline_time).previous + 2),
                                 (Float3 *)((this->timeline_time).previous + 8),-1,0xff,-1);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 4:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_18 = (float *)(iVar1 + 8);
          local_24.x = *local_18;
          local_24.y = *(float *)(iVar1 + 0xc);
          local_24.z = *(float *)(iVar1 + 0x10);
          if (*local_18 < _990_0f != (*local_18 == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_24.x = (float)(fVar4 * (float10)fVar2);
          }
          fVar2 = game_manager.__float2_1a54.y;
          if (local_18[1] < _990_0f != (local_18[1] == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_24.y = (float)(fVar4 * (float10)fVar2);
          }
          if (local_18[2] < _990_0f != (local_18[2] == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_24.z = (float)(fVar4 * (float10)ram0x0046a6dc);
          }
          create_enemy(this,*(word *)((this->timeline_time).previous + 2),&local_24,
                       CONCAT22((short)((uint)local_18 >> 0x10),*(undefined2 *)(local_18 + 3)),
                       (byte)*(undefined2 *)((int)local_18 + 0xe),(int)local_18[4]);
        }
        break;
      case 5:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_30.x = *(float *)(iVar1 + 8);
          local_30.y = *(float *)(iVar1 + 0xc);
          local_30.z = *(float *)(iVar1 + 0x10);
          if (local_30.x < _990_0f != (local_30.x == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_30.x = (float)(fVar4 * (float10)fVar2);
          }
          fVar2 = game_manager.__float2_1a54.y;
          if (local_30.y < _990_0f != (local_30.y == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_30.y = (float)(fVar4 * (float10)fVar2);
          }
          if (local_30.z < _990_0f != (local_30.z == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_30.z = (float)(fVar4 * (float10)ram0x0046a6dc);
          }
          create_enemy(this,*(word *)((this->timeline_time).previous + 2),&local_30,-1,0xff,-1);
        }
        break;
      case 6:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_34 = (float *)(iVar1 + 8);
          local_40.x = *local_34;
          local_40.y = *(float *)(iVar1 + 0xc);
          local_40.z = *(float *)(iVar1 + 0x10);
          if (*local_34 < _990_0f != (*local_34 == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_40.x = (float)(fVar4 * (float10)fVar2);
          }
          fVar2 = game_manager.__float2_1a54.y;
          if (local_34[1] < _990_0f != (local_34[1] == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_40.y = (float)(fVar4 * (float10)fVar2);
          }
          if (local_34[2] < _990_0f != (local_34[2] == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_40.z = (float)(fVar4 * (float10)ram0x0046a6dc);
          }
          local_8 = create_enemy(this,*(word *)((this->timeline_time).previous + 2),&local_40,
                                 CONCAT22((short)((uint)local_34 >> 0x10),
                                          *(undefined2 *)(local_34 + 3)),
                                 (byte)*(undefined2 *)((int)local_34 + 0xe),(int)local_34[4]);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 7:
        if (gui.boss_present == false) {
          iVar1 = (this->timeline_time).previous;
          local_4c.x = *(float *)(iVar1 + 8);
          local_4c.y = *(float *)(iVar1 + 0xc);
          local_4c.z = *(float *)(iVar1 + 0x10);
          if (local_4c.x < _990_0f != (local_4c.x == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_4c.x = (float)(fVar4 * (float10)fVar2);
          }
          fVar2 = game_manager.__float2_1a54.y;
          if (local_4c.y < _990_0f != (local_4c.y == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_4c.y = (float)(fVar4 * (float10)fVar2);
          }
          if (local_4c.z < _990_0f != (local_4c.z == _990_0f)) {
            fVar4 = Rng::randf_0_to_1(&Rng);
            local_4c.z = (float)(fVar4 * (float10)ram0x0046a6dc);
          }
          local_8 = create_enemy(this,*(word *)((this->timeline_time).previous + 2),&local_4c,-1,
                                 0xff,-1);
          *(byte *)(local_8 + 0x394) = *(byte *)(local_8 + 0x394) | 0x40;
        }
        break;
      case 8:
        if (((game_manager.difficulty == 0) && (game_manager.current_stage == 5)) &&
           (*(short *)((this->timeline_time).previous + 2) == 1)) {
          Gui::__read_msg_418768(&gui,(uint)(byte)game_manager.character * 10 + 3);
        }
        else {
          Gui::__read_msg_418768
                    (&gui,(int)*(short *)((this->timeline_time).previous + 2) +
                          (uint)(byte)game_manager.character * 10);
        }
        break;
      case 9:
        bVar3 = Gui::msg_is_waiting(&gui);
        if (CONCAT31(extraout_var_00,bVar3) != 0) {
          Timer::sub((Timer *)&(this->timeline_time).subframe,1);
          return;
        }
        break;
      case 10:
        this->bosses[*(int *)((this->timeline_time).previous + 8)]->run_interrupts =
             *(int32_t *)((this->timeline_time).previous + 0xc);
        break;
      case 0xb:
        game_manager.current_power = *(ushort *)((this->timeline_time).previous + 2);
        break;
      case 0xc:
        if ((this->bosses[*(short *)((this->timeline_time).previous + 2)] != (Enemy *)0x0) &&
           (this->bosses[*(short *)((this->timeline_time).previous + 2)]->flags_1 < '\0')) {
          Timer::sub((Timer *)&(this->timeline_time).subframe,1);
          return;
        }
      }
    }
    else if ((int)this[1].stg_ecl_anm_filename < (int)*(short *)(this->timeline_time).previous)
    break;
    (this->timeline_time).previous =
         (int)*(short *)((this->timeline_time).previous + 6) + (this->timeline_time).previous;
  }
  bVar3 = Gui::msg_is_active(&gui);
  if (CONCAT31(extraout_var_01,bVar3) == 0) {
    game_manager.__int_1a6c = game_manager.__int_1a6c + 1;
  }
  return;
}


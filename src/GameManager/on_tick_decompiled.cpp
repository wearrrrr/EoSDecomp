
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl GameManager::on_tick(GameManager *this)

{
  undefined4 result;
  uint uVar1;
  void *this_00;
  longlong lVar2;
  char local_c;
  uint local_8;
  
  if (this->demoplay_mode != '\0') {
    if ((input.currently_pressed != 0) && (input.currently_pressed != input.word_4)) {
      supervisor.dword_18C = 1;
    }
    *(int *)&this->field_0x1828 = *(int *)&this->field_0x1828 + 1;
    if (*(int *)&this->field_0x1828 == 0xe10) {
      ScreenEffect::operator_new(2,0x78,0,0,0);
    }
    if (0xe87 < *(int *)&this->field_0x1828) {
      supervisor.dword_18C = 1;
    }
  }
  if ((((this->__byte_1820 == '\0') && (this->__byte_181f == '\0')) && (this->demoplay_mode == '\0')
      ) && (((input.currently_pressed & 8) != 0 &&
            ((input.currently_pressed & 8) != (input.word_4 & 8))))) {
    this->__byte_181f = '\x01';
    game_manager.arcade_region_top_left_pos.x = _32_0f;
    game_manager.arcade_region_top_left_pos.y = ram0x0046a2b4;
    game_manager.arcade_region_size.x = _84_0f;
    game_manager.arcade_region_size.y = _48_0f;
    supervisor.frames_to_disable_something = 3;
  }
  if ((this->__byte_1820 == 0) && (this->__byte_181f == 0)) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  this->__byte_1821 = local_c;
  lVar2 = __ftol2((double)(this->arcade_region_top_left_pos).x);
  supervisor.viewport.X = (DWORD)lVar2;
  lVar2 = __ftol2((double)(this->arcade_region_top_left_pos).y);
  supervisor.viewport.Y = (DWORD)lVar2;
  lVar2 = __ftol2((double)(this->arcade_region_size).x);
  supervisor.viewport.Width = (DWORD)lVar2;
  lVar2 = __ftol2((double)(this->arcade_region_size).y);
  supervisor.viewport.Height = (DWORD)lVar2;
  supervisor.viewport.MinZ = __5f;
  supervisor.viewport.MaxZ = 1.0;
  __sub_41C3F3(this_00,0.0);
  (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
  (*(code *)(supervisor.d3d_device)->vtable->Clear)
            (supervisor.d3d_device,0,0,2,Stage.sky_fog.color,0x3f800000,0);
  if (((this->__byte_181f == '\x01') || (this->__byte_181f == '\x02')) ||
     (this->__byte_1820 != '\0')) {
    result = 3;
  }
  else {
    if (999999999 < (uint)this->score) {
      this->score = 999999990;
    }
    if (this->__dword_0 != this->score) {
      if ((uint)this->score < (uint)this->__dword_0) {
        this->score = this->__dword_0;
      }
      local_8 = (uint)(this->score - this->__dword_0) >> 5;
      if (local_8 < 78910) {
        if (local_8 < 10) {
          local_8 = 10;
        }
      }
      else {
        local_8 = 78910;
      }
      local_8 = local_8 - local_8 % 10;
      if ((uint)this->__dword_8 < local_8) {
        this->__dword_8 = local_8;
      }
      uVar1 = this->__dword_0 + this->__dword_8;
      if ((uint)this->score <= uVar1 && uVar1 != this->score) {
        this->__dword_8 = this->score - this->__dword_0;
      }
      this->__dword_0 = this->__dword_0 + this->__dword_8;
      if ((uint)this->score <= (uint)this->__dword_0) {
        this->__dword_8 = 0;
        this->__dword_0 = this->score;
      }
      if ((-1 < this->__byte_181c) &&
         (*(uint *)(&DAT_004764b0 + this->__byte_181c * 4) < (uint)this->__dword_0 ||
          *(uint *)(&DAT_004764b0 + this->__byte_181c * 4) == this->__dword_0)) {
                    /* Cap lives at 8, because the display can't handle any more than that. */
        if (this->lives_remaining < 8) {
          this->lives_remaining = this->lives_remaining + 1;
          SoundManager::play_sound_centered(&sound_manager,0x1c,0);
        }
        gui.flags_0 = gui.flags_0 & 0xfffffffc | 2;
        this->__byte_181c = this->__byte_181c + 1;
        increase_rank(&game_manager,200);
      }
      if ((uint)this->high_score < (uint)this->__dword_0) {
        this->high_score = this->__dword_0;
      }
    }
    *(int *)(this->field46_0x1a2e + 2) = *(int *)(this->field46_0x1a2e + 2) + 1;
    result = 1;
  }
  return result;
}


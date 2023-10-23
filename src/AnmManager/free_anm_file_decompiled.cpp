
void __thiscall AnmManager::free_anm_file(AnmManager *this,int file_index)

{
  uint32_t uVar1;
  int *anm_file_id;
  int i;
  AnmLoadedSprite *loaded_sprite;
  AnmRawSprite **anm_sprite;
  int local_14;
  
  if (this->anm_files[file_index] != (AnmRawEntry *)0x0) {
    uVar1 = this->anm_file_sprite_index_offsets[file_index];
    anm_sprite = this->anm_files[file_index]->sprites;
    for (local_14 = 0; local_14 < (int)this->anm_files[file_index]->num_sprites;
        local_14 = local_14 + 1) {
      anm_file_id = (int *)((int)this->anm_files[file_index]->sprites +
                           (int)(&(*anm_sprite)->id + -0x10));
      loaded_sprite = this->sprites + *anm_file_id + uVar1;
      for (i = 14; i != 0; i = i + -1) {
        loaded_sprite->source_file_index = 0;
        loaded_sprite = (AnmLoadedSprite *)&loaded_sprite->start_pixel_inclusive;
      }
      this->sprites[*anm_file_id + uVar1].source_file_index = 0xffffffff;
      anm_sprite = anm_sprite + 1;
    }
    for (local_14 = 0; local_14 < (int)this->anm_files[file_index]->num_scripts;
        local_14 = local_14 + 1) {
      this->scripts[(int)&(*anm_sprite)->id + uVar1] = (AnmRawInstr *)0x0;
      this->sprite_indices[(int)&(*anm_sprite)->id + uVar1] = 0;
      anm_sprite = anm_sprite + 2;
    }
    this->anm_file_sprite_index_offsets[file_index] = 0;
    free_texture(this,this->anm_files[file_index]->rt_texture_slot);
    _free(this->anm_files[file_index]);
    this->anm_files[file_index] = (AnmRawEntry *)0x0;
    this->current_blend_mode = 0xff;
    this->current_colorop = 0xff;
    this->current_unknown = 0xff;
    this->current_texture = (IDirect3DTexture8 *)0x0;
  }
  return;
}


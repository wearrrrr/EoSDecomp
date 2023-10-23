
int __thiscall
AnmManager::load_anm_file(AnmManager *this,int file_index,char *filename,int starting_sprite_index)

{
  AnmRawEntry *anm_entry;
  int result;
  AnmLoadedSprite texture_slot;
  AnmRawSprite **anmSprites;
  int i;
  int *local_10;
  char *local_c;
  AnmRawEntry *anm_files;
  
  free_anm_file(this,file_index);
  anm_entry = (AnmRawEntry *)__read_file_to_buffer(filename,0);
  this->anm_files[file_index] = anm_entry;
  anm_files = this->anm_files[file_index];
  if (anm_files == (AnmRawEntry *)0x0) {
    LogBuffer::write_error
              (&LogBuffer,
               "スプライトアニメ %s が読み込めません。データが失われてるか壊れています\n"
              );
    result = -1;
  }
  else {
    anm_files->rt_texture_slot = file_index;
    local_c = anm_files->path_1 + (int)anm_files;
    if (*local_c == '@') {
      create_texture(this,anm_files->rt_texture_slot,anm_files->width,anm_files->height,
                     anm_files->format);
    }
    else {
      result = create_texture_from_file
                         (this,anm_files->rt_texture_slot,local_c,anm_files->format,
                          anm_files->colorkey);
      if (result != 0) {
        LogBuffer::write_error
                  (&LogBuffer,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                  );
        return -1;
      }
    }
    if (anm_files->path_2 != (char *)0x0) {
      local_c = anm_files->path_2 + (int)anm_files;
      result = __maybe_add_alpha_to_texture
                         (this,anm_files->rt_texture_slot,local_c,anm_files->format,
                          anm_files->colorkey);
      if (result != 0) {
        LogBuffer::write_error
                  (&LogBuffer,
                   "テクスチャ %s が読み込めません。データが失われてるか壊れています\n"
                  );
        return -1;
      }
    }
    anm_files->unknown_runtime_var = starting_sprite_index;
    anmSprites = anm_files->sprites;
    for (i = 0; i < (int)this->anm_files[file_index]->num_sprites; i = i + 1) {
      local_10 = (int *)((int)anm_files->sprites + (int)(&(*anmSprites)->id + -16));
      texture_slot.source_file_index = this->anm_files[file_index]->rt_texture_slot;
      texture_slot.start_pixel_inclusive.x = (float)local_10[1];
      texture_slot.start_pixel_inclusive.y = (float)local_10[2];
      texture_slot.end_pixel_inclusive.x = (float)local_10[1] + (float)local_10[3];
      texture_slot.end_pixel_inclusive.y = (float)local_10[2] + (float)local_10[4];
      texture_slot.texture_width = (float)anm_files->width;
      texture_slot.texture_height = (float)anm_files->height;
      load_sprite(this,*local_10 + starting_sprite_index,&texture_slot);
      anmSprites = anmSprites + 1;
    }
    for (i = 0; i < (int)anm_files->num_scripts; i = i + 1) {
      this->scripts[(int)&(*anmSprites)->id + starting_sprite_index] =
           (AnmRawInstr *)((int)anm_files->sprites + (int)(&anmSprites[1]->id + -0x10));
      this->sprite_indices[(int)&(*anmSprites)->id + starting_sprite_index] = starting_sprite_index;
      anmSprites = anmSprites + 2;
    }
    this->anm_file_sprite_index_offsets[file_index] = starting_sprite_index;
    result = 0;
  }
  return result;
}



void __thiscall
AnmManager::load_sprite(AnmManager *this,int sprite_index,AnmLoadedSprite *sprite_data)

{
  int i;
  AnmLoadedSprite *anm_sprite;
  
  anm_sprite = this->sprites + sprite_index;
  for (i = 0xe; i != 0; i = i + -1) {
    anm_sprite->source_file_index = sprite_data->source_file_index;
    sprite_data = (AnmLoadedSprite *)&sprite_data->start_pixel_inclusive;
    anm_sprite = (AnmLoadedSprite *)&anm_sprite->start_pixel_inclusive;
  }
  this->sprites[sprite_index].sprite_id = this->loaded_sprite_count_maybe;
  this->loaded_sprite_count_maybe = this->loaded_sprite_count_maybe + 1;
  this->sprites[sprite_index].uv_start.x =
       this->sprites[sprite_index].start_pixel_inclusive.x /
       this->sprites[sprite_index].texture_width;
  this->sprites[sprite_index].uv_end.x =
       this->sprites[sprite_index].end_pixel_inclusive.x / this->sprites[sprite_index].texture_width
  ;
  this->sprites[sprite_index].uv_start.y =
       this->sprites[sprite_index].start_pixel_inclusive.y /
       this->sprites[sprite_index].texture_height;
  this->sprites[sprite_index].uv_end.y =
       this->sprites[sprite_index].end_pixel_inclusive.y /
       this->sprites[sprite_index].texture_height;
  this->sprites[sprite_index].width_px =
       this->sprites[sprite_index].end_pixel_inclusive.x -
       this->sprites[sprite_index].start_pixel_inclusive.x;
  this->sprites[sprite_index].height_px =
       this->sprites[sprite_index].end_pixel_inclusive.y -
       this->sprites[sprite_index].start_pixel_inclusive.y;
  return;
}


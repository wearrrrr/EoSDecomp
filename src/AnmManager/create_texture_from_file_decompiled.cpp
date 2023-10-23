
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
AnmManager::create_texture_from_file
          (AnmManager *this,int texture_index,char *filename,int D3DFmtTableIndex,D3DCOLOR color_key
          )

{
  char *buffer;
  int result;
  int new_texture;
  
  free_texture(this,texture_index);
  buffer = __read_file_to_buffer(filename,0);
  this->image_data_array[texture_index] = buffer;
  if (this->image_data_array[texture_index] == (void *)0x0) {
    result = -1;
  }
  else {
    if ((supervisor.config.flags >> 2 & 1) != 0) {
      if ((*(int *)(&AnmD3DFormats_D3DFORMATTable + D3DFmtTableIndex * 4) == 0x15) ||
         (*(int *)(&AnmD3DFormats_D3DFORMATTable + D3DFmtTableIndex * 4) == 0)) {
        D3DFmtTableIndex = 5;
      }
      else if (*(int *)(&AnmD3DFormats_D3DFORMATTable + D3DFmtTableIndex * 4) == 0x14) {
        D3DFmtTableIndex = 3;
      }
    }
    new_texture = D3DXCreateTextureFromFileInMemoryEx
                            ((int *)supervisor.d3d_device,
                             (uint *)this->image_data_array[texture_index],___current_filesize,0,0,0
                             ,0,*(uint *)(&AnmD3DFormats_D3DFORMATTable + D3DFmtTableIndex * 4),1,
                             (int *)0x3,(int *)0xffffffff,color_key,(undefined4 *)0x0,(uint *)0x0,
                             (int **)(this->textures + texture_index));
    if (new_texture == 0) {
      result = 0;
    }
    else {
      result = -1;
    }
  }
  return result;
}


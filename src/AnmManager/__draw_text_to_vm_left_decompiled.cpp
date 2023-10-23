
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnmManager::__draw_text_to_vm_left
          (AnmManager *anm_manager,AnmVm *vm,D3DCOLOR colorA,D3DCOLOR colorB,char *format)

{
  int height;
  int width;
  int y_pos;
  uint font_width;
  uint font_height;
  longlong float_to_long;
  uint unaff_retaddr;
  char *text;
  char local_4c [64];
  uint local_c;
  int **local_8;
  
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  font_width = (uint)vm->font_width;
  local_8 = (int **)&stack0x00000018;
  _vsprintf(local_4c,(byte *)format,local_8);
  local_8 = (int **)0x0;
  text = local_4c;
  font_height = (uint)vm->font_height;
  float_to_long = __ftol2((double)vm->sprite->texture_height);
  height = (int)float_to_long;
  float_to_long = __ftol2((double)vm->sprite->texture_width);
  width = (int)float_to_long;
  float_to_long = __ftol2((double)(vm->sprite->start_pixel_inclusive).y);
  y_pos = (int)float_to_long;
  float_to_long = __ftol2((double)(vm->sprite->start_pixel_inclusive).x);
  __draw_text_to_texture
            (vm->sprite->source_file_index,(int)float_to_long,y_pos,width,height,font_width,
             font_height,colorA,colorB,text);
  vm->flags = vm->flags | 1;
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}


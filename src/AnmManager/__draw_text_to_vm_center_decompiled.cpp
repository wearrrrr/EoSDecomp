
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnmManager::__draw_text_to_vm_center
          (AnmManager *anm_manager,AnmVm *vm,D3DCOLOR colorA,D3DCOLOR colorB,char *format)

{
  char cVar1;
  uint font_height;
  int sprite_texture_height;
  int sprite_texture_width;
  int y_pos;
  uint uVar2;
  longlong lVar3;
  uint unaff_retaddr;
  D3DCOLOR colorA_00;
  D3DCOLOR colorB_00;
  char *pcVar4;
  char *local_60;
  uint local_5c;
  char local_54 [68];
  uint local_10;
  int local_c;
  int **local_8;
  
  local_10 = _DAT_0047a630 ^ unaff_retaddr;
  if (vm->font_width == '\0') {
    local_5c = 0xf;
  }
  else {
    local_5c = (uint)vm->font_width;
  }
  local_8 = (int **)&stack0x00000018;
  _vsprintf(local_54,(byte *)format,local_8);
  local_8 = (int **)0x0;
  pcVar4 = " ";
  font_height = (uint)vm->font_height;
  uVar2 = local_5c;
  colorA_00 = colorA;
  colorB_00 = colorB;
  lVar3 = __ftol2((double)vm->sprite->texture_height);
  sprite_texture_height = (int)lVar3;
  lVar3 = __ftol2((double)vm->sprite->texture_width);
  sprite_texture_width = (int)lVar3;
  lVar3 = __ftol2((double)(vm->sprite->start_pixel_inclusive).y);
  y_pos = (int)lVar3;
  lVar3 = __ftol2((double)(vm->sprite->start_pixel_inclusive).x);
  __draw_text_to_texture
            (vm->sprite->source_file_index,(int)lVar3,y_pos,sprite_texture_width,
             sprite_texture_height,uVar2,font_height,colorA_00,colorB_00,pcVar4);
  local_60 = local_54;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  lVar3 = __ftol2((double)((vm->sprite->texture_width / _2_0f +
                           (vm->sprite->start_pixel_inclusive).x) -
                          ((float)(ulonglong)(uint)((int)local_60 - (int)(local_54 + 1)) *
                          (float)(local_5c + 1)) / __0f));
  local_c = (int)lVar3;
  pcVar4 = local_54;
  uVar2 = (uint)vm->font_height;
  lVar3 = __ftol2((double)vm->sprite->texture_height);
  sprite_texture_height = (int)lVar3;
  lVar3 = __ftol2((double)vm->sprite->texture_width);
  sprite_texture_width = (int)lVar3;
  lVar3 = __ftol2((double)(vm->sprite->start_pixel_inclusive).y);
  __draw_text_to_texture
            (vm->sprite->source_file_index,local_c,(int)lVar3,sprite_texture_width,
             sprite_texture_height,local_5c,uVar2,colorA,colorB,pcVar4);
  vm->flags = vm->flags | 1;
  ___security_check_cookie_4(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AnmManager::__draw_text_to_vm_right
          (AnmManager *anm_manager,AnmVm *vm,D3DCOLOR colorA,D3DCOLOR colorB,char *format)

{
  char cVar1;
  uint font_height;
  int iVar2;
  int iVar3;
  int y_pos;
  uint uVar4;
  longlong lVar5;
  uint unaff_retaddr;
  D3DCOLOR colorA_00;
  D3DCOLOR colorB_00;
  char *pcVar6;
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
  pcVar6 = " ";
  font_height = (uint)vm->font_height;
  uVar4 = local_5c;
  colorA_00 = colorA;
  colorB_00 = colorB;
  lVar5 = __ftol2((double)vm->sprite->texture_height);
  iVar2 = (int)lVar5;
  lVar5 = __ftol2((double)vm->sprite->texture_width);
  iVar3 = (int)lVar5;
  lVar5 = __ftol2((double)(vm->sprite->start_pixel_inclusive).y);
  y_pos = (int)lVar5;
  lVar5 = __ftol2((double)(vm->sprite->start_pixel_inclusive).x);
  __draw_text_to_texture
            (vm->sprite->source_file_index,(int)lVar5,y_pos,iVar3,iVar2,uVar4,font_height,colorA_00,
             colorB_00,pcVar6);
  local_60 = local_54;
  do {
    cVar1 = *local_60;
    local_60 = local_60 + 1;
  } while (cVar1 != '\0');
  lVar5 = __ftol2((double)(((vm->sprite->start_pixel_inclusive).x + vm->sprite->texture_width) -
                          ((float)(ulonglong)(uint)((int)local_60 - (int)(local_54 + 1)) *
                          (float)(local_5c + 1)) / _2_0f));
  local_c = (int)lVar5;
  pcVar6 = local_54;
  uVar4 = (uint)vm->font_height;
  lVar5 = __ftol2((double)vm->sprite->texture_height);
  iVar2 = (int)lVar5;
  lVar5 = __ftol2((double)vm->sprite->texture_width);
  iVar3 = (int)lVar5;
  lVar5 = __ftol2((double)(vm->sprite->start_pixel_inclusive).y);
  __draw_text_to_texture
            (vm->sprite->source_file_index,local_c,(int)lVar5,iVar3,iVar2,local_5c,uVar4,colorA,
             colorB,pcVar6);
  vm->flags = vm->flags | 1;
  ___security_check_cookie_4(local_10 ^ unaff_retaddr);
  return;
}


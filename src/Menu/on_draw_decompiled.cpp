
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl Menu::on_draw(Menu *menu)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  AnmVm *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float width;
  float height;
  int local_8;
  
  local_20 = (AnmVm *)menu;
  local_18 = 0;
  local_14 = 0;
  width = _40_0f;
  height = _DAT_0046c4dc;
  if (*(int *)(menu + 0x81f0) != 0) {
    anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
    AnmManager::__surface_copy_related(anm_manager_ptr,0,0,0,0,0);
    if (*(int *)(menu + 0x8210) == 0) {
      if (*(int *)(menu + 0x820c) != 0) {
        *(int *)(menu + 0x820c) = *(int *)(menu + 0x820c) + -1;
        local_8 = (*(uint *)(menu + 0x8200) >> 0x18) - (*(uint *)(menu + 0x81fc) >> 0x18);
        __sub_42F8B0(&local_18,
                     ((uint)(local_8 * *(int *)(menu + 0x820c)) / *(uint *)(menu + 0x8214) +
                     (*(uint *)(menu + 0x81fc) >> 0x18)) * 0x1000000 |
                     *(uint *)(menu + 0x8200) & 0xffffff);
      }
    }
    else {
      if (*(int *)(menu + 0x820c) < *(int *)(menu + 0x8210)) {
        *(int *)(menu + 0x820c) = *(int *)(menu + 0x820c) + 1;
      }
      local_8 = (*(uint *)(menu + 0x8200) >> 0x18) - (*(uint *)(menu + 0x81fc) >> 0x18);
      __sub_42F8B0(&local_18,
                   ((uint)(local_8 * *(int *)(menu + 0x820c)) / *(uint *)(menu + 0x8210) +
                   (*(uint *)(menu + 0x81fc) >> 0x18)) * 0x1000000 |
                   *(uint *)(menu + 0x8200) & 0xffffff);
    }
    for (local_1c = 0; local_1c < 0x62; local_1c = local_1c + 1) {
      if (local_20->sprite == (AnmLoadedSprite *)0x0) {
        bVar4 = false;
      }
      else if ((int)local_20->sprite->source_file_index < 0) {
        bVar4 = false;
      }
      else {
        bVar4 = anm_manager_ptr->textures[local_20->sprite->source_file_index] !=
                (IDirect3DTexture8 *)0x0;
      }
      if (bVar4) {
        fVar1 = (local_20->pos).x;
        fVar2 = (local_20->pos).y;
        fVar3 = (local_20->pos).z;
        (local_20->pos).x = (local_20->pos).x + (local_20->pos_2).x;
        (local_20->pos).y = (local_20->pos).y + (local_20->pos_2).y;
        (local_20->pos).z = (local_20->pos).z + (local_20->pos_2).z;
        AnmManager::__draw_vm_2(anm_manager_ptr,local_20);
        (local_20->pos).x = fVar1;
        (local_20->pos).y = fVar2;
        (local_20->pos).z = fVar3;
      }
      local_20 = local_20 + 1;
    }
    if ((0xc < *(int *)(menu + 0x81f0)) && (*(int *)(menu + 0x81f0) < 0x10)) {
      __sub_438BC1((int)menu);
    }
    __sub_439965((int)menu);
  }
  return 1;
}


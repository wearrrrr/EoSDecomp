
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl MusicRoom::on_draw(MusicRoom *music_room)

{
  Float3 vec;
  char local_c;
  undefined local_b;
  int32_t i;
  Float3 *ptr_vec;
  
  local_c = 127;
  local_b = 0;
  anm_manager_ptr->current_texture = (IDirect3DTexture8 *)0x0;
  AnmManager::__surface_copy_related(anm_manager_ptr,0,0,0,0,0);
  AnmManager::__draw_vm_1(anm_manager_ptr,music_room->vms_0);
  for (i = music_room->field_18; i < music_room->field_18 + 10; i = i + 1) {
    if (music_room->field_10 == i) {
      music_room->vms_1[i].color = 0xffffffff;
      ascii_manager.color = 0xffffffff;
    }
    else {
      music_room->vms_1[i].color = 0xe0808080;
      ascii_manager.color = 0xe0808080;
    }
    music_room->vms_1[i].pos.x = _3_0f;
    music_room->vms_1[i].pos.y = (_04_0f + (float)(((i + 1) - music_room->field_18) * 0x12)) - _0_0f
    ;
    music_room->vms_1[i].pos.z = 0.0;
    AnmManager::__draw_vm_1(anm_manager_ptr,music_room->vms_1 + i);
    ptr_vec = &music_room->vms_1[i].pos;
    vec.y = ptr_vec->y;
    vec.z = ptr_vec->z;
    vec.x = ptr_vec->x - _60_0f;
    if (music_room->field_10 == i) {
      AsciiManager::draw(&ascii_manager,&vec,&local_c);
    }
    vec.x = vec.x + _5_0f;
    AsciiManager::drawf(&ascii_manager,&vec,"%2d.");
  }
  for (i = 0; i < 0x10; i = i + 1) {
    AnmManager::__draw_vm_1(anm_manager_ptr,music_room->vms_2 + i);
  }
  ascii_manager.color = 0xffffffff;
  return 1;
}


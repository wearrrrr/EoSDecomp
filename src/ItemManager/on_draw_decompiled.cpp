
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ItemManager * __thiscall ItemManager::on_draw(ItemManager *this)

{
  longlong ftol;
  ItemManager *item_mgr;
  int i;
  int local_8;
  
  item_mgr = this;
  for (i = 0; i < 512; i = i + 1) {
    this = item_mgr;
    if (item_mgr->items[0].in_use != 0) {
      item_mgr->items[0].vm.pos.x =
           game_manager.arcade_region_top_left_pos.x + item_mgr->items[0].pos.x;
      item_mgr->items[0].vm.pos.y =
           game_manager.arcade_region_top_left_pos.y + item_mgr->items[0].pos.y;
      item_mgr->items[0].vm.pos.z = 0.01;
      if (_8_0f <= item_mgr->items[0].pos.y) {
        if (item_mgr->items[0].unknown_byte == 0) {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,(AnmVm *)item_mgr,(char)item_mgr->items[0].item_type + 512);
          item_mgr->items[0].unknown_byte = 1;
          item_mgr->items[0].vm.color = 0xffffffff;
        }
      }
      else {
        item_mgr->items[0].vm.pos.y = _8_0f + game_manager.arcade_region_top_left_pos.y;
        if (item_mgr->items[0].unknown_byte != 0) {
          AnmManager::set_vm_sprite
                    (anm_manager_ptr,(AnmVm *)item_mgr,(char)item_mgr->items[0].item_type + 0x207);
          item_mgr->items[0].unknown_byte = 0;
        }
        ftol = __ftol2((double)(((_8_0f - item_mgr->items[0].pos.y) * _55_0f) / _28_0f));
        local_8 = 0xff - (int)ftol;
                    /* Cap variable at 64 */
        if (local_8 < 64) {
          local_8 = 64;
        }
        item_mgr->items[0].vm.color = item_mgr->items[0].vm.color & 0xffffff | local_8 << 0x18;
      }
      this = (ItemManager *)AnmManager::__draw_vm_1(anm_manager_ptr,(AnmVm *)item_mgr);
    }
    item_mgr = (ItemManager *)(item_mgr->items + 1);
  }
  return this;
}


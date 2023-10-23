
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
ItemManager::spawn_item(ItemManager *this,Float3 *position,ItemID item_type,bool item_state)

{
  int iVar1;
  float10 fVar2;
  undefined2 in_stack_0000000a;
  undefined3 in_stack_0000000d;
  short local_14;
  ItemManager *item_mgr;
  int all_items;
  AnmManager *anm_mgr;
  
  iVar1 = _item_type;
  item_mgr = (ItemManager *)(this->items + this->next_index);
  all_items = 0;
  while( true ) {
    if (511 < all_items) {
      return;
    }
    this->next_index = this->next_index + 1;
    if (item_mgr->items[0].in_use == '\0') break;
    if (this->next_index < 0x200) {
      item_mgr = (ItemManager *)(item_mgr->items + 1);
    }
    else {
      this->next_index = 0;
      item_mgr = this;
    }
    all_items = all_items + 1;
  }
  if (511 < this->next_index) {
    this->next_index = 0;
  }
  item_mgr->items[0].in_use = 1;
  item_mgr->items[0].pos.x = position->x;
  item_mgr->items[0].pos.y = position->y;
  item_mgr->items[0].pos.z = position->z;
  item_mgr->items[0].velocity.x = 0.0;
  item_mgr->items[0].velocity.y = -2.2;
  item_mgr->items[0].velocity.z = 0.0;
  item_mgr->items[0].item_type = (uint8_t)item_type;
  item_mgr->items[0].state = item_state;
  item_mgr->items[0].timer.current = 0;
  item_mgr->items[0].timer.subframe = 0.0;
  item_mgr->items[0].timer.previous = -999;
  if (_item_state == 2) {
    fVar2 = Rng::randf_0_to_1(&Rng);
    item_mgr->items[0].unknown_vec3.x = (float)(fVar2 * (float10)_88_0f + (float10)_48_0f);
    fVar2 = Rng::randf_0_to_1(&Rng);
    item_mgr->items[0].unknown_vec3.y = (float)(fVar2 * (float10)_92_0f - (float10)_64_0f);
    item_mgr->items[0].unknown_vec3.z = 0.0;
    item_mgr->items[0].velocity.x = item_mgr->items[0].pos.x;
    item_mgr->items[0].velocity.y = item_mgr->items[0].pos.y;
    item_mgr->items[0].velocity.z = item_mgr->items[0].pos.z;
  }
  anm_mgr = anm_manager_ptr;
  local_14 = item_type + 533;
  item_mgr->items[0].vm.anm_file_index = local_14;
  AnmManager::set_vm_script
            (anm_mgr,(AnmVm *)item_mgr,(AnmRawScript *)anm_mgr->scripts[iVar1 + 0x215]);
  item_mgr->items[0].vm.color = 0xffffffff;
  item_mgr->items[0].unknown_byte = '\x01';
  return;
}


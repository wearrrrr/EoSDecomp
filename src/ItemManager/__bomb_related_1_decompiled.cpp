
ItemManager * __thiscall ItemManager::__bomb_related_1(ItemManager *this)

{
  ItemManager *item_mgr;
  int local_8;
  
  item_mgr = this;
  for (local_8 = 0; local_8 < 512; local_8 = local_8 + 1) {
    if (item_mgr->items[0].in_use != '\0') {
      item_mgr->items[0].state = '\x01';
    }
    this = item_mgr;
    item_mgr = (ItemManager *)(item_mgr->items + 1);
  }
  return this;
}


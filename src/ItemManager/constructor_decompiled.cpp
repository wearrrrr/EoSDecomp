
ItemManager * __thiscall ItemManager::constructor(ItemManager *this)

{
  ItemManager *item_mgr;
  int i;
  
  i = 513;
  item_mgr = this;
  while (i = i + -1, -1 < i) {
    AnmVm::constructor((AnmVm *)item_mgr);
    Timer::constructor(&item_mgr->items[0].timer);
    item_mgr = (ItemManager *)(item_mgr->items + 1);
  }
  return this;
}


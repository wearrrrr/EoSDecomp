
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
BulletManager::cancel_bullets_spell_bonus
          (BulletManager *this,int score_threshold,int spawn_star_items)

{
  float10 fVar1;
  float10 fVar2;
  float local_34;
  Laser *lasers;
  Float3 local_28;
  Bullet *bullet;
  float local_18;
  int i;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 2000;
  local_10 = 0;
  bullet = bullet_manager.bullets;
  for (i = 0; i < 640; i = i + 1) {
    if (bullet->state != 0) {
      if (spawn_star_items != 0) {
        ItemManager::spawn_item(&item_manager,&bullet->pos,StarItem,true);
      }
      AsciiManager::make_popup_A
                (&ascii_manager,&bullet->pos,local_8,
                 ((local_8 < score_threshold) - 1 & 0xffffff01) - 1);
      local_c = local_c + local_8;
      local_10 = local_10 + 1;
      local_8 = local_8 + 10;
      if (score_threshold < local_8) {
        local_8 = score_threshold;
      }
      bullet->state = 5;
    }
    bullet = bullet + 1;
  }
  lasers = this->lasers;
  for (i = 0; i < 64; i = i + 1) {
    if (lasers->in_use != 0) {
      if (lasers->state < 2) {
        lasers->state = 2;
        (lasers->timer).current = 0;
        (lasers->timer).subframe = 0.0;
        (lasers->timer).previous = -999;
        if (spawn_star_items != 0) {
          ItemManager::spawn_item(&item_manager,&lasers->position,StarItem,true);
          local_34 = lasers->start_offset;
          fVar1 = (float10)fcos((float10)lasers->angle);
          fVar2 = (float10)fsin((float10)lasers->angle);
          local_18 = (float)fVar2;
          for (; local_34 < lasers->end_offset; local_34 = local_34 + _32_0f) {
            local_28.x = (float)fVar1 * local_34 + (lasers->position).x;
            local_28.y = local_18 * local_34 + (lasers->position).y;
            local_28.z = 0.0;
            ItemManager::spawn_item(&item_manager,&local_28,StarItem,true);
          }
        }
      }
      lasers->graze_interval = 0;
    }
    lasers = lasers + 1;
  }
  game_manager.score = game_manager.score + local_c;
  if (local_c != 0) {
    Gui::__sub_41735A(&gui,local_c);
  }
  return local_c;
}


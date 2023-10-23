
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall BulletManager::cancel_bullets(BulletManager *this,int spawn_star_items)

{
  int j;
  Bullet *curr_bullet;
  float10 laser_sin;
  float laser_offset;
  Laser *lasers;
  Bullet *bullets;
  int i;
  Float3 vec;
  float10 laser_cos;
  
  bullets = bullet_manager.bullets;
  for (i = 0; i < 640; i = i + 1) {
    if ((bullets->state != 0) && (bullets->state != 5)) {
      if (spawn_star_items == 0) {
        bullets->state = 5;
      }
      else {
        ItemManager::spawn_item(&item_manager,&bullets->pos,StarItem,true);
        curr_bullet = bullets;
        for (j = 369; j != 0; j = j + -1) {
          (curr_bullet->vms).vm_0.rotation.x = 0.0;
          curr_bullet = (Bullet *)&(curr_bullet->vms).vm_0.rotation.y;
        }
      }
    }
    bullets = bullets + 1;
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
          laser_offset = lasers->start_offset;
          laser_cos = (float10)fcos((float10)lasers->angle);
          laser_sin = (float10)fsin((float10)lasers->angle);
          for (; laser_offset < lasers->end_offset; laser_offset = laser_offset + _32_0f) {
            vec.x = (float)laser_cos * laser_offset + (lasers->position).x;
            vec.y = (float)laser_sin * laser_offset + (lasers->position).y;
            vec.z = 0.0;
            ItemManager::spawn_item(&item_manager,&vec,StarItem,true);
          }
        }
      }
      lasers->graze_interval = 0;
    }
    lasers = lasers + 1;
  }
  return;
}


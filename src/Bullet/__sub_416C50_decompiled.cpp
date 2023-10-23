
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Bullet::__sub_416C50(Bullet *bullet)

{
  Bullet *bullets;
  
  switch(bullet->state) {
  case 2:
    bullets = (Bullet *)&(bullet->vms).spawn_effect_short;
    break;
  case 3:
    bullets = (Bullet *)&(bullet->vms).spawn_effect_medium;
    break;
  case 4:
    bullets = (Bullet *)&(bullet->vms).spawn_effect_long;
    break;
  case 5:
    bullets = (Bullet *)&(bullet->vms).vm_5;
    break;
  default:
    bullets = bullet;
  }
  (bullets->vms).vm_0.pos.x = game_manager.arcade_region_top_left_pos.x + (bullet->pos).x;
  (bullets->vms).vm_0.pos.y = game_manager.arcade_region_top_left_pos.y + (bullet->pos).y;
  (bullets->vms).vm_0.pos.z = 0.0;
  (bullets->vms).vm_0.color = (bullets->vms).vm_0.color & 0xff000000 | 0xffffff;
  if ((bullets->vms).vm_0.auto_rotate != 0) {
    (bullets->vms).vm_0.rotation.z = _Pi_2_f - bullet->angle;
  }
  AnmManager::__draw_vm_2(anm_manager_ptr,(AnmVm *)bullets);
  return;
}


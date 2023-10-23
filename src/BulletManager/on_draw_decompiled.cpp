
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl BulletManager::on_draw(BulletManager *bullet_mgr)

{
  float10 laser_sin;
  Bullet *bullets;
  Bullet *bullets2;
  Laser *lasers;
  int i;
  float10 laser_cos;
  float laser_offset;
  
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,8);
  lasers = bullet_mgr->lasers;
  for (i = 0; i < 64; i = i + 1) {
    if (lasers->in_use != 0) {
      laser_cos = (float10)fcos((float10)lasers->angle);
      laser_sin = (float10)fsin((float10)lasers->angle);
      laser_offset = (lasers->end_offset - lasers->start_offset) / _2_0f + lasers->start_offset;
      (lasers->vm_0).pos.x = (float)laser_cos * laser_offset + (lasers->position).x;
      (lasers->vm_0).pos.y = (float)laser_sin * laser_offset + (lasers->position).y;
      (lasers->vm_0).pos.z = 0.0;
      lasers->color = 0xffff;
      AnmManager::draw_vm(anm_manager_ptr,&lasers->vm_0);
      if ((lasers->start_offset < ram0x0046a2b4) || (lasers->speed == (float)__0f)) {
        (lasers->vm_1).pos.x = (float)laser_cos * lasers->start_offset + (lasers->position).x;
        (lasers->vm_1).pos.y = (float)laser_sin * lasers->start_offset + (lasers->position).y;
        (lasers->vm_1).pos.z = 0.0;
        (lasers->vm_1).color = (lasers->vm_0).color;
        (lasers->vm_1).flags = (lasers->vm_1).flags | 8;
        (lasers->vm_1).color = (lasers->vm_1).color & 0xffffff | 0xff000000;
        (lasers->vm_1).scale_x =
             ((ram0x0046a2b4 - lasers->start_offset) / ram0x0046a2b4) * (lasers->width / _10_0f);
        (lasers->vm_1).scale_y = (lasers->vm_1).scale_x;
        if ((lasers->vm_1).scale_y < (float)__0f) {
          (lasers->vm_1).scale_x = lasers->width / _10_0f;
          (lasers->vm_1).scale_y = (lasers->vm_1).scale_x;
        }
        AnmManager::draw_vm(anm_manager_ptr,&lasers->vm_1);
      }
    }
    lasers = lasers + 1;
  }
  ItemManager::on_draw(&item_manager);
  if (supervisor._1020_1_ == '\0') {
    bullets = bullet_mgr->bullets;
    for (i = 0; i < 640; i = i + 1) {
      if ((bullets->state != 0) && (0x10 < (bullets->vms).field_55d)) {
        Bullet::__sub_416C50(bullets);
      }
      bullets = bullets + 1;
    }
    bullets = bullet_mgr->bullets;
    for (i = 0; i < 0x280; i = i + 1) {
      if (((bullets->state != 0) && ((bullets->vms).field_55d == '\x10')) &&
         (((bullets->vms).vm_0.anm_file_index == 0x201 ||
          ((bullets->vms).vm_0.anm_file_index == 0x203)))) {
        Bullet::__sub_416C50(bullets);
      }
      bullets = bullets + 1;
    }
    bullets = bullet_mgr->bullets;
    for (i = 0; i < 0x280; i = i + 1) {
      if ((((bullets->state != 0) && ((bullets->vms).field_55d == '\x10')) &&
          ((bullets->vms).vm_0.anm_file_index != 0x201)) &&
         ((bullets->vms).vm_0.anm_file_index != 0x203)) {
        Bullet::__sub_416C50(bullets);
      }
      bullets = bullets + 1;
    }
    bullets = bullet_mgr->bullets;
    for (i = 0; i < 640; i = i + 1) {
      if ((bullets->state != 0) && ((bullets->vms).field_55d == '\b')) {
        Bullet::__sub_416C50(bullets);
      }
      bullets = bullets + 1;
    }
  }
  else {
    bullets2 = bullet_mgr->bullets;
    for (i = 0; i < 640; i = i + 1) {
      if ((bullets2->state != 0) && (0x10 < (bullets2->vms).field_55d)) {
        Bullet::__sub_416B50(bullets2);
      }
      bullets2 = bullets2 + 1;
    }
    bullets2 = bullet_mgr->bullets;
    for (i = 0; i < 0x280; i = i + 1) {
      if (((bullets2->state != 0) && ((bullets2->vms).field_55d == '\x10')) &&
         (((bullets2->vms).vm_0.anm_file_index == 0x201 ||
          ((bullets2->vms).vm_0.anm_file_index == 0x203)))) {
        Bullet::__sub_416B50(bullets2);
      }
      bullets2 = bullets2 + 1;
    }
    bullets2 = bullet_mgr->bullets;
    for (i = 0; i < 0x280; i = i + 1) {
      if ((((bullets2->state != 0) && ((bullets2->vms).field_55d == '\x10')) &&
          ((bullets2->vms).vm_0.anm_file_index != 0x201)) &&
         ((bullets2->vms).vm_0.anm_file_index != 0x203)) {
        Bullet::__sub_416B50(bullets2);
      }
      bullets2 = bullets2 + 1;
    }
    bullets2 = bullet_mgr->bullets;
    for (i = 0; i < 0x280; i = i + 1) {
      if ((bullets2->state != 0) && ((bullets2->vms).field_55d == '\b')) {
        Bullet::__sub_416B50(bullets2);
      }
      bullets2 = bullets2 + 1;
    }
  }
  (*(code *)(supervisor.d3d_device)->vtable->SetRenderState)(supervisor.d3d_device,0x17,4);
  return 1;
}



undefined4 __cdecl EnemyManager::on_draw(EnemyManager *enemy_manager)

{
  Enemy *enemies;
  int j;
  AnmVm *vm;
  int i;
  AnmVm *enemies2;
  float enemyPosY;
  float enemyPosZ;
  float enemyVmPosY;
  float enemyVmPosZ;
  
  enemies = enemy_manager->enemies;
  for (i = 0; i < 0x100; i = i + 1) {
    if ((enemies->flags_1 < 0) && ((enemies->flags_3 >> 3 & 1) == 0)) {
      j = 0;
      enemies2 = &enemies->primary_vm;
      for (; vm = enemies2 + 1, j < 4; j = j + 1) {
        if (-1 < enemies2[1].anm_file_index) {
          if (enemies2[1].auto_rotate != 0) {
            enemies2[1].rotation.z = enemies->angle;
          }
          enemyPosZ = (enemies->position).z;
          enemyVmPosZ = enemies2[1].pos_2.z;
          enemyPosY = (enemies->position).y;
          enemyVmPosY = enemies2[1].pos_2.y;
          enemies2[1].pos.x = (enemies->position).x + enemies2[1].pos_2.x;
          enemies2[1].pos.y = enemyPosY + enemyVmPosY;
          enemies2[1].pos.z = enemyPosZ + enemyVmPosZ;
          enemies2[1].pos.z = 0.495;
          AnmManager::__sub_433590(anm_manager_ptr,vm);
        }
        enemies2 = vm;
      }
      if ((enemies->flags_3 >> 1 & 1) != 0) {
        (enemies->primary_vm).rotation.z = enemies->angle;
      }
      enemyPosZ = (enemies->position).z;
      enemyVmPosZ = (enemies->primary_vm).pos_2.z;
      enemyPosY = (enemies->position).y;
      enemyVmPosY = (enemies->primary_vm).pos_2.y;
      (enemies->primary_vm).pos.x = (enemies->position).x + (enemies->primary_vm).pos_2.x;
      (enemies->primary_vm).pos.y = enemyPosY + enemyVmPosY;
      (enemies->primary_vm).pos.z = enemyPosZ + enemyVmPosZ;
      (enemies->primary_vm).pos.z = 0.494;
      AnmManager::__sub_433590(anm_manager_ptr,&enemies->primary_vm);
      for (j = 4; j < 8; j = j + 1) {
        if (-1 < vm->anm_file_index) {
          if (vm->auto_rotate != 0) {
            (vm->rotation).z = enemies->angle;
          }
          enemyPosZ = (enemies->position).z;
          enemyVmPosZ = (vm->pos_2).z;
          enemyPosY = (enemies->position).y;
          enemyVmPosY = (vm->pos_2).y;
          (vm->pos).x = (enemies->position).x + (vm->pos_2).x;
          (vm->pos).y = enemyPosY + enemyVmPosY;
          (vm->pos).z = enemyPosZ + enemyVmPosZ;
          (vm->pos).z = 0.495;
          AnmManager::__sub_433590(anm_manager_ptr,vm);
        }
        vm = vm + 1;
      }
    }
    enemies = enemies + 1;
  }
  return 1;
}


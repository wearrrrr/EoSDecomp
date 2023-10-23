
/* WARNING: Removing unreachable block (ram,0x004132b0) */
/* WARNING: Removing unreachable block (ram,0x004132ea) */

int __cdecl EnemyManager::on_registration(EnemyManager *enemy_manager)

{
  int load_anm_file;
  ushort rng_table_index;
  ushort rng_spawn_index;
  
  if ((enemy_manager->stg_ecl_anm_filename == (char *)0x0) ||
     (load_anm_file =
           AnmManager::load_anm_file(anm_manager_ptr,8,enemy_manager->stg_ecl_anm_filename,0x100),
     load_anm_file == 0)) {
    if ((enemy_manager->stg_ecl2_anm_filename == (char *)0x0) ||
       (load_anm_file =
             AnmManager::load_anm_file(anm_manager_ptr,9,enemy_manager->stg_ecl2_anm_filename,0x100)
       , load_anm_file == 0)) {
      rng_spawn_index = Rng::rand_word(&Rng);
      rng_spawn_index = rng_spawn_index % 3;
      enemy_manager->random_item_spawn_index = rng_spawn_index;
      rng_table_index = Rng::rand_word(&Rng);
      rng_table_index = rng_table_index % 8;
      enemy_manager->random_item_table_index = rng_table_index;
      enemy_manager->spellcard_capture = 0;
      (enemy_manager->timeline_time).previous = 0;
      load_anm_file = 0;
    }
    else {
      load_anm_file = -1;
    }
  }
  else {
    load_anm_file = -1;
  }
  return load_anm_file;
}


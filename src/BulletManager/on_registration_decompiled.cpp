
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl BulletManager::on_registration(BulletManager *bullet_manager)

{
  float fVar1;
  int anm_script;
  ItemManager *item_mgr;
  longlong lVar2;
  int16_t local_3c;
  int16_t local_30;
  int16_t local_24;
  int16_t anm_script_index;
  int16_t local_c;
  uint i;
  AnmManager *anm_mgr;
  AnmVm *vm;
  
  if (supervisor.dword_18C != 3) {
    anm_script = AnmManager::load_anm_file(anm_manager_ptr,6,"data/etama3.anm",0x200);
    if (anm_script != 0) {
      return 0xffffffff;
    }
    anm_script = AnmManager::load_anm_file(anm_manager_ptr,7,"data/etama4.anm",0x29a);
    if (anm_script != 0) {
      return 0xffffffff;
    }
  }
  for (i = 0; anm_mgr = anm_manager_ptr, i < 10; i = i + 1) {
    anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0__main_script + i * 0x14);
    local_c = (int16_t)anm_script;
    ((AnmVm *)(bullet_manager->bullet_types_templates + i))->anm_file_index = local_c;
    AnmManager::set_vm_script
              (anm_mgr,(AnmVm *)(bullet_manager->bullet_types_templates + i),
               (AnmRawScript *)anm_mgr->scripts[anm_script]);
    anm_mgr = anm_manager_ptr;
    anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0____spawn_effect_script_a + i * 0x14);
    vm = &bullet_manager->bullet_types_templates[i].spawn_effect_short;
    anm_script_index = (int16_t)anm_script;
    vm->anm_file_index = anm_script_index;
    AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[anm_script]);
    anm_mgr = anm_manager_ptr;
    anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0____spawn_effect_script_b + i * 0x14);
    vm = &bullet_manager->bullet_types_templates[i].spawn_effect_medium;
    local_24 = (int16_t)anm_script;
    vm->anm_file_index = local_24;
    AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[anm_script]);
    anm_mgr = anm_manager_ptr;
    anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0____spawn_effect_script_c + i * 0x14);
    vm = &bullet_manager->bullet_types_templates[i].spawn_effect_long;
    local_30 = (int16_t)anm_script;
    vm->anm_file_index = local_30;
    AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[anm_script]);
    anm_mgr = anm_manager_ptr;
    anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0__despawn_effect_script + i * 0x14);
    vm = &bullet_manager->bullet_types_templates[i].vm_5;
    local_3c = (int16_t)anm_script;
    vm->anm_file_index = local_3c;
    AnmManager::set_vm_script(anm_mgr,vm,(AnmRawScript *)anm_mgr->scripts[anm_script]);
    bullet_manager->bullet_types_templates[i].vm_0.sprite_number_duplicate =
         bullet_manager->bullet_types_templates[i].vm_0.sprite_number;
    lVar2 = __ftol2((double)(bullet_manager->bullet_types_templates[i].vm_0.sprite)->height_px);
    bullet_manager->bullet_types_templates[i].field_55d = (uint8_t)lVar2;
    fVar1 = (bullet_manager->bullet_types_templates[i].vm_0.sprite)->height_px;
    if (fVar1 < _8_0f == (fVar1 == _8_0f)) {
      fVar1 = (bullet_manager->bullet_types_templates[i].vm_0.sprite)->height_px;
      if (fVar1 < ram0x0046a2b4 == (fVar1 == ram0x0046a2b4)) {
        fVar1 = (bullet_manager->bullet_types_templates[i].vm_0.sprite)->height_px;
        if (fVar1 < _32_0f == (fVar1 == _32_0f)) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 32.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 32.0;
        }
        else if (*(int *)(&BULLET_TYPE_ANM_DATA_0__main_script + i * 0x14) == 0x207) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 11.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 11.0;
        }
        else if (*(int *)(&BULLET_TYPE_ANM_DATA_0__main_script + i * 0x14) == 0x208) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 9.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 9.0;
        }
        else {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 16.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 16.0;
        }
      }
      else {
        anm_script = *(int *)(&BULLET_TYPE_ANM_DATA_0__main_script + i * 0x14);
        if (anm_script == 0x202) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 4.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 4.0;
        }
        else if (anm_script == 0x204) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 5.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 5.0;
        }
        else if (anm_script == 0x205) {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 4.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 4.0;
        }
        else {
          bullet_manager->bullet_types_templates[i].field5_0x550 = 6.0;
          bullet_manager->bullet_types_templates[i].field6_0x554 = 6.0;
        }
      }
    }
    else {
      bullet_manager->bullet_types_templates[i].field5_0x550 = 4.0;
      bullet_manager->bullet_types_templates[i].field6_0x554 = 4.0;
    }
  }
  item_mgr = &item_manager;
  for (anm_script = 41555; anm_script != 0; anm_script = anm_script + -1) {
    item_mgr->items[0].vm.rotation.x = 0.0;
    item_mgr = (ItemManager *)&item_mgr->items[0].vm.rotation.y;
  }
  return 0;
}


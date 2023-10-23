
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl MusicRoom::on_registration(MusicRoom *music_room)

{
  AnmVm *pAVar1;
  char cVar2;
  AnmManager *pAVar3;
  int fileToLoad;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint unaff_retaddr;
  char *local_98;
  undefined4 *local_8c;
  undefined4 *local_78;
  int local_70;
  char local_5c;
  uint local_1c;
  char *local_18;
  int local_14;
  char *currentChar;
  int local_c;
  int i;
  
  local_1c = _DAT_0047a630 ^ unaff_retaddr;
  fileToLoad = AnmManager::set_surface_image(anm_manager_ptr,0,"data/result/music.jpg");
  if ((((fileToLoad == 0) &&
       (fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x29,"data/music00.anm",0x100),
       fileToLoad == 0)) &&
      (fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x2a,"data/music01.anm",0x101),
      fileToLoad == 0)) &&
     (fileToLoad = AnmManager::load_anm_file(anm_manager_ptr,0x2b,"data/music02.anm",0x111),
     pAVar3 = anm_manager_ptr, fileToLoad == 0)) {
    music_room->vms_0[0].anm_file_index = 0x100;
    AnmManager::set_vm_script(pAVar3,music_room->vms_0,(AnmRawScript *)pAVar3->scripts[0x100]);
    music_room->field_8 = 0;
    local_18 = __read_file_to_buffer("data/musiccmt.txt",0);
    currentChar = local_18;
    if (local_18 != (char *)0x0) {
      local_8c = (undefined4 *)malloc(0x4e40);
      if (local_8c == (undefined4 *)0x0) {
        local_8c = (undefined4 *)0x0;
      }
      else {
        local_70 = 0x20;
        local_78 = local_8c;
        while (local_70 = local_70 + -1, -1 < local_70) {
          puVar5 = local_78;
          for (fileToLoad = 0x9c; fileToLoad != 0; fileToLoad = fileToLoad + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = 0;
          local_78 = (undefined4 *)((int)local_78 + 0x272);
        }
      }
      music_room->field_20 = (int32_t)local_8c;
      i = -1;
      while ((int)currentChar - (int)local_18 < ___current_filesize) {
        if (*currentChar == '@') {
          currentChar = currentChar + 1;
          i = i + 1;
          local_14 = 0;
          while ((*currentChar != '\n' && (*currentChar != '\r'))) {
            *(char *)(i * 0x272 + music_room->field_20 + local_14) = *currentChar;
            currentChar = currentChar + 1;
            local_14 = local_14 + 1;
            if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
          }
          while ((*currentChar == '\n' || (*currentChar == '\r'))) {
            currentChar = currentChar + 1;
            if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
          }
          local_14 = 0;
          while ((*currentChar != '\n' && (*currentChar != '\r'))) {
            *(char *)(i * 0x272 + music_room->field_20 + 0x40 + local_14) = *currentChar;
            currentChar = currentChar + 1;
            local_14 = local_14 + 1;
            if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
          }
          while ((*currentChar == '\n' && (*currentChar == '\r'))) {
            currentChar = currentChar + 1;
            if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
          }
          local_c = 0;
          while ((local_c < 8 && (*currentChar != '@'))) {
            puVar5 = (undefined4 *)(music_room->field_20 + i * 0x272 + 0x62 + local_c * 0x42);
            for (fileToLoad = 0x10; fileToLoad != 0; fileToLoad = fileToLoad + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = 0;
            local_14 = 0;
            while ((*currentChar != '\n' && (*currentChar != '\r'))) {
              *(char *)(local_c * 0x42 + 0x62 + local_14 + music_room->field_20 + i * 0x272) =
                   *currentChar;
              currentChar = currentChar + 1;
              local_14 = local_14 + 1;
              if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
            }
            while ((*currentChar == '\n' || (*currentChar == '\r'))) {
              currentChar = currentChar + 1;
              if (___current_filesize <= (int)currentChar - (int)local_18) goto LAB_004259f3;
            }
            local_c = local_c + 1;
          }
        }
        else {
          currentChar = currentChar + 1;
        }
      }
LAB_004259f3:
      music_room->field_1c = i + 1;
      for (i = 0; pAVar3 = anm_manager_ptr, i < music_room->field_1c; i = i + 1) {
        pAVar1 = music_room->vms_1 + i;
        AnmVm::initialize(pAVar1);
        AnmManager::set_vm_sprite(pAVar3,pAVar1,i + 0x101);
        AnmManager::__draw_text_to_vm_left
                  (anm_manager_ptr,music_room->vms_1 + i,0xc0e0ff,0x302080,
                   (char *)(music_room->field_20 + 0x40 + i * 0x272));
        music_room->vms_1[i].pos.x = _3_0f;
        music_room->vms_1[i].pos.y = (_04_0f + (float)((i + 1) * 0x12)) - _0_0f;
        music_room->vms_1[i].pos.z = 0.0;
        music_room->vms_1[i].flags = music_room->vms_1[i].flags | 0x300;
      }
      for (i = 0; pAVar3 = anm_manager_ptr, i < 0x10; i = i + 1) {
        pAVar1 = music_room->vms_2 + i;
        AnmVm::initialize(pAVar1);
        AnmManager::set_vm_sprite(pAVar3,pAVar1,i + 0x708);
        puVar5 = (undefined4 *)&local_5c;
        for (fileToLoad = 0x10; fileToLoad != 0; fileToLoad = fileToLoad + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        if (i % 2 == 0) {
LAB_00425c09:
          puVar5 = (undefined4 *)(music_room->field_20 + 0x62 + (i / 2) * 0x42 + (i % 2) * 0x20);
          puVar6 = (undefined4 *)&local_5c;
          for (fileToLoad = 8; fileToLoad != 0; fileToLoad = fileToLoad + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          local_98 = (char *)(music_room->field_20 + music_room->field_14 * 0x272 + 0x62 +
                             (i / 2) * 0x42);
          pcVar4 = local_98 + 1;
          do {
            cVar2 = *local_98;
            local_98 = local_98 + 1;
          } while (cVar2 != '\0');
          if (0x20 < (uint)((int)local_98 - (int)pcVar4)) goto LAB_00425c09;
        }
        if (local_5c == '\0') {
          music_room->vms_2[i].flags = music_room->vms_2[i].flags & 0xfffffffd;
        }
        else {
          music_room->vms_2[i].flags = music_room->vms_2[i].flags | 2;
          AnmManager::__draw_text_to_vm_left
                    (anm_manager_ptr,music_room->vms_2 + i,0xffe0c0,0x300000,&local_5c);
        }
        music_room->vms_2[i].pos.x = (float)(i % 2) * _48_0f + _96_0f;
        music_room->vms_2[i].pos.y = _20_0f + (float)(i / 2 << 4);
        music_room->vms_2[i].pos.z = 0.0;
        music_room->vms_2[i].flags = music_room->vms_2[i].flags | 0x300;
      }
      _free(local_18);
    }
  }
  ___security_check_cookie_4(local_1c ^ unaff_retaddr);
  return;
}


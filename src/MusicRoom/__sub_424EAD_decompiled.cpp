
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall MusicRoom::__sub_424EAD(MusicRoom *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  char *local_5c;
  char local_54;
  uint local_10;
  int local_c;
  int32_t local_8;
  
  local_10 = _DAT_0047a630 ^ unaff_retaddr;
  local_8 = this->field_18;
  if (((input.currently_pressed & 0x10) != 0) &&
     ((input.currently_pressed & 0x10) != (input.word_4 & 0x10))) {
    this->field_10 = this->field_10 + -1;
    if (this->field_10 < 0) {
      this->field_10 = this->field_1c + -1;
      this->field_18 = this->field_1c + -10;
    }
    else if (this->field_10 < this->field_18) {
      this->field_18 = this->field_10;
    }
  }
  if (((input.currently_pressed & 0x20) != 0) &&
     ((input.currently_pressed & 0x20) != (input.word_4 & 0x20))) {
    this->field_10 = this->field_10 + 1;
    if (this->field_10 < this->field_1c) {
      iVar3 = this->field_10 + -10;
      if (this->field_18 == iVar3 || this->field_18 < iVar3) {
        this->field_18 = this->field_10 + -9;
      }
    }
    else {
      this->field_10 = 0;
      this->field_18 = 0;
    }
  }
  if (((input.currently_pressed & 0x1001) != 0) &&
     ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
    this->field_14 = this->field_10;
    Supervisor::__load_bgm_file(&supervisor,(char *)(this->field_14 * 0x272 + this->field_20));
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      puVar4 = (undefined4 *)&local_54;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if (local_c % 2 == 0) {
LAB_0042508a:
        puVar4 = (undefined4 *)
                 (this->field_20 + this->field_14 * 0x272 + 0x62 + (local_c / 2) * 0x42 +
                 (local_c % 2) * 0x20);
        puVar5 = (undefined4 *)&local_54;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        local_5c = (char *)(this->field_20 + this->field_14 * 0x272 + 0x62 + (local_c / 2) * 0x42);
        pcVar2 = local_5c + 1;
        do {
          cVar1 = *local_5c;
          local_5c = local_5c + 1;
        } while (cVar1 != '\0');
        if (0x20 < (uint)((int)local_5c - (int)pcVar2)) goto LAB_0042508a;
      }
      if (local_54 == '\0') {
        this->vms_2[local_c].flags = this->vms_2[local_c].flags & 0xfffffffd;
      }
      else {
        this->vms_2[local_c].flags = this->vms_2[local_c].flags | 2;
        AnmManager::__draw_text_to_vm_left
                  (anm_manager_ptr,this->vms_2 + local_c,0xffe0c0,0x300000,&local_54);
      }
      this->vms_2[local_c].pos.x = (float)(local_c % 2) * _48_0f + _96_0f;
      this->vms_2[local_c].pos.y = _20_0f + (float)(local_c / 2 << 4);
      this->vms_2[local_c].pos.z = 0.0;
      this->vms_2[local_c].flags = this->vms_2[local_c].flags | 0x300;
    }
  }
  if (((input.currently_pressed & 10) != 0) &&
     ((input.currently_pressed & 10) != (input.word_4 & 10))) {
    supervisor.dword_18C = 1;
  }
  ___security_check_cookie_4(local_10 ^ unaff_retaddr);
  return;
}


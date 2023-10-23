
/* WARNING: Removing unreachable block (ram,0x0042bb17) */
/* WARNING: Removing unreachable block (ram,0x0042bb47) */

void __cdecl __construct_and_save_scorefile(GameManager *this)

{
  byte bVar1;
  ushort uVar2;
  void *buffer;
  undefined local_50;
  undefined local_4c;
  byte *local_40;
  byte local_39;
  int l;
  int k;
  int j;
  ScorefilePscr *pscr_data;
  ScorefileCatk *catk_data;
  ScorefileClrd *scoreFileClrd;
  int local_1c;
  int local_18;
  size_t count;
  int local_c;
  int i;
  
  buffer = _malloc(0xa0000);
  _memcpy(buffer,(void *)this->__dword_0,0x14);
  *(undefined4 *)(this[3].catk_data[7].spell_name + 0x14) = 0x4b364854;
  *(undefined2 *)(this[3].catk_data[7].spell_name + 0x1a) = 0xc;
  *(undefined2 *)(this[3].catk_data[7].spell_name + 0x18) = 0xc;
  this[3].catk_data[7].spell_name[0x1c] = '\x10';
  _memcpy((void *)((int)buffer + 0x14),this[3].catk_data[7].spell_name + 0x14,0xc);
  count = 0x20;
  i = 0;
  do {
    if (4 < i) {
      scoreFileClrd = game_manager.clrd_data;
      for (i = 0; i < 4; i = i + 1) {
                    /* "CLRD" when converted with little endianness. */
        *(undefined4 *)scoreFileClrd->magic__CLRD = 0x44524c43;
        scoreFileClrd->__size_2 = 0x18;
        scoreFileClrd->__size_1 = 0x18;
        scoreFileClrd->__byte_8 = '\x10';
        _memcpy((void *)((int)buffer + count),scoreFileClrd,0x18);
        count = count + 0x18;
        scoreFileClrd = scoreFileClrd + 1;
      }
      catk_data = game_manager.catk_data;
      for (i = 0; i < 0x40; i = i + 1) {
                    /* "CATK" */
        if (*(int *)catk_data->magic__CATK == 0x4b544143) {
          catk_data->__word_10 = (int16_t)i;
          catk_data->size_2 = 0x40;
          catk_data->size_1 = 0x40;
          catk_data->__byte_8 = '\x10';
          _memcpy((void *)((int)buffer + count),catk_data,0x40);
          count = count + 0x40;
        }
        catk_data = catk_data + 1;
      }
      pscr_data = game_manager.pscr_data;
      for (i = 0; i < 4; i = i + 1) {
        for (j = 0; j < 6; j = j + 1) {
          for (k = 0; k < 4; k = k + 1) {
            if (pscr_data->score != 0) {
              _memcpy((void *)((int)buffer + count),pscr_data,0x14);
              count = count + 0x14;
            }
            pscr_data = pscr_data + 1;
          }
        }
      }
      *(undefined4 *)((int)buffer + 8) = 0x14;
      *(size_t *)((int)buffer + 0x10) = count;
      *(undefined2 *)((int)buffer + 2) = 0;
      uVar2 = Rng::rand_word(&Rng);
      local_4c = (undefined)((uint)uVar2 % 0x100);
      *(undefined *)((int)buffer + 1) = local_4c;
      uVar2 = Rng::rand_word(&Rng);
      local_50 = (undefined)((uint)uVar2 % 0x100);
      *(undefined *)((int)buffer + 6) = local_50;
      *(undefined2 *)((int)buffer + 4) = 0x10;
      for (l = 4; l < (int)count; l = l + 1) {
        *(ushort *)((int)buffer + 2) =
             *(short *)((int)buffer + 2) + (ushort)*(byte *)((int)buffer + l);
      }
      local_40 = (byte *)((int)buffer + 1);
      local_39 = *local_40;
      for (l = count - 2; 0 < l; l = l + -1) {
        bVar1 = local_40[1];
        local_39 = (byte)((int)(local_39 & 0xe0) >> 5) | (byte)((local_39 & 0x1f) << 3);
        local_40[1] = local_40[1] ^ local_39;
        local_39 = local_39 + bVar1;
        local_40 = local_40 + 1;
      }
                    /* Write score.dat file */
      write_buffer_to_file("score.dat",buffer,count);
      _free(buffer);
      return;
    }
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      local_18 = *(int *)(this[2].catk_data[0x16].magic__CATK + local_1c * 0xc + i * 0x30 + 4);
      local_c = 0;
      do {
        if (local_18 == 0) break;
        if (**(int **)(local_18 + 8) == 0x52435348) {
          *(undefined *)(*(int *)(local_18 + 8) + 0x10) = (undefined)local_1c;
          *(undefined *)(*(int *)(local_18 + 8) + 0x11) = (undefined)i;
          *(undefined2 *)(*(int *)(local_18 + 8) + 6) = 0x1c;
          *(undefined2 *)(*(int *)(local_18 + 8) + 4) = 0x1c;
          *(undefined *)(*(int *)(local_18 + 8) + 8) = 0x10;
          *(undefined *)(*(int *)(local_18 + 8) + 9) = 0;
          _memcpy((void *)((int)buffer + count),*(void **)(local_18 + 8),0x1c);
          count = count + 0x1c;
        }
        local_18 = *(int *)(local_18 + 4);
        local_c = local_c + 1;
      } while (local_c < 10);
    }
    i = i + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall SoundManager::__sub_4306E0(SoundManager *this,int param_1,char *filename)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  uint uVar4;
  undefined4 *puVar5;
  DSBUFFERDESC *ptr_DSoundBufDesc;
  undefined4 *puVar6;
  uint unaff_retaddr;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  char *rawWAVData;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  undefined4 *local_3c;
  DWORD local_38;
  undefined4 *local_34;
  DSBUFFERDESC DSoundBufDesc;
  uint local_c;
  char *wav_ptr;
  
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  if (this->dsound != (IDirectSound *)0x0) {
    if (this->ptrs_8[param_1] != (IUnknown *)0x0) {
      (*(code *)this->ptrs_8[param_1]->vtable->Release)(this->ptrs_8[param_1]);
      this->ptrs_8[param_1] = (IUnknown *)0x0;
    }
    rawWAVData = __read_file_to_buffer(filename,0);
    wav_ptr = rawWAVData;
    if (rawWAVData != (char *)0x0) {
      iVar1 = _strncmp(rawWAVData,"RIFF",4);
      if (iVar1 == 0) {
        iVar1 = *(int *)(wav_ptr + 4);
        wav_ptr = wav_ptr + 8;
        iVar2 = _strncmp(wav_ptr,"WAVE",4);
        if (iVar2 == 0) {
          wav_ptr = wav_ptr + 4;
          local_34 = (undefined4 *)__sub_4309F0(wav_ptr,"fmt ",(int *)&local_38,iVar1 + -0xc);
          if (local_34 == (undefined4 *)0x0) {
            LogBuffer::write(&LogBuffer,"Wav ファイルじゃない? %s\n");
            _free(rawWAVData);
          }
          else {
            local_60 = *local_34;
            local_5c = local_34[1];
            local_58 = local_34[2];
            local_54 = local_34[3];
            local_50 = *(undefined2 *)(local_34 + 4);
            local_34 = (undefined4 *)__sub_4309F0(wav_ptr,"data",(int *)&local_38,iVar1 + -0xc);
            if (local_34 == (undefined4 *)0x0) {
              LogBuffer::write(&LogBuffer,"Wav ファイルじゃない? %s\n");
              _free(rawWAVData);
            }
            else {
              ptr_DSoundBufDesc = &DSoundBufDesc;
              for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
                ptr_DSoundBufDesc->dwSize = 0;
                ptr_DSoundBufDesc = (DSBUFFERDESC *)&ptr_DSoundBufDesc->dwFlags;
              }
              DSoundBufDesc.dwSize = 0x24;
              DSoundBufDesc.dwFlags = 0x8088;
              DSoundBufDesc.dwBufferBytes = local_38;
              DSoundBufDesc.lpwfxFormat = &local_60;
              iVar3 = (*this->dsound_api->vtable->CreateSoundBuffer)
                                (this->dsound_api,&DSoundBufDesc,
                                 (IDirectSoundBuffer **)(this->ptrs_8 + param_1),(IUnknown *)0x0);
              if (iVar3 < 0) {
                _free(rawWAVData);
              }
              else {
                iVar1 = (*(code *)this->ptrs_8[param_1]->vtable[3].Release)
                                  (this->ptrs_8[param_1],0,local_38,&local_48,&local_44,&local_3c,
                                   &local_40,0);
                if (iVar1 < 0) {
                  _free(rawWAVData);
                }
                else {
                  puVar5 = local_34;
                  puVar6 = local_48;
                  for (uVar4 = local_44 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar6 = *puVar5;
                    puVar5 = puVar5 + 1;
                    puVar6 = puVar6 + 1;
                  }
                  for (uVar4 = local_44 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(undefined *)puVar6 = *(undefined *)puVar5;
                    puVar5 = (undefined4 *)((int)puVar5 + 1);
                    puVar6 = (undefined4 *)((int)puVar6 + 1);
                  }
                  if (local_40 != 0) {
                    puVar5 = (undefined4 *)((int)local_34 + local_44);
                    puVar6 = local_3c;
                    for (uVar4 = local_40 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *puVar6 = *puVar5;
                      puVar5 = puVar5 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    for (uVar4 = local_40 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                      *(undefined *)puVar6 = *(undefined *)puVar5;
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                      puVar6 = (undefined4 *)((int)puVar6 + 1);
                    }
                  }
                  (*(code *)this->ptrs_8[param_1]->vtable[6].AddRef)
                            (this->ptrs_8[param_1],local_48,local_44,local_3c,local_40);
                  _free(rawWAVData);
                }
              }
            }
          }
        }
        else {
          LogBuffer::write(&LogBuffer,"Wav ファイルじゃない? %s\n");
          _free(rawWAVData);
        }
      }
      else {
        LogBuffer::write(&LogBuffer,"Wav ファイルじゃない %s\n");
        _free(rawWAVData);
      }
    }
  }
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}


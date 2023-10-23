
int __thiscall CSound::HandleWaveStreamNotification(CSound *this,int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  undefined local_8 [4];
  
  if ((this->m_dwDSBufferSize == 0) || (this->m_dwNumBuffers == 0)) {
    local_20 = -0x7ffbfe10;
  }
  else {
    local_20 = RestoreBuffer(this,*(int **)this->m_dwDSBufferSize,&local_18);
    if (local_20 < 0) {
      __stub_3();
    }
    else if (local_18 == 0) {
      local_c = (undefined4 *)0x0;
      local_14 = 0;
      local_20 = (**(code **)(**(int **)this->m_dwDSBufferSize + 0x2c))
                           (*(undefined4 *)this->m_dwDSBufferSize,this[2].m_dwDSBufferSize,
                            this[2].m_apDSBuffer,&local_c,&local_24,&local_14,local_8,0);
      if (local_20 < 0) {
        __stub_3();
      }
      else if (local_14 == 0) {
        if (*(int *)&this[2].field_0x8 == 0) {
          local_20 = CWaveFile::Read((CWaveFile *)this->m_dwNumBuffers,local_c,local_24,&local_10);
          if (local_20 < 0) {
            __stub_3();
            return local_20;
          }
        }
        else {
          cVar1 = (-(*(short *)(*(int *)this->m_dwNumBuffers + 0xe) != 8) & 0x80U) + 0x80;
          puVar3 = local_c;
          for (uVar2 = local_24 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = local_24 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(char *)puVar3 = cVar1;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          local_10 = local_24;
        }
        if (local_10 < local_24) {
          if (param_1 == 0) {
            cVar1 = (-(*(short *)(*(int *)this->m_dwNumBuffers + 0xe) != 8) & 0x80U) + 0x80;
            puVar3 = (undefined4 *)((int)local_c + local_10);
            for (uVar2 = local_24 - local_10 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar3 = CONCAT22(CONCAT11(cVar1,cVar1),CONCAT11(cVar1,cVar1));
              puVar3 = puVar3 + 1;
            }
            for (uVar2 = local_24 - local_10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(char *)puVar3 = cVar1;
              puVar3 = (undefined4 *)((int)puVar3 + 1);
            }
            *(undefined4 *)&this[2].field_0x8 = 1;
          }
          else {
            for (local_2c = local_10; local_2c < local_24; local_2c = local_2c + local_10) {
              local_20 = CWaveFile::ResetFile((CWaveFile *)this->m_dwNumBuffers,'\x01');
              if (local_20 < 0) {
                __stub_3();
                return local_20;
              }
              local_20 = CWaveFile::Read((CWaveFile *)this->m_dwNumBuffers,
                                         (undefined4 *)((int)local_c + local_2c),local_24 - local_2c
                                         ,&local_10);
              if (local_20 < 0) {
                __stub_3();
                return local_20;
              }
            }
          }
        }
        (**(code **)(**(int **)this->m_dwDSBufferSize + 0x4c))
                  (*(undefined4 *)this->m_dwDSBufferSize,local_c,local_24,0,0);
        local_20 = (**(code **)(**(int **)this->m_dwDSBufferSize + 0x10))
                             (*(undefined4 *)this->m_dwDSBufferSize,&local_28,0);
        if (local_20 < 0) {
          __stub_3();
        }
        else {
          if (local_28 < this[1].m_dwNumBuffers) {
            local_1c = *(int *)&this->field_0x8 - this[1].m_dwNumBuffers;
          }
          else {
            local_1c = -this[1].m_dwNumBuffers;
          }
          local_1c = local_1c + local_28;
          this[1].m_dwCreationFlags = this[1].m_dwCreationFlags + local_1c;
          this[1].m_dwNumBuffers = local_28;
          if ((*(int *)&this[2].field_0x8 != 0) &&
             (uVar2 = CWaveFile::get_dw_size((CWaveFile *)this->m_dwNumBuffers),
             uVar2 <= this[1].m_dwCreationFlags)) {
            (**(code **)(**(int **)this->m_dwDSBufferSize + 0x48))
                      (*(undefined4 *)this->m_dwDSBufferSize);
          }
          this[2].m_dwDSBufferSize = this[2].m_dwDSBufferSize + local_24;
          this[2].m_dwDSBufferSize = this[2].m_dwDSBufferSize % *(uint *)&this->field_0x8;
          local_20 = 0;
        }
      }
      else {
        local_20 = -0x7fff0001;
      }
    }
    else {
      local_20 = FillBufferWithSound(this,*(int **)this->m_dwDSBufferSize,0);
      if (local_20 < 0) {
        __stub_3();
      }
      else {
        local_20 = 0;
      }
    }
  }
  return local_20;
}


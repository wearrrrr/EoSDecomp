
undefined4 __thiscall UnknownB::__sub_421FF0(void *this,int param_1,byte *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (supervisor.config.bgm_format == '\x02') {
    MidiManager::__sub_4224E0((MidiManager *)this);
    __sub_422070(this,param_1);
    pcVar2 = __read_file_to_buffer((char *)param_2,0);
    *(char **)((int)this + param_1 * 4 + 0x94) = pcVar2;
    if (*(int *)((int)this + param_1 * 4 + 0x94) == 0) {
      LogBuffer::write(&LogBuffer,"error : MIDI File Ç™ì«Ç›çûÇﬂÇ»Ç¢ %s \n");
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


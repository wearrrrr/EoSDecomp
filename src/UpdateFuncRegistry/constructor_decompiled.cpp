
UpdateFuncRegistry * __thiscall UpdateFuncRegistry::constructor(UpdateFuncRegistry *this)

{
  UINT systemMidiDevices;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &__SE_handler_469148;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  UpdateFunc::constructor(&this->on_tick_list_head,&this->on_tick_list_head);
  local_8 = 0;
  UpdateFunc::constructor(&this->on_draw_list_head,&this->on_tick_list_head);
  systemMidiDevices = midiOutGetNumDevs();
  this->midi_outputs_count = systemMidiDevices;
  this->dword_44 = 0;
  ExceptionList = local_10;
  return this;
}



void __fastcall AnmManager::__sub_4240F0(AnmManager *this)

{
  if (this->stream_source != (IDirect3DVertexBuffer8 *)0x0) {
    (*(code *)(this->stream_source->vtable->super).super.Release)(this->stream_source);
    this->stream_source = (IDirect3DVertexBuffer8 *)0x0;
  }
  return;
}


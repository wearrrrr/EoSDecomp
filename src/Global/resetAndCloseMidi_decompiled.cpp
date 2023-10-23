
undefined4 __thiscall resetAndCloseMidi(void *this,cls_0x421aa0 *handle_midiOutput)

{
  undefined4 result;
  
                    /* WARNING: Load size is inaccurate */
  if (*this == 0) {
    result = 0xffffffff;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    midiOutReset(*this);
                    /* WARNING: Load size is inaccurate */
    midiOutClose(*this);
    *(undefined4 *)this = 0;
    result = 0;
  }
  return result;
}


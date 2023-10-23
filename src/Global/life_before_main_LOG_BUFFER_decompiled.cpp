
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void life_before_main_LOG_BUFFER(void)

{
  _LOG_BUFFER_buffer_write = &LogBuffer;
  LogBuffer.field0_0x0[0] = 0;
  LOG_BUFFER_is_error = 0;
  LogBuffer::write(&LogBuffer,"“Œ•û“®ì‹L˜^ --------------------------------------------- \n")
  ;
  _atexit(__stub_2);
  return;
}


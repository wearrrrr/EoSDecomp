
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl LogBuffer::write(LogBuffer *log_buffer,char *format)

{
  char cVar1;
  uint unaff_retaddr;
  char *local_228;
  char *local_224;
  char *local_214;
  char buffer [512];
  uint local_c;
  int **local_8;
  
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  local_8 = (int **)&stack0x0000000c;
  _vsprintf(buffer,(byte *)format,local_8);
  local_214 = buffer;
  do {
    cVar1 = *local_214;
    local_214 = local_214 + 1;
  } while (cVar1 != '\0');
  if (local_214 + (*(int *)log_buffer[1].field0_0x0 - (int)(buffer + 1)) <
      log_buffer->field0_0x0 + 0x7ff) {
    local_224 = buffer;
    local_228 = *(char **)log_buffer[1].field0_0x0;
    do {
      cVar1 = *local_224;
      *local_228 = cVar1;
      local_224 = local_224 + 1;
      local_228 = local_228 + 1;
    } while (cVar1 != '\0');
    *(char **)log_buffer[1].field0_0x0 =
         local_214 + (*(int *)log_buffer[1].field0_0x0 - (int)(buffer + 1));
    **(undefined **)log_buffer[1].field0_0x0 = 0;
  }
  local_8 = (int **)0x0;
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}


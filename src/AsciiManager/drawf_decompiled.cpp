
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl AsciiManager::drawf(AsciiManager *ascii_manager,Float3 *position,char *format)

{
  uint unaff_retaddr;
  char buffer [512];
  uint local_c;
  int **local_8;
  
  local_c = _DAT_0047a630 ^ unaff_retaddr;
  local_8 = (int **)&stack0x00000010;
  _vsprintf(buffer,(byte *)format,local_8);
  draw(ascii_manager,position,buffer);
  local_8 = (int **)0x0;
  ___security_check_cookie_4(local_c ^ unaff_retaddr);
  return;
}


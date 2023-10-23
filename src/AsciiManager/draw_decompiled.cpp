
AsciiManager * __thiscall AsciiManager::draw(AsciiManager *this,Float3 *position,char *str)

{
  char cVar1;
  AsciiManager *pAVar2;
  AsciiManagerString *local_14;
  char *local_10;
  AsciiManagerString *ascii_string;
  
  if (this->num_strings < 256) {
    ascii_string = this->strings + this->num_strings;
    this->num_strings = this->num_strings + 1;
    local_10 = str;
    local_14 = ascii_string;
    do {
      cVar1 = *local_10;
      local_14->text[0] = cVar1;
      local_10 = local_10 + 1;
      local_14 = (AsciiManagerString *)(local_14->text + 1);
    } while (cVar1 != '\0');
    (ascii_string->position).x = position->x;
    (ascii_string->position).y = position->y;
    (ascii_string->position).z = position->z;
    ascii_string->color = this->color;
    (ascii_string->scale).x = (this->scale).x;
    (ascii_string->scale).y = (this->scale).y;
    *(int *)(ascii_string->field4_0x58 + 4) = this->dword_6230;
    pAVar2 = (AsciiManager *)(supervisor.config.flags & 1);
    if ((supervisor.config.flags >> 8 & 1 | (uint)pAVar2) == 0) {
      *(undefined4 *)ascii_string->field4_0x58 = 0;
      this = pAVar2;
    }
    else {
      *(int *)ascii_string->field4_0x58 = this->dword_6234;
    }
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

GameManager * __thiscall GameManager::constructor(GameManager *this)

{
  int i;
  int *memset;
  
  i = 1696;
  memset = &this->__dword_0;
  for (; i != 0; i = i + -1) {
    *memset = 0;
    memset = memset + 1;
  }
  (this->arcade_region_top_left_pos).x = _32_0f;
  (this->arcade_region_top_left_pos).y = ram0x0046a2b4;
  (this->arcade_region_size).x = _84_0f;
  (this->arcade_region_size).y = _48_0f;
  return this;
}


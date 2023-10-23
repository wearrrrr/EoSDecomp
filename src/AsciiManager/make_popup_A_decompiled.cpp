
AsciiManager * __thiscall
AsciiManager::make_popup_A(AsciiManager *this,Float3 *position,int number,D3DCOLOR color)

{
  int idx;
  AsciiManagerPopup *popup;
  
  if (0x1ff < this->next_popupA_index) {
    this->next_popupA_index = 0;
  }
  popup = this->popups_1 + this->next_popupA_index;
  popup->in_use = 1;
  idx = 0;
  if (number < 0) {
    popup->digits[0] = 10;
    idx = 1;
  }
  else {
    for (; number != 0; number = number / 10) {
      popup->digits[idx] = (char)(number % 10);
      idx = idx + 1;
    }
  }
  if (idx == 0) {
    popup->digits[0] = '\0';
    idx = 1;
  }
  popup->characters = (uint8_t)idx;
  popup->color = color;
  (popup->timer).current = 0;
  (popup->timer).subframe = 0.0;
  (popup->timer).previous = -999;
  (popup->position).x = position->x;
  (popup->position).y = position->y;
  (popup->position).z = position->z;
  this->next_popupA_index = this->next_popupA_index + 1;
  return this;
}


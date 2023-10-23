
undefined4 __thiscall ResultScreen::__sub_42D292(ResultScreen *this)

{
  if (*(int *)(this->field0_0x0 + 8) == 0xf) {
    if (*(int *)(this->field0_0x0 + 4) < 0x1f) {
      *(undefined2 *)(this->field0_0x0 + 0x281a) = 0x10;
    }
    if (((0x59 < *(int *)(this->field0_0x0 + 4)) && ((input.currently_pressed & 0x1001) != 0)) &&
       ((input.currently_pressed & 0x1001) != (input.word_4 & 0x1001))) {
      *(undefined2 *)(this->field0_0x0 + 0x281a) = 2;
      *(undefined4 *)(this->field0_0x0 + 4) = 0;
      *(undefined4 *)(this->field0_0x0 + 8) = 0x10;
    }
  }
  else if ((*(int *)(this->field0_0x0 + 8) == 0x10) && (0x1d < *(int *)(this->field0_0x0 + 4))) {
    *(undefined4 *)(this->field0_0x0 + 4) = 0x3b;
    *(undefined4 *)(this->field0_0x0 + 8) = 10;
  }
  return 0;
}



undefined4 __fastcall Menu::__sub_4379E4(int param_1)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  int local_8;
  
  if (*(int *)(param_1 + 0x81f4) < 0x1e) {
    uVar3 = 1;
  }
  else if ((((input.currently_pressed & 0x160b) == 0) ||
           ((input.currently_pressed & 0x160b) == (input.word_4 & 0x160b))) &&
          (((input.currently_pressed & 0x160b) == 0 || (input.word_8 == 0)))) {
    uVar3 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x81f4) = 0;
    *(undefined4 *)(param_1 + 0x81f0) = 2;
    for (local_8 = 0; local_8 < 0x7a; local_8 = local_8 + 1) {
      *(undefined2 *)(param_1 + 0x8a + local_8 * 0x110) = 2;
    }
    if ((supervisor.config.flags & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c + *(int *)(param_1 + 0x81a0) * 0x110) = 0xffff0000;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c + *(int *)(param_1 + 0x81a0) * 0x110) = 0xffffe0e0;
    }
    fVar2 = _6_0f;
    pfVar1 = (float *)(param_1 + 0xe4 + *(int *)(param_1 + 0x81a0) * 0x110);
    *pfVar1 = _6_0f;
    pfVar1[1] = fVar2;
    pfVar1[2] = 0.0;
    *(undefined4 *)(param_1 + 0x81fc) = 0;
    *(undefined4 *)(param_1 + 0x8200) = 0x40000000;
    *(undefined4 *)(param_1 + 0x820c) = 0;
    *(undefined4 *)(param_1 + 0x8210) = 0x3c;
    uVar3 = 0;
  }
  return uVar3;
}


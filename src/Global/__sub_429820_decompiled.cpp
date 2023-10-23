
void __cdecl __sub_429820(int param_1,undefined4 param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = param_1 + 0xa28;
  local_c = 0;
  do {
    if (0x4f < local_c) {
      return;
    }
    if (*(short *)(local_10 + 0x14e) == 0) {
      do {
        if (*(char *)(param_1 + 0x9e3) == '\0') {
          local_14 = (**(code **)(param_1 + 0x75c0))(param_1,local_10,local_8,param_2);
        }
        else {
          local_14 = (**(code **)(param_1 + 0x75c4))(param_1,local_10,local_8,param_2);
        }
        if (-1 < local_14) {
          *(undefined4 *)(local_10 + 0x90) = *(undefined4 *)(local_10 + 0x110);
          *(undefined4 *)(local_10 + 0x94) = *(undefined4 *)(local_10 + 0x114);
          *(undefined4 *)(local_10 + 0x98) = 0x3efd70a4;
          *(undefined2 *)(local_10 + 0x14e) = 1;
        }
        if (local_14 == -2) {
          return;
        }
        if (0 < local_14) {
          return;
        }
        local_8 = local_8 + 1;
      } while (local_14 == -1);
    }
    local_c = local_c + 1;
    local_10 = local_10 + 0x158;
  } while( true );
}


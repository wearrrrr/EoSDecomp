
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl ecl_get_var(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float10 fVar1;
  Float3 local_10;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 3;
  }
  switch(*param_2) {
  case 0xffffd8d7:
    ___ShotCalc = (uint)(byte)game_manager.shottype + (uint)(byte)game_manager.character * 2;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)&__ShotCalc;
    break;
  case 0xffffd8d8:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0xce4);
    break;
  case 0xffffd8d9:
    local_10.z = player.position.z - *(float *)(param_1 + 0xc74);
    local_10.y = player.position.y - *(float *)(param_1 + 0xc70);
    local_10.x = player.position.x - *(float *)(param_1 + 0xc6c);
    fVar1 = Float3::magnitude(&local_10);
    ___DistPlayerCalc = (float)fVar1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (undefined4 *)&__DistPlayerCalc;
    break;
  case 0xffffd8da:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0xcf8);
    break;
  case 0xffffd8db:
    fVar1 = Player::angle_to_player_from_point(&player,(Float3 *)(param_1 + 0xc6c));
    ___AnglePlayerCalc = (float)fVar1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (undefined4 *)&__AnglePlayerCalc;
    break;
  case 0xffffd8dc:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = &player.position.z;
    break;
  case 0xffffd8dd:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = &player.position.y;
    break;
  case 0xffffd8de:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = (undefined4 *)&player.position;
    break;
  case 0xffffd8df:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0xc74);
    break;
  case 0xffffd8e0:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0xc70);
    break;
  case 0xffffd8e1:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0xc6c);
    break;
  case 0xffffd8e2:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = &game_manager.rank;
    break;
  case 0xffffd8e3:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 2;
    }
    param_2 = &game_manager.difficulty;
    break;
  case 0xffffd8e4:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9d0);
    break;
  case 0xffffd8e5:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9cc);
    break;
  case 0xffffd8e6:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9c8);
    break;
  case 0xffffd8e7:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9c4);
    break;
  case 0xffffd8e8:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0x9c0);
    break;
  case 0xffffd8e9:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0x9bc);
    break;
  case 0xffffd8ea:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0x9b8);
    break;
  case 0xffffd8eb:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    param_2 = (undefined4 *)(param_1 + 0x9b4);
    break;
  case 0xffffd8ec:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9b0);
    break;
  case 0xffffd8ed:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9ac);
    break;
  case 0xffffd8ee:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9a8);
    break;
  case 0xffffd8ef:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    param_2 = (undefined4 *)(param_1 + 0x9a4);
  }
  return param_2;
}


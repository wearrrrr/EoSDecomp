
byte * __cdecl _inflate(byte **param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  byte *pbVar6;
  
  if (((param_1 == (byte **)0x0) || (param_1[7] == (byte *)0x0)) || (*param_1 == (byte *)0x0)) {
switchD_00450657_caseD_e:
    pbVar6 = (byte *)0xfffffffe;
  }
  else {
    bVar5 = param_2 != (byte *)0x4;
    param_2 = (byte *)0xfffffffb;
    pbVar6 = (byte *)0xfffffffb;
    if (bVar5) {
      param_2 = (byte *)0x0;
    }
LAB_0045064a:
    puVar2 = (undefined4 *)param_1[7];
    switch(*puVar2) {
    case 0:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      puVar2[1] = (uint)**param_1;
      puVar2 = (undefined4 *)param_1[7];
      uVar3 = puVar2[1];
      *param_1 = *param_1 + 1;
      if (((byte)uVar3 & 0xf) == 8) {
        uVar4 = ((uint)puVar2[1] >> 4) + 8;
        if (uVar4 < (uint)puVar2[4] || uVar4 == puVar2[4]) {
          *puVar2 = 1;
          pbVar6 = param_2;
          goto switchD_00450657_caseD_1;
        }
        *puVar2 = 0xd;
        param_1[6] = (byte *)"invalid window size";
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (byte *)"unknown compression method";
      }
      goto LAB_00450694;
    case 1:
switchD_00450657_caseD_1:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      bVar1 = **param_1;
      *param_1 = *param_1 + 1;
      puVar2 = (undefined4 *)param_1[7];
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          pbVar6 = param_2;
          goto switchD_00450657_caseD_2;
        }
        *puVar2 = 7;
        pbVar6 = param_2;
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (byte *)"incorrect header check";
        *(undefined4 *)(param_1[7] + 4) = 5;
        pbVar6 = param_2;
      }
      goto LAB_0045064a;
    case 2:
switchD_00450657_caseD_2:
      if (param_1[1] != (byte *)0x0) {
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + -1;
        *(uint *)(param_1[7] + 8) = (uint)**param_1 << 0x18;
        *param_1 = *param_1 + 1;
        *(undefined4 *)param_1[7] = 3;
        pbVar6 = param_2;
switchD_00450657_caseD_3:
        if (param_1[1] != (byte *)0x0) {
          param_1[2] = param_1[2] + 1;
          param_1[1] = param_1[1] + -1;
          *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1 * 0x10000;
          *param_1 = *param_1 + 1;
          *(undefined4 *)param_1[7] = 4;
          pbVar6 = param_2;
switchD_00450657_caseD_4:
          if (param_1[1] != (byte *)0x0) {
            param_1[2] = param_1[2] + 1;
            param_1[1] = param_1[1] + -1;
            *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1 * 0x100;
            *param_1 = *param_1 + 1;
            *(undefined4 *)param_1[7] = 5;
            pbVar6 = param_2;
switchD_00450657_caseD_5:
            if (param_1[1] != (byte *)0x0) {
              param_1[2] = param_1[2] + 1;
              param_1[1] = param_1[1] + -1;
              *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1;
              *param_1 = *param_1 + 1;
              param_1[0xc] = *(byte **)((int)param_1[7] + 8);
              *(undefined4 *)param_1[7] = 6;
              pbVar6 = (byte *)0x2;
            }
          }
        }
      }
      break;
    case 3:
      goto switchD_00450657_caseD_3;
    case 4:
      goto switchD_00450657_caseD_4;
    case 5:
      goto switchD_00450657_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (byte *)"need dictionary";
      *(undefined4 *)(param_1[7] + 4) = 0;
      goto switchD_00450657_caseD_e;
    case 7:
      pbVar6 = (byte *)_inflate_blocks_D3DX__YAHPAUinflate_blocks_state_1_PAUz_stream_s_1_H_Z
                                 ((uint *)puVar2[5],param_1,pbVar6);
      if (pbVar6 == (byte *)0xfffffffd) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        pbVar6 = (byte *)0xfffffffd;
      }
      else {
        if (pbVar6 == (byte *)0x0) {
          pbVar6 = param_2;
        }
        if (pbVar6 != (byte *)0x1) {
          return pbVar6;
        }
        _inflate_blocks_reset_D3DX__YAXPAUinflate_blocks_state_1_PAUz_stream_s_1_PAK_Z
                  (*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          pbVar6 = param_2;
          goto switchD_00450657_caseD_8;
        }
        *puVar2 = 0xc;
        pbVar6 = param_2;
      }
      goto LAB_0045064a;
    case 8:
switchD_00450657_caseD_8:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = (uint)**param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 9;
      pbVar6 = param_2;
    case 9:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 10;
      pbVar6 = param_2;
switchD_00450657_caseD_a:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 0xb;
      pbVar6 = param_2;
switchD_00450657_caseD_b:
      if (param_1[1] == (byte *)0x0) {
        return pbVar6;
      }
      param_1[2] = param_1[2] + 1;
      param_1[1] = param_1[1] + -1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)**param_1;
      puVar2 = (undefined4 *)param_1[7];
      *param_1 = *param_1 + 1;
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)param_1[7] = 0xc;
LAB_00450926:
        return (byte *)0x1;
      }
      *puVar2 = 0xd;
      param_1[6] = (byte *)"incorrect data check";
LAB_00450694:
      *(undefined4 *)(param_1[7] + 4) = 5;
      pbVar6 = param_2;
      goto LAB_0045064a;
    case 10:
      goto switchD_00450657_caseD_a;
    case 0xb:
      goto switchD_00450657_caseD_b;
    case 0xc:
      goto LAB_00450926;
    case 0xd:
      return (byte *)0xfffffffd;
    default:
      goto switchD_00450657_caseD_e;
    }
  }
  return pbVar6;
}


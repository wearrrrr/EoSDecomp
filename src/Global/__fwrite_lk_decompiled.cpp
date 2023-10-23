
/* Library Function - Single Match
    __fwrite_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  uint uVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar5;
    if ((*(ushort *)&param_4->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = param_4->_bufsiz;
    }
    do {
      uVar3 = param_4->_flag & 0x108;
      if ((uVar3 == 0) || (uVar1 = param_4->_cnt, uVar1 == 0)) {
        if (local_8 <= uVar4) {
          if ((uVar3 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) {
LAB_0045cb42:
            return (uVar5 - uVar4) / param_2;
          }
          uVar3 = uVar4;
          if (local_8 != 0) {
            uVar3 = uVar4 - uVar4 % local_8;
          }
          _Size = __write(param_4->_file,param_1,uVar3);
          if ((_Size == 0xffffffff) || (uVar4 = uVar4 - _Size, _Size < uVar3)) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_0045cb42;
          }
          goto LAB_0045cb02;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_0045cb42;
        param_1 = param_1 + 1;
        local_8 = param_4->_bufsiz;
        uVar4 = uVar4 - 1;
        if ((int)local_8 < 1) {
          local_8 = 1;
        }
      }
      else {
        _Size = uVar4;
        if (uVar1 <= uVar4) {
          _Size = uVar1;
        }
        _memcpy(param_4->_ptr,param_1,_Size);
        param_4->_cnt = param_4->_cnt - _Size;
        param_4->_ptr = param_4->_ptr + _Size;
        uVar4 = uVar4 - _Size;
LAB_0045cb02:
        param_1 = param_1 + _Size;
      }
    } while (uVar4 != 0);
  }
  return param_3;
}


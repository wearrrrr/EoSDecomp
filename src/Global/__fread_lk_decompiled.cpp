
/* Library Function - Single Match
    __fread_lk
   
   Library: Visual Studio 2003 Release */

uint __cdecl __fread_lk(undefined *param_1,uint param_2,uint param_3,FILE *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *_Size;
  undefined *local_8;
  
  puVar4 = (undefined *)(param_2 * param_3);
  if (puVar4 == (undefined *)0x0) {
    param_3 = 0;
  }
  else {
    puVar3 = param_1;
    param_1 = puVar4;
    if ((*(ushort *)&param_4->_flag & 0x10c) == 0) {
      local_8 = (undefined *)0x1000;
    }
    else {
      local_8 = (undefined *)param_4->_bufsiz;
    }
    do {
      if (((*(ushort *)&param_4->_flag & 0x10c) == 0) ||
         (puVar1 = (undefined *)param_4->_cnt, puVar1 == (undefined *)0x0)) {
        if (param_1 < local_8) {
          iVar2 = __filbuf(param_4);
          if (iVar2 == -1) goto LAB_0045c6d6;
          *puVar3 = (char)iVar2;
          local_8 = (undefined *)param_4->_bufsiz;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + -1;
        }
        else {
          puVar1 = param_1;
          if (local_8 != (undefined *)0x0) {
            puVar1 = param_1 + -((uint)param_1 % (uint)local_8);
          }
          iVar2 = __read(param_4->_file,puVar3,(uint)puVar1);
          if (iVar2 == 0) {
            param_4->_flag = param_4->_flag | 0x10;
LAB_0045c6d6:
            return (uint)((int)puVar4 - (int)param_1) / param_2;
          }
          if (iVar2 == -1) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_0045c6d6;
          }
          param_1 = param_1 + -iVar2;
          puVar3 = puVar3 + iVar2;
        }
      }
      else {
        _Size = param_1;
        if (puVar1 <= param_1) {
          _Size = puVar1;
        }
        _memcpy(puVar3,param_4->_ptr,(size_t)_Size);
        param_1 = param_1 + -(int)_Size;
        param_4->_cnt = param_4->_cnt - (int)_Size;
        param_4->_ptr = _Size + (int)param_4->_ptr;
        puVar3 = puVar3 + (int)_Size;
      }
    } while (param_1 != (undefined *)0x0);
  }
  return param_3;
}


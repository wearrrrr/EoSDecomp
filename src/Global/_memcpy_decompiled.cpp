
/* Library Function - Single Match
    _memcpy
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((_Src < _Dst) && (_Dst < (void *)(_Size + (int)_Src))) {
    puVar3 = (undefined4 *)((_Size - 4) + (int)_Src);
    puVar4 = (undefined4 *)((_Size - 4) + (int)_Dst);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = _Size >> 2;
      uVar2 = _Size & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return _Dst;
        case 2:
          goto switchD_0045ce4b_caseD_2;
        case 3:
          goto switchD_0045ce4b_caseD_3;
        }
        goto switchD_0045ce4b_caseD_1;
      }
    }
    else {
      switch(_Size) {
      case 0:
        goto switchD_0045ce4b_caseD_0;
      case 1:
        goto switchD_0045ce4b_caseD_1;
      case 2:
        goto switchD_0045ce4b_caseD_2;
      case 3:
        goto switchD_0045ce4b_caseD_3;
      default:
        uVar1 = _Size - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0045ce4b_caseD_2;
            case 3:
              goto switchD_0045ce4b_caseD_3;
            }
            goto switchD_0045ce4b_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0045ce4b_caseD_2;
            case 3:
              goto switchD_0045ce4b_caseD_3;
            }
            goto switchD_0045ce4b_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
          *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return _Dst;
            case 2:
              goto switchD_0045ce4b_caseD_2;
            case 3:
              goto switchD_0045ce4b_caseD_3;
            }
            goto switchD_0045ce4b_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0045ce4b_caseD_1:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      return _Dst;
    case 2:
switchD_0045ce4b_caseD_2:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      return _Dst;
    case 3:
switchD_0045ce4b_caseD_3:
      *(undefined *)((int)puVar4 + 3) = *(undefined *)((int)puVar3 + 3);
      *(undefined *)((int)puVar4 + 2) = *(undefined *)((int)puVar3 + 2);
      *(undefined *)((int)puVar4 + 1) = *(undefined *)((int)puVar3 + 1);
      return _Dst;
    }
switchD_0045ce4b_caseD_0:
    return _Dst;
  }
  puVar3 = (undefined4 *)_Dst;
  if (((uint)_Dst & 3) == 0) {
    uVar1 = _Size >> 2;
    uVar2 = _Size & 3;
    if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *_Src;
        _Src = (undefined4 *)((int)_Src + 4);
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return _Dst;
      case 2:
        goto switchD_0045ccc5_caseD_2;
      case 3:
        goto switchD_0045ccc5_caseD_3;
      }
      goto switchD_0045ccc5_caseD_1;
    }
  }
  else {
    switch(_Size) {
    case 0:
      goto switchD_0045ccc5_caseD_0;
    case 1:
      goto switchD_0045ccc5_caseD_1;
    case 2:
      goto switchD_0045ccc5_caseD_2;
    case 3:
      goto switchD_0045ccc5_caseD_3;
    default:
      uVar1 = (_Size - 4) + ((uint)_Dst & 3);
      switch((uint)_Dst & 3) {
      case 1:
        uVar2 = uVar1 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined *)_Dst = *_Src;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 2) = *(undefined *)((int)_Src + 2);
        _Src = (void *)((int)_Src + 3);
        puVar3 = (undefined4 *)((int)_Dst + 3);
        if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0045ccc5_caseD_2;
          case 3:
            goto switchD_0045ccc5_caseD_3;
          }
          goto switchD_0045ccc5_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined *)_Dst = *_Src;
        uVar1 = uVar1 >> 2;
        *(undefined *)((int)_Dst + 1) = *(undefined *)((int)_Src + 1);
        _Src = (void *)((int)_Src + 2);
        puVar3 = (undefined4 *)((int)_Dst + 2);
        if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0045ccc5_caseD_2;
          case 3:
            goto switchD_0045ccc5_caseD_3;
          }
          goto switchD_0045ccc5_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
                    /* WARNING: Load size is inaccurate */
        *(undefined *)_Dst = *_Src;
        _Src = (void *)((int)_Src + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)_Dst + 1);
        if (7 < uVar1) {
                    /* WARNING: Load size is inaccurate */
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *_Src;
            _Src = (undefined4 *)((int)_Src + 4);
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return _Dst;
          case 2:
            goto switchD_0045ccc5_caseD_2;
          case 3:
            goto switchD_0045ccc5_caseD_3;
          }
          goto switchD_0045ccc5_caseD_1;
        }
      }
    }
  }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 7] = *(undefined4 *)((int)_Src + (uVar1 - 7) * 4);
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 6] = *(undefined4 *)((int)_Src + (uVar1 - 6) * 4);
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 5] = *(undefined4 *)((int)_Src + (uVar1 - 5) * 4);
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 4] = *(undefined4 *)((int)_Src + (uVar1 - 4) * 4);
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 3] = *(undefined4 *)((int)_Src + (uVar1 - 3) * 4);
  case 8:
  case 9:
  case 10:
  case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar3[uVar1 - 2] = *(undefined4 *)((int)_Src + (uVar1 - 2) * 4);
  case 4:
  case 5:
  case 6:
  case 7:
    puVar3[uVar1 - 1] = *(undefined4 *)((int)_Src + (uVar1 - 1) * 4);
    _Src = (void *)((int)_Src + uVar1 * 4);
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0045ccc5_caseD_1:
                    /* WARNING: Load size is inaccurate */
    *(undefined *)puVar3 = *_Src;
    return _Dst;
  case 2:
switchD_0045ccc5_caseD_2:
                    /* WARNING: Load size is inaccurate */
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    return _Dst;
  case 3:
switchD_0045ccc5_caseD_3:
                    /* WARNING: Load size is inaccurate */
    *(undefined *)puVar3 = *_Src;
    *(undefined *)((int)puVar3 + 1) = *(undefined *)((int)_Src + 1);
    *(undefined *)((int)puVar3 + 2) = *(undefined *)((int)_Src + 2);
    return _Dst;
  }
switchD_0045ccc5_caseD_0:
  return _Dst;
}


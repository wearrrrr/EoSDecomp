
int _D3DXCreateSprite_8(int *param_1,cls_0x46d058 **param_2)

{
  int iVar1;
  cls_0x46d058 *pcVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (cls_0x46d058 **)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    pcVar2 = (cls_0x46d058 *)malloc(0x18);
    if (pcVar2 == (cls_0x46d058 *)0x0) {
      pcVar2 = (cls_0x46d058 *)0x0;
    }
    else {
      pcVar2 = OOAnalyzer::cls_0x46d058::__0CD3DXSprite__QAE_XZ(pcVar2);
    }
    if (pcVar2 == (cls_0x46d058 *)0x0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = OOAnalyzer::cls_0x46d058::_Initialize_CD3DXSprite__QAEJPAUIDirect3DDevice8___Z
                        (pcVar2,param_1);
      if (iVar1 < 0) {
        OOAnalyzer::cls_0x46d058::__1CD3DXSprite__QAE_XZ(pcVar2);
        _free(pcVar2);
      }
      else {
        *param_2 = pcVar2;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



int _D3DXCreateFontIndirect_12(int **param_1,LOGFONTA *param_2,cls_0x46d034 **param_3)

{
  cls_0x46d034 *pcVar1;
  int iVar2;
  
  if (((param_1 == (int **)0x0) || (param_2 == (LOGFONTA *)0x0)) ||
     (param_3 == (cls_0x46d034 **)0x0)) {
    iVar2 = -0x7789f794;
  }
  else {
    pcVar1 = (cls_0x46d034 *)malloc(0x50);
    if (pcVar1 == (cls_0x46d034 *)0x0) {
      pcVar1 = (cls_0x46d034 *)0x0;
    }
    else {
      pcVar1 = OOAnalyzer::cls_0x46d034::__0CD3DXFont__QAE_XZ(pcVar1);
    }
    if (pcVar1 == (cls_0x46d034 *)0x0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      iVar2 = OOAnalyzer::cls_0x46d034::
              _Initialize_CD3DXFont__QAEJPAUIDirect3DDevice8__PBUtagLOGFONTA___Z
                        (pcVar1,param_1,param_2);
      if (iVar2 < 0) {
        OOAnalyzer::cls_0x46d034::__1CD3DXFont__QAE_XZ(pcVar1);
        _free(pcVar1);
      }
      else {
        *param_3 = pcVar1;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


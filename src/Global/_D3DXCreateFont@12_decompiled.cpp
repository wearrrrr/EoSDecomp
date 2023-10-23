
int _D3DXCreateFont_12(int **param_1,HANDLE param_2,cls_0x46d034 **param_3)

{
  int result;
  LOGFONTA local_40;
  
  result = GetObjectA(param_2,0x3c,&local_40);
  if (result == 0) {
    result = -0x7789f794;
  }
  else {
    result = _D3DXCreateFontIndirect_12(param_1,&local_40,param_3);
  }
  return result;
}


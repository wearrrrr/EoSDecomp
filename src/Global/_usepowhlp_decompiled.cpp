
float10 _usepowhlp(void)

{
  int iVar1;
  float10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  double local_78 [14];
  
  iVar1 = __powhlp(SUB84((double)in_ST1,0),(int)((ulonglong)(double)in_ST1 >> 0x20),(double)in_ST0,
                   local_78);
  if (iVar1 != 0) {
    fVar2 = (float10)__rttosnpopde();
    return fVar2;
  }
  return (float10)local_78[0];
}


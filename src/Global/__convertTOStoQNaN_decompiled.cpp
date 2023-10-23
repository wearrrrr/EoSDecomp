
/* Library Function - Single Match
    __convertTOStoQNaN
   
   Library: Visual Studio */

undefined4 __convertTOStoQNaN(void)

{
  uint in_EAX;
  
  if ((in_EAX & 0x80000) != 0) {
    return 7;
  }
  return 1;
}



/* Library Function - Single Match
    __safe_fdivr
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

undefined4 __safe_fdivr(void)

{
  undefined4 in_EAX;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffe6;
  
  _fdiv_main_routine((uint)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),
                     (ushort)((unkuint10)in_ST1 >> 0x40),(int)in_ST0,
                     (uint)((unkuint10)in_ST0 >> 0x20),
                     CONCAT22(in_stack_ffffffe6,(short)((unkuint10)in_ST0 >> 0x40)));
  return in_EAX;
}


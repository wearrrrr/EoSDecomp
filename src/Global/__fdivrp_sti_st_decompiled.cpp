
/* Library Function - Single Match
    __fdivrp_sti_st
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2019 */

void __fdivrp_sti_st(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  undefined2 in_stack_ffffffea;
  
  _fdiv_main_routine((uint)in_ST1,(uint)((unkuint10)in_ST1 >> 0x20),
                     (ushort)((unkuint10)in_ST1 >> 0x40),(int)in_ST0,
                     (uint)((unkuint10)in_ST0 >> 0x20),
                     CONCAT22(in_stack_ffffffea,(short)((unkuint10)in_ST0 >> 0x40)));
  return;
}



undefined4 __adj_fdiv_m16i(undefined2 param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivp_sti_st();
    return in_EAX;
  }
  __fdivp_sti_st();
  return in_EAX;
}


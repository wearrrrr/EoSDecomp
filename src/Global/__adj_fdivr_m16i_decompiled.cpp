
undefined4 __adj_fdivr_m16i(undefined2 param_1)

{
  undefined4 in_EAX;
  ushort in_FPUStatusWord;
  
  if ((in_FPUStatusWord & 0x3800) != 0) {
    __fdivrp_sti_st();
    return in_EAX;
  }
  __fdivrp_sti_st();
  return in_EAX;
}


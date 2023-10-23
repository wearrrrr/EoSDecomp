
void life_before_main_4697ac_SUPERVISOR(void)

{
  int iVar1;
  Supervisor *pSVar2;
  
  pSVar2 = &supervisor;
  for (iVar1 = 0x136; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar2->current_instance = (HINSTANCE)0x0;
    pSVar2 = (Supervisor *)&pSVar2->d3d;
  }
  return;
}


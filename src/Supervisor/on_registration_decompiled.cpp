
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int Supervisor::on_registration(Supervisor *supervisor)

{
  int result;
  void *pvVar1;
  float *puVar3;
  DWORD currentTime;
  int unaff_EBP;
  
  __EH_prolog();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while (*(int *)(unaff_EBP + -0x10) < 0x10) {
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1bc + *(int *)(unaff_EBP + -0x10) * 4) = 0;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  }
  result = *(int *)(unaff_EBP + 8) + 0x1bc;
  ___dword_69D900 = result;
  __load_dat_file(*(Supervisor **)(unaff_EBP + 8),0,"çgñÇãΩIN.dat");
  if (result == 0) {
                    /* Load initial screen... */
    AnmManager::set_surface_image(anm_manager_ptr,0,"data/title/th06logo.jpg");
    AnmManager::__surface_copy_related(anm_manager_ptr,0,0,0,0,0);
    result = (*(code *)(::supervisor.d3d_device)->vtable->Present)(::supervisor.d3d_device,0,0,0,0);
    if (result < 0) {
      (*(code *)(::supervisor.d3d_device)->vtable->Reset)(::supervisor.d3d_device,0x6c6df8);
    }
    AnmManager::__surface_copy_related(anm_manager_ptr,0,0,0,0,0);
    result = (*(code *)(::supervisor.d3d_device)->vtable->Present)(::supervisor.d3d_device,0,0,0,0);
    if (result < 0) {
      (*(code *)(::supervisor.d3d_device)->vtable->Reset)(::supervisor.d3d_device,0x6c6df8);
    }
    AnmManager::free_surface(anm_manager_ptr,0);
    currentTime = timeGetTime();
    *(DWORD *)(*(int *)(unaff_EBP + 8) + 0x400) = currentTime;
    __sub_423B14(*(int *)(unaff_EBP + 8));
    pvVar1 = malloc(0x300);
    *(void **)(unaff_EBP + -0x18) = pvVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    else {
      puVar3 = (float *)UnknownC::__sub_421DF0(*(UnknownC **)(unaff_EBP + -0x18));
      *(float **)(unaff_EBP + -0x20) = puVar3;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x1b0) = *(undefined4 *)(unaff_EBP + -0x14);
    currentTime = timeGetTime();
    *(short *)(unaff_EBP + -0x1a) = (short)currentTime;
    Rng.rng_value = *(uint16_t *)(unaff_EBP + -0x1a);
    ram0x0069d8fc = 0;
    SoundManager::__sub_431080(&sound_manager);
    result = AnmManager::load_anm_file(anm_manager_ptr,0,"data/text.anm",0x700);
    if (result == 0) {
      result = AsciiManager::initialize();
      if (result == 0) {
        *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x198) = 0;
        AnmManager::initialize(anm_manager_ptr);
        result = create_global_surface();
        __sub_4242F3(*(Supervisor **)(unaff_EBP + 8),0);
        __load_dat_file(&::supervisor,1,"çgñÇãΩMD.dat");
        if (result == 0) {
          result = 0;
        }
        else {
          result = -1;
        }
      }
      else {
        LogBuffer::write(&LogBuffer,"error : ï∂éöÇÃèâä˙âªÇ…é∏îsÇµÇ‹ÇµÇΩ\n");
        result = -1;
      }
    }
    else {
      result = -1;
    }
  }
  else {
    result = -1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return result;
}


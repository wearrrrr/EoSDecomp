
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl ReplayManager::initialize(int param_1,undefined4 fileName)

{
  UpdateFunc *pUVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *ReplayManager;
  
  if ((__99f <= supervisor.slowdown) || (param_1 != 0)) {
    supervisor.slowdown = 1.0;
    if (_REPLAY_MANAGER_PTR == (undefined4 *)0x0) {
      ReplayManager = (undefined4 *)malloc(0x74);
      if (ReplayManager == (undefined4 *)0x0) {
        ReplayManager = (undefined4 *)0x0;
      }
      _REPLAY_MANAGER_PTR = ReplayManager;
      ReplayManager[1] = 0;
      ReplayManager[2] = param_1;
      ReplayManager[3] = fileName;
      if (param_1 == 0) {
        pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick_A1);
        ReplayManager[0x1a] = pUVar1;
        *(code **)(ReplayManager[0x1a] + 8) = on_registration_A1;
        *(code **)(ReplayManager[0x1a] + 0xc) = on_cleanup;
        pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
        ReplayManager[0x1b] = pUVar1;
        *(undefined4 **)(ReplayManager[0x1a] + 0x1c) = ReplayManager;
        iVar2 = UpdateFuncRegistry::register_on_tick
                          (&update_func_registry,(undefined2 *)ReplayManager[0x1a],0xf);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        ReplayManager[0x1c] = 0;
      }
      else if (param_1 == 1) {
        pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick_A2);
        ReplayManager[0x1a] = pUVar1;
        *(code **)(ReplayManager[0x1a] + 8) = on_registration_A2;
        *(code **)(ReplayManager[0x1a] + 0xc) = on_cleanup;
        pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_draw);
        ReplayManager[0x1b] = pUVar1;
        *(undefined4 **)(ReplayManager[0x1a] + 0x1c) = ReplayManager;
        iVar2 = UpdateFuncRegistry::register_on_tick
                          (&update_func_registry,(undefined2 *)ReplayManager[0x1a],5);
        if (iVar2 != 0) {
          return 0xffffffff;
        }
        pUVar1 = UpdateFunc::operator_new(&update_func_registry.on_tick_list_head,on_tick_B);
        ReplayManager[0x1c] = pUVar1;
        *(undefined4 **)(ReplayManager[0x1c] + 0x1c) = ReplayManager;
        UpdateFuncRegistry::register_on_tick
                  (&update_func_registry,(undefined2 *)ReplayManager[0x1c],0x10);
      }
      *(undefined4 **)(ReplayManager[0x1b] + 0x1c) = ReplayManager;
      UpdateFuncRegistry::register_on_draw
                (&update_func_registry,(UpdateFunc *)ReplayManager[0x1b],0xd);
    }
    else if (param_1 == 0) {
      on_registration_A1(_REPLAY_MANAGER_PTR);
    }
    else if (param_1 == 1) {
      uVar3 = on_registration_A2(_REPLAY_MANAGER_PTR);
      return uVar3;
    }
  }
  return 0;
}


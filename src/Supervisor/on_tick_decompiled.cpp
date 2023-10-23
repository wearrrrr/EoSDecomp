
int __cdecl Supervisor::on_tick(Supervisor *supervisor)

{
  int iVar1;
  
  if (sound_manager.csound_ptr != (CSound *)0x0) {
    OOAnalyzer::cls_0x43b4d0::meth_0x43b4d0((cls_0x43b4d0 *)sound_manager.csound_ptr);
  }
  input.word_4 = input.currently_pressed;
  input.currently_pressed = __input_related_5();
  input.word_8 = 0;
  if (input.word_4 == input.currently_pressed) {
    if ((0x1d < input.word_C) &&
       (input.word_8 = (uint16_t)((uint)input.word_C % 8 == 0), 0x25 < input.word_C)) {
      input.word_C = 0x1e;
    }
    input.word_C = input.word_C + 1;
  }
  else {
    input.word_C = 0;
  }
  if (supervisor->dword_188 == supervisor->dword_18C) goto LAB_0042375b;
  supervisor->dword_190 = supervisor->dword_188;
  iVar1 = supervisor->dword_188;
  if (iVar1 == 0) goto LAB_00423454;
  if (iVar1 == 1) {
    iVar1 = supervisor->dword_18C;
    if (iVar1 == 2) {
      iVar1 = GameManager::initialize();
      if (iVar1 != 0) {
        return 4;
      }
    }
    else {
      if (iVar1 == 4) {
        return 4;
      }
      if (iVar1 == 5) {
        return 5;
      }
      if (iVar1 == 6) {
        iVar1 = ResultScreen::operator_new();
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 9) {
        iVar1 = MusicRoom::initialize();
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 10) {
        GameManager::unregister_update_funcs();
        iVar1 = Ending::operator_new();
        if (iVar1 != 0) {
          return 4;
        }
      }
    }
  }
  else if (iVar1 == 2) {
    iVar1 = supervisor->dword_18C;
    if (iVar1 == 1) {
LAB_004235a0:
      GameManager::unregister_update_funcs();
      supervisor->dword_18C = 0;
      __sub_42AB30((char *)0x0,(char *)0x0);
LAB_00423454:
      supervisor->dword_18C = 1;
      (*(code *)(::supervisor.d3d_device)->vtable->ResourceManagerDiscardBytes)
                (::supervisor.d3d_device,0);
      iVar1 = Menu::initialize(0);
      if (iVar1 != 0) {
        return 4;
      }
    }
    else if (iVar1 == 3) {
      GameManager::unregister_update_funcs();
      iVar1 = GameManager::initialize();
      if (iVar1 != 0) {
        return 4;
      }
      if (supervisor->dword_18C == 1) goto LAB_004235a0;
      supervisor->dword_18C = 2;
    }
    else {
      if (iVar1 == 4) {
        return 4;
      }
      if (iVar1 == 7) {
        GameManager::unregister_update_funcs();
        iVar1 = ResultScreen::operator_new();
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 8) {
        GameManager::unregister_update_funcs();
        supervisor->dword_18C = 0;
        __sub_42AB30((char *)0x0,(char *)0x0);
        supervisor->dword_18C = 1;
        (*(code *)(::supervisor.d3d_device)->vtable->ResourceManagerDiscardBytes)
                  (::supervisor.d3d_device,0);
        iVar1 = Menu::initialize(1);
        if (iVar1 != 0) {
          return 4;
        }
      }
      else if (iVar1 == 10) {
        GameManager::unregister_update_funcs();
        iVar1 = Ending::operator_new();
        if (iVar1 != 0) {
          return 4;
        }
      }
    }
  }
  else if (iVar1 == 6) {
    if (supervisor->dword_18C == 1) {
      supervisor->dword_18C = 0;
      goto LAB_00423454;
    }
    if (supervisor->dword_18C == 4) {
      return 4;
    }
  }
  else if (iVar1 == 7) {
    if (supervisor->dword_18C == 1) {
      supervisor->dword_18C = 0;
      __sub_42AB30((char *)0x0,(char *)0x0);
      goto LAB_00423454;
    }
    if (supervisor->dword_18C == 4) {
      __sub_42AB30((char *)0x0,(char *)0x0);
      return 4;
    }
  }
  else if (iVar1 == 9) {
    if (supervisor->dword_18C == 1) {
      supervisor->dword_18C = 0;
      goto LAB_00423454;
    }
    if (supervisor->dword_18C == 4) {
      return 4;
    }
  }
  else if (iVar1 == 10) {
    iVar1 = supervisor->dword_18C;
    if (iVar1 == 1) {
      supervisor->dword_18C = 0;
      goto LAB_00423454;
    }
    if (iVar1 == 4) {
      return 4;
    }
    if ((iVar1 == 7) && (iVar1 = ResultScreen::operator_new(), iVar1 != 0)) {
      return 4;
    }
  }
  input.word_8 = 0;
  input.word_4 = 0;
  input.currently_pressed = 0;
LAB_0042375b:
  supervisor->dword_188 = supervisor->dword_18C;
  supervisor->dword_184 = supervisor->dword_184 + 1;
  return 1;
}


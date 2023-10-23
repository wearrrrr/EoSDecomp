
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall Window::do_tick(Window *this)

{
  Window window;
  Window window_00;
  int funcRegTick;
  DWORD systemTime;
  DWORD DVar1;
  undefined8 in_stack_ffffff98;
  undefined4 in_stack_ffffffa0;
  undefined4 in_stack_ffffffa4;
  undefined4 in_stack_ffffffa8;
  int in_stack_ffffffac;
  undefined4 in_stack_ffffffb4;
  double frame_timing;
  bool isAlphaImageShown;
  double sys_frame_time_longlong;
  
  if (this->wparam != 0) {
    if (this->byte_10 != '\0') goto alphaImageLogic;
    do {
      while( true ) {
        if (supervisor.config.frameskip_settings <= this->byte_10) {
          if ((supervisor.config.flags >> 3 & 1 | supervisor.config.flags >> 4 & 1) != 0) {
            (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device);
            (*(code *)(supervisor.d3d_device)->vtable->Clear)
                      (supervisor.d3d_device,0,0,3,Stage.sky_fog.color,0x3f800000,0);
            (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device,0x6c6de0);
          }
          (*(code *)(supervisor.d3d_device)->vtable->BeginScene)();
          UpdateFuncRegistry::run_all_on_draw(&update_func_registry);
          (*(code *)(supervisor.d3d_device)->vtable->EndScene)(supervisor.d3d_device);
          (*(code *)(supervisor.d3d_device)->vtable->SetTexture)(supervisor.d3d_device,0,0);
        }
        supervisor.viewport.X = 0;
        supervisor.viewport.Y = 0;
        supervisor.viewport.Width = 0x280;
        supervisor.viewport.Height = 0x1e0;
        (*(code *)(supervisor.d3d_device)->vtable->SetViewport)(supervisor.d3d_device);
        funcRegTick = UpdateFuncRegistry::run_all_on_tick(&update_func_registry);
        SoundManager::__sub_431270(&sound_manager);
        if (funcRegTick == 0) {
          return 1;
        }
        if (funcRegTick == -1) {
          return 2;
        }
        this->byte_10 = this->byte_10 + 1;
alphaImageLogic:
        if (supervisor.config.fullscreen != 0) break;
        if (((supervisor.config.flags >> 7 & 1) == 0) || (supervisor.is_vsync == 0)) {
          isAlphaImageShown = false;
        }
        else {
          isAlphaImageShown = true;
        }
        if (isAlphaImageShown) break;
LAB_004209ab:
        if (supervisor.config.fullscreen != 0) {
          return 0;
        }
        if (((supervisor.config.flags >> 7 & 1) == 0) || (supervisor.is_vsync == 0)) {
          in_stack_ffffffac = 0;
        }
        else {
          in_stack_ffffffac = 1;
        }
        if (in_stack_ffffffac != 0) {
          return 0;
        }
        if (supervisor.config.frameskip_settings < this->byte_10) goto LAB_00420a0b;
        window.wparam = in_stack_ffffffa0;
        window.main_window = (HWND)(int)in_stack_ffffff98;
        window.should_close = (int)((ulonglong)in_stack_ffffff98 >> 0x20);
        window.bool_wparam_is_zero = in_stack_ffffffa4;
        window.byte_10 = (char)in_stack_ffffffa8;
        window.field5_0x11[0] = (char)((uint)in_stack_ffffffa8 >> 8);
        window.field5_0x11[1] = (char)((uint)in_stack_ffffffa8 >> 0x10);
        window.field5_0x11[2] = (char)((uint)in_stack_ffffffa8 >> 0x18);
        window.sys_params.screen_save_active = 0;
        window.sys_params.low_power_active = systemTime;
        window.sys_params.power_off_active = in_stack_ffffffb4;
        __possibly_render_window(window);
      }
      if (this->byte_10 == '\0') goto LAB_004209ab;
      supervisor.slowdown = 1.0;
      timeBeginPeriod(1);
                    /* Time since windows has booted, this is used to establish a delta time. */
      systemTime = timeGetTime();
      in_stack_ffffffb4 = 0;
      sys_frame_time_longlong = (double)(ulonglong)systemTime;
      if (sys_frame_time_longlong < _SYSTEM_TIME_DOUBLE_low) {
        _SYSTEM_TIME_DOUBLE_low = sys_frame_time_longlong;
      }
                    /* Get absolute value of a float */
      frame_timing = _fabs(sys_frame_time_longlong - _SYSTEM_TIME_DOUBLE_low);
      timeEndPeriod(1);
      if (frame_timing < _6_2_3_d) goto LAB_004209ab;
      do {
        _SYSTEM_TIME_DOUBLE_low = _SYSTEM_TIME_DOUBLE_low + _6_2_3_d;
        frame_timing = frame_timing - _6_2_3_d;
      } while (_6_2_3_d <= frame_timing);
    } while (this->byte_10 <= supervisor.config.frameskip_settings);
LAB_00420a0b:
    window_00.wparam = in_stack_ffffffa0;
    window_00.main_window = (HWND)(int)in_stack_ffffff98;
    window_00.should_close = (int)((ulonglong)in_stack_ffffff98 >> 0x20);
    window_00.bool_wparam_is_zero = in_stack_ffffffa4;
    window_00.byte_10 = (char)in_stack_ffffffa8;
    window_00.field5_0x11[0] = (char)((uint)in_stack_ffffffa8 >> 8);
    window_00.field5_0x11[1] = (char)((uint)in_stack_ffffffa8 >> 0x10);
    window_00.field5_0x11[2] = (char)((uint)in_stack_ffffffa8 >> 0x18);
    window_00.sys_params.screen_save_active = in_stack_ffffffac;
    window_00.sys_params.low_power_active = systemTime;
    window_00.sys_params.power_off_active = in_stack_ffffffb4;
    __possibly_render_window(window_00);
    if (supervisor.slowdown == (float)__0f) {
      if (1 < ___dword_6C6BF4) {
        timeBeginPeriod(1);
        DVar1 = timeGetTime();
        if (DVar1 < (uint)supervisor.dword_1A4) {
          supervisor.dword_1A4 = DVar1;
        }
        sys_frame_time_longlong =
             ((((double)(ulonglong)(DVar1 - supervisor.dword_1A4) * _0_0d) / __0d) / _000_0d) /
             (double)(supervisor.config.frameskip_settings + 1);
        if (sys_frame_time_longlong < __865d) {
          if (sys_frame_time_longlong < __6d) {
            supervisor.game_speed = 0.5;
          }
          else {
            supervisor.game_speed = 0.8;
          }
        }
        else {
          supervisor.game_speed = 1.0;
        }
        supervisor.dword_1A4 = DVar1;
        timeEndPeriod(1);
        ___dword_6C6BF4 = 0;
      }
    }
    else {
      supervisor.game_speed = supervisor.slowdown;
    }
    this->byte_10 = '\0';
    ___dword_6C6BF4 = ___dword_6C6BF4 + 1;
  }
  return 0;
}


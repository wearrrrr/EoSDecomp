
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int WinMain(HINSTANCE executableHandle,HINSTANCE hPrevInstance,PWSTR CmdLine,int ShowState)

{
  bool create_d3d;
  int create_mutex;
  int result;
  int load_config;
  undefined3 extraout_var;
  int init_d3d_device;
  AnmManager *AnmManagerAlloc;
  int supervisor_init;
  BOOL message;
  AnmManager *AnmManager;
  tagMSG window_handle;
  int coop_level;
  int window_tick;
  
  window_tick = 0;
  create_mutex = __create_mutex();
  if (create_mutex == 0) {
    supervisor.current_instance = executableHandle;
    load_config = Supervisor::load_cfg(&supervisor,"東方紅魔郷.cfg");
    if (load_config == 0) {
      create_d3d = Supervisor::create_d3d();
      if (CONCAT31(extraout_var,create_d3d) == 0) {
        SystemParametersInfoA(SPI_GETSCREENSAVEACTIVE,0,&Window.sys_params,0);
        SystemParametersInfoA(SPI_GETLOWPOWERACTIVE,0,&Window.sys_params.low_power_active,0);
        SystemParametersInfoA(SPI_GETPOWEROFFACTIVE,0,&Window.sys_params.power_off_active,0);
        SystemParametersInfoA(SPI_SETSCREENSAVEACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETLOWPOWERACTIVE,0,(PVOID)0x0,2);
        SystemParametersInfoA(SPI_SETPOWEROFFACTIVE,0,(PVOID)0x0,2);
        while( true ) {
          window_init(executableHandle);
          init_d3d_device = Supervisor::init_d3d_device();
          if (init_d3d_device != 0) break;
          SoundManager::initialize_dsound(&sound_manager,Window.main_window);
          get_joypad_capabilities();
          clear_all_keydown_states();
                    /* sizeof(struct AnmManager) */
          AnmManagerAlloc = (AnmManager *)malloc(0x2112c);
          if (AnmManagerAlloc == (AnmManager *)0x0) {
            AnmManager = (AnmManager *)0x0;
          }
          else {
            AnmManager = ::AnmManager::constructor(AnmManagerAlloc);
          }
          anm_manager_ptr = AnmManager;
          supervisor_init = Supervisor::initialize();
          if (supervisor_init == 0) {
                    /* Check if display mode is fullscreen, hide the cursor if so. */
            if (supervisor.config.fullscreen == '\0') {
              ShowCursor(FALSE);
            }
            Window.byte_10 = uVar1;
            do {
              while( true ) {
                while( true ) {
                  if (Window.should_close != 0) goto handleWindowExit;
                  message = PeekMessageA(&window_handle,(HWND)0x0,0,0,1);
                  if (message == 0) break;
                  TranslateMessage(&window_handle);
                  DispatchMessageA(&window_handle);
                }
                coop_level = (*(code *)(supervisor.d3d_device)->vtable->TestCooperativeLevel)
                                       (supervisor.d3d_device);
                if (coop_level == D3D_OK) break;
                if (coop_level == D3DERR_DEVICENOTRESET) {
                  ::AnmManager::__render_surfaces(anm_manager_ptr);
                  result = (*(code *)(supervisor.d3d_device)->vtable->Reset)
                                     (supervisor.d3d_device,0x6c6df8);
                  if (result != 0) goto handleWindowExit;
                  setRenderAndTextureStates();
                  supervisor.frames_to_disable_something = 3;
                }
              }
                    /* This should always return 0 unless something has gone wrong. */
              window_tick = Window::do_tick(&Window);
            } while (window_tick == 0);
          }
handleWindowExit:
          UpdateFuncRegistry::__sub_41CD10(&update_func_registry);
          SoundManager::deinitialize(&sound_manager);
          AnmManagerAlloc = anm_manager_ptr;
          if (anm_manager_ptr == (AnmManager *)0x0) {
            AnmManagerAlloc = (AnmManager *)0x0;
          }
          else {
            ::AnmManager::__anm_mgr_stub(anm_manager_ptr);
            _free(AnmManagerAlloc);
          }
          anm_manager_ptr = (AnmManager *)0x0;
          if (supervisor.d3d_device != (IDirect3DDevice8 *)0x0) {
            (*(code *)((supervisor.d3d_device)->vtable->super).Release)
                      (supervisor.d3d_device,AnmManagerAlloc);
            supervisor.d3d_device = (IDirect3DDevice8 *)0x0;
          }
          ShowWindow(Window.main_window,0);
          MoveWindow(Window.main_window,0,0,0,0,0);
          DestroyWindow(Window.main_window);
          if (window_tick != 2) {
            write_buffer_to_file("東方紅魔郷.cfg",&supervisor.config,56);
            SystemParametersInfoA
                      (SPI_SETSCREENSAVEACTIVE,Window.sys_params.screen_save_active,(PVOID)0x0,2);
            SystemParametersInfoA
                      (SPI_SETLOWPOWERACTIVE,Window.sys_params.low_power_active,(PVOID)0x0,2);
            SystemParametersInfoA
                      (SPI_SETPOWEROFFACTIVE,Window.sys_params.power_off_active,(PVOID)0x0,2);
            if (supervisor.d3d != (IDirect3D8 *)0x0) {
              (*(code *)((supervisor.d3d)->vtable->super).Release)(supervisor.d3d);
              supervisor.d3d = (IDirect3D8 *)0x0;
            }
            ShowCursor(1);
            LogBuffer::__log_to_txt(&LogBuffer);
            return 0;
          }
          _LOG_BUFFER_buffer_write = &LogBuffer;
          LogBuffer.field0_0x0[0] = 0;
          LogBuffer::write(&LogBuffer,
                           "再起動を要するオプションが変更されたので再起動します\n"
                          );
          if (supervisor.config.fullscreen == uVar2) {
            ShowCursor(1);
          }
        }
        LogBuffer::__log_to_txt(&LogBuffer);
        result = 1;
      }
      else {
        LogBuffer::__log_to_txt(&LogBuffer);
        result = 1;
      }
    }
    else {
      LogBuffer::__log_to_txt(&LogBuffer);
      result = -1;
    }
  }
  else {
    LogBuffer::__log_to_txt(&LogBuffer);
    result = 1;
  }
  return result;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Supervisor::init_d3d_device(void)

{
  int i;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_ECX_01;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined extraout_DL_01;
  undefined uVar2;
  undefined4 unaff_EBP;
  UINT *pUVar3;
  D3DPRESENT_PARAMETERS *present_params;
  float10 fVar4;
  float pEye;
  float local_80;
  float local_7c;
  float pAt;
  float local_74;
  undefined4 local_70;
  float pUp;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  UINT local_4c [5];
  undefined4 frameskip;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  D3DDISPLAYMODE *local_18;
  int local_c;
  uint local_5;
  undefined uStack_1;
  bool vsync_enabled;
  
  uStack_1 = (undefined)((uint)unaff_EBP >> 0x18);
  local_5 = CONCAT31((int3)unaff_EBP,1);
  pUVar3 = local_4c;
  for (i = 13; i != 0; i = i + -1) {
    *pUVar3 = 0;
    pUVar3 = pUVar3 + 1;
  }
  (*(code *)(supervisor.d3d)->vtable->GetAdapterDisplayMode)(supervisor.d3d,0,&local_18);
  if (supervisor.config.fullscreen == 0) {
    if ((supervisor.config.flags >> 2 & 1) == 1) {
      local_4c[2] = 0x17;
      supervisor.config.graphics_format = '\x01';
    }
    else if (supervisor.config.graphics_format == 0xff) {
      if ((local_c == 0x16) || (local_c == 0x15)) {
        local_4c[2] = 0x16;
        supervisor.config.graphics_format = '\0';
        LogBuffer::write(&LogBuffer,"初回起動、画面を 32Bits で初期化しました\n");
      }
      else {
        local_4c[2] = 0x17;
        supervisor.config.graphics_format = 1;
        LogBuffer::write(&LogBuffer,"初回起動、画面を 16Bits で初期化しました\n");
      }
    }
    else if (supervisor.config.graphics_format == 0) {
      local_4c[2] = 0x16;
    }
    else {
      local_4c[2] = 0x17;
    }
    if ((supervisor.config.flags >> 7 & 1) == 0) {
      local_1c = 1;
    }
    else {
      local_20 = 0x3c;
      local_1c = 1;
      LogBuffer::write(&LogBuffer,"リフレッシュレートを60Hzに変更します\n");
    }
    if (supervisor.config.frameskip_settings == 0) {
      frameskip = 2;
    }
    else {
      frameskip = 4;
    }
  }
  else {
    local_4c[2] = local_c;
    frameskip = 3;
    local_30 = 1;
  }
  local_4c[0] = 640;
  local_4c[1] = 480;
  local_2c = 1;
  local_28 = 0x50;
  local_24 = 1;
  supervisor._1021_1_ = 1;
  pUVar3 = local_4c;
  present_params = &supervisor.present_params;
  for (i = 13; i != 0; i = i + -1) {
    present_params->BackBufferWidth = *pUVar3;
    pUVar3 = pUVar3 + 1;
    present_params = (D3DPRESENT_PARAMETERS *)&present_params->BackBufferHeight;
  }
  do {
    if ((supervisor.config.flags >> 9 & 1) == 0) {
      i = (*(code *)(supervisor.d3d)->vtable->CreateDevice)
                    (supervisor.d3d,0,1,Window.main_window,0x40,local_4c);
      if (-1 < i) {
        LogBuffer::write(&LogBuffer,"T&L HAL で動作しま～す\n");
        supervisor._1020_1_ = 1;
        uVar1 = extraout_ECX_01;
        uVar2 = extraout_DL_01;
        goto LAB_004211ab;
      }
      LogBuffer::write(&LogBuffer,"T&L HAL は使用できないようです\n");
      i = (*(code *)(supervisor.d3d)->vtable->CreateDevice)
                    (supervisor.d3d,0,1,Window.main_window,0x20,local_4c);
      if (i < 0) {
        LogBuffer::write(&LogBuffer,"HAL も使用できないようです\n");
        goto LAB_00421077;
      }
      LogBuffer::write(&LogBuffer,"HAL で動作します\n");
      uVar1 = extraout_ECX_00;
      uVar2 = extraout_DL_00;
LAB_00421190:
      supervisor._1020_1_ = 0;
LAB_004211ab:
      local_58 = 320.0;
      local_54 = 240.0;
      local_5c = 1.333333;
      local_60 = 0.5235988;
      fVar4 = (float10)_tan(uVar1,uVar2,SUB81((double)(0.5235988 / _2_0f),0));
      local_50 = local_54 / (float)fVar4;
      pUp = 0.0;
      local_68 = 1.0;
      local_64 = 0;
      pAt = local_58;
      local_74 = -local_54;
      local_70 = 0;
      pEye = local_58;
      local_80 = -local_54;
      local_7c = -local_50;
      D3DXMatrixLookAtLH((float *)&supervisor.view_matrix,&pEye,&pAt,&pUp);
      _D3DXMatrixPerspectiveFovLH_20
                ((float *)&supervisor.projection_matrix,local_60,local_5c,100.0,10000.0);
      (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,2,0x6c6d60);
      (*(code *)(supervisor.d3d_device)->vtable->SetTransform)(supervisor.d3d_device,3,0x6c6da0);
      (*(code *)(supervisor.d3d_device)->vtable->GetViewport)(supervisor.d3d_device,0x6c6de0);
      (*(code *)(supervisor.d3d_device)->vtable->GetDeviceCaps)(supervisor.d3d_device,0x6c711c);
      if (((supervisor.config.flags & 1) == 0) &&
         ((supervisor.device_caps.TextureOpCaps & 0x40) == 0)) {
                    /* "Does not support D3DTEXOPCAPS_ADD, works in color addition emulation mode"
                        */
        LogBuffer::write(&LogBuffer,
                         "D3DTEXOPCAPS_ADD をサポートしていません、色加算エミュレートモードで動作します\n"
                        );
        supervisor.config.flags = supervisor.config.flags | 1;
      }
      if (((supervisor.config.flags >> 7 & 1) == 0) || (supervisor.is_vsync == 0)) {
        vsync_enabled = false;
      }
      else {
        vsync_enabled = true;
      }
                    /* Checks if you are trying to use vsync with a card that doesn't support vsync.
                        */
      if ((vsync_enabled) && ((supervisor.device_caps.PresentationIntervals & 0x80000000) == 0)) {
                    /* Video card does not support asynchronous flip, cannot work with Force60Frame
                        */
        LogBuffer::write(&LogBuffer,
                         "ビデオカードが非同期フリップをサポートしていません、Force60Frameで動作できません\n"
                        );
        supervisor.config.flags = supervisor.config.flags & 0xffffff7f;
      }
      if (((supervisor.config.flags >> force_16bit_textures & 1) == 0) && ((local_5 & 0xff) != 0)) {
        i = (*(code *)(supervisor.d3d)->vtable->CheckDeviceFormat)
                      (supervisor.d3d,0,1,local_4c[2],0,3,0x15);
        if (i == 0) {
          supervisor._1022_1_ = 1;
        }
        else {
          supervisor._1022_1_ = 0;
          supervisor.config.flags = supervisor.config.flags | 4;
                    /* "Does not support D3DFMT_A8R8G8B8, works in reduced color mode" */
          LogBuffer::write(&LogBuffer,
                           "D3DFMT_A8R8G8B8 をサポートしていません、減色モードで動作します\n"
                          );
        }
      }
      setRenderAndTextureStates();
      setupViewport(0);
      Window.should_close = 0;
      supervisor.dword_1A4 = 0;
      supervisor.slowdown = 0.0;
      return 0;
    }
LAB_00421077:
    i = (*(code *)(supervisor.d3d)->vtable->CreateDevice)
                  (supervisor.d3d,0,2,Window.main_window,0x20,local_4c);
    if (-1 < i) {
                    /* "It works with REF, but it's too heavy and probably won't be a game..." */
      LogBuffer::write(&LogBuffer,
                       "REF で動作しますが??重すぎて恐らくゲームになりません...\n"
                      );
      local_5 = local_5 & 0xffffff00;
      uVar1 = extraout_ECX;
      uVar2 = extraout_DL;
      goto LAB_00421190;
    }
    if (((supervisor.config.flags >> 7 & 1) == 0) || (supervisor.is_vsync != 0)) {
      if (local_24 != 1) {
                    /* Direct3D initialization failed, game cannot be played. */
        LogBuffer::write_error
                  (&LogBuffer,
                   "Direct3D の初期化に失敗、これではゲームは出来ません\n");
        if (supervisor.d3d != (IDirect3D8 *)0x0) {
          (*(code *)((supervisor.d3d)->vtable->super).Release)();
          supervisor.d3d = (IDirect3D8 *)0x0;
        }
        return 1;
      }
                    /* Try making the back buffer non-lockable */
      LogBuffer::write(&LogBuffer,"バックバッファをロック不可能にしてみます\n");
      local_24 = 0;
      supervisor._1021_1_ = 0;
    }
    else {
                    /* Unable to change refresh rate, change to vsync asynchronous */
      LogBuffer::write(&LogBuffer,
                       "リフレッシュレートが変更できません、vsync 非同期に変更します\n"
                      );
      local_20 = 0;
      supervisor.is_vsync = 1;
      local_1c = 0x80000000;
    }
  } while( true );
}


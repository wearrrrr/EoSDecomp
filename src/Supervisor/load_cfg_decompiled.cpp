
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall Supervisor::load_cfg(Supervisor *this,char *filename)

{
  Config *gameConfiguration;
  FILE *file;
  int i;
  Config *gameConfig;
  Config *ptr_gameConfig;
  
  gameConfiguration = &supervisor.config;
  for (i = 0xe; i != 0; i = i + -1) {
    *(undefined4 *)gameConfiguration->field0_0x0 = 0;
    gameConfiguration = (Config *)(gameConfiguration->field0_0x0 + 4);
  }
                    /* bitwise OR */
  supervisor.config.flags = supervisor.config.flags | 1;
  gameConfiguration = (Config *)__read_file_to_buffer(filename,1);
  if (gameConfiguration == (Config *)0x0) {
    supervisor.config.starting_lives = 2;
    supervisor.config.starting_bombs = 3;
    supervisor.config.graphics_format = 0xff;
    supervisor.config.version = 258;
    supervisor.config.deadzone_x = 600;
    supervisor.config.deadzone_y = 600;
    file = (FILE *)_fopen("bgm/th06_01.wav","rb");
    if (file == (FILE *)0x0) {
      supervisor.config.bgm_format = 2;
      __stub_4();
    }
    else {
      supervisor.config.bgm_format = 1;
      _fclose(file);
    }
    supervisor.config.__byte_1c = 1;
    supervisor.config.__byte_1d = 1;
    supervisor.config.fullscreen = 0;
    supervisor.config.frameskip_settings = 0;
    supervisor.config.field0_0x0._0_4_ = _DAT_004765a0;
    supervisor.config.field0_0x0._4_4_ = _DAT_004765a4;
    supervisor.config.field0_0x0._8_4_ = _DAT_004765a8;
    supervisor.config.field0_0x0._12_4_ = _DAT_004765ac;
    supervisor.config.field0_0x0._16_2_ = _DAT_004765b0;
    LogBuffer::write(&LogBuffer,
                     "コンフィグデータが見つからないので初期化しました\n");
  }
  else {
    gameConfig = gameConfiguration;
    ptr_gameConfig = &supervisor.config;
    for (i = 14; i != 0; i = i + -1) {
      *(undefined4 *)ptr_gameConfig->field0_0x0 = *(undefined4 *)gameConfig->field0_0x0;
      gameConfig = (Config *)(gameConfig->field0_0x0 + 4);
      ptr_gameConfig = (Config *)(ptr_gameConfig->field0_0x0 + 4);
    }
                    /* Validates configuration to ensure values aren't above maximum */
    if ((((((4 < supervisor.config.starting_lives) || (3 < supervisor.config.starting_bombs)) ||
          (1 < supervisor.config.graphics_format)) ||
         ((2 < supervisor.config.bgm_format || (4 < supervisor.config.__byte_1d)))) ||
        ((1 < supervisor.config.__byte_1c ||
         ((1 < supervisor.config.fullscreen || (2 < supervisor.config.frameskip_settings)))))) ||
       ((supervisor.config.version != 258 || (___current_filesize != 56)))) {
      supervisor.config.starting_lives = 2;
      supervisor.config.starting_bombs = 3;
      supervisor.config.graphics_format = 0xff;
      supervisor.config.version = 258;
      supervisor.config.deadzone_x = 600;
      supervisor.config.deadzone_y = 600;
      file = (FILE *)_fopen("bgm/th06_01.wav","rb");
      if (file == (FILE *)0x0) {
        supervisor.config.bgm_format = '\x02';
        __stub_4();
      }
      else {
        supervisor.config.bgm_format = '\x01';
        _fclose(file);
      }
      supervisor.config.__byte_1c = '\x01';
      supervisor.config.__byte_1d = '\x01';
      supervisor.config.fullscreen = '\0';
      supervisor.config.frameskip_settings = '\0';
      supervisor.config.field0_0x0._0_4_ = _DAT_004765a0;
      supervisor.config.field0_0x0._4_4_ = _DAT_004765a4;
      supervisor.config.field0_0x0._8_4_ = _DAT_004765a8;
      supervisor.config.field0_0x0._12_4_ = _DAT_004765ac;
      supervisor.config.field0_0x0._16_2_ = _DAT_004765b0;
      supervisor.config.flags = 1;
                    /* "The configuration data was destroyed (corrupted), so it was reset." */
      LogBuffer::write(&LogBuffer,
                       "コンフィグデータが破壊されていたので再初期化しました\n"
                      );
    }
    _DAT_004765a0 = supervisor.config.field0_0x0._0_4_;
    _DAT_004765a4 = supervisor.config.field0_0x0._4_4_;
    _DAT_004765a8 = supervisor.config.field0_0x0._8_4_;
    _DAT_004765ac = supervisor.config.field0_0x0._12_4_;
    _DAT_004765b0 = supervisor.config.field0_0x0._16_2_;
    _free(gameConfiguration);
  }
  if (((this->config).flags >> suppress_vertex_buf & 1) != 0) {
    LogBuffer::write(&LogBuffer,"頂点バッファの使用を抑制します\n");
  }
  if (((this->config).flags >> suppress_fog_usage & 1) != 0) {
    LogBuffer::write(&LogBuffer,"フォグの使用を抑制します\n");
  }
  if (((this->config).flags >> force_16bit_textures & 1) != 0) {
    LogBuffer::write(&LogBuffer,"16Bit のテクスチャの使用を強制します\n");
  }
  if (((this->config).flags >> force_backbuffer_clearing & 1 | (this->config).flags >> 4 & 1) != 0)
  {
    LogBuffer::write(&LogBuffer,"バックバッファの消去を強制します\n");
  }
  if (((this->config).flags >> suppress_item_drawing_around_game & 1) != 0) {
    LogBuffer::write(&LogBuffer,"ゲーム周りのアイテムの描画を抑制します\n");
  }
  if (((this->config).flags >> suppress_gouraud_shading & 1) != 0) {
    LogBuffer::write(&LogBuffer,"グーローシェーディングを抑制します\n");
  }
  if (((this->config).flags >> suppress_depth_test & 1) != 0) {
    LogBuffer::write(&LogBuffer,"デプステストを抑制します\n");
  }
  if (((this->config).flags >> force_60fps & 1) != 0) {
    LogBuffer::write(&LogBuffer,"６０フレーム強制モードにします\n");
    this->is_vsync = 0;
  }
  if (((this->config).flags >> suppress_texture_color_composition_and_windowed_mode & 1) != 0) {
    LogBuffer::write(&LogBuffer,"テクスチャの色合成を抑制しますn");
  }
  if (((this->config).flags >> suppress_texture_color_composition_and_windowed_mode & 1) != 0) {
    LogBuffer::write(&LogBuffer,"ウィンドウモードで起動します\n");
  }
  if (((this->config).flags >> force_reference_rasterizer & 1) != 0) {
    LogBuffer::write(&LogBuffer,"リファレンスラスタライザを強制します\n");
  }
  if (((this->config).flags >> disable_directinput & 1) != 0) {
    LogBuffer::write(&LogBuffer,
                     "パッド、キーボードの入力に DirectInput を使用しません\n");
  }
  i = write_buffer_to_file(filename,&supervisor.config,56);
                    /* unneccessary assignment after you confirm that i == 0. */
  if (i == 0) {
    i = 0;
  }
  else {
    LogBuffer::write_error(&LogBuffer,"ファイルが書き出せません %s\n");
    LogBuffer::write_error
              (&LogBuffer,
               "フォルダが書込み禁止属性になっているか、ディスクがいっぱいいっぱいになってませんか？\n"
              );
    i = -1;
  }
  return i;
}


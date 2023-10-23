typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef long double    longdouble;
typedef long long    longlong;
typedef char    sbyte;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct StdRawInstr StdRawInstr, *PStdRawInstr;

typedef int int32_t;

typedef ushort uint16_t;

typedef struct StdRawInstrArgs StdRawInstrArgs, *PStdRawInstrArgs;

typedef struct COMMENT COMMENT, *PCOMMENT;

struct COMMENT {
    undefined field0_0x0;
};

struct StdRawInstrArgs {
    int32_t args[3];
    struct COMMENT field1_0xc[0]; // Used to make the code labelled better.
};

struct StdRawInstr {
    int32_t time;
    uint16_t opcode;
    uint16_t args_size;
    struct StdRawInstrArgs args;
};

typedef struct BitmapRenderData BitmapRenderData, *PBitmapRenderData;

struct BitmapRenderData {
    D3DFORMAT format;
    int32_t width;
    int32_t height;
    size_t raw_bitmap_size;
    int32_t bytes_per_row;
    HDC device_context;
    HGDIOBJ screen_bitmap_object;
    HBITMAP bitmap_handle;
    void * raw_bitmap_bits;
};

typedef struct AnmRawEntry AnmRawEntry, *PAnmRawEntry;

typedef uint uint32_t;

typedef ulong DWORD;

typedef DWORD D3DCOLOR;

typedef struct AnmRawTexture AnmRawTexture, *PAnmRawTexture;

typedef struct AnmRawSprite AnmRawSprite, *PAnmRawSprite;

typedef struct AnmRawScript AnmRawScript, *PAnmRawScript;

typedef uchar uint8_t;

typedef struct Float2 Float2, *PFloat2;

typedef struct AnmRawInstr AnmRawInstr, *PAnmRawInstr;

struct AnmRawScript {
    uint32_t id;
    struct AnmRawInstr * first_instr;
};

struct AnmRawTexture {
    char magic__THTX[4];
    uint16_t __zero;
    uint16_t format;
    uint16_t width;
    uint16_t height;
    uint32_t num_bytes;
    uint8_t data[0];
};

struct Float2 {
    float x;
    float y;
};

struct AnmRawSprite {
    uint32_t id;
    struct Float2 offset;
    struct Float2 size;
};

struct AnmRawEntry {
    uint32_t num_sprites;
    uint32_t num_scripts;
    uint32_t rt_texture_slot;
    uint32_t width;
    uint32_t height;
    uint32_t format;
    D3DCOLOR colorkey;
    char * path_1;
    uint32_t unknown_runtime_var;
    char * path_2;
    uint32_t version;
    uint32_t memory_priority;
    struct AnmRawTexture * texture;
    uint16_t UNUSED_has_data;
    uint16_t unused_2;
    uint32_t offset_to_next;
    uint32_t unused_3;
    struct AnmRawSprite * sprites[10];
    struct AnmRawScript scripts[10];
    struct COMMENT is_array_variable_length[0];
};

struct AnmRawInstr {
    uint16_t time;
    uint8_t opcode;
    uint8_t argsize;
    uint32_t args[10];
    struct COMMENT args_is_variable_length[0];
};

typedef struct SoundManagerDSound SoundManagerDSound, *PSoundManagerDSound;

struct SoundManagerDSound { // PlaceHolder Class Structure
};

typedef struct StdRawHeader StdRawHeader, *PStdRawHeader;

typedef struct StdRawObject StdRawObject, *PStdRawObject;

typedef struct Float3 Float3, *PFloat3;

typedef struct StdRawQuadBasic StdRawQuadBasic, *PStdRawQuadBasic;

typedef short int16_t;

struct StdRawHeader {
    uint16_t object_count;
    uint16_t quads_count;
    uint32_t offset_to_instances;
    uint32_t offset_to_scripts;
    undefined field4_0xc;
    undefined field5_0xd;
    undefined field6_0xe;
    undefined field7_0xf;
    char stage_name[128];
    char bgm_names[4][128];
    char bgm_paths[4][128];
    struct StdRawObject * objects[16];
    struct COMMENT field12_0x4d0[0]; // ends in a variable length array
};

struct Float3 {
    float x;
    float y;
    float z;
};

struct StdRawQuadBasic {
    int16_t type;
    uint16_t byte_size;
    uint16_t anm_script;
    uint16_t vm_index; // assigned_after_read
    struct Float3 pos;
    struct Float2 size;
};

struct StdRawObject {
    uint16_t id;
    uint8_t unknown; // always zero
    uint8_t flags;
    struct Float3 pos;
    struct Float3 size;
    struct StdRawQuadBasic first_quad;
    struct COMMENT there_is_a_stream_of_variably_sized_quads[0];
};

typedef struct PlayerBullet PlayerBullet, *PPlayerBullet;

typedef struct AnmVm AnmVm, *PAnmVm;

typedef struct Timer Timer, *PTimer;

typedef struct AnmLoadedSprite AnmLoadedSprite, *PAnmLoadedSprite;

struct Timer { // PlaceHolder Class Structure
    int32_t previous;
    float subframe;
    int32_t current;
    struct COMMENT exact_size_known[0];
};

struct AnmVm { // PlaceHolder Class Structure
    struct Float3 rotation;
    struct Float3 angle_velocity;
    float scale_y;
    float scale_x;
    float scale_interp_final_y;
    float scale_interp_final_x;
    struct Float2 uv_scroll_pos;
    struct Timer current_time_in_script;
    D3DMATRIX matrix;
    D3DCOLOR color;
    uint32_t flags;
    uint16_t alpha_interp_end_time;
    uint16_t scale_interp_end_time;
    uint16_t auto_rotate;
    int16_t pending_interrupt;
    uint16_t pos_interp_end_time;
    undefined field16_0x8e[2];
    struct Float3 pos;
    float scale_interp_inital_y;
    float scale_interp_inital_x;
    struct Timer scale_interp_time;
    int16_t sprite_number;
    int16_t sprite_number_duplicate;
    int16_t anm_file_index;
    undefined field24_0xb6[2];
    struct AnmRawInstr * beginning_of_script;
    struct AnmRawInstr * current_instruction;
    struct AnmLoadedSprite * sprite;
    D3DCOLOR alpha_interp_initial;
    D3DCOLOR alpha_interp_final;
    struct Float3 pos_interp_initial;
    struct Float3 pos_interp_final;
    struct Float3 pos_2;
    struct Timer pos_interp_time;
    int32_t time_of_last_sprite_set;
    struct Timer alpha_interp_time;
    uint8_t font_width;
    uint8_t font_height;
    undefined field38_0x10e[2];
    struct COMMENT exact_size_known[0];
};

struct AnmLoadedSprite {
    uint32_t source_file_index;
    struct Float2 start_pixel_inclusive;
    struct Float2 end_pixel_inclusive;
    float texture_height;
    float texture_width;
    struct Float2 uv_start;
    struct Float2 uv_end;
    float height_px;
    float width_px;
    int32_t sprite_id;
    struct COMMENT exact_size_known[0];
};

struct PlayerBullet {
    struct AnmVm primary_vm;
    struct Float3 position;
    struct Float3 size;
    float float_128;
    float float_12C;
    float float_130;
    float float_134;
    float float_138;
    float float_13C;
    struct Timer timer_140;
    int16_t short_14C;
    int16_t state;
    int16_t short_150;
    int16_t word_152;
    int16_t word_154;
    undefined field15_0x156[2];
};

typedef struct AsciiManager AsciiManager, *PAsciiManager;

typedef struct AsciiManagerString AsciiManagerString, *PAsciiManagerString;

typedef struct AsciiManagerBigChild AsciiManagerBigChild, *PAsciiManagerBigChild;

typedef struct AsciiManagerPopup AsciiManagerPopup, *PAsciiManagerPopup;

struct AsciiManagerBigChild {
    int32_t index_0;
    int dword_4;
    struct AnmVm vms_8[6];
    struct AnmVm vm_668;
};

struct AsciiManagerString {
    char text[64];
    struct Float3 position;
    D3DCOLOR color;
    struct Float2 scale;
    undefined field4_0x58[7];
    struct COMMENT exact_size_known;
};

struct AsciiManagerPopup {
    char digits[8];
    struct Float3 position;
    D3DCOLOR color;
    struct Timer timer;
    uint8_t in_use;
    uint8_t characters;
    undefined field6_0x26[2];
};

struct AsciiManager { // PlaceHolder Class Structure
    struct AnmVm vm_1;
    struct AnmVm vm_2;
    struct AsciiManagerString strings[256];
    int32_t num_strings;
    D3DCOLOR color;
    struct Float2 scale;
    int dword_6230;
    int dword_6234;
    int32_t next_popupA_index;
    int32_t next_popupB_index;
    undefined unknown[4];
    struct AsciiManagerBigChild child_6244;
    struct AsciiManagerBigChild child_69BC;
    struct AsciiManagerPopup popups_1[512];
    struct AsciiManagerPopup popups_2[3];
};

typedef struct GuiImpl GuiImpl, *PGuiImpl;

typedef struct GuiMsgVm GuiMsgVm, *PGuiMsgVm;

typedef struct GuiImplChildB GuiImplChildB, *PGuiImplChildB;

typedef struct MsgRawHeader MsgRawHeader, *PMsgRawHeader;

typedef struct MsgRawInstr MsgRawInstr, *PMsgRawInstr;

struct GuiImplChildB {
    struct Float3 vec3;
    int32_t field_c;
    int32_t field_10;
    struct Timer timer;
};

struct GuiMsgVm {
    struct MsgRawHeader * msg_file;
    struct MsgRawInstr * current_instr;
    int32_t current_msg_index;
    struct Timer script_time;
    int32_t frames_elapsed_during_pause;
    struct AnmVm portraits[2];
    struct AnmVm dialogue_lines[2];
    struct AnmVm intro_lines[2];
    D3DCOLOR text_colors_A[4];
    D3DCOLOR text_colors_B[4];
    uint32_t font_size;
    uint32_t ignore_wait_counter;
    uint8_t dialogue_skippable;
    undefined likely_padding_bytes[3];
};

struct GuiImpl { // PlaceHolder Class Structure
    struct AnmVm vms[26];
    undefined field1_0x1ba0[4];
    struct AnmVm vm_1;
    struct AnmVm vm_2;
    struct AnmVm vm_3;
    struct AnmVm vm_4;
    struct AnmVm vm_5;
    struct AnmVm vm_6;
    struct AnmVm vm_7;
    struct AnmVm vm_8;
    struct AnmVm vm_9;
    struct GuiMsgVm msg;
    int dword_2BDC;
    int32_t stage_score;
    struct GuiImplChildB child_b_2BE4;
    struct GuiImplChildB child_b_2C04;
    struct GuiImplChildB child_b_2C24;
};

struct MsgRawHeader {
    uint32_t num_entries;
    struct MsgRawInstr * entries[10];
    struct COMMENT ends_in_variable_length_array[0];
};

struct MsgRawInstr {
    int16_t time;
    uint8_t opcode;
    uint8_t args_size;
};

typedef struct ScorefilePscr ScorefilePscr, *PScorefilePscr;

struct ScorefilePscr {
    char magic__PSCR[4];
    uint16_t __size_1;
    uint16_t __size_2;
    uint8_t __byte_8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    int32_t score;
    uint8_t character;
    uint8_t difficulty;
    uint8_t stage;
    undefined field11_0x13;
};

typedef struct EnemyEclContext EnemyEclContext, *PEnemyEclContext;

typedef struct EclRawInstr EclRawInstr, *PEclRawInstr;

struct EnemyEclContext {
    struct EclRawInstr * current_instr;
    struct Timer time;
    void * func_set_func;
    int32_t int_var_0;
    int32_t int_var_1;
    int32_t int_var_2;
    int32_t int_var_3;
    float float_var_0;
    float float_var_1;
    float float_var_2;
    float float_var_3;
    int32_t int_var_4;
    int32_t int_var_5;
    int32_t int_var_6;
    int32_t int_var_7;
    int32_t compare_register;
    uint16_t sub_id;
    undefined field17_0x4a[2];
    struct COMMENT exact_size_known[0];
};

struct EclRawInstr {
    int32_t time;
    int16_t opcode;
    int16_t offset_to_next;
    uint8_t unused;
    uint8_t difficulty_mask;
    int16_t param_mask;
    int32_t args[10];
};

typedef struct UnknownC UnknownC, *PUnknownC;

struct UnknownC { // PlaceHolder Class Structure
};

typedef struct Menu Menu, *PMenu;

struct Menu { // PlaceHolder Class Structure
};

typedef struct TimelineRawInstr TimelineRawInstr, *PTimelineRawInstr;

struct TimelineRawInstr {
    int16_t time;
    int16_t first_arg;
    int16_t opcode;
    int16_t offset_to_next;
};

typedef struct Gui Gui, *PGui;

struct Gui { // PlaceHolder Class Structure
    uint32_t flags_0;
    struct GuiImpl * impl;
    float float_8;
    float blue_spellcard_bar_length;
    uint32_t uint_10;
    uint32_t ecl_set_lives;
    int32_t read_by_spellcard_ecl;
    undefined field7_0x1c[4];
    bool boss_present;
    undefined field9_0x21[3];
    float boss_healthbar_24;
    float boss_healthbar_28;
};

typedef struct ResultScreen ResultScreen, *PResultScreen;

struct ResultScreen { // PlaceHolder Class Structure
    undefined field0_0x0[22192];
};

typedef struct EclManager EclManager, *PEclManager;

struct EclManager { // PlaceHolder Class Structure
    void * ecl_file;
    struct EclRawInstr * * sub_table;
    struct TimelineRawInstr * timeline;
    struct COMMENT SIZE NOT KNOWN[0];
};

typedef struct CSound CSound, *PCSound;

typedef struct IDirectSoundBuffer IDirectSoundBuffer, *PIDirectSoundBuffer;

typedef struct IDirectSoundBufferVtbl IDirectSoundBufferVtbl, *PIDirectSoundBufferVtbl;

typedef struct DSBCAPS DSBCAPS, *PDSBCAPS;

typedef struct WAVEFORMATEX WAVEFORMATEX, *PWAVEFORMATEX;

typedef struct IDirectSound IDirectSound, *PIDirectSound;

typedef struct DSBUFFERDESC DSBUFFERDESC, *PDSBUFFERDESC;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IDirectSoundVtbl IDirectSoundVtbl, *PIDirectSoundVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct DSCAPS DSCAPS, *PDSCAPS;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

struct IUnknownVtbl {
    void * QueryInterface;
    void * AddRef;
    void * Release;
};

struct WAVEFORMATEX {
    uint16_t wFormatTag;
    uint16_t nChannels;
    uint32_t nSamplesPerSec;
    uint32_t nAvgBytesPerSec;
    uint16_t nBlockAlign;
    uint16_t wBitsPerSample;
    uint16_t cbSize;
};

struct IDirectSound {
    struct IDirectSoundVtbl * vtable;
    char __make_struct_bigger_than_a_dword_so_binja_sees_when_vtable_is_read;
};

struct IUnknown {
    struct IUnknownVtbl * vtable;
    char __make_struct_bigger_than_a_dword_so_binja_sees_when_vtable_is_read;
};

struct CSound {
    struct IDirectSoundBuffer * m_apDSBuffer;
    DWORD m_dwDSBufferSize;
    undefined field2_0x8;
    undefined field3_0x9;
    undefined field4_0xa;
    undefined field5_0xb;
    DWORD m_dwNumBuffers;
    DWORD m_dwCreationFlags;
};

typedef struct BulletTypeVms BulletTypeVms, *PBulletTypeVms;

struct BulletTypeVms {
    struct AnmVm vm_0;
    struct AnmVm spawn_effect_short;
    struct AnmVm spawn_effect_medium;
    struct AnmVm spawn_effect_long;
    struct AnmVm vm_5;
    float field5_0x550;
    float field6_0x554;
    undefined field7_0x558;
    undefined field8_0x559;
    undefined field9_0x55a;
    undefined field10_0x55b;
    uint8_t field_55c;
    uint8_t field_55d;
    undefined field13_0x55e[2];
    struct COMMENT exact_size_known[0];
};

typedef struct Enemy Enemy, *PEnemy;

typedef struct EnemyBulletShooter EnemyBulletShooter, *PEnemyBulletShooter;

typedef struct EnemyLaserShooter EnemyLaserShooter, *PEnemyLaserShooter;

typedef struct Laser Laser, *PLaser;

typedef struct Effect Effect, *PEffect;

struct EnemyBulletShooter {
    uint16_t sprite;
    uint16_t color;
    struct Float3 pos;
    float angle_1;
    float angle_2;
    float speed_1;
    float speed_2;
    float ex_floats[4];
    int32_t ex_ints[4];
    undefined field9_0x40[4];
    uint16_t count_1;
    uint16_t count_2;
    uint16_t aim_mode;
    undefined field13_0x4a[2];
    uint32_t flags;
    int32_t sfx;
    struct COMMENT exact_size_known[0];
};

struct EnemyLaserShooter {
    uint16_t sprite;
    uint16_t color;
    struct Float3 position;
    float angle;
    undefined field4_0x14[4];
    float speed;
    undefined field6_0x1c[4];
    float start_offset;
    float end_offset;
    float start_length;
    float width;
    int32_t start_time;
    int32_t duration;
    int32_t stop_time;
    int32_t graze_delay;
    int32_t graze_distance;
    undefined field16_0x44[4];
    uint16_t type;
    undefined field18_0x4a[2];
    int32_t dword_4C;
    undefined field20_0x50[4];
};

struct Enemy {
    struct AnmVm primary_vm;
    struct AnmVm vms[8];
    struct EnemyEclContext current_context;
    struct EnemyEclContext saved_context_stack[8];
    int32_t stack_depth;
    undefined field5_0xc40[4];
    int32_t death_callback_sub;
    int32_t interrupts[8];
    int32_t run_interrupts;
    struct Float3 position;
    struct Float3 hitbox_dimensions;
    struct Float3 axis_speed;
    float angle;
    float angular_velocity;
    float speed;
    float acceleration;
    struct Float3 shoot_offset;
    struct Float3 move_interp;
    struct Float3 move_interp_start_pos;
    struct Timer move_interp_timer;
    int32_t move_interp_start_time;
    float bullet_rank_speed_low;
    float bullet_rank_speed_high;
    uint16_t bullet_rank_amount1_low;
    uint16_t bullet_rank_amount1_high;
    uint16_t bullet_rank_amount2_low;
    uint16_t bullet_rank_amount2_high;
    int32_t life;
    int32_t max_life;
    int32_t score;
    struct Timer boss_timer;
    D3DCOLOR color_CFC;
    struct EnemyBulletShooter bullet_data;
    int32_t shoot_interval;
    struct Timer shoot_interval_timer;
    struct EnemyLaserShooter laser_props;
    struct Laser * lasers[32];
    int32_t laser_store;
    uint8_t death_anm_one;
    uint8_t death_anm_two;
    uint8_t death_anm_three;
    uint8_t item_drop;
    char boss_id;
    uint8_t byte_E41;
    undefined field44_0xe42[2];
    struct Timer timer_e44;
    char flags_1;
    uint8_t flags_2;
    uint8_t flags_3;
    char anm_ex_flags;
    int16_t anm_ex_default;
    int16_t anm_ex_far_left;
    int16_t anm_ex_far_right;
    int16_t anm_ex_left;
    int16_t anm_ex_right;
    char probably_padding[2];
    struct Float2 lower_move_limit;
    struct Float2 upper_move_limit;
    struct Effect * effect_array[12];
    int32_t effect_index;
    float effect_distance;
    int32_t life_callback_threshold;
    int32_t life_callback_sub;
    int32_t timer_callback_threshold;
    int32_t timer_callback_sub;
    float float_eb8;
    struct Timer timer_ebc;
};

struct Laser {
    struct AnmVm vm_0;
    struct AnmVm vm_1;
    struct Float3 position;
    float angle;
    float start_offset;
    float end_offset;
    float start_length;
    float width;
    float speed;
    int32_t start_time;
    int32_t graze_delay;
    int32_t duration;
    int32_t end_time;
    int32_t graze_interval;
    int32_t in_use;
    struct Timer timer;
    uint16_t flags;
    uint16_t color;
    uint8_t state;
    undefined field19_0x26d[3];
};

struct Effect {
    struct AnmVm vm;
    struct Float3 float3_110;
    undefined field2_0x11c[24];
    struct Float3 float3_134;
    struct Float3 pos;
    undefined field5_0x14c[16];
    float float_15C;
    float float_160;
    struct Timer timer;
    undefined field9_0x170[4];
    int32_t dword_174;
    char in_use_flag;
    char effect_id;
    char byte_17A;
    char byte_17B;
};

typedef struct Rng Rng, *PRng;

struct Rng {
    uint16_t rng_value;
    uint32_t rng_index;
};

typedef struct ReplayManager ReplayManager, *PReplayManager;

struct ReplayManager {
    undefined field0_0x0[116];
    struct COMMENT exact_size_known[0];
};

typedef struct PlayerInnerC PlayerInnerC, *PPlayerInnerC;

struct PlayerInnerC {

};

typedef struct Player Player, *PPlayer;

typedef struct PlayerRect PlayerRect, *PPlayerRect;

typedef struct ShottypeData ShottypeData, *PShottypeData;

typedef struct PlayerInner PlayerInner, *PPlayerInner;

typedef struct UpdateFunc UpdateFunc, *PUpdateFunc;

typedef struct UpdateFuncList UpdateFuncList, *PUpdateFuncList;

struct PlayerRect {
    struct Float2 pos;
    struct Float2 size;
};

struct PlayerInner {
    int32_t dword_0;
    int32_t dword_4;
    struct Timer timer;
    void * bomb_func_14;
    void * bomb_func_18;
    undefined field5_0x1c[64];
    int32_t dword_array_5C[8];
    undefined field7_0x7c[64];
    int32_t dword_array_BC[8];
    undefined field9_0xdc[64];
    struct AnmVm vms_11C[32];
};

struct ShottypeData {
    float float_0;
    float float_4;
    float float_8;
    float float_C;
    void * shot_func_A;
    void * shot_func_B;
};

struct Player {
    struct AnmVm vm_0;
    struct AnmVm vms_1[3];
    struct Float3 position;
    uint8_t unknown_1[12];
    struct Float3 float3_458;
    struct Float3 float3_464;
    struct Float3 float3_470;
    struct Float3 float3_47C;
    struct Float3 float3_488;
    struct Float3 float3_494;
    struct Float3 float3_array_4A0[2];
    struct Float3 position_array_4B8[32];
    struct Float3 size_array_638[32];
    int32_t dword_array_7B8[32];
    int32_t dword_array_838[32];
    struct PlayerRect player_rect_array_8B8[16];
    struct Timer timer_array_9B8[2];
    float float_9D0;
    float float_9D4;
    int32_t dword_9D8;
    int32_t dword_9DC;
    char byte_9E0;
    char byte_9E1;
    char byte_9E2;
    char byte_9E3;
    uint8_t byte_9E4;
    undefined field26_0x9e5[3];
    struct Timer timer_9E8;
    struct ShottypeData shottype_data;
    int32_t dword_A0C;
    float float_A10;
    int32_t dword_A14;
    int16_t word_A18;
    undefined field33_0xa1a[2];
    struct Float3 position_of_last_enemy_hit;
    struct PlayerBullet bullets[80];
    struct Timer timer_75A8;
    struct Timer timer_75B4;
    void * shot_func_75C0;
    void * shot_func_75C4;
    struct PlayerInner player_inner;
    struct UpdateFunc * on_tick;
    struct UpdateFunc * on_draw;
    struct UpdateFunc * on_draw_2;
};

struct UpdateFuncList {
    struct UpdateFunc * entry;
    struct UpdateFuncList * next;
    struct UpdateFuncList * prev;
};

struct UpdateFunc { // PlaceHolder Class Structure
    int16_t priority; // Lowest goes first
    uint16_t flags;
    void * function_pointer;
    void * on_registration;
    void * on_cleanup;
    struct UpdateFuncList list_node;
    void * ecx_arg_to_func;
    struct COMMENT exact_size_known[0];
};

typedef struct Supervisor Supervisor, *PSupervisor;

typedef struct Config Config, *PConfig;

typedef struct MidiManager MidiManager, *PMidiManager;


struct _D3DCAPS8 {
    DWORD DeviceType;
    UINT AdapterOrdinal;
    DWORD Caps;
    DWORD Caps2;
    DWORD Caps3;
    DWORD PresentationIntervals;
    DWORD CursorCaps;
    DWORD DevCaps;
    DWORD PrimitiveMiscCaps;
    DWORD RasterCaps;
    DWORD ZCmpCaps;
    DWORD SrcBlendCaps;
    DWORD DestBlendCaps;
    DWORD AlphaCmpCaps;
    DWORD ShadeCaps;
    DWORD TextureCaps;
    DWORD TextureFilterCaps;
    DWORD CubeTextureFilterCaps;
    DWORD VolumeTextureFilterCaps;
    DWORD TextureAddressCaps;
    DWORD VolumeTextureAddressCaps;
    DWORD LineCaps;
    DWORD MaxTextureWidth;
    DWORD MaxTextureHeight;
    DWORD MaxVolumeExtent;
    DWORD MaxTextureRepeat;
    DWORD MaxTextureAspectRatio;
    DWORD MaxAnisotropy;
    float MaxVertexW;
    float GuardBandLeft;
    float GuardBandTop;
    float GuardBandRight;
    float GuardBandBottom;
    float ExtentsAdjust;
    DWORD StencilCaps;
    DWORD FVFCaps;
    DWORD TextureOpCaps;
    DWORD MaxTextureBlendStages;
    DWORD MaxSimultaneousTextures;
    DWORD VertexProcessingCaps;
    DWORD MaxActiveLights;
    DWORD MaxUserClipPlanes;
    DWORD MaxVertexBlendMatrices;
    DWORD MaxVertexBlendMatrixIndex;
    float MaxPointSize;
    DWORD MaxPrimitiveCount;
    DWORD MaxVertexIndex;
    DWORD MaxStreams;
    DWORD MaxStreamStride;
    DWORD VertexShaderVersion;
    DWORD MaxVertexShaderConst;
    DWORD PixelShaderVersion;
    float MaxPixelShaderValue;
};

struct Config {
    undefined field0_0x0[20];
    uint32_t version;
    uint8_t starting_lives;
    uint8_t starting_bombs;
    uint8_t graphics_format;
    uint8_t bgm_format;
    uint8_t __byte_1c;
    uint8_t __byte_1d;
    uint8_t fullscreen;
    uint8_t frameskip_settings;
    uint16_t deadzone_x;
    uint16_t deadzone_y;
    undefined field12_0x24[16];
    uint32_t flags;
};

struct _D3DVIEWPORT8 {
    DWORD X;
    DWORD Y;
    DWORD Width;
    DWORD Height;
    float MinZ;
    float MaxZ;
};

struct Supervisor {
    HINSTANCE current_instance;
    struct IDirect3D8 * d3d;
    struct IDirect3DDevice8 * d3d_device;
    undefined field3_0xc[8];
    void * dinput_related_ptr_1;
    undefined field5_0x18[44];
    HWND main_window;
    D3DMATRIX view_matrix;
    D3DMATRIX projection_matrix;
    D3DVIEWPORT8 viewport;
    D3DPRESENT_PARAMETERS present_params;
    struct Config config;
    struct Config config_defaults;
    int32_t dword_184;
    int32_t dword_188;
    int32_t dword_18C;
    int32_t dword_190;
    uint8_t field17_0x194[4];
    uint32_t frames_to_disable_something;
    int32_t dword_19C;
    int32_t is_vsync;
    int32_t dword_1A4;
    float game_speed;
    float slowdown;
    struct MidiManager * midi_manager_ptr;
    float float_1B4;
    float float_1B8;
    undefined field27_0x1bc;
    undefined field28_0x1bd;
    undefined field29_0x1be;
    undefined field30_0x1bf;
    undefined field31_0x1c0;
    undefined field32_0x1c1;
    undefined field33_0x1c2;
    undefined field34_0x1c3;
    undefined field35_0x1c4;
    undefined field36_0x1c5;
    undefined field37_0x1c6;
    undefined field38_0x1c7;
    undefined field39_0x1c8;
    undefined field40_0x1c9;
    undefined field41_0x1ca;
    undefined field42_0x1cb;
    undefined field43_0x1cc;
    undefined field44_0x1cd;
    undefined field45_0x1ce;
    undefined field46_0x1cf;
    undefined field47_0x1d0;
    undefined field48_0x1d1;
    undefined field49_0x1d2;
    undefined field50_0x1d3;
    undefined field51_0x1d4;
    undefined field52_0x1d5;
    undefined field53_0x1d6;
    undefined field54_0x1d7;
    undefined field55_0x1d8;
    undefined field56_0x1d9;
    undefined field57_0x1da;
    undefined field58_0x1db;
    undefined field59_0x1dc;
    undefined field60_0x1dd;
    undefined field61_0x1de;
    undefined field62_0x1df;
    undefined field63_0x1e0;
    undefined field64_0x1e1;
    undefined field65_0x1e2;
    undefined field66_0x1e3;
    undefined field67_0x1e4;
    undefined field68_0x1e5;
    undefined field69_0x1e6;
    undefined field70_0x1e7;
    undefined field71_0x1e8;
    undefined field72_0x1e9;
    undefined field73_0x1ea;
    undefined field74_0x1eb;
    undefined field75_0x1ec;
    undefined field76_0x1ed;
    undefined field77_0x1ee;
    undefined field78_0x1ef;
    undefined field79_0x1f0;
    undefined field80_0x1f1;
    undefined field81_0x1f2;
    undefined field82_0x1f3;
    undefined field83_0x1f4;
    undefined field84_0x1f5;
    undefined field85_0x1f6;
    undefined field86_0x1f7;
    undefined field87_0x1f8;
    undefined field88_0x1f9;
    undefined field89_0x1fa;
    undefined field90_0x1fb;
    undefined field91_0x1fc;
    undefined field92_0x1fd;
    undefined field93_0x1fe;
    undefined field94_0x1ff;
    undefined field95_0x200;
    undefined field96_0x201;
    undefined field97_0x202;
    undefined field98_0x203;
    undefined field99_0x204;
    undefined field100_0x205;
    undefined field101_0x206;
    undefined field102_0x207;
    undefined field103_0x208;
    undefined field104_0x209;
    undefined field105_0x20a;
    undefined field106_0x20b;
    undefined field107_0x20c;
    undefined field108_0x20d;
    undefined field109_0x20e;
    undefined field110_0x20f;
    undefined field111_0x210;
    undefined field112_0x211;
    undefined field113_0x212;
    undefined field114_0x213;
    undefined field115_0x214;
    undefined field116_0x215;
    undefined field117_0x216;
    undefined field118_0x217;
    undefined field119_0x218;
    undefined field120_0x219;
    undefined field121_0x21a;
    undefined field122_0x21b;
    undefined field123_0x21c;
    undefined field124_0x21d;
    undefined field125_0x21e;
    undefined field126_0x21f;
    undefined field127_0x220;
    undefined field128_0x221;
    undefined field129_0x222;
    undefined field130_0x223;
    undefined field131_0x224;
    undefined field132_0x225;
    undefined field133_0x226;
    undefined field134_0x227;
    undefined field135_0x228;
    undefined field136_0x229;
    undefined field137_0x22a;
    undefined field138_0x22b;
    undefined field139_0x22c;
    undefined field140_0x22d;
    undefined field141_0x22e;
    undefined field142_0x22f;
    undefined field143_0x230;
    undefined field144_0x231;
    undefined field145_0x232;
    undefined field146_0x233;
    undefined field147_0x234;
    undefined field148_0x235;
    undefined field149_0x236;
    undefined field150_0x237;
    undefined field151_0x238;
    undefined field152_0x239;
    undefined field153_0x23a;
    undefined field154_0x23b;
    undefined field155_0x23c;
    undefined field156_0x23d;
    undefined field157_0x23e;
    undefined field158_0x23f;
    undefined field159_0x240;
    undefined field160_0x241;
    undefined field161_0x242;
    undefined field162_0x243;
    undefined field163_0x244;
    undefined field164_0x245;
    undefined field165_0x246;
    undefined field166_0x247;
    undefined field167_0x248;
    undefined field168_0x249;
    undefined field169_0x24a;
    undefined field170_0x24b;
    undefined field171_0x24c;
    undefined field172_0x24d;
    undefined field173_0x24e;
    undefined field174_0x24f;
    undefined field175_0x250;
    undefined field176_0x251;
    undefined field177_0x252;
    undefined field178_0x253;
    undefined field179_0x254;
    undefined field180_0x255;
    undefined field181_0x256;
    undefined field182_0x257;
    undefined field183_0x258;
    undefined field184_0x259;
    undefined field185_0x25a;
    undefined field186_0x25b;
    undefined field187_0x25c;
    undefined field188_0x25d;
    undefined field189_0x25e;
    undefined field190_0x25f;
    undefined field191_0x260;
    undefined field192_0x261;
    undefined field193_0x262;
    undefined field194_0x263;
    undefined field195_0x264;
    undefined field196_0x265;
    undefined field197_0x266;
    undefined field198_0x267;
    undefined field199_0x268;
    undefined field200_0x269;
    undefined field201_0x26a;
    undefined field202_0x26b;
    undefined field203_0x26c;
    undefined field204_0x26d;
    undefined field205_0x26e;
    undefined field206_0x26f;
    undefined field207_0x270;
    undefined field208_0x271;
    undefined field209_0x272;
    undefined field210_0x273;
    undefined field211_0x274;
    undefined field212_0x275;
    undefined field213_0x276;
    undefined field214_0x277;
    undefined field215_0x278;
    undefined field216_0x279;
    undefined field217_0x27a;
    undefined field218_0x27b;
    undefined field219_0x27c;
    undefined field220_0x27d;
    undefined field221_0x27e;
    undefined field222_0x27f;
    undefined field223_0x280;
    undefined field224_0x281;
    undefined field225_0x282;
    undefined field226_0x283;
    undefined field227_0x284;
    undefined field228_0x285;
    undefined field229_0x286;
    undefined field230_0x287;
    undefined field231_0x288;
    undefined field232_0x289;
    undefined field233_0x28a;
    undefined field234_0x28b;
    undefined field235_0x28c;
    undefined field236_0x28d;
    undefined field237_0x28e;
    undefined field238_0x28f;
    undefined field239_0x290;
    undefined field240_0x291;
    undefined field241_0x292;
    undefined field242_0x293;
    undefined field243_0x294;
    undefined field244_0x295;
    undefined field245_0x296;
    undefined field246_0x297;
    undefined field247_0x298;
    undefined field248_0x299;
    undefined field249_0x29a;
    undefined field250_0x29b;
    undefined field251_0x29c;
    undefined field252_0x29d;
    undefined field253_0x29e;
    undefined field254_0x29f;
    undefined field255_0x2a0;
    undefined field256_0x2a1;
    undefined field257_0x2a2;
    undefined field258_0x2a3;
    undefined field259_0x2a4;
    undefined field260_0x2a5;
    undefined field261_0x2a6;
    undefined field262_0x2a7;
    undefined field263_0x2a8;
    undefined field264_0x2a9;
    undefined field265_0x2aa;
    undefined field266_0x2ab;
    undefined field267_0x2ac;
    undefined field268_0x2ad;
    undefined field269_0x2ae;
    undefined field270_0x2af;
    undefined field271_0x2b0;
    undefined field272_0x2b1;
    undefined field273_0x2b2;
    undefined field274_0x2b3;
    undefined field275_0x2b4;
    undefined field276_0x2b5;
    undefined field277_0x2b6;
    undefined field278_0x2b7;
    undefined field279_0x2b8;
    undefined field280_0x2b9;
    undefined field281_0x2ba;
    undefined field282_0x2bb;
    undefined field283_0x2bc;
    undefined field284_0x2bd;
    undefined field285_0x2be;
    undefined field286_0x2bf;
    undefined field287_0x2c0;
    undefined field288_0x2c1;
    undefined field289_0x2c2;
    undefined field290_0x2c3;
    undefined field291_0x2c4;
    undefined field292_0x2c5;
    undefined field293_0x2c6;
    undefined field294_0x2c7;
    undefined field295_0x2c8;
    undefined field296_0x2c9;
    undefined field297_0x2ca;
    undefined field298_0x2cb;
    undefined field299_0x2cc;
    undefined field300_0x2cd;
    undefined field301_0x2ce;
    undefined field302_0x2cf;
    undefined field303_0x2d0;
    undefined field304_0x2d1;
    undefined field305_0x2d2;
    undefined field306_0x2d3;
    undefined field307_0x2d4;
    undefined field308_0x2d5;
    undefined field309_0x2d6;
    undefined field310_0x2d7;
    undefined field311_0x2d8;
    undefined field312_0x2d9;
    undefined field313_0x2da;
    undefined field314_0x2db;
    undefined field315_0x2dc;
    undefined field316_0x2dd;
    undefined field317_0x2de;
    undefined field318_0x2df;
    undefined field319_0x2e0;
    undefined field320_0x2e1;
    undefined field321_0x2e2;
    undefined field322_0x2e3;
    undefined field323_0x2e4;
    undefined field324_0x2e5;
    undefined field325_0x2e6;
    undefined field326_0x2e7;
    undefined field327_0x2e8;
    undefined field328_0x2e9;
    undefined field329_0x2ea;
    undefined field330_0x2eb;
    undefined field331_0x2ec;
    undefined field332_0x2ed;
    undefined field333_0x2ee;
    undefined field334_0x2ef;
    undefined field335_0x2f0;
    undefined field336_0x2f1;
    undefined field337_0x2f2;
    undefined field338_0x2f3;
    undefined field339_0x2f4;
    undefined field340_0x2f5;
    undefined field341_0x2f6;
    undefined field342_0x2f7;
    undefined field343_0x2f8;
    undefined field344_0x2f9;
    undefined field345_0x2fa;
    undefined field346_0x2fb;
    undefined field347_0x2fc;
    undefined field348_0x2fd;
    undefined field349_0x2fe;
    undefined field350_0x2ff;
    undefined field351_0x300;
    undefined field352_0x301;
    undefined field353_0x302;
    undefined field354_0x303;
    undefined field355_0x304;
    undefined field356_0x305;
    undefined field357_0x306;
    undefined field358_0x307;
    undefined field359_0x308;
    undefined field360_0x309;
    undefined field361_0x30a;
    undefined field362_0x30b;
    undefined field363_0x30c;
    undefined field364_0x30d;
    undefined field365_0x30e;
    undefined field366_0x30f;
    undefined field367_0x310;
    undefined field368_0x311;
    undefined field369_0x312;
    undefined field370_0x313;
    undefined field371_0x314;
    undefined field372_0x315;
    undefined field373_0x316;
    undefined field374_0x317;
    undefined field375_0x318;
    undefined field376_0x319;
    undefined field377_0x31a;
    undefined field378_0x31b;
    undefined field379_0x31c;
    undefined field380_0x31d;
    undefined field381_0x31e;
    undefined field382_0x31f;
    undefined field383_0x320;
    undefined field384_0x321;
    undefined field385_0x322;
    undefined field386_0x323;
    undefined field387_0x324;
    undefined field388_0x325;
    undefined field389_0x326;
    undefined field390_0x327;
    undefined field391_0x328;
    undefined field392_0x329;
    undefined field393_0x32a;
    undefined field394_0x32b;
    undefined field395_0x32c;
    undefined field396_0x32d;
    undefined field397_0x32e;
    undefined field398_0x32f;
    undefined field399_0x330;
    undefined field400_0x331;
    undefined field401_0x332;
    undefined field402_0x333;
    undefined field403_0x334;
    undefined field404_0x335;
    undefined field405_0x336;
    undefined field406_0x337;
    undefined field407_0x338;
    undefined field408_0x339;
    undefined field409_0x33a;
    undefined field410_0x33b;
    undefined field411_0x33c;
    undefined field412_0x33d;
    undefined field413_0x33e;
    undefined field414_0x33f;
    undefined field415_0x340;
    undefined field416_0x341;
    undefined field417_0x342;
    undefined field418_0x343;
    undefined field419_0x344;
    undefined field420_0x345;
    undefined field421_0x346;
    undefined field422_0x347;
    undefined field423_0x348;
    undefined field424_0x349;
    undefined field425_0x34a;
    undefined field426_0x34b;
    undefined field427_0x34c;
    undefined field428_0x34d;
    undefined field429_0x34e;
    undefined field430_0x34f;
    undefined field431_0x350;
    undefined field432_0x351;
    undefined field433_0x352;
    undefined field434_0x353;
    undefined field435_0x354;
    undefined field436_0x355;
    undefined field437_0x356;
    undefined field438_0x357;
    undefined field439_0x358;
    undefined field440_0x359;
    undefined field441_0x35a;
    undefined field442_0x35b;
    undefined field443_0x35c;
    undefined field444_0x35d;
    undefined field445_0x35e;
    undefined field446_0x35f;
    undefined field447_0x360;
    undefined field448_0x361;
    undefined field449_0x362;
    undefined field450_0x363;
    undefined field451_0x364;
    undefined field452_0x365;
    undefined field453_0x366;
    undefined field454_0x367;
    undefined field455_0x368;
    undefined field456_0x369;
    undefined field457_0x36a;
    undefined field458_0x36b;
    undefined field459_0x36c;
    undefined field460_0x36d;
    undefined field461_0x36e;
    undefined field462_0x36f;
    undefined field463_0x370;
    undefined field464_0x371;
    undefined field465_0x372;
    undefined field466_0x373;
    undefined field467_0x374;
    undefined field468_0x375;
    undefined field469_0x376;
    undefined field470_0x377;
    undefined field471_0x378;
    undefined field472_0x379;
    undefined field473_0x37a;
    undefined field474_0x37b;
    undefined field475_0x37c;
    undefined field476_0x37d;
    undefined field477_0x37e;
    undefined field478_0x37f;
    undefined field479_0x380;
    undefined field480_0x381;
    undefined field481_0x382;
    undefined field482_0x383;
    undefined field483_0x384;
    undefined field484_0x385;
    undefined field485_0x386;
    undefined field486_0x387;
    undefined field487_0x388;
    undefined field488_0x389;
    undefined field489_0x38a;
    undefined field490_0x38b;
    undefined field491_0x38c;
    undefined field492_0x38d;
    undefined field493_0x38e;
    undefined field494_0x38f;
    undefined field495_0x390;
    undefined field496_0x391;
    undefined field497_0x392;
    undefined field498_0x393;
    undefined field499_0x394;
    undefined field500_0x395;
    undefined field501_0x396;
    undefined field502_0x397;
    undefined field503_0x398;
    undefined field504_0x399;
    undefined field505_0x39a;
    undefined field506_0x39b;
    undefined field507_0x39c;
    undefined field508_0x39d;
    undefined field509_0x39e;
    undefined field510_0x39f;
    undefined field511_0x3a0;
    undefined field512_0x3a1;
    undefined field513_0x3a2;
    undefined field514_0x3a3;
    undefined field515_0x3a4;
    undefined field516_0x3a5;
    undefined field517_0x3a6;
    undefined field518_0x3a7;
    undefined field519_0x3a8;
    undefined field520_0x3a9;
    undefined field521_0x3aa;
    undefined field522_0x3ab;
    undefined field523_0x3ac;
    undefined field524_0x3ad;
    undefined field525_0x3ae;
    undefined field526_0x3af;
    undefined field527_0x3b0;
    undefined field528_0x3b1;
    undefined field529_0x3b2;
    undefined field530_0x3b3;
    undefined field531_0x3b4;
    undefined field532_0x3b5;
    undefined field533_0x3b6;
    undefined field534_0x3b7;
    undefined field535_0x3b8;
    undefined field536_0x3b9;
    undefined field537_0x3ba;
    undefined field538_0x3bb;
    undefined field539_0x3bc;
    undefined field540_0x3bd;
    undefined field541_0x3be;
    undefined field542_0x3bf;
    undefined field543_0x3c0;
    undefined field544_0x3c1;
    undefined field545_0x3c2;
    undefined field546_0x3c3;
    undefined field547_0x3c4;
    undefined field548_0x3c5;
    undefined field549_0x3c6;
    undefined field550_0x3c7;
    undefined field551_0x3c8;
    undefined field552_0x3c9;
    undefined field553_0x3ca;
    undefined field554_0x3cb;
    undefined field555_0x3cc;
    undefined field556_0x3cd;
    undefined field557_0x3ce;
    undefined field558_0x3cf;
    undefined field559_0x3d0;
    undefined field560_0x3d1;
    undefined field561_0x3d2;
    undefined field562_0x3d3;
    undefined field563_0x3d4;
    undefined field564_0x3d5;
    undefined field565_0x3d6;
    undefined field566_0x3d7;
    undefined field567_0x3d8;
    undefined field568_0x3d9;
    undefined field569_0x3da;
    undefined field570_0x3db;
    undefined field571_0x3dc;
    undefined field572_0x3dd;
    undefined field573_0x3de;
    undefined field574_0x3df;
    undefined field575_0x3e0;
    undefined field576_0x3e1;
    undefined field577_0x3e2;
    undefined field578_0x3e3;
    undefined field579_0x3e4;
    undefined field580_0x3e5;
    undefined field581_0x3e6;
    undefined field582_0x3e7;
    undefined field583_0x3e8;
    undefined field584_0x3e9;
    undefined field585_0x3ea;
    undefined field586_0x3eb;
    undefined field587_0x3ec;
    undefined field588_0x3ed;
    undefined field589_0x3ee;
    undefined field590_0x3ef;
    undefined field591_0x3f0;
    undefined field592_0x3f1;
    undefined field593_0x3f2;
    undefined field594_0x3f3;
    undefined field595_0x3f4;
    undefined field596_0x3f5;
    undefined field597_0x3f6;
    undefined field598_0x3f7;
    undefined field599_0x3f8;
    undefined field600_0x3f9;
    undefined field601_0x3fa;
    undefined field602_0x3fb;
    undefined field603_0x3fc;
    undefined field604_0x3fd;
    undefined field605_0x3fe;
    undefined field606_0x3ff;
    int32_t dword_400;
    D3DCAPS8 device_caps;
};

struct MidiManager {
    undefined field0_0x0[712];
    int32_t dword_2C8;
    undefined field2_0x2cc[20];
    int32_t dword_2DC;
    int32_t dword_2E0;
    int32_t dword_2E4;
    int32_t dword_2E8;
    struct COMMENT size_unknown;
};

typedef struct GameManager GameManager, *PGameManager;

typedef struct ScorefileCatk ScorefileCatk, *PScorefileCatk;

typedef struct ScorefileClrd ScorefileClrd, *PScorefileClrd;

struct ScorefileClrd {
    char magic__CLRD[4];
    uint16_t __size_1;
    uint16_t __size_2;
    uint8_t __byte_8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    uint8_t clear_counts[5];
    uint8_t continue_counts[5];
    uint8_t character_shot_id;
    undefined field10_0x17;
};

struct ScorefileCatk {
    char magic__CATK[4];
    uint16_t size_1;
    uint16_t size_2;
    uint8_t __byte_8;
    undefined field4_0x9;
    undefined field5_0xa;
    undefined field6_0xb;
    int32_t highscore;
    int16_t __word_10;
    uint8_t spell_name_hash;
    uint8_t most_recent_capture_shottype;
    undefined field11_0x14;
    undefined field12_0x15;
    undefined field13_0x16;
    undefined field14_0x17;
    char spell_name[36];
    int16_t attempts;
    int16_t captures;
};

struct GameManager {
    int32_t __dword_0;
    int32_t score;
    int32_t __dword_8;
    int32_t high_score;
    int32_t difficulty;
    int32_t graze_in_stage;
    int32_t overall_graze;
    int32_t __spellcard_related_1;
    int32_t __dword_20;
    int32_t __dword_24;
    int32_t __dword_28;
    char __byte_2c;
    undefined field12_0x2d;
    undefined field13_0x2e;
    undefined field14_0x2f;
    struct ScorefileCatk catk_data[64];
    struct ScorefileClrd clrd_data[4];
    struct ScorefilePscr pscr_data[96];
    ushort current_power;
    undefined field19_0x1812;
    undefined field20_0x1813;
    uint16_t power_items_collected_stage;
    int16_t score_items_collected_stage;
    char __byte_1818;
    char power_item_count;
    char lives_remaining;
    char bombs_remaining;
    char __byte_181c;
    char character;
    char shottype;
    char __byte_181f;
    char __byte_1820;
    char __byte_1821;
    char __byte_1822;
    char __byte_1823;
    char demoplay_mode;
    undefined field36_0x1825;
    undefined field37_0x1826;
    undefined field38_0x1827;
    undefined field39_0x1828;
    undefined field40_0x1829;
    undefined field41_0x182a;
    undefined field42_0x182b;
    char replay_filename[256];
    undefined seemingly_unused_space[256];
    int16_t __word_1a2c;
    undefined field46_0x1a2e[6];
    int32_t current_stage;
    int32_t __dword_1a38;
    struct Float2 arcade_region_top_left_pos;
    struct Float2 arcade_region_size;
    struct Float2 __float2_1a4c;
    struct Float2 __float2_1a54;
    float __float_1a5c;
    struct Float3 stage_camera_facing_dir;
    int32_t __int_1a6c;
    int32_t rank;
    int32_t max_rank;
    int32_t min_rank;
    int32_t subrank;
};

typedef struct SoundManager SoundManager, *PSoundManager;

struct SoundManager { // PlaceHolder Class Structure
    struct IDirectSound * dsound_api;
    undefined field1_0x4[4];
    struct IUnknown * ptrs_8[128];
    struct IUnknown * ptrs_200[128];
    int32_t array_408[128];
    void * ptr_608;
    HWND window;
    struct IDirectSound * dsound;
    int32_t dword_614;
    int32_t dword_618;
    undefined field10_0x61c[4];
    int32_t sound_index_array[3];
    struct CSound * csound_ptr;
    int32_t dword_630;
    undefined4 field14_0x634;
};

typedef struct ItemManager ItemManager, *PItemManager;

typedef struct Item Item, *PItem;

struct Item {
    struct AnmVm vm;
    struct Float3 pos;
    struct Float3 velocity;
    struct Float3 unknown_vec3;
    struct Timer timer;
    uint8_t item_type;
    uint8_t in_use;
    uint8_t unknown_byte;
    uint8_t state;
    struct COMMENT exact_size_known[0];
};

struct ItemManager {
    struct Item items[512];
    struct Item dummy_item_for_failed_spawns;
    int32_t next_index;
    int32_t item_count;
    struct COMMENT exact_size_known[0];
};

typedef struct TableEffectData TableEffectData, *PTableEffectData;

struct TableEffectData {
    int32_t anm_script_index;
    int32_t unknown;
};

typedef struct Window Window, *PWindow;

typedef struct WindowSavedSystemParameters WindowSavedSystemParameters, *PWindowSavedSystemParameters;

struct WindowSavedSystemParameters {
    int32_t screen_save_active;
    int32_t low_power_active;
    int32_t power_off_active;
};

struct Window { // PlaceHolder Class Structure
    HWND main_window;
    int32_t should_close;
    UINT wparam; // this should NOT be global.
    int32_t bool_wparam_is_zero;
    uint8_t byte_10;
    undefined field5_0x11[3];
    struct WindowSavedSystemParameters sys_params;
};

typedef struct EffectManager EffectManager, *PEffectManager;

typedef struct EffectManager * EffectManager_ptr_8_Effect[512];

struct EffectManager {
    int32_t next_index;
    undefined field1_0x4[4];
    struct Effect effects_array[512];
    struct Effect dummy_effect; // for failed spawns
    struct COMMENT exact_size_known[0];
};

typedef struct Ending Ending, *PEnding;

struct Ending {
    struct UpdateFunc * on_tick;
    undefined field1_0x4[4460];
    struct COMMENT exact_size_known[0];
};

typedef struct BulletManager BulletManager, *PBulletManager;

typedef struct Bullet Bullet, *PBullet;

struct Bullet {
    struct BulletTypeVms vms;
    struct Float3 pos;
    struct Float3 velocity;
    struct Float3 ex_4_acceleration;
    float speed;
    float ex_5_float_0;
    float dir_change_speed_arg;
    float angle;
    float ex_5_float_1;
    float dir_change_rotation_arg;
    struct Timer timer;
    int32_t ex_5_int_0;
    int32_t dir_change_interval;
    int32_t dir_change_num_times;
    int32_t dir_change_max_times;
    uint16_t ex_flags;
    uint16_t color;
    undefined field17_0x5bc[2];
    uint16_t state;
    uint16_t field_5c0;
    uint8_t field_5c2;
    uint8_t field_5c3;
    struct COMMENT exact_size_known[0];
};

struct BulletManager { // PlaceHolder Class Structure
    struct BulletTypeVms bullet_types_templates[16];
    struct Bullet bullets[640];
    struct Laser lasers[64];
    int32_t next_bullet_index;
    int32_t bullet_count;
    struct Timer timer;
    char * etama_anm_filename;
    struct COMMENT exact_size_known[0];
};

typedef struct StdRawInstance StdRawInstance, *PStdRawInstance;

struct StdRawInstance {
    uint16_t object_id;
    uint16_t unknown;
    struct Float3 pos;
};

typedef struct Input Input, *PInput;

struct Input {
    uint16_t currently_pressed;
    char padding_1[2];
    uint16_t word_4;
    char padding_2[2];
    uint16_t word_8;
    char padding_3[2];
    uint16_t word_C;
    char padding_4[2];
};

typedef struct MainMenu MainMenu, *PMainMenu;

struct MainMenu {
    undefined unknown[69428];
    struct COMMENT field1_0x10f34[0]; // exact size known
};

typedef struct LogBuffer LogBuffer, *PLogBuffer;

struct LogBuffer {
    undefined field0_0x0[2048];
    struct COMMENT POSSIBLY_LARGER[0];
};

typedef struct Concurrency Concurrency, *PConcurrency;

struct Concurrency {

};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct DNameNode DNameNode, *PDNameNode;

struct DNameNode {

};

typedef struct TimelineInstruction TimelineInstruction, *PTimelineInstruction;

struct TimelineInstruction {
    int16_t time;
    int16_t first_arg;
    int16_t opcode;
    int16_t offset_to_next;
    char args[0];
};

typedef struct EnemyManager EnemyManager, *PEnemyManager;

struct EnemyManager {
    char * stg_ecl_anm_filename;
    char * stg_ecl2_anm_filename;
    struct Enemy template;
    struct Enemy enemies[256];
    struct Enemy dummy_enemy; // For failed spawns.
    struct Enemy * bosses[8];
    uint16_t random_item_spawn_index;
    uint16_t random_item_table_index;
    int32_t enemy_count_real;
    undefined field9_0xee5c0[8];
    int32_t spellcard_capture;
    int32_t spellcard_bonus;
    int32_t spellcard_number;
    undefined field13_0xee5d4[4];
    struct EclRawInstr * timeline_instr;
    struct Timer timeline_time;
    struct COMMENT exact_size_known[0];
};

typedef enum ItemID {
    PowerItem=0,
    PointItem=1,
    BigPowerItem=2,
    BombItem=3,
    FItem=4,
    LifeItem=5,
    StarItem=6
} ItemID;

typedef struct CWaveFile CWaveFile, *PCWaveFile;

struct CWaveFile {
    struct WAVEFORMATEX * m_pwfx;
    HMMIO m_hmmio;
    struct MMCKINFO m_ck;
    struct MMCKINFO m_ckRiff;
    DWORD m_dwSize;
    struct MMIOINFO m_mmioinfoOut;
    DWORD m_dwFlags;
    BOOL m_bIsReadingFromMemory;
    BYTE * m_pbData;
    BYTE * m_pbDataCur;
    ULONG m_ulDataSize;
    CHAR * m_pResourceBuffer;
};

typedef struct UpdateFuncRegistry UpdateFuncRegistry, *PUpdateFuncRegistry;

struct UpdateFuncRegistry { // PlaceHolder Class Structure
    struct UpdateFunc on_tick_list_head;
    struct UpdateFunc on_draw_list_head;
    uint32_t midi_outputs_count;
    uint32_t dword_44;
};

typedef struct Stage Stage, *PStage;

typedef struct StageCameraSky StageCameraSky, *PStageCameraSky;

struct StageCameraSky {
    float near_plane;
    float far_plane;
    D3DCOLOR color;
};

struct Stage {
    struct AnmVm * quad_vms;
    struct StdRawHeader * std_file;
    int32_t num_quads;
    int32_t num_objects;
    struct StdRawObject * * objects;
    struct StdRawInstance * object_instances;
    struct StdRawInstr * beginning_of_script;
    struct Timer script_time;
    int32_t instr_index;
    struct Timer timer_2C;
    undefined field10_0x38;
    undefined field11_0x39;
    undefined field12_0x3a;
    undefined field13_0x3b;
    struct Float3 position;
    struct StageCameraSky sky_fog;
    struct StageCameraSky sky_fog_interp_initial;
    struct StageCameraSky sky_fog_interp_final;
    int32_t sky_fog_interp_duration;
    struct Timer sky_fog_interp_timer;
    undefined field20_0x7c;
    undefined field21_0x7d;
    undefined field22_0x7e;
    undefined field23_0x7f;
    int32_t set_by_spellcard_ecl_80;
    int32_t set_by_spellcard_ecl_84;
    struct AnmVm vm_88;
    struct AnmVm vm_198;
    uint8_t unpause_flag;
    undefined field29_0x2a9;
    undefined field30_0x2aa;
    undefined field31_0x2ab;
    struct Float3 facing_dir_interp_initial;
    struct Float3 facing_dir_interp_final;
    int32_t facing_dir_interp_duration;
    struct Timer facing_dir_interp_timer;
    struct Float3 position_interp_final;
    int32_t position_interp_end_time;
    struct Float3 position_interp_initial;
    int32_t position_interp_start_time;
};

typedef struct MIDIHDR MIDIHDR, *PMIDIHDR;

struct MIDIHDR {

};

typedef struct AsciiManagerBigChild1 AsciiManagerBigChild1, *PAsciiManagerBigChild1;

struct AsciiManagerBigChild1 {

};

typedef struct RenderVertex142 RenderVertex142, *PRenderVertex142;

struct RenderVertex142 {
    struct Float3 pos;
    D3DCOLOR diffuse_color;
    struct Float2 texture_uv;
};

typedef struct AnmManager AnmManager, *PAnmManager;

struct AnmManager {
    struct AnmLoadedSprite sprites[2048];
    struct AnmVm mystery_vm;
    struct IDirect3DTexture8 * textures[264];
    void * image_data_array[256];
    int32_t loaded_sprite_count_maybe;
    struct AnmRawInstr * scripts[2048];
    int32_t sprite_indices[2048];
    struct AnmRawEntry * anm_files[128];
    uint32_t anm_file_sprite_index_offsets[128];
    struct IDirect3DSurface8 * surfaces_a[32];
    struct IDirect3DSurface8 * surfaces_b[32];
    struct D3DXIMAGE_INFO surface_source_info[32];
    D3DCOLOR current_texture_factor;
    struct IDirect3DTexture8 * current_texture;
    uint8_t current_blend_mode;
    uint8_t current_colorop;
    uint8_t current_unknown;
    uint8_t current_zwrite_disable;
    struct AnmLoadedSprite * current_sprite;
    struct IDirect3DVertexBuffer8 * stream_source;
    struct RenderVertex142 some_vertex_buffer[4];
    int32_t weird_texture_height;
    struct COMMENT exact_size_known[0];
};

typedef struct MusicRoom MusicRoom, *PMusicRoom;

struct MusicRoom { // PlaceHolder Class Structure
    struct UpdateFunc * on_tick;
    struct UpdateFunc * on_draw;
    int32_t field_8;
    int32_t field_c;
    int32_t field_10;
    int32_t field_14;
    int32_t field_18;
    int32_t field_1c;
    int32_t field_20;
    struct AnmVm vms_0[1];
    struct AnmVm vms_1[32];
    struct AnmVm vms_2[16];
    struct COMMENT exact_size_known[0];
};

typedef struct EnemyController EnemyController, *PEnemyController;

struct EnemyController { // PlaceHolder Class Structure
    void * ecl_file_buffer;
    struct EclRawInstr * * sub_table;
    struct TimelineInstruction * current_timeline_instruction;
};

typedef enum ConfigFlags {
    suppress_vertex_buf=1,
    force_16bit_textures=2,
    force_backbuffer_clearing=3,
    suppress_item_drawing_around_game=4,
    suppress_gouraud_shading=5,
    suppress_depth_test=6,
    force_60fps=7,
    suppress_texture_color_composition_and_windowed_mode=8,
    force_reference_rasterizer=9,
    suppress_fog_usage=10,
    disable_directinput=11
} ConfigFlags;

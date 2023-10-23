
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Enemy::move_velocity_interp(Enemy *enemy,EclRawInstr instruction)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 extraout_ECX;
  undefined extraout_DL;
  float10 fVar4;
  
  piVar2 = (int *)(instruction.time + 0xc);
  pfVar3 = (float *)ecl_get_float((int)enemy,(undefined4 *)(instruction.time + 16),(undefined4 *)0x0
                                 );
  fVar1 = *pfVar3;
  fVar4 = (float10)_cos(extraout_ECX,extraout_DL,SUB81((double)fVar1,0));
  (enemy->move_interp).x =
       ((float)fVar4 * *(float *)(instruction.time + 0x14) * (float)*piVar2) / _2_0f;
  fVar4 = (float10)_sin(piVar2,(char)piVar2,SUB81((double)fVar1,0));
  (enemy->move_interp).y =
       ((float)fVar4 * *(float *)(instruction.time + 0x14) * (float)*piVar2) / _2_0f;
  (enemy->move_interp).z = 0.0;
  (enemy->move_interp_start_pos).x = (enemy->position).x;
  (enemy->move_interp_start_pos).y = (enemy->position).y;
  (enemy->move_interp_start_pos).z = (enemy->position).z;
  enemy->move_interp_start_time = *piVar2;
  (enemy->move_interp_timer).current = enemy->move_interp_start_time;
  (enemy->move_interp_timer).subframe = 0.0;
  (enemy->move_interp_timer).previous = -999;
  enemy->flags_1 = enemy->flags_1 & 0xfcU | 2;
  return;
}


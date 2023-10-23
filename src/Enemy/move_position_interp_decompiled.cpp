
void __cdecl Enemy::move_position_interp(Enemy *enemy,EclRawInstr *instruction)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  
  pfVar6 = (float *)ecl_get_float((int)enemy,instruction->args + 1,(undefined4 *)0x0);
  fVar3 = *pfVar6;
  pfVar6 = (float *)ecl_get_float((int)enemy,instruction->args + 2,(undefined4 *)0x0);
  fVar4 = *pfVar6;
  pfVar6 = (float *)ecl_get_float((int)enemy,instruction->args + 3,(undefined4 *)0x0);
  fVar5 = *pfVar6;
  fVar1 = (enemy->position).z;
  fVar2 = (enemy->position).y;
  (enemy->move_interp).x = fVar3 - (enemy->position).x;
  (enemy->move_interp).y = fVar4 - fVar2;
  (enemy->move_interp).z = fVar5 - fVar1;
  (enemy->move_interp_start_pos).x = (enemy->position).x;
  (enemy->move_interp_start_pos).y = (enemy->position).y;
  (enemy->move_interp_start_pos).z = (enemy->position).z;
  enemy->move_interp_start_time = instruction->args[0];
  (enemy->move_interp_timer).current = enemy->move_interp_start_time;
  (enemy->move_interp_timer).subframe = 0.0;
  (enemy->move_interp_timer).previous = -999;
  enemy->flags_1 = enemy->flags_1 & 0xfcU | 2;
  (enemy->axis_speed).x = 0.0;
  (enemy->axis_speed).y = 0.0;
  (enemy->axis_speed).z = 0.0;
  return;
}


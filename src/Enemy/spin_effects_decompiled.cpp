
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Enemy::spin_effects(Enemy *enemy)

{
  float10 angle;
  int i;
  Effect *effect;
  
  for (i = 0; i < enemy->effect_index; i = i + 1) {
    effect = enemy->effect_array[i];
    if (effect != (Effect *)0x0) {
      (effect->float3_134).x = (enemy->position).x;
      (effect->float3_134).y = (enemy->position).y;
      (effect->float3_134).z = (enemy->position).z;
      if (effect->float_15C < enemy->effect_distance) {
        effect->float_15C = effect->float_15C + _0_3f;
      }
      angle = reduce_angle(effect->float_160,0.03141593);
      effect->float_160 = (float)angle;
    }
  }
  return;
}


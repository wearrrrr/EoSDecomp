
void __cdecl Enemy::__deactivate_effects(Enemy *enemy)

{
  int i;
  
  for (i = 0; i < enemy->effect_index; i = i + 1) {
    if (enemy->effect_array[i] != (Effect *)0) {
      enemy->effect_array[i]->byte_17A = 1;
      enemy->effect_array[i] = (Effect *)0;
    }
  }
  enemy->effect_index = 0;
  return;
}


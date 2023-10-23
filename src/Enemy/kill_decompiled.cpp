
void __fastcall Enemy::kill(Enemy *enemy)

{
  if (enemy->flags_2 >> 5 == 0) {
    enemy->flags_1 = enemy->flags_1 & 0x7f;
  }
  else {
    enemy->flags_2 = enemy->flags_2 & 0xfe;
  }
  if ((enemy->flags_2 >> 3 & 1) != 0) {
    gui.boss_present = false;
  }
  if (enemy->effect_index != 0) {
    __deactivate_effects(enemy);
  }
  return;
}


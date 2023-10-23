
int __thiscall
EnemyController::init_sub_context(EnemyController *this,EnemyEclContext *current_context,short sub)

{
  current_context->current_instr = this->sub_table[sub];
  (current_context->time).current = 0;
  (current_context->time).subframe = 0.0;
  (current_context->time).previous = -999;
  current_context->sub_id = sub;
  return 0;
}


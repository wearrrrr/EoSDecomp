
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall Player::__sub_426FD0(Player *this,Float3 *param_1,Float3 *item_manager_thing)

{
  int result;
  
  if ((this->byte_9E0 == '\0') || (this->byte_9E0 == '\x03')) {
    if (((_1_0f / _2_0f) * item_manager_thing->x + param_1->x < (this->float3_470).x) ||
       ((((this->float3_47C).x < param_1->x - (_1_0f / _2_0f) * item_manager_thing->x ||
         ((_1_0f / _2_0f) * item_manager_thing->y + param_1->y < (this->float3_470).y)) ||
        ((this->float3_47C).y < param_1->y - (_1_0f / _2_0f) * item_manager_thing->y)))) {
      result = 0;
    }
    else {
      result = 1;
    }
  }
  else {
    result = 0;
  }
  return result;
}


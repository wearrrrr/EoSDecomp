
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameManager::check_visibility(float x,float y,float w,float h)

{
  int result;
  
  if ((float)__0f <= w / _2_0f + x) {
    if (x - w / _2_0f <= game_manager.arcade_region_size.x) {
      if ((float)__0f <= h / _2_0f + y) {
        if (y - h / _2_0f <= game_manager.arcade_region_size.y) {
          result = 1;
        }
        else {
          result = 0;
        }
      }
      else {
        result = 0;
      }
    }
    else {
      result = 0;
    }
  }
  else {
    result = 0;
  }
  return result;
}


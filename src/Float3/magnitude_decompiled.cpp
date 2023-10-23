
float10 __cdecl Float3::magnitude(Float3 *value)

{
  float10 result;
  
  result = (float10)_sqrt(value,(char)value,
                          SUB81((double)(value->x * value->x + value->y * value->y +
                                        value->z * value->z),0));
  return (float10)(float)result;
}


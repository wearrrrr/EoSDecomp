
ushort __thiscall Rng::rand_word(Rng *this)

{
  ushort temp;
  uint RNG_SEED;
  
  temp = (this->rng_value ^ 0x9630) + 0x9aad;
  RNG_SEED = (uint)temp;
  this->rng_value = (short)((int)(RNG_SEED & 0xc000) >> 0xe) + temp * 4;
  *(int *)((int)&this->rng_index + 2) = *(int *)((int)&this->rng_index + 2) + 1;
  return this->rng_value;
}


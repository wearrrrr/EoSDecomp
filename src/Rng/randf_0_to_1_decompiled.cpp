
float10 __thiscall Rng::randf_0_to_1(Rng *this)

{
  uint rand1;
  
  rand1 = rand_dword(this);
                    /* 2^32 as a float */
  return (float10)(ulonglong)rand1 / (float10)__32_f;
}


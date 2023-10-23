
undefined4 __thiscall Rng::rand_dword(Rng *this)

{
  ushort rand1;
  ushort rand2;
  
  rand1 = rand_word(this);
  rand2 = rand_word(this);
                    /* return rand1 + rand2 */
  return CONCAT22(rand1,rand2);
}


// FUN_00548300 @ 00548300 body=[[00548300, 00548331] [00548335, 0054833b]]


int * FUN_00548300(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = in_ECX + -4;
  *(undefined ***)(*(int *)(*piVar1 + 4) + -0x10 + (int)in_ECX) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  return piVar1;
}


// FUN_0086c610 @ 0086c610 body=[[0086c610, 0086c65d] [0086c661, 0086c667]]


int * FUN_0086c610(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = in_ECX + -6;
  *(undefined ***)(*(int *)(*piVar1 + 4) + -0x18 + (int)in_ECX) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(*(int *)(in_ECX[-2] + 4) + -8 + (int)in_ECX) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(*(int *)(in_ECX[-6] + 4) + -0x18 + (int)in_ECX) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  return piVar1;
}


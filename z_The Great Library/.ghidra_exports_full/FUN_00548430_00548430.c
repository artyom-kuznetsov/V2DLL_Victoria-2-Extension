// FUN_00548430 @ 00548430 body=[[00548430, 0054849f] [005484a3, 005484b6]]


int * FUN_00548430(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b464bb;
  local_10 = ExceptionList;
  piVar1 = in_ECX + -0x18;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*piVar1 + 4) + -0x60 + (int)in_ECX) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00547890();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(in_ECX[-0x18] + 4) + -0x60 + (int)in_ECX) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  ExceptionList = local_10;
  return piVar1;
}


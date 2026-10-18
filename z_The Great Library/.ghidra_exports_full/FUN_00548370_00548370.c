// FUN_00548370 @ 00548370 body=[[00548370, 005483e5] [005483e9, 005483fd]]


undefined4 * FUN_00548370(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4641b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(in_ECX[-0x1a] + 4) + -0x68 + (int)in_ECX) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00547890();
  local_8 = 0xffffffff;
  *(undefined ***)((int)in_ECX + *(int *)(in_ECX[-0x1a] + 4) + -0x68) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *in_ECX = std::ios_base::vftable;
  FUN_00aad52d();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX + -0x1a);
  }
  ExceptionList = local_10;
  return in_ECX + -0x1a;
}


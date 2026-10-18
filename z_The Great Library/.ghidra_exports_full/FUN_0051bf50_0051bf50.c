// FUN_0051bf50 @ 0051bf50 body=[[0051bf50, 0051bfc0]]


void FUN_0051bf50(void)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4641b;
  local_10 = ExceptionList;
  piVar1 = in_ECX + 0x1a;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x68 + (int)piVar1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00547890();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x68 + (int)piVar1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *piVar1 = (int)std::ios_base::vftable;
  FUN_00aad52d(piVar1);
  ExceptionList = local_10;
  return;
}


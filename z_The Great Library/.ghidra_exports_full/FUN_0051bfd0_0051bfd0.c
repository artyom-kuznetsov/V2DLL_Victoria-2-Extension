// FUN_0051bfd0 @ 0051bfd0 body=[[0051bfd0, 0051c03e]]


void FUN_0051bfd0(void)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b464bb;
  local_10 = ExceptionList;
  piVar1 = in_ECX + 0x18;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x60 + (int)piVar1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00547890();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x60 + (int)piVar1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *piVar1 = (int)std::ios_base::vftable;
  FUN_00aad52d(piVar1);
  ExceptionList = local_10;
  return;
}


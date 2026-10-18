// FUN_0086ac30 @ 0086ac30 body=[[0086ac30, 0086acc9]]


void FUN_0086ac30(void)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c50b;
  local_10 = ExceptionList;
  piVar1 = in_ECX + 0x18;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x60 + (int)piVar1) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  piVar2 = in_ECX + 6;
  local_8 = 0;
  *piVar2 = (int)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_009d68b0();
  FUN_00547420();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x18 + (int)piVar2) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(*(int *)(in_ECX[4] + 4) + -8 + (int)piVar2) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x18 + (int)piVar2) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *piVar1 = (int)std::ios_base::vftable;
  FUN_00aad52d(piVar1);
  ExceptionList = local_10;
  return;
}


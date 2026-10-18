// FUN_00987fa0 @ 00987fa0 body=[[00987fa0, 00988007]]


void FUN_00987fa0(void)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*(int *)(in_ECX + -0x50) + 4) + -0x50 + in_ECX) = &PTR_FUN_00e37850;
  local_8 = 0;
  *(undefined ***)(in_ECX + -0x4c) =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_009d68b0();
  FUN_00547420();
  *(undefined ***)(*(int *)(*(int *)(in_ECX + -0x50) + 4) + -0x50 + in_ECX) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  ExceptionList = local_10;
  return;
}


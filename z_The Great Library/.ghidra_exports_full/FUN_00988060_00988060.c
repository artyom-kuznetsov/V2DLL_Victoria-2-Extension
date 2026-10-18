// FUN_00988060 @ 00988060 body=[[00988060, 009880dd]]


void FUN_00988060(void)

{
  int *piVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e5db;
  local_10 = ExceptionList;
  piVar1 = in_ECX + 0x14;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x50 + (int)piVar1) = &PTR_FUN_00e37850;
  local_8 = 0;
  in_ECX[1] = (int)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_009d68b0();
  FUN_00547420();
  local_8 = 0xffffffff;
  *(undefined ***)(*(int *)(*in_ECX + 4) + -0x50 + (int)piVar1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *piVar1 = (int)std::ios_base::vftable;
  FUN_00aad52d(piVar1);
  ExceptionList = local_10;
  return;
}


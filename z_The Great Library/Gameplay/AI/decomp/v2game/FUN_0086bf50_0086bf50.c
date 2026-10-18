// FUN_0086bf50 @ 0086bf50 body=[[0086bf50, 0086bff2]]


int * FUN_0086bf50(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4faaa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_00dffac0;
  param_1[4] = (int)&PTR_00e296f8;
  param_1[0x18] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00548650(param_1,param_1 + 6);
  *(undefined ***)((int)param_1 + *(int *)(param_1[4] + 4) + 0x10) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  local_8 = 4;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_00548f50();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[6] = (int)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  ExceptionList = local_10;
  return param_1;
}


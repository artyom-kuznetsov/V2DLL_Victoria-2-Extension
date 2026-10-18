// FUN_009c6c20 @ 009c6c20 body=[[009c6c20, 009c6cbc]]


int * FUN_009c6c20(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f2af;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00e3aea8;
  param_1[0x16] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00548650(param_1,param_1 + 4);
  local_8 = 1;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) = &PTR_FUN_00e3aea4;
  FUN_00548f50();
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[4] = (int)std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_0086c880(param_2,*puVar1);
  ExceptionList = local_10;
  return param_1;
}


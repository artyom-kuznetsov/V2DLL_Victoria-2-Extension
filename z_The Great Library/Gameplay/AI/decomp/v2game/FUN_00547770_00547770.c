// FUN_00547770 @ 00547770 body=[[00547770, 00547805]]


int * FUN_00547770(int *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4cde7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_00dffab0;
  param_1[0x1a] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00548650(param_1,param_1 + 4);
  local_8 = 1;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  FUN_00548f50();
  param_1[4] = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  FUN_00549030();
  param_1[0x19] = 0;
  iVar1 = DAT_013f0824;
  param_1[0x15] = 0;
  param_1[0x17] = iVar1;
  ExceptionList = local_10;
  return param_1;
}


// FUN_00548160 @ 00548160 body=[[00548160, 0054823b]]


int * FUN_00548160(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4cda7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&PTR_00dffac0;
  param_1[0x18] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*param_1 + 4);
  FUN_004f6210();
  *(int **)((int)param_1 + iVar1 + 0x38) = param_1 + 1;
  *(undefined4 *)((int)param_1 + iVar1 + 0x3c) = 0;
  uVar2 = FUN_00549350(0x20);
  *(undefined1 *)((int)param_1 + iVar1 + 0x40) = uVar2;
  if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
    FUN_00401120(*(uint *)((int)param_1 + iVar1 + 0xc) | 4,0);
  }
  local_8 = 2;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  FUN_00548f50();
  param_1[1] = (int)std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  FUN_00549030();
  param_1[0x16] = 0;
  iVar1 = DAT_013f0824;
  param_1[0x12] = 0;
  param_1[0x14] = iVar1;
  ExceptionList = local_10;
  return param_1;
}


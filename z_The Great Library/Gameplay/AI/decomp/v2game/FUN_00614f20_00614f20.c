// FUN_00614f20 @ 00614f20 body=[[00614f20, 00614fe6]]


int * FUN_00614f20(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51052;
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
  param_1[0x17] = DAT_013f0824;
  param_1[0x15] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = FUN_00548b20(1);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1);
    uVar3 = uVar1 | 2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar3 = uVar1 | 6;
    }
    FUN_00401120(uVar3,0);
  }
  ExceptionList = local_10;
  return param_1;
}


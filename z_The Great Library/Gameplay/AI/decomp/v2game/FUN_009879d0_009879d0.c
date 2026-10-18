// FUN_009879d0 @ 009879d0 body=[[009879d0, 00987a71]]


int * FUN_009879d0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f8b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00e37860;
  param_1[0x1e] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
  local_8 = 0;
  FUN_00987ea0(param_1,2,0);
  local_8 = 1;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) = &PTR_FUN_00e3785c;
  param_1[0x14] = param_2;
  param_1[0x1a] = 0xf;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  param_1[0x1c] = param_4;
  param_1[0x1d] = param_5;
  ExceptionList = local_10;
  return param_1;
}


// FUN_00b20970 @ 00b20970 body=[[00b20970, 00b209a5]]


int FUN_00b20970(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = (*DAT_013f3aa8)(param_2 + 1,param_3 + (uint)(0xfffffffe < param_2));
  }
  if (param_1 != 0) {
    *(bool *)param_1 = bVar1;
    return param_1 + 1;
  }
  return 0;
}


// FUN_00b2b8e0 @ 00b2b8e0 body=[[00b2b8e0, 00b2b90c]]


undefined4 FUN_00b2b8e0(int *param_1,uint param_2,int param_3)

{
  if ((param_3 == 0) && (param_2 <= (uint)param_1[1])) {
    *param_1 = *param_1 + param_2;
    param_1[1] = param_1[1] - param_2;
    return 0;
  }
  return 6;
}


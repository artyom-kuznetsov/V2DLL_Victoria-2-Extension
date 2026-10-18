// FUN_009a4b40 @ 009a4b40 body=[[009a4b40, 009a4ba3]]


void FUN_009a4b40(int *param_1,code *param_2,undefined4 param_3)

{
  if (param_1[2] != 0) {
    FUN_009a4b40(param_1[2],param_2,param_3);
  }
  if (*param_1 != 0) {
    (*param_2)(param_3);
  }
  if (param_1[4] != 0) {
    FUN_009a4b40(param_1[4],param_2,param_3);
  }
  if (param_1[3] != 0) {
    FUN_009a4b40(param_1[3],param_2,param_3);
  }
  return;
}


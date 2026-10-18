// FUN_006cdf80 @ 006cdf80 body=[[006cdf80, 006ce00d]]


void FUN_006cdf80(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int local_8;
  
  while (local_8 = (param_2 + -1) / 2, param_3 < param_2) {
    FUN_00491020();
    FUN_00491020();
    cVar1 = FUN_00424660();
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + local_8 * 4);
    param_2 = local_8;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  return;
}


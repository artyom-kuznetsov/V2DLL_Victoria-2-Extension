// FUN_006cbd70 @ 006cbd70 body=[[006cbd70, 006cbeac]]


void FUN_006cbd70(int param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int local_b0;
  int local_10;
  int local_c;
  int local_8;
  
  while ((local_8 = param_2 - param_1 >> 2, 0x20 < local_8 && (0 < param_3))) {
    FUN_006cc640(&local_10,param_1,param_2,param_4);
    param_3 = (param_3 / 2) / 2 + param_3 / 2;
    if (local_10 - param_1 >> 2 < param_2 - local_c >> 2) {
      FUN_006cbd70(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_006cbd70(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
  }
  if (local_8 < 0x21) {
    if (1 < local_8) {
      uVar1 = FUN_00a3c430();
      FUN_006cd4c0(param_1,param_2,param_4,uVar1);
    }
  }
  else {
    FUN_006cca80(param_1,param_2,param_4);
    for (local_b0 = param_2; 1 < local_b0 - param_1 >> 2; local_b0 = local_b0 + -4) {
      FUN_006cdc60(param_1,local_b0,param_4);
    }
  }
  return;
}


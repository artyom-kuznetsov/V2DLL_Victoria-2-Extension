// FUN_006cb600 @ 006cb600 body=[[006cb600, 006cb71a]]


void FUN_006cb600(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int local_10;
  int local_c;
  int local_8;
  
  while ((local_8 = param_2 - param_1 >> 2, 0x20 < local_8 && (0 < param_3))) {
    FUN_006cb9b0(&local_10,param_1,param_2,param_4,param_5);
    param_3 = (param_3 / 2) / 2 + param_3 / 2;
    if (local_10 - param_1 >> 2 < param_2 - local_c >> 2) {
      FUN_006cb600(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_006cb600(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
  }
  if (local_8 < 0x21) {
    if (1 < local_8) {
      FUN_006cc540(param_1,param_2,param_4,param_5,0);
    }
  }
  else {
    FUN_006cbd00(param_1,param_2,param_4,param_5);
    FUN_006cc4d0(param_1,param_2,param_4,param_5);
  }
  return;
}


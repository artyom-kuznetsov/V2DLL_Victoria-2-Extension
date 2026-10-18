// FUN_006cb7c0 @ 006cb7c0 body=[[006cb7c0, 006cb8bf]]


void FUN_006cb7c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int local_10;
  int local_c;
  int local_8;
  
  while ((local_8 = param_2 - param_1 >> 1, 0x20 < local_8 && (0 < param_3))) {
    FUN_006cbfc0(&local_10,param_1,param_2,param_4);
    param_3 = (param_3 / 2) / 2 + param_3 / 2;
    if (local_10 - param_1 >> 1 < param_2 - local_c >> 1) {
      FUN_006cb7c0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_006cb7c0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
  }
  if (local_8 < 0x21) {
    if (1 < local_8) {
      FUN_006cd110(param_1,param_2,param_4,0);
    }
  }
  else {
    FUN_006cc350(param_1,param_2,param_4);
    FUN_006cd0a0(param_1,param_2,param_4);
  }
  return;
}


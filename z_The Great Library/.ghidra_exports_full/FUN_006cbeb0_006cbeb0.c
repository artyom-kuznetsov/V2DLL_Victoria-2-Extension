// FUN_006cbeb0 @ 006cbeb0 body=[[006cbeb0, 006cbfb8]]


void FUN_006cbeb0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int local_10;
  int local_c;
  int local_8;
  
  while ((local_8 = param_2 - param_1 >> 2, 0x20 < local_8 && (0 < param_3))) {
    FUN_006ccb00(&local_10,param_1,param_2,param_4);
    param_3 = (param_3 / 2) / 2 + param_3 / 2;
    if (local_10 - param_1 >> 2 < param_2 - local_c >> 2) {
      FUN_006cbeb0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_006cbeb0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
  }
  if (local_8 < 0x21) {
    if (1 < local_8) {
      FUN_006cd740(param_1,param_2,param_4,0);
    }
  }
  else {
    FUN_006ccf40(param_1,param_2,param_4);
    FUN_006cd6e0(param_1,param_2,param_4);
  }
  return;
}


// FUN_008486e0 @ 008486e0 body=[[008486e0, 00848820]]


void FUN_008486e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 100;
    if (iVar1 < 0x21) {
LAB_008487c1:
      if (1 < iVar1) {
        FUN_008491a0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 100) {
          FUN_008490b0(param_4);
        }
        FUN_00849120(param_4);
        return;
      }
      goto LAB_008487c1;
    }
    FUN_00848930(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_10 - param_1) / 100 < (param_2 - local_c) / 100) {
      FUN_008486e0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_008486e0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


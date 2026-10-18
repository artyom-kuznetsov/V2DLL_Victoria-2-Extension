// FUN_00848830 @ 00848830 body=[[00848830, 0084892a]]


void FUN_00848830(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_008488d0:
      if (1 < iVar1) {
        FUN_008494d0(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_00849310(param_1,param_4,param_5);
        }
        FUN_00849460(param_4,param_5);
        return;
      }
      goto LAB_008488d0;
    }
    FUN_00848b40(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffff8U) < (int)(param_2 - local_c & 0xfffffff8U)) {
      FUN_00848830(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_00848830(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


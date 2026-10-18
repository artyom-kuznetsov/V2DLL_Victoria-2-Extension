// FUN_0042ca60 @ 0042ca60 body=[[0042ca60, 0042cb3f]]


void FUN_0042ca60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0042caf0:
      if (1 < iVar1) {
        FUN_0042d320(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_0042d1c0(param_4);
        }
        FUN_0042d2b0(param_4);
        return;
      }
      goto LAB_0042caf0;
    }
    FUN_0042cdc0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff8U) < (int)(param_2 - local_8 & 0xfffffff8U)) {
      FUN_0042ca60(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0042ca60(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


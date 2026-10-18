// FUN_0054c9a0 @ 0054c9a0 body=[[0054c9a0, 0054ca7f]]


void FUN_0054c9a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0054ca30:
      if (1 < iVar1) {
        FUN_00558fb0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_00558e40(param_4);
        }
        FUN_00558f40(param_4);
        return;
      }
      goto LAB_0054ca30;
    }
    FUN_005570d0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff8U) < (int)(param_2 - local_8 & 0xfffffff8U)) {
      FUN_0054c9a0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0054c9a0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


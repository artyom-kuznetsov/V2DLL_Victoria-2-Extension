// FUN_0054c8c0 @ 0054c8c0 body=[[0054c8c0, 0054c99e]]


void FUN_0054c8c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_0054c950:
      if (1 < iVar1) {
        FUN_00558ca0(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          FUN_00558b20(param_4);
        }
        FUN_00558c20(param_4);
        return;
      }
      goto LAB_0054c950;
    }
    FUN_00556d90(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff0U) < (int)(param_2 - local_8 & 0xfffffff0U)) {
      FUN_0054c8c0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0054c8c0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


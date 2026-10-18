// FUN_00738930 @ 00738930 body=[[00738930, 00738a62]]


void FUN_00738930(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x28;
    if (iVar1 < 0x21) {
LAB_00738a05:
      if (1 < iVar1) {
        FUN_0073a3d0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x28) {
          FUN_0073a2a0(param_1,param_2,param_4);
        }
        FUN_0073a370(param_4);
        return;
      }
      goto LAB_00738a05;
    }
    FUN_007395a0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_c - param_1) / 0x28 < (param_2 - local_8) / 0x28) {
      FUN_00738930(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00738930(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


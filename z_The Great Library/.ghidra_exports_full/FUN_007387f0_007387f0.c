// FUN_007387f0 @ 007387f0 body=[[007387f0, 00738920]]


void FUN_007387f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x18;
    if (iVar1 < 0x21) {
LAB_007388c5:
      if (1 < iVar1) {
        FUN_00739fd0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x18) {
          FUN_00739cd0(param_1,param_2,param_4);
        }
        FUN_00739f10(param_4);
        return;
      }
      goto LAB_007388c5;
    }
    FUN_00738c30(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_c - param_1) / 0x18 < (param_2 - local_8) / 0x18) {
      FUN_007387f0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_007387f0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


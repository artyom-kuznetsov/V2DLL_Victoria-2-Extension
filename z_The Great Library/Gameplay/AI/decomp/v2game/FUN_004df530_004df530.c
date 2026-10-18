// FUN_004df530 @ 004df530 body=[[004df530, 004df661]]


void FUN_004df530(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x160;
    if (iVar1 < 0x21) {
LAB_004df605:
      if (1 < iVar1) {
        FUN_004e02e0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x160) {
          FUN_004e01d0(param_1,param_2,param_4);
        }
        FUN_004e0280(param_1,param_4);
        return;
      }
      goto LAB_004df605;
    }
    FUN_004df880(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_c - param_1) / 0x160 < (param_2 - local_8) / 0x160) {
      FUN_004df530(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_004df530(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_007afeb0 @ 007afeb0 body=[[007afeb0, 007b0096]]


void FUN_007afeb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_007affd9:
      if (1 < iVar1) {
        FUN_008a88d0();
        FUN_008a88d0();
        FUN_007b0680(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        FUN_008a88d0();
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_008a88d0();
          FUN_007b0550(param_2);
        }
        FUN_008a88d0();
        FUN_008a88d0();
        FUN_007b0620();
        return;
      }
      goto LAB_007affd9;
    }
    FUN_007b01c0(&local_c,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_008a88d0();
      FUN_007afeb0(param_1,local_c,param_3);
      param_1 = local_8;
    }
    else {
      FUN_008a88d0();
      FUN_007afeb0(local_8,param_2,param_3);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_00706130 @ 00706130 body=[[00706130, 0070620e]]


void FUN_00706130(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_007061c0:
      if (1 < iVar1) {
        FUN_00708aa0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00708950(param_2,param_4);
        }
        FUN_00708a50(param_4);
        return;
      }
      goto LAB_007061c0;
    }
    FUN_007073d0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_00706130(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00706130(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


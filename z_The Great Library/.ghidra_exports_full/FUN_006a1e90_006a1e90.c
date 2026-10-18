// FUN_006a1e90 @ 006a1e90 body=[[006a1e90, 006a1fd6]]


void FUN_006a1e90(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_006a1f4b:
      if (1 < iVar1) {
        FUN_006a2a40(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_006a2900(param_4,param_5);
        }
        FUN_006a29e0(param_4,param_5);
        return;
      }
      goto LAB_006a1f4b;
    }
    FUN_006a21a0(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_006a1e90(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_006a1e90(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


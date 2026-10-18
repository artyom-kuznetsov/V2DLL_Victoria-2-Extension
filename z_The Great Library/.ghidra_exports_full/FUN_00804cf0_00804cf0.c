// FUN_00804cf0 @ 00804cf0 body=[[00804cf0, 00804db0]]


void FUN_00804cf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00804d6f:
      if ((1 < iVar1) && (param_1 != param_2)) {
        FUN_00805420(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00805330();
        }
        FUN_008053d0();
        return;
      }
      goto LAB_00804d6f;
    }
    FUN_008050c0(&local_10,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_00804cf0(param_1,local_10,param_3);
      param_1 = local_c;
    }
    else {
      FUN_00804cf0(local_c,param_2,param_3);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


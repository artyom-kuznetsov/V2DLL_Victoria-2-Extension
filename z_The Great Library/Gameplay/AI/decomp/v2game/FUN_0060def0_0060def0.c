// FUN_0060def0 @ 0060def0 body=[[0060def0, 0060dfd7]]


void FUN_0060def0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0060df89:
      if (1 < iVar1) {
        FUN_00610c40(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_00610af0(param_2,param_4);
        }
        FUN_00610bd0(param_4);
        return;
      }
      goto LAB_0060df89;
    }
    FUN_0060eab0(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffff8U) < (int)(param_2 - local_c & 0xfffffff8U)) {
      FUN_0060def0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0060def0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


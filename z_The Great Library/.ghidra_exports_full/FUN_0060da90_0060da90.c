// FUN_0060da90 @ 0060da90 body=[[0060da90, 0060db89]]


void FUN_0060da90(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0060db30:
      if (1 < iVar1) {
        FUN_0060e9c0(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_0060e8a0(param_4,param_5);
        }
        FUN_0060e960(param_4,param_5);
        return;
      }
      goto LAB_0060db30;
    }
    FUN_0060dc70(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_0060da90(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_0060da90(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


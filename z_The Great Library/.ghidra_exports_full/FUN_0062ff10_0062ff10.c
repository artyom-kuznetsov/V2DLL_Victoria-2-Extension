// FUN_0062ff10 @ 0062ff10 body=[[0062ff10, 00630050]]


void FUN_0062ff10(int param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0062ffd2:
      if (1 < iVar1) {
        FUN_00631480(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00631340(param_1,param_4,param_5);
        }
        FUN_00631420(param_4,param_5);
        return;
      }
      goto LAB_0062ffd2;
    }
    FUN_006305c0(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_0062ff10(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_0062ff10(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


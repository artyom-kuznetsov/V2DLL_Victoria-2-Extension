// FUN_00705c80 @ 00705c80 body=[[00705c80, 00705d7b]]


void FUN_00705c80(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00705d20:
      if (1 < iVar1) {
        FUN_00707f90(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00707e70(param_4,param_5);
        }
        FUN_00707f30(param_4,param_5);
        return;
      }
      goto LAB_00705d20;
    }
    FUN_00706be0(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_00705c80(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_00705c80(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


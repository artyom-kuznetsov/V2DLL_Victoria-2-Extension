// FUN_00706050 @ 00706050 body=[[00706050, 0070612f]]


void FUN_00706050(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_007060e0:
      if (1 < iVar1) {
        FUN_00708800(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00708710(param_4);
        }
        FUN_007087b0(param_4);
        return;
      }
      goto LAB_007060e0;
    }
    FUN_00707230(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_00706050(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00706050(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_0060e220 @ 0060e220 body=[[0060e220, 0060e307]]


void FUN_0060e220(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0060e2b9:
      if (1 < iVar1) {
        FUN_006114b0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00611370(param_2,param_4);
        }
        FUN_00611460(param_4);
        return;
      }
      goto LAB_0060e2b9;
    }
    FUN_0060f440(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_0060e220(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0060e220(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


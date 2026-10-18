// FUN_00724a60 @ 00724a60 body=[[00724a60, 00724b3c]]


void FUN_00724a60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00724af0:
      if (1 < iVar1) {
        FUN_00727d90(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00727c50(param_2,param_4);
        }
        FUN_00727d40(param_4);
        return;
      }
      goto LAB_00724af0;
    }
    FUN_00725ec0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_00724a60(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00724a60(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


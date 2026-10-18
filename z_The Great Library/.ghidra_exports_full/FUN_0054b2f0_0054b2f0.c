// FUN_0054b2f0 @ 0054b2f0 body=[[0054b2f0, 0054b3d7]]


void FUN_0054b2f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0054b389:
      if (1 < iVar1) {
        FUN_00555fa0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00555de0(param_1,param_4);
        }
        FUN_00555f50(param_4);
        return;
      }
      goto LAB_0054b389;
    }
    FUN_0054be80(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_0054b2f0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0054b2f0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_0054c6e0 @ 0054c6e0 body=[[0054c6e0, 0054c7db]]


void FUN_0054c6e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_0054c780:
      if (1 < iVar1) {
        FUN_00558630(param_1,param_2,param_4,param_5);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00558510(param_4,param_5);
        }
        FUN_005585d0(param_4,param_5);
        return;
      }
      goto LAB_0054c780;
    }
    FUN_00556720(&local_10,param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffffcU) < (int)(param_2 - local_c & 0xfffffffcU)) {
      FUN_0054c6e0(param_1,local_10,param_3,param_4,param_5);
      param_1 = local_c;
    }
    else {
      FUN_0054c6e0(local_c,param_2,param_3,param_4,param_5);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


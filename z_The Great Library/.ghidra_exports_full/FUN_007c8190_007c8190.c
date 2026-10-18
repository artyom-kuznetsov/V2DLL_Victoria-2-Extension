// FUN_007c8190 @ 007c8190 body=[[007c8190, 007c82cc]]


void FUN_007c8190(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x44;
    if (iVar1 < 0x21) {
LAB_007c8271:
      if (1 < iVar1) {
        FUN_007ccb30(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x44) {
          FUN_007cc8b0(param_1,param_2,param_4);
        }
        FUN_007cc9c0(param_4);
        return;
      }
      goto LAB_007c8271;
    }
    FUN_007c9210(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_10 - param_1) / 0x44 < (param_2 - local_c) / 0x44) {
      FUN_007c8190(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_007c8190(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


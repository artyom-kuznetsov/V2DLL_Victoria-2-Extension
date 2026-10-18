// FUN_0092b050 @ 0092b050 body=[[0092b050, 0092b13b]]


void FUN_0092b050(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 6;
    if (iVar1 < 0x21) {
LAB_0092b0e9:
      if (1 < iVar1) {
        FUN_0092be80(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x40 < (int)(param_2 - param_1 & 0xffffffc0U)) {
          FUN_0092bca0(param_4);
        }
        FUN_0092bd60(param_4);
        return;
      }
      goto LAB_0092b0e9;
    }
    FUN_0092b140(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xffffffc0U) < (int)(param_2 - local_c & 0xffffffc0U)) {
      FUN_0092b050(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0092b050(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_0054bc10 @ 0054bc10 body=[[0054bc10, 0054bcef]]


void FUN_0054bc10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_0054bca0:
      if (1 < iVar1) {
        FUN_00557ae0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_00557980(param_4);
        }
        FUN_00557a70(param_4);
        return;
      }
      goto LAB_0054bca0;
    }
    FUN_00555660(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff8U) < (int)(param_2 - local_8 & 0xfffffff8U)) {
      FUN_0054bc10(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0054bc10(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


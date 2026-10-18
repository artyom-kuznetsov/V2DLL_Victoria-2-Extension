// FUN_0060e130 @ 0060e130 body=[[0060e130, 0060e21a]]


void FUN_0060e130(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 4;
    if (iVar1 < 0x21) {
LAB_0060e1c9:
      if (1 < iVar1) {
        FUN_006111f0(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          FUN_00719b20(param_4);
        }
        FUN_00611160(param_1,param_4);
        return;
      }
      goto LAB_0060e1c9;
    }
    FUN_0060f180(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_10 - param_1 & 0xfffffff0U) < (int)(param_2 - local_c & 0xfffffff0U)) {
      FUN_0060e130(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0060e130(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


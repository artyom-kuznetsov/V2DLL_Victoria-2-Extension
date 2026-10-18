// FUN_004d6250 @ 004d6250 body=[[004d6250, 004d632f]]


void FUN_004d6250(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_004d62e0:
      if (1 < iVar1) {
        FUN_004d6ac0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_004d6920(param_4);
        }
        FUN_004d6a50(param_4);
        return;
      }
      goto LAB_004d62e0;
    }
    FUN_004d6330(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff8U) < (int)(param_2 - local_8 & 0xfffffff8U)) {
      FUN_004d6250(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_004d6250(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


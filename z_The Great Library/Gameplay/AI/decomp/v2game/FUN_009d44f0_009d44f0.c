// FUN_009d44f0 @ 009d44f0 body=[[009d44f0, 009d45cf]]


void FUN_009d44f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009d4580:
      if (1 < iVar1) {
        FUN_009d5010(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          FUN_009d4e40(param_4);
        }
        FUN_009d4f90(param_4);
        return;
      }
      goto LAB_009d4580;
    }
    FUN_009d47a0(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffff8U) < (int)(param_2 - local_8 & 0xfffffff8U)) {
      FUN_009d44f0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_009d44f0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_00854c60 @ 00854c60 body=[[00854c60, 00854d8e]]


void FUN_00854c60(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_00854d31:
      if (1 < iVar1) {
        FUN_008552b0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_00855100(param_4);
        }
        FUN_008551f0(param_1,param_4);
        return;
      }
      goto LAB_00854d31;
    }
    FUN_00854d90(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_c - param_1) / 0xc < (param_2 - local_8) / 0xc) {
      FUN_00854c60(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00854c60(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


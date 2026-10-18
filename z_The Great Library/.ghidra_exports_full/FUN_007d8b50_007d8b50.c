// FUN_007d8b50 @ 007d8b50 body=[[007d8b50, 007d8c62]]


void FUN_007d8b50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0xc;
    if (iVar1 < 0x21) {
LAB_007d8c14:
      if ((1 < iVar1) && (param_1 != param_2)) {
        FUN_007d93a0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_007d91d0();
        }
        FUN_007d92f0();
        return;
      }
      goto LAB_007d8c14;
    }
    FUN_007d8cd0(&local_10,param_1,param_2);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_10 - param_1) / 0xc < (param_2 - local_c) / 0xc) {
      FUN_007d8b50(param_1,local_10,param_3);
      param_1 = local_c;
    }
    else {
      FUN_007d8b50(local_c,param_2,param_3);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


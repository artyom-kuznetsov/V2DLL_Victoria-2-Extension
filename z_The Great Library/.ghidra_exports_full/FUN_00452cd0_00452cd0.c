// FUN_00452cd0 @ 00452cd0 body=[[00452cd0, 00452dae]]


void FUN_00452cd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_00452d60:
      if (1 < iVar1) {
        FUN_00454180(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_00453f90(param_1,param_4);
        }
        FUN_00454130(param_4);
        return;
      }
      goto LAB_00452d60;
    }
    FUN_00452e90(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(local_c - param_1 & 0xfffffffcU) < (int)(param_2 - local_8 & 0xfffffffcU)) {
      FUN_00452cd0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_00452cd0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


// FUN_0060dfe0 @ 0060dfe0 body=[[0060dfe0, 0060e120]]


void FUN_0060dfe0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  int local_c;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x18;
    if (iVar1 < 0x21) {
LAB_0060e0c1:
      if (1 < iVar1) {
        FUN_00610fd0(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x18) {
          FUN_00610dd0(param_1,param_4);
        }
        FUN_00610f00(param_4);
        return;
      }
      goto LAB_0060e0c1;
    }
    FUN_0060ed50(&local_10,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_10 - param_1) / 0x18 < (param_2 - local_c) / 0x18) {
      FUN_0060dfe0(param_1,local_10,param_3,param_4);
      param_1 = local_c;
    }
    else {
      FUN_0060dfe0(local_c,param_2,param_3,param_4);
      param_2 = local_10;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


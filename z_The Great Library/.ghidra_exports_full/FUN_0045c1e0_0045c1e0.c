// FUN_0045c1e0 @ 0045c1e0 body=[[0045c1e0, 0045c311]]


void FUN_0045c1e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 / 0x14;
    if (iVar1 < 0x21) {
LAB_0045c2b5:
      if (1 < iVar1) {
        FUN_0045cf40(param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (param_2 - param_1) / 0x14) {
          FUN_0045cd80(param_4);
        }
        FUN_0045ce90(param_4);
        return;
      }
      goto LAB_0045c2b5;
    }
    FUN_0045c630(&local_c,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((local_c - param_1) / 0x14 < (param_2 - local_8) / 0x14) {
      FUN_0045c1e0(param_1,local_c,param_3,param_4);
      param_1 = local_8;
    }
    else {
      FUN_0045c1e0(local_8,param_2,param_3,param_4);
      param_2 = local_c;
    }
    iVar1 = param_2 - param_1;
  } while( true );
}


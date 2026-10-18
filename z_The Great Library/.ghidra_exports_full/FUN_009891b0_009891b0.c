// FUN_009891b0 @ 009891b0 body=[[009891b0, 009891ec] [009891f0, 00989264] [00989268, 0098928c]]


undefined4 * FUN_009891b0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4a499;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_009890c0(param_1,0x7e,param_3,param_4);
    if (iVar1 == -1) {
      FUN_009895f0(*(undefined4 *)(param_1 + 0x10));
      local_8 = 2;
      FUN_00a840b0();
    }
    else {
      FUN_009895f0(iVar1);
      local_8 = 1;
      FUN_00a840b0();
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) break;
    if (iVar1 == -1) {
      ExceptionList = local_10;
      return param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30);
}


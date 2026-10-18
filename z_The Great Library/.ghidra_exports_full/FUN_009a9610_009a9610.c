// FUN_009a9610 @ 009a9610 body=[[009a9610, 009a9683] [009a9687, 009a96d1] [009a96d5, 009a971b] [009a971f, 009a9733]]


undefined1 * FUN_009a9610(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4f4f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_009a92a0();
    local_8 = 1;
    FUN_00448aa0(uVar1,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740(&DAT_00e38d3c,1);
    }
    uVar1 = FUN_009a9300();
    local_8 = 2;
    FUN_00448aa0(uVar1,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740(&DAT_00e38d3c,1);
    }
    uVar1 = FUN_009a9370();
    local_8 = 3;
    FUN_00448aa0(uVar1,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  ExceptionList = local_10;
  return param_2;
}


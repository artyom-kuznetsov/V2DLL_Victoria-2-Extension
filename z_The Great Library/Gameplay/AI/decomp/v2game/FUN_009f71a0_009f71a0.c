// FUN_009f71a0 @ 009f71a0 body=[[009f71a0, 009f723f] [009f7243, 009f725b] [009f725f, 009f7277] [009f727b, 009f728d]]


undefined1 * FUN_009f71a0(undefined1 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_64;
  uint local_50;
  undefined4 local_48;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e9e0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00448860(1,10);
  local_8 = 1;
  FUN_009895f0(*(int *)(in_ECX + 0x10) + -1);
  local_8._0_1_ = 2;
  uVar1 = FUN_00988f20(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  param_1[0x1c] = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}


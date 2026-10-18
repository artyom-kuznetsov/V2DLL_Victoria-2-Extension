// FUN_0043a070 @ 0043a070 body=[[0043a070, 0043a12e] [0043a132, 0043a149] [0043a14d, 0043a161]]


undefined1 * FUN_0043a070(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47b49;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 8) + 0xa48) + 0x24))
                    (local_4c,*(undefined4 *)(param_1 + 0x74));
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00408ed0(uVar1,0,0xffffffff);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  ExceptionList = local_10;
  return param_2;
}


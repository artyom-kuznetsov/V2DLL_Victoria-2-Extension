// FUN_00437960 @ 00437960 body=[[00437960, 00437a2a] [00437a2e, 00437a48] [00437a4c, 00437a60]]


undefined1 * FUN_00437960(undefined1 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 *local_64;
  uint *puStack_60;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47bf9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    puStack_60 = (uint *)0x0;
    local_64 = &DAT_00ded94d;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    puStack_60 = local_34;
    local_18 = (undefined1 *)&local_64;
    local_64 = (undefined1 *)0x3e8;
    uVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0xa48) + 0x24))
                      (local_50,*(undefined4 *)(in_ECX + 0x4c));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


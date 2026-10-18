// FUN_00a718b0 @ 00a718b0 body=[[00a718b0, 00a719a9] [00a719ad, 00a719d2] [00a719d6, 00a719eb] [00a719ef, 00a71a03]]


undefined8 *
FUN_00a718b0(undefined8 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined **local_74 [18];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b54614;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  local_8 = 2;
  uStack_7 = 0;
  FUN_009beeb0(&param_3);
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  local_8 = 4;
  FUN_009beeb0(&param_7);
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  local_8 = 6;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("laddercalculator.cpp",0x14);
  local_8 = 7;
  FUN_004015b0(local_2c,0x11,4);
  local_8 = 8;
  uVar1 = FUN_00987d20(*(undefined4 *)(param_1 + 2));
  uVar1 = FUN_00447240(uVar1);
  FUN_00401280(uVar1);
  _local_8 = CONCAT31(uStack_7,7);
  FUN_00987ac0(local_74);
  local_74[0] = std::ios_base::vftable;
  FUN_00aad52d(local_74);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = 0x3ff0000000000000;
  param_1[1] = 0x3fb99999a0000000;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  param_3 = 0;
  param_4 = 0;
  param_5 = 0;
  if (param_7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_7);
  }
  ExceptionList = local_10;
  return param_1;
}


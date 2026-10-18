// FUN_007e7440 @ 007e7440 body=[[007e7440, 007e74ce] [007e74d2, 007e74eb]]


undefined4 * FUN_007e7440(undefined4 *param_1)

{
  undefined4 uVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5e8a3;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("noCultureType",0xd);
  local_8 = 0;
  param_1[1] = 0x18d;
  *param_1 = CGraphicalCultureType::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[10] = 0;
  uVar1 = FUN_009902d0(local_2c,0);
  param_1[2] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CNullGraphicalCultureType::vftable;
  ExceptionList = local_10;
  return param_1;
}


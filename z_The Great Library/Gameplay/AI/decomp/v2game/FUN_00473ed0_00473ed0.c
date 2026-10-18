// FUN_00473ed0 @ 00473ed0 body=[[00473ed0, 00473f51] [00473f55, 00473f6e]]


undefined4 * FUN_00473ed0(undefined4 *param_1)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46a33;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dedc10,4);
  *param_1 = CRuleDefinition::vftable;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_8 = 1;
  param_1[9] = 0;
  param_1[8] = 0x18d;
  FUN_00408ed0(local_2c,0,0xffffffff);
  *(undefined1 *)(param_1 + 10) = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CNullRule::vftable;
  ExceptionList = local_10;
  return param_1;
}


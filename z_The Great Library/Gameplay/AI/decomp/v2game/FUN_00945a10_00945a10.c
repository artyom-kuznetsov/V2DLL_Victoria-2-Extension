// FUN_00945a10 @ 00945a10 body=[[00945a10, 00945a73] [00945a77, 00945b8a] [00945b8e, 00945bda] [00945bde, 00945bf2]]


undefined4 * FUN_00945a10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab599;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("SetupPeaceDialog",0x10);
  local_8 = 0;
  FUN_00640680(param_1,local_34);
  local_8._0_1_ = 2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0x1a] = param_2;
  *param_1 = CPeaceDialog::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  uVar1 = (**(code **)(*in_ECX + 0x30))();
  param_1[0x1b] = uVar1;
  param_1[0x1c] = CButtonObserverGlue<CPeaceDialog>::vftable;
  param_1[0x1d] = param_1;
  param_1[0x1e] = FUN_00946b90;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = CButtonObserverGlue<CPeaceDialog>::vftable;
  param_1[0x28] = param_1;
  param_1[0x29] = FUN_00946d70;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  local_8._0_1_ = 4;
  local_18 = *(undefined4 *)(param_1[0x1b] + 8);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*in_ECX + 0x1c))(local_50);
  local_8._0_1_ = 5;
  FUN_00641710();
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_00945c80(param_1);
  FUN_00946d70();
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("message_dialog",0xe);
  local_8 = CONCAT31(local_8._1_3_,6);
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x78))(local_50);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return param_1;
}


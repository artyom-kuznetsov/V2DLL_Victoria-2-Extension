// FUN_007a0ae0 @ 007a0ae0 body=[[007a0ae0, 007a0c09] [007a0c0d, 007a0c6d] [007a0c71, 007a0cc0] [007a0cc4, 007a0ddd] [007a0de1, 007a0e2c] [007a0e30, 007a0e57]]


/* WARNING: Removing unreachable block (ram,0x007a0dd5) */
/* WARNING: Removing unreachable block (ram,0x007a0c65) */
/* WARNING: Removing unreachable block (ram,0x007a0cb8) */
/* WARNING: Removing unreachable block (ram,0x007a0e24) */
/* WARNING: Removing unreachable block (ram,0x007a0c01) */

undefined4 *
FUN_007a0ae0(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6bc7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0();
  FUN_007a0330();
  param_1[0xd] = param_7;
  *param_1 = CChatMessagehandler::vftable;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x11] = CTextBufferObserverGlue<CChatMessagehandler>::vftable;
  param_1[0x12] = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = FUN_007a1800;
  param_1[0x16] = CButtonObserverGlue<CChatMessagehandler>::vftable;
  param_1[0x17] = param_1;
  param_1[0x18] = FUN_007a1800;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x21] = param_2;
  FUN_007b5010();
  local_8._0_1_ = 3;
  param_1[0x31] = param_4;
  param_1[0x32] = param_5;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_00409350();
  local_8._0_1_ = 4;
  uVar1 = (**(code **)(*param_4 + 0x2c))();
  local_8._0_1_ = 3;
  param_1[0xe] = uVar1;
  (**(code **)(*(int *)(param_1[0xe] + 0x18) + 0x38))();
  FUN_00409350();
  local_8._0_1_ = 5;
  iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x34))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))();
  local_8._0_1_ = 3;
  FUN_00409350();
  local_8._0_1_ = 6;
  iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x40))();
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))();
  local_8._0_1_ = 3;
  iVar2 = FUN_00aae9af();
  local_8._0_1_ = 7;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = FUN_00aae9af();
    local_8._0_1_ = 8;
    if (iVar3 != 0) {
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,9);
      (**(code **)(*(int *)param_1[0xe] + 0x40))();
      iVar3 = FUN_00973bd0();
      if (iVar3 == 0) {
        FUN_00973bd0();
      }
      FUN_009f4bc0();
    }
    local_8 = 10;
    FUN_00408ed0(param_2 + 0xbc,0,0xffffffff);
    uVar1 = FUN_009f3c60(iVar2);
  }
  local_8 = 3;
  param_1[0xf] = uVar1;
  *(undefined2 *)(param_1[0xf] + 0x4c) = 0x1e;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  uVar1 = (**(code **)(*(int *)param_1[0xe] + 0x7c))();
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1[0x10] + 0x140) = 0;
  *(undefined4 *)(param_1[0x10] + 0xec) = 0;
  ExceptionList = local_10;
  return param_1;
}


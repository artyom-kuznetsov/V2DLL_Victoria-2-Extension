// FUN_006a47e0 @ 006a47e0 body=[[006a47e0, 006a489b] [006a489f, 006a4971] [006a4975, 006a4993] [006a4997, 006a49e5] [006a49e9, 006a4a47] [006a4a4b, 006a4a5f]]


undefined4 * FUN_006a47e0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c222;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CRightClickItemInterface::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("right_click_entry",0x11);
  local_8 = 0;
  local_14 = (**(code **)(*param_2 + 0x3c))();
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
  local_18 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *local_18 = &PTR_FUN_00e392f0;
  param_1[8] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 10) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_34,local_14);
  param_1[9] = uVar2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0xb] = param_2;
  *param_1 = CRightClickReloadItem::vftable;
  param_1[1] = CRightClickReloadItem::vftable;
  param_1[8] = CRightClickReloadItem::vftable;
  FUN_006a4d00(&LAB_006a4de0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8._0_1_ = 8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("button",6);
  local_8._0_1_ = 9;
  piVar1 = (int *)(**(code **)(*(int *)param_1[9] + 0x34))(local_34);
  uVar2 = FUN_00988fa0(param_3);
  local_8._0_1_ = 10;
  (**(code **)(*piVar1 + 0xcc))(uVar2,0);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_8._0_1_ = 8;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("button",6);
  local_8._0_1_ = 0xb;
  iVar3 = (**(code **)(*(int *)param_1[9] + 0x34))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xc);
  local_8._0_1_ = 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (*(char *)(DAT_01258a80 + 0x11) != '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("button",6);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    piVar1 = (int *)(**(code **)(*(int *)param_1[9] + 0x34))(local_50);
    (**(code **)(*piVar1 + 0x84))(1);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}


// FUN_0078ac40 @ 0078ac40 body=[[0078ac40, 0078acfb] [0078acff, 0078adca] [0078adce, 0078adf7]]


undefined4 * FUN_0078ac40(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbb6ce;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("sup_subunits",0xc);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_30,local_14);
  param_1[8] = uVar2;
  *param_1 = CUnitViewBaseEntry::vftable;
  param_1[7] = CUnitViewBaseEntry::vftable;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[10] = param_2;
  *param_1 = CWindowForSubUnitsEntry::vftable;
  param_1[7] = CWindowForSubUnitsEntry::vftable;
  param_1[0xe] = FUN_0078af60;
  param_1[0xc] = CScrollbarObserverGlue<CWindowForSubUnitsEntry>::vftable;
  param_1[0xd] = param_1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x24] = FUN_0078af70;
  param_1[0x20] = CWindowObserverGlue<CWindowForSubUnitsEntry>::vftable;
  param_1[0x21] = param_1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  local_8._0_1_ = 10;
  (**(code **)(*(int *)param_1[8] + 4))(param_1 + 0x20);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("external_scroll_slider",0x16);
  local_8._0_1_ = 0xb;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x4c))(local_4c);
  local_8 = CONCAT31(local_8._1_3_,10);
  param_1[0xb] = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  (**(code **)(*(int *)(param_1[0xb] + 0x54) + 4))(param_1 + 0xc);
  FUN_0078b4c0(param_1);
  ExceptionList = local_10;
  return param_1;
}


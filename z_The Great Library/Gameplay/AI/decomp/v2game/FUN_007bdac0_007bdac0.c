// FUN_007bdac0 @ 007bdac0 body=[[007bdac0, 007bdb75] [007bdb79, 007bdcbb] [007bdcbf, 007bdcda]]


undefined4 * FUN_007bdac0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb77ce;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("poplistitem_province",0x14);
  local_8 = 0;
  local_14 = DAT_01258a80;
  uVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
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
  uVar1 = (**(code **)(*local_14 + 0x2c))(local_34,uVar1);
  param_1[8] = uVar1;
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *param_1 = CPopProvinceListItem::vftable;
  param_1[7] = CPopProvinceListItem::vftable;
  param_1[10] = 2;
  param_1[0xb] = param_2;
  uVar1 = FUN_004d1c50();
  param_1[0xc] = uVar1;
  local_18 = 0x2d2d2d;
  param_1[0xd] = 0x2d2d2d;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = 0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_007c7ca0(FUN_007be020,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007c7ca0(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007c7ca0(0,0,0,0,0,0,0,0,0,0,0,0,FUN_007bdff0,0,0,0,0,0);
  FUN_007c7ca0(FUN_007bdce0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0xb;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("poplistbutton",0xd);
  local_8._0_1_ = 0xc;
  iVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x2e);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_007bde20(param_1,0);
  ExceptionList = local_10;
  return param_1;
}


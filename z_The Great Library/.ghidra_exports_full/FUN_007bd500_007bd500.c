// FUN_007bd500 @ 007bd500 body=[[007bd500, 007bd5b6] [007bd5ba, 007bd6f9] [007bd6fd, 007bd718]]


undefined4 * FUN_007bd500(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb892e;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("poplistitem_country",0x13);
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
  uVar1 = (**(code **)(*local_14 + 0x2c))(local_30,uVar1);
  param_1[8] = uVar1;
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  *param_1 = CPopProvinceListItem::vftable;
  param_1[7] = CPopProvinceListItem::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_004d1c50();
  param_1[0xc] = uVar1;
  param_1[0xd] = *in_ECX;
  param_1[0xe] = in_ECX[1];
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_007c7ca0(FUN_007be020,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007c7ca0(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_007c7ca0(0,0,0,0,0,0,0,0,0,0,0,0,FUN_007bdff0,0,0,0,0,0);
  FUN_007c7ca0(FUN_007bdce0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0xb;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("poplistbutton",0xd);
  local_8._0_1_ = 0xc;
  iVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x2e);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  FUN_007bde20(param_1,0);
  ExceptionList = local_10;
  return param_1;
}


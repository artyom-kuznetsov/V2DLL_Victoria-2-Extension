// FUN_007ba0b0 @ 007ba0b0 body=[[007ba0b0, 007ba163] [007ba167, 007ba260] [007ba264, 007ba277]]


undefined4 * FUN_007ba0b0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
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
  puStack_c = &LAB_00bac312;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("popinfomember_popview",0x15);
  local_8 = 0;
  local_14 = DAT_01258a80;
  uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
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
  uVar2 = (**(code **)(*local_14 + 0x2c))(local_30,uVar2);
  param_1[8] = uVar2;
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  *param_1 = CPopListItem::vftable;
  param_1[7] = CPopListItem::vftable;
  FUN_0072d4e0(param_1 + 10,unaff_EDI);
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_007bd1d0(FUN_007ba350,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8 = CONCAT31(local_8._1_3_,9);
  cVar1 = (**(code **)(*unaff_EDI + 0x20))();
  if (cVar1 != '\0') {
    FUN_007ba410(param_1,unaff_EDI);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("pop_type",8);
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x2e);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}


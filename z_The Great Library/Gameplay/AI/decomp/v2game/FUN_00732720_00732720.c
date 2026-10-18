// FUN_00732720 @ 00732720 body=[[00732720, 007327ce] [007327d2, 0073285a] [0073285e, 007328a4] [007328a8, 007328ee] [007328f2, 00732938] [0073293c, 00732982] [00732986, 007329cc] [007329d0, 00732a08]]


undefined4 * FUN_00732720(undefined4 *param_1)

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
  puStack_c = &LAB_00b4bcf1;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("queue_unit_entry",0x10);
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
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *param_1 = CBuildQueueEntry::vftable;
  param_1[7] = CBuildQueueEntry::vftable;
  FUN_00737d90(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00732f90,0,0,0,0,0);
  local_8._0_1_ = 7;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("button",6);
  local_8._0_1_ = 8;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  local_8._0_1_ = 7;
  param_1[0x20] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("button2",7);
  local_8._0_1_ = 9;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  local_8._0_1_ = 7;
  param_1[0x21] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00df09f4,4);
  local_8._0_1_ = 10;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  local_8._0_1_ = 7;
  param_1[0x22] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("province",8);
  local_8._0_1_ = 0xb;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  local_8._0_1_ = 7;
  param_1[0x23] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("continent",9);
  local_8._0_1_ = 0xc;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_30);
  local_8._0_1_ = 7;
  param_1[0x24] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("unit_strip",10);
  local_8._0_1_ = 0xd;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x44))(local_4c);
  local_8 = CONCAT31(local_8._1_3_,7);
  param_1[0x25] = uVar2;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  (**(code **)(*(int *)(param_1[0x20] + 0x54) + 4))(param_1 + 10);
  (**(code **)(*(int *)(param_1[0x21] + 0x54) + 4))(param_1 + 10);
  ExceptionList = local_10;
  return param_1;
}


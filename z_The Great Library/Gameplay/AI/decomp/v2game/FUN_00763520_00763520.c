// FUN_00763520 @ 00763520 body=[[00763520, 007637d2] [007637d6, 0076382b] [0076382f, 00763884] [00763888, 007638dd] [007638e1, 00763936] [0076393a, 0076398f] [00763993, 00763a43] [00763a47, 00763a7a] [00763a7e, 00763a95] [00763a99, 00763aba] [00763abe, 00763b10] [00763b14, 00763b71] [00763b75, 00763bcc] [00763bd0, 00763c22] [00763c26, 00763c4b]]


undefined4 * FUN_00763520(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7bead;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = param_2;
  local_8 = 0;
  param_1[2] = CSessionInfoObserver::vftable;
  *param_1 = CMultiplayerMenuView::vftable;
  param_1[2] = CMultiplayerMenuView::vftable;
  FUN_00768830(FUN_00767c30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_00768080,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_00764b30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_007651f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_007674d0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(&LAB_00766740,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_007680b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_00766b80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_00767140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00768830(FUN_00767880,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0xcc] = CCheckBoxObserverGlue<CMultiplayerMenuView>::vftable;
  param_1[0xcd] = param_1;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = FUN_00766810;
  param_1[0xd9] = 0;
  param_1[0xda] = param_3;
  param_1[0xdc] = param_4;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  local_8._0_1_ = 0xd;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e145b4,4);
  local_8._0_1_ = 0xe;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x2c);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0739c,4);
  local_8._0_1_ = 0xf;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x40);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e145bc,4);
  local_8._0_1_ = 0x10;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x54);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e145bc,4);
  local_8._0_1_ = 0x11;
  iVar1 = (**(code **)(*(int *)param_1[0xdc] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x68);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("metaserver",10);
  local_8._0_1_ = 0x12;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0xb8);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00e145d0,4);
  local_8._0_1_ = 0x13;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x7c);
  local_8._0_1_ = 0xd;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x14;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x15;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0xda] + 0x34))(local_40);
  FUN_009a8ee0(local_24,local_5c);
  local_8._0_1_ = 0x16;
  iVar1 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0x17;
  (**(code **)(*piVar2 + 0xcc))(uVar3,0);
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x18;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xd;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("join_direct",0xb);
  local_8._0_1_ = 0x19;
  iVar1 = (**(code **)(*(int *)param_1[0xda] + 0x34))();
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x90);
  local_8._0_1_ = 0xd;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("naming_window",0xd);
  local_8._0_1_ = 0x1a;
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x3c))();
  uVar3 = (**(code **)(iVar1 + 0x2c))(local_5c,uVar3);
  local_8._0_1_ = 0xd;
  param_1[0xdb] = uVar3;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("ok_host_button",0xe);
  local_8._0_1_ = 0x1b;
  iVar1 = (**(code **)(*(int *)param_1[0xdb] + 0x34))(local_5c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 4);
  local_8._0_1_ = 0xd;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00409350("back_button",0xb);
  local_8._0_1_ = 0x1c;
  iVar1 = (**(code **)(*(int *)param_1[0xdb] + 0x34))(local_5c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x18);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  (**(code **)(*(int *)(param_1[0xdb] + 0x18) + 0x38))();
  ExceptionList = local_10;
  return param_1;
}


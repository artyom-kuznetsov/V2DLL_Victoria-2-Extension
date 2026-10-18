// FUN_00675440 @ 00675440 body=[[00675440, 006754a5] [006754a9, 00675517] [0067551b, 006755b7] [006755bb, 006755e3] [006755e7, 00675620] [00675624, 0067569c] [006756a0, 0067573d] [00675741, 006757eb] [006757ef, 00675822] [00675826, 00675852] [00675856, 0067586b]]


undefined4 * FUN_00675440(undefined4 *param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 local_b0;
  uint local_9c;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 local_70 [4];
  int local_6c;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b99048;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_2c);
  local_8._0_1_ = 2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CConfirmSave::vftable;
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_8._0_1_ = 3;
  param_1[0x21] = param_2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("CONFIRMSAVETITLE",0x10);
  local_8._0_1_ = 4;
  FUN_009a8ee0(local_70,local_2c);
  local_8._0_1_ = 6;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("Title",5);
  local_8._0_1_ = 7;
  iVar3 = FUN_00475500();
  uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                       (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                       (int)*(undefined8 *)(iVar3 + 0x74),
                       (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
  local_8._0_1_ = 8;
  (**(code **)(*(int *)param_1[1] + 0x3c))(local_48);
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b0);
  }
  local_8._0_1_ = 6;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("CONFIRMSAVETEXT",0xf);
  local_8._0_1_ = 9;
  FUN_009a8ee0(local_5c,local_48);
  local_8._0_1_ = 0xb;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  local_8._0_1_ = 0xc;
  param_2 = FUN_00aae9af(0x40);
  local_8._0_1_ = 0xd;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0(param_2,local_5c,param_3);
  }
  local_8._0_1_ = 0xc;
  FUN_009e6810(local_2c,&param_2);
  local_8._0_1_ = 0xb;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar3 = FUN_00475500();
  FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
               (int)*(undefined8 *)(iVar3 + 0x74),
               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
  local_8._0_1_ = 0xe;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("Description",0xb);
  local_8._0_1_ = 0xf;
  (**(code **)(*(int *)param_1[1] + 0x3c))(local_48);
  FUN_00408ed0(local_8c,0,0xffffffff);
  FUN_00a5ecc0(local_8c,0);
  local_8._0_1_ = 0xe;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
  iVar3 = *(int *)(iVar5 + 0x6b9bc);
  iVar5 = *(int *)(iVar5 + 0x6b9c0);
  piVar2 = *(int **)(param_1[1] + 0x248);
  iVar6 = (**(code **)(*piVar2 + 0xf4))(&param_2);
  sVar1 = *(short *)(iVar6 + 2);
  psVar7 = (short *)(**(code **)(*piVar2 + 0xf4))(&param_3);
  (**(code **)(*(int *)param_1[1] + 0xa8))(iVar3 / 2 - (int)*psVar7 / 2,iVar5 / 2 - (int)sVar1 / 2);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_8._0_1_ = 0x10;
  FUN_009adb70();
  if (local_58 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x11);
  FUN_009adb70();
  if (local_6c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  ExceptionList = local_10;
  return param_1;
}


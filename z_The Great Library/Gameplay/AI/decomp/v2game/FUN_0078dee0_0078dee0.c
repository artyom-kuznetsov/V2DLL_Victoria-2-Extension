// FUN_0078dee0 @ 0078dee0 body=[[0078dee0, 0078df9f] [0078dfa3, 0078e13f] [0078e143, 0078e192] [0078e196, 0078e1e6] [0078e1ea, 0078e23c] [0078e240, 0078e292] [0078e296, 0078e2e5] [0078e2e9, 0078e338] [0078e33c, 0078e39f]]


undefined4 * FUN_0078dee0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b974d2;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("sup_buttons_window",0x12);
  local_8 = 0;
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))();
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
  uVar1 = (**(code **)(*piVar2 + 0x2c))(local_2c,uVar1);
  param_1[8] = uVar1;
  *param_1 = CUnitViewBaseEntry::vftable;
  param_1[7] = CUnitViewBaseEntry::vftable;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CSingleUnitButtons::vftable;
  param_1[7] = CSingleUnitButtons::vftable;
  FUN_0079df30(FUN_0078e520,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_0079df30(FUN_00790a60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_0079df30(FUN_0078f870,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_0079df30(FUN_0078f900,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_0079df30(FUN_00790c60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_0079df30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0078e6a0,0,0,0,0,0);
  FUN_0079df30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0078e5c0,0,0,0,0,0);
  local_8._0_1_ = 0xd;
  param_1[0x96] = param_3;
  param_1[0x97] = param_2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("unload_button",0xd);
  local_8._0_1_ = 0xe;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x6e);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("load_button",0xb);
  local_8._0_1_ = 0xf;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x82);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("select_land",0xb);
  local_8._0_1_ = 0x10;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 10);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("attach_unit_button",0x12);
  local_8._0_1_ = 0x11;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x32);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("detach_unit_button",0x12);
  local_8._0_1_ = 0x12;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x46);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("enable_rebel_button",0x13);
  local_8._0_1_ = 0x13;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1e);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("disable_rebel_button",0x14);
  local_8._0_1_ = 0x14;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1e);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  puVar4 = (undefined4 *)FUN_00aae9af(0x38);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = DAT_01268fec;
    puVar4[2] = DAT_01268ff0;
    puVar4[8] = 0xf;
    puVar4[7] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
  }
  local_8 = CONCAT31(local_8._1_3_,0xd);
  param_1[0x98] = puVar4;
  FUN_0078e820();
  ExceptionList = local_10;
  return param_1;
}


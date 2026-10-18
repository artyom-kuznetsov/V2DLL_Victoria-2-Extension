// FUN_006a5ad0 @ 006a5ad0 body=[[006a5ad0, 006a5cc4] [006a5cc8, 006a5d1e] [006a5d22, 006a5d70] [006a5d74, 006a5dca] [006a5dce, 006a5e4c] [006a5e50, 006a5ec6] [006a5eca, 006a5ee4] [006a5ee8, 006a5f06] [006a5f0a, 006a5f9c] [006a5fa0, 006a5fbc]]


undefined4 * FUN_006a5ad0(undefined4 *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_EDX;
  int in_stack_00000030;
  undefined4 in_stack_00000044;
  int in_stack_00000048;
  undefined4 in_stack_0000004c;
  int in_stack_00000050;
  undefined4 local_7c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c199;
  local_10 = ExceptionList;
  local_1c = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  param_1[2] = param_2;
  *param_1 = CMessageIcon::vftable;
  param_1[1] = 0;
  param_1[3] = *(undefined4 *)(in_stack_00000030 + 8);
  param_1[4] = in_EDX;
  FUN_006a8070(param_1 + 5);
  param_1[0x25] = 43800000;
  param_1[0x25] = DAT_01259abc;
  param_1[0x26] = 43800000;
  param_1[0x26] = DAT_01259abc;
  param_1[0x27] = 43800000;
  param_1[0x27] = DAT_01259abc;
  param_1[0x28] = CButtonObserverGlue<CMessageIcon>::vftable;
  param_1[0x29] = param_1;
  param_1[0x2a] = &LAB_006a60c0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = CButtonObserverGlue<CMessageIcon>::vftable;
  param_1[0x34] = param_1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = FUN_006a6110;
  param_1[0x3d] = 0;
  local_8._0_1_ = 4;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  param_1[0x3f] = 0;
  local_18 = (undefined4 *)FUN_00aae9af(0x28);
  local_8._0_1_ = 5;
  if (local_18 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("messageicon_entry_window",0x18);
    local_8 = CONCAT31(local_8._1_3_,6);
    local_20 = DAT_01258a80;
    local_1c = 1;
    uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    *(undefined1 *)(local_18 + 4) = 0;
    DAT_013f08e0 = DAT_013f08e0 + 1;
    *(undefined1 *)(local_18 + 5) = 0;
    *(undefined1 *)(local_18 + 6) = 0;
    local_18[7] = &PTR_FUN_00e39158;
    local_8 = 10;
    *local_18 = &PTR_FUN_00e392f0;
    local_18[7] = &PTR_FUN_00e39320;
    *(undefined1 *)(local_18 + 9) = 0;
    uVar2 = (**(code **)(*local_20 + 0x2c))(local_44,uVar2);
    local_18[8] = uVar2;
    puVar3 = local_18;
  }
  local_8 = 4;
  param_1[1] = puVar3;
  if (((local_1c & 1) != 0) && (0xf < local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("messageicon_button",0x12);
  local_8._0_1_ = 0xc;
  piVar4 = (int *)(**(code **)(**(int **)(param_1[1] + 0x20) + 0x34))(local_44);
  (**(code **)(*piVar4 + 0x48))((param_3 != '\0') + '\x01');
  local_8._0_1_ = 4;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("messageicon_button",0x12);
  local_8._0_1_ = 0xd;
  iVar5 = (**(code **)(**(int **)(param_1[1] + 0x20) + 0x34))(local_44);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x28);
  local_8._0_1_ = 4;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("messageicon_button",0x12);
  local_8._0_1_ = 0xe;
  iVar5 = (**(code **)(**(int **)(param_1[1] + 0x20) + 0x34))(local_44);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0x33);
  local_8._0_1_ = 4;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_28 = in_stack_00000044;
  if ((in_stack_00000048 == 0) || (in_stack_00000048 == *(int *)(DAT_012588e8 + 0xb60))) {
    local_28 = in_stack_0000004c;
    in_stack_00000048 = in_stack_00000050;
  }
  local_24 = in_stack_00000048;
  if (in_stack_00000048 == 0) {
    local_28 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    local_24 = *(int *)(DAT_012588e8 + 0xb60);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedbb4,4);
  local_8._0_1_ = 0xf;
  piVar4 = *(int **)(param_1[1] + 0x20);
  pcVar6 = (char *)&local_28;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&local_28,(int)pcVar6 - ((int)&local_28 + 1));
  local_8._0_1_ = 0x10;
  uVar2 = FUN_00988fa0(local_44);
  local_8._0_1_ = 0x11;
  (**(code **)(*piVar4 + 0x3c))(local_60);
  FUN_00408ed0(uVar2,0,0xffffffff);
  FUN_00a5ecc0(uVar2,0);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c);
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_8._0_1_ = 4;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  (**(code **)(*(int *)(*(int *)(param_1[1] + 0x20) + 0x18) + 0x38))();
  (**(code **)(*param_2 + 0x38))();
  uVar2 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  param_1[0x25] = uVar2;
  param_1[0x26] = uVar2;
  param_1[0x26] = param_1[0x26] + 0x78;
  param_1[0x27] = param_1[0x25];
  param_1[0x27] = param_1[0x27] + 0xa8;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350("updateable",10);
  local_8 = CONCAT31(local_8._1_3_,0x12);
  (**(code **)(*(int *)(*(int *)(param_1[1] + 0x20) + 0x18) + 0x78))(local_60);
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  FUN_006a81a0();
  ExceptionList = local_10;
  return param_1;
}


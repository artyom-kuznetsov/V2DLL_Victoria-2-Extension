// FUN_00758200 @ 00758200 body=[[00758200, 00758290] [00758294, 007582b2] [007582b6, 00758332] [00758336, 00758354] [00758358, 007583c4] [007583c8, 007583e6] [007583ea, 00758465] [00758469, 00758487] [0075848b, 007584f8] [007584fc, 0075851a] [0075851e, 0075859a] [0075859e, 007585bc] [007585c0, 0075862d] [00758631, 0075864f] [00758653, 007586cf] [007586d3, 007586f1] [007586f5, 00758762] [00758766, 00758784] [00758788, 00758804] [00758808, 00758826] [0075882a, 00758896] [0075889a, 007588b8] [007588bc, 00758937] [0075893b, 00758959] [0075895d, 007589b4]]


void FUN_00758200(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b441d0;
  local_10 = ExceptionList;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("exit_button",0xb);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("exit_button",0xb);
    local_8 = 2;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("settings_button",0xf);
  local_8 = 4;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("settings_button",0xf);
    local_8 = 6;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,7);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("single_player_button",0x14);
  local_8 = 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,9);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("single_player_button",0x14);
    local_8 = 10;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("multi_player_button",0x13);
  local_8 = 0xc;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("multi_player_button",0x13);
    local_8 = 0xe;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("credits_button",0xe);
  local_8 = 0x10;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350("credits_button",0xe);
    local_8 = 0x12;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("tutorial_button",0xf);
  local_8 = 0x14;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,0x15);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_84);
  local_11 = iVar3 != 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  if ((bool)local_11) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("tutorial_button",0xf);
    local_8 = 0x16;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_4c);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_68);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  DAT_01258b2c = 1;
  piVar2 = (int *)FUN_009e8090();
  (**(code **)(*piVar2 + 0x10))();
  pcVar1 = *(code **)(*in_ECX + 0x100);
  *(undefined1 *)((int)in_ECX + 0x769) = 1;
  iVar3 = (*pcVar1)();
  (**(code **)(**(int **)(iVar3 + 0xe4) + 0x10))(1);
  PostQuitMessage(0);
  ExceptionList = local_10;
  return;
}


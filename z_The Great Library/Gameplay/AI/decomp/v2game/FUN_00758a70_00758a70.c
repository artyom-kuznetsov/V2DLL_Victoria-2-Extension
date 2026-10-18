// thunk_FUN_00758200 @ 00758a70 body=[[00758a70, 00758a74]]


void thunk_FUN_00758200(void)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  uint auStack_84 [4];
  undefined4 uStack_74;
  uint uStack_70;
  uint auStack_68 [4];
  undefined4 uStack_58;
  uint uStack_54;
  uint auStack_4c [4];
  undefined4 uStack_3c;
  uint uStack_38;
  uint auStack_30 [4];
  undefined4 uStack_20;
  uint uStack_1c;
  undefined1 uStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b441d0;
  pvStack_10 = ExceptionList;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  ExceptionList = &pvStack_10;
  FUN_00409350("exit_button",0xb);
  uStack_8 = 0;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = auStack_84[0] & 0xffffff00;
    FUN_00409350("exit_button",0xb);
    uStack_8 = 2;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,3);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_30[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_84[0]);
    }
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  FUN_00409350("settings_button",0xf);
  uStack_8 = 4;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,5);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = auStack_84[0] & 0xffffff00;
    FUN_00409350("settings_button",0xf);
    uStack_8 = 6;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,7);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_30[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_84[0]);
    }
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  FUN_00409350("single_player_button",0x14);
  uStack_8 = 8;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = auStack_84[0] & 0xffffff00;
    FUN_00409350("single_player_button",0x14);
    uStack_8 = 10;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,0xb);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_30[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_84[0]);
    }
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  FUN_00409350("multi_player_button",0x13);
  uStack_8 = 0xc;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,0xd);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = auStack_84[0] & 0xffffff00;
    FUN_00409350("multi_player_button",0x13);
    uStack_8 = 0xe;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,0xf);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_30[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_84[0]);
    }
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  FUN_00409350("credits_button",0xe);
  uStack_8 = 0x10;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x11);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    auStack_84[0] = auStack_84[0] & 0xffffff00;
    FUN_00409350("credits_button",0xe);
    uStack_8 = 0x12;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x13);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_84);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_30[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_1c = 0xf;
    uStack_20 = 0;
    auStack_30[0] = auStack_30[0] & 0xffffff00;
    if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_84[0]);
    }
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  auStack_84[0] = auStack_84[0] & 0xffffff00;
  FUN_00409350("tutorial_button",0xf);
  uStack_8 = 0x14;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  uStack_8 = CONCAT31(uStack_8._1_3_,0x15);
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_30);
  iVar3 = (**(code **)(*piVar2 + 0x34))(auStack_84);
  uStack_11 = iVar3 != 0;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_30[0]);
  }
  uStack_8 = 0xffffffff;
  uStack_1c = 0xf;
  uStack_20 = 0;
  auStack_30[0] = auStack_30[0] & 0xffffff00;
  if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_84[0]);
  }
  if ((bool)uStack_11) {
    uStack_54 = 0xf;
    uStack_58 = 0;
    auStack_68[0] = auStack_68[0] & 0xffffff00;
    FUN_00409350("tutorial_button",0xf);
    uStack_8 = 0x16;
    uStack_38 = 0xf;
    uStack_3c = 0;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_8 = CONCAT31(uStack_8._1_3_,0x17);
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(auStack_4c);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(auStack_68);
    (**(code **)(*piVar2 + 0xbc))();
    if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_4c[0]);
    }
    uStack_8 = 0xffffffff;
    uStack_38 = 0xf;
    uStack_3c = 0;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_68[0]);
    }
    uStack_54 = 0xf;
    uStack_58 = 0;
    auStack_68[0] = auStack_68[0] & 0xffffff00;
  }
  uStack_8 = 0xffffffff;
  DAT_01258b2c = 1;
  piVar2 = (int *)FUN_009e8090();
  (**(code **)(*piVar2 + 0x10))();
  pcVar1 = *(code **)(*in_ECX + 0x100);
  *(undefined1 *)((int)in_ECX + 0x769) = 1;
  iVar3 = (*pcVar1)();
  (**(code **)(**(int **)(iVar3 + 0xe4) + 0x10))(1);
  PostQuitMessage(0);
  ExceptionList = pvStack_10;
  return;
}


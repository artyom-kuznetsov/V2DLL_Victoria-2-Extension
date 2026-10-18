// FUN_0075f560 @ 0075f560 body=[[0075f560, 0075f78d] [0075f791, 0075f7bc] [0075f7c0, 0075f7e6] [0075f7ea, 0075f810] [0075f814, 0075f837] [0075f83b, 0075f85b] [0075f85f, 0075f88c] [0075f890, 0075f9c6] [0075f9ca, 0075f9ee] [0075f9f2, 0075fa08] [0075fa0c, 0075fa22] [0075fa26, 0075fa42] [0075fa46, 0075fa56]]


void FUN_0075f560(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  char local_18c [32];
  uint local_16c;
  undefined4 local_15c;
  uint local_158;
  uint local_150;
  undefined4 local_140;
  uint local_13c;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  char local_118 [4];
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d609;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00475500();
  *(int *)(in_ECX + 0x168) = *(int *)(in_ECX + 0x168) + 1;
  if ((*(int *)(iVar2 + 0x18) - *(int *)(iVar2 + 0x14)) / 0x18 <= *(int *)(in_ECX + 0x168)) {
    *(undefined4 *)(in_ECX + 0x168) = 0;
  }
  *(undefined4 *)(in_ECX + 0x170) = 0;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  local_18 = iVar2;
  FUN_00409350("resolution_value",0x10);
  local_8 = 0;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8._0_1_ = 1;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_c0);
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar3 = __itoa(*(int *)(*(int *)(iVar2 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18 + 4),local_118,
                  10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 3;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd420,1);
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  local_8._0_1_ = 5;
  pcVar3 = __itoa(*(int *)(*(int *)(local_18 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18),local_118,10
                 );
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 6;
  FUN_00988f20(local_dc);
  local_8._0_1_ = 7;
  uVar4 = FUN_00988f20(local_88);
  local_8 = CONCAT31(local_8._1_3_,8);
  local_14 = (int *)(**(code **)(*local_14 + 0x3c))(local_f8);
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_16c);
  }
  local_158 = 0xf;
  local_15c = 0;
  local_16c = local_16c & 0xffffff00;
  if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_150);
  }
  local_13c = 0xf;
  local_140 = 0;
  local_150 = local_150 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc[0]);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_8 = 0xffffffff;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8[0]);
  }
  local_120 = 0xf;
  local_124 = 0;
  local_134[0] = local_134[0] & 0xffffff00;
  FUN_00409350("refreshrate_value",0x11);
  local_8 = 9;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8._0_1_ = 10;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_50);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00e1436c,3);
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_8._0_1_ = 0xc;
  pcVar3 = __itoa(*(int *)(*(int *)(*(int *)(local_18 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18 + 8)
                          + *(int *)(in_ECX + 0x170) * 4),local_18c,10);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_8._0_1_ = 0xd;
  uVar4 = FUN_00988f20(local_34);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  (**(code **)(*local_14 + 0x3c))(local_134);
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00a5ecc0(uVar4,0);
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114);
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_134[0]);
  }
  ExceptionList = local_10;
  return;
}


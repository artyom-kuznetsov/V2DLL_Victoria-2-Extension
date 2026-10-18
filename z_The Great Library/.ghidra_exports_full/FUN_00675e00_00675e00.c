// FUN_00675e00 @ 00675e00 body=[[00675e00, 00675ec9] [00675ecd, 00675ef6] [00675efa, 00675f26] [00675f2a, 00675f92] [00675f96, 00675ff3] [00675ff7, 00676014] [00676018, 00676056] [0067605a, 006760f7] [006760fb, 0067611a] [0067611e, 00676143] [00676147, 00676166] [0067616a, 00676184] [00676188, 00676210] [00676214, 00676222] [00676226, 00676236]]


void FUN_00675e00(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char ***pppcVar5;
  int in_ECX;
  undefined4 local_118;
  uint local_104;
  undefined4 local_fc;
  uint local_e8;
  char **local_e0 [5];
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70 [4];
  int local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  uint local_18;
  bool local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9e9f8;
  local_10 = ExceptionList;
  local_18 = 0;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_00409350("game_name",9);
  local_8 = 0;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  FUN_00409350("menu_save",9);
  local_8._0_1_ = 1;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_c4);
  iVar3 = (**(code **)(*piVar2 + 0x40))(local_a8);
  (**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))(local_70);
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  local_8._0_1_ = 4;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  FUN_00989330(local_38);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  FUN_009897c0();
  if (local_60 == 0) goto LAB_00676214;
  local_14[0] = true;
  iVar3 = FUN_0098a0d0(local_14);
  if (iVar3 < 1) {
LAB_00675f7a:
    local_14[0] = true;
  }
  else {
    FUN_009895f0(local_60);
    local_18 = 1;
    cVar1 = FUN_0040b360();
    local_14[0] = false;
    if (cVar1 == '\0') goto LAB_00675f7a;
  }
  if (((local_18 & 1) != 0) && (0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if (local_14[0] != false) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09354,3);
    local_8._0_1_ = 6;
    uVar4 = FUN_00988f20(local_54);
    local_8._0_1_ = 7;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_8._0_1_ = 4;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  FUN_00988fa0(local_70);
  local_8._0_1_ = 8;
  uVar4 = FUN_00475500();
  iVar3 = FUN_0040b410(uVar4);
  local_14[0] = *(int *)(iVar3 + 0x10) != 0;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if (local_14[0]) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("/save games/",0xc);
    local_8._0_1_ = 9;
    uVar4 = FUN_00475500();
    uVar4 = FUN_0040b410(uVar4);
    local_8._0_1_ = 10;
    FUN_00988fa0(uVar4);
    local_8._0_1_ = 0xb;
    FUN_00988f20(local_54);
    local_8._0_1_ = 0xc;
    uVar4 = FUN_00988f20(local_70);
    local_8._0_1_ = 0xd;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc);
    }
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_118);
    }
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_8._0_1_ = 8;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  if (local_cc < 0x10) {
    pppcVar5 = local_e0;
LAB_0067619b:
    if (*(char *)pppcVar5 == '\0') goto LAB_006761ac;
    iVar3 = PHYSFS_exists(pppcVar5);
    if (iVar3 == 0) goto LAB_006761ac;
    local_18 = FUN_00aae9af(0x88);
    local_8._0_1_ = 0xe;
    if (local_18 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00675440(local_18,local_1c,local_70);
    }
    local_8._0_1_ = 8;
    FUN_006480e0(uVar4);
  }
  else {
    pppcVar5 = (char ***)local_e0[0];
    if ((char ***)local_e0[0] != (char ***)0x0) goto LAB_0067619b;
LAB_006761ac:
    FUN_00675a80(local_1c);
  }
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_e0[0]);
  }
LAB_00676214:
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  ExceptionList = local_10;
  return;
}


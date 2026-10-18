// FUN_00492710 @ 00492710 body=[[00492710, 00492a43] [00492a47, 00492a6a] [00492a6e, 00492b9e] [00492ba2, 00492bc5] [00492bc9, 00492d49] [00492d4d, 00492d74] [00492d78, 00492e05] [00492e0e, 00492e4e] [00492e54, 00492f1a]]


undefined4 FUN_00492710(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *****pppppuVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 ****ppppuVar11;
  uint in_ECX;
  undefined4 ***pppuVar12;
  undefined4 uVar13;
  undefined4 ****ppppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 ***pppuStack_150;
  undefined4 uStack_14c;
  undefined1 auStack_148 [116];
  undefined4 uStack_d4;
  undefined1 **ppuStack_d0;
  undefined1 ****ppppuStack_cc;
  undefined1 ****ppppuStack_c8;
  undefined1 ****ppppuStack_c4;
  uint local_ac;
  undefined4 ***apppuStack_a8 [3];
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_94;
  int local_8c;
  undefined4 ****local_88;
  undefined4 **ppuStack_84;
  undefined1 *local_80;
  undefined4 ***apppuStack_7c [3];
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 **ppuStack_64;
  undefined4 **ppuStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [12];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9645c;
  local_14 = ExceptionList;
  local_88 = *(undefined4 *****)(in_ECX + 0x4c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
  if ((((*(char *)(in_ECX + 0x4c) != 'R') || (*(char *)(in_ECX + 0x4d) != 'E')) ||
      (*(char *)(in_ECX + 0x4e) != 'B')) &&
     ((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1)) {
    return 1;
  }
  if (*(char *)(*(int *)(in_ECX + 0x58) + 0x131) == '\0') {
    local_8c = 0;
  }
  else {
    local_8c = *(int *)(*(int *)(*(int *)(in_ECX + 0x48) + 0x118) +
                       *(int *)(*(int *)(in_ECX + 0x58) + 0x134) * 4);
  }
  ExceptionList = &local_14;
  *(int *)(local_8c + 0x20) = *(int *)(local_8c + 0x20) + 1000;
  iVar6 = *(int *)(*(int *)(local_8c + 0x18) + 0xc4);
  if (iVar6 * 1000 < *(int *)(local_8c + 0x20)) {
    *(int *)(local_8c + 0x20) = iVar6 * 1000;
  }
  if (*(int *)(local_8c + 0x20) < 0) {
    *(undefined4 *)(local_8c + 0x20) = 0;
  }
  *(undefined4 *)(local_8c + 0x24) = *(undefined4 *)(local_8c + 0x20);
  ppppuStack_c4 = (undefined1 ****)0x4927e5;
  local_ac = in_ECX;
  FUN_004b2610();
  iVar6 = *(int *)(local_8c + 0x18);
  if (DAT_0125ce80 == 0) {
    ppppuStack_c4 = (undefined1 ****)0x3c;
    ppppuStack_c8 = (undefined1 ****)0x4927fb;
    local_80 = (undefined1 *)FUN_00aae9af();
    local_c = 0;
    if (local_80 == (undefined1 *)0x0) {
      ppppuStack_c4 = (undefined1 ****)0x0;
    }
    else {
      ppppuStack_c4 = (undefined1 ****)0x492814;
      ppppuStack_c4 = (undefined1 ****)FUN_004dada0();
      in_ECX = local_ac;
    }
    local_c = 0xffffffff;
    ppppuStack_c8 = (undefined1 ****)0x49282d;
    FUN_004dc340();
  }
  if ((iVar6 == *(int *)(DAT_0125ce80 + 0x30)) && (*(int *)(iVar1 + 0x10c) != 0)) {
    ppppuStack_c4 = (undefined1 ****)0x1;
    ppppuStack_cc = (undefined1 ****)0x492857;
    ppppuStack_c8 = (undefined1 ****)*(undefined4 *)(in_ECX + 0x48);
    (**(code **)(**(int **)(iVar1 + 0x10c) + 0x20))();
  }
  if (*(int *)(DAT_012588e8 + 0xb60) != *(int *)(*(int *)(in_ECX + 0x48) + 300)) goto LAB_00492ed4;
  piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  ppppuStack_c4 = (undefined1 ****)0x492884;
  iVar6 = (**(code **)(*piVar2 + 0x13c))();
  if (iVar6 == 4) {
LAB_0049289a:
    ppppuStack_c4 = (undefined1 ****)0x4928b0;
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xdc))();
  }
  else {
    ppppuStack_c4 = (undefined1 ****)0x492895;
    iVar6 = (**(code **)(*piVar2 + 0x13c))();
    if (iVar6 == 0x15) goto LAB_0049289a;
  }
  iVar6 = *(int *)(*(int *)(in_ECX + 0x48) + 0x58);
  ppppuStack_c4 = (undefined1 ****)0x4928c9;
  iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  iVar6 = *(int *)(*(int *)(iVar7 + 0x20d8) + iVar6 * 4);
  if (iVar6 != 0) {
    ppppuStack_c4 = (undefined1 ****)0x4928e9;
    ppppuStack_c4 = (undefined1 ****)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    ppppuStack_c8 = *(undefined1 *****)(in_ECX + 0x48);
    ppuStack_d0 = (undefined1 **)0x4928f4;
    ppppuStack_cc = (undefined1 ****)iVar6;
    FUN_006430b0();
  }
  ppuStack_60 = (undefined1 ***)0x0;
  puStack_5c = (undefined1 *)0x0;
  uStack_58 = 0;
  auStack_54[0] = 0;
  local_c = 1;
  ppppuStack_c4 = (undefined1 ****)0x4;
  ppppuStack_c8 = (undefined1 ****)&DAT_00dfbf14;
  uStack_68 = 0xf;
  uStack_6c = 0;
  apppuStack_7c[0] = (undefined4 ***)((uint)apppuStack_7c[0] & 0xffffff00);
  ppppuStack_cc = (undefined1 ****)0x492930;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,2);
  ppppuStack_c4 = (undefined1 ****)apppuStack_a8;
  ppppuStack_c8 = (undefined1 ****)0x492949;
  puVar8 = (undefined1 *)(**(code **)(**(int **)(in_ECX + 0x58) + 0x18))();
  ppppuStack_c8 = (undefined1 ****)0xffffffff;
  puStack_10._0_1_ = 3;
  ppppuStack_cc = (undefined1 ****)0x0;
  ppuStack_d0 = &local_80;
  uStack_40 = 0xf;
  uStack_44 = 0;
  auStack_54[0] = 0;
  uStack_d4 = 0x492976;
  FUN_00408ed0();
  ppppuStack_c8 = (undefined1 ****)0xffffffff;
  puStack_10._0_1_ = 4;
  ppppuStack_cc = (undefined1 ****)0x0;
  uStack_24 = 0xf;
  uStack_28 = 0;
  auStack_38[0] = 0;
  uStack_d4 = 0x4929a3;
  ppuStack_d0 = (undefined1 **)puVar8;
  FUN_00408ed0();
  ppppuStack_c8 = (undefined1 ****)0x44;
  puStack_10._0_1_ = 5;
  ppppuStack_cc = (undefined1 ****)0x4929b2;
  ppuStack_64 = (undefined4 **)FUN_00aae9af();
  puStack_10._0_1_ = 6;
  uVar5 = puStack_10._0_1_;
  puStack_10._0_1_ = 6;
  ppuStack_84 = ppuStack_64;
  if ((undefined1 ***)ppuStack_64 == (undefined1 ***)0x0) {
    ppuStack_64 = (undefined1 ***)0x0;
    puStack_10._0_1_ = uVar5;
  }
  else {
    ppppuStack_c8 = (undefined1 ****)0xffffffff;
    ppppuStack_cc = (undefined1 ****)0x0;
    ppuStack_d0 = (undefined1 **)auStack_54;
    ppuStack_64[5] = (undefined1 **)0xf;
    ppuStack_64[4] = (undefined1 **)0x0;
    *(undefined1 *)ppuStack_64 = 0;
    uStack_d4 = 0x4929de;
    FUN_00408ed0();
    ppppuStack_c8 = (undefined1 ****)0xffffffff;
    puStack_10._0_1_ = 7;
    ppppuStack_cc = (undefined1 ****)0x0;
    ppuStack_d0 = (undefined1 **)auStack_38;
    ppuStack_64[0xc] = (undefined1 **)0xf;
    ppuStack_64[0xb] = (undefined1 **)0x0;
    *(undefined1 *)(ppuStack_64 + 7) = 0;
    uStack_d4 = 0x492a01;
    FUN_00408ed0();
    ppuStack_64[0xe] = (undefined1 **)0x0;
    ppuStack_64[0xf] = (undefined1 **)0x0;
    *(undefined1 *)(ppuStack_64 + 0x10) = 0;
  }
  puStack_5c = (undefined1 *)0x1;
  ppppuStack_c8 = (undefined1 ****)0x492a2f;
  ppuStack_60 = ppuStack_64;
  FUN_00a39a80();
  if (0xf < uStack_98) {
    ppppuStack_c8 = (undefined1 ****)local_ac;
                    /* WARNING: Subroutine does not return */
    ppppuStack_cc = (undefined1 ****)&UNK_00492a44;
    FUN_00aae91b();
  }
  puStack_10._0_1_ = 1;
  uStack_98 = 0xf;
  uStack_9c = 0;
  local_ac = local_ac & 0xffffff00;
  if (0xf < uStack_6c) {
    ppppuStack_c8 = (undefined1 ****)local_80;
                    /* WARNING: Subroutine does not return */
    ppppuStack_cc = (undefined1 ****)&UNK_00492a6b;
    FUN_00aae91b();
  }
  ppppuStack_c8 = (undefined1 ****)0x4;
  ppppuStack_cc = (undefined1 ****)&DAT_00df85c0;
  uStack_6c = 0xf;
  uStack_70 = 0;
  local_80 = (undefined1 *)((uint)local_80 & 0xffffff00);
  ppuStack_d0 = (undefined1 **)0x492a8a;
  FUN_00409350();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,8);
  ppppuStack_c8 = (undefined1 ****)&local_ac;
  ppppuStack_cc = (undefined1 ****)0x492aa5;
  puVar8 = (undefined1 *)(**(code **)(**(int **)(iVar1 + 0x48) + 0x1c))();
  ppppuStack_c4 = (undefined1 ****)0xffffffff;
  ppppuStack_c8 = (undefined1 ****)0x0;
  ppppuStack_cc = (undefined1 ****)apppuStack_7c;
  local_c._0_1_ = 9;
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = 0;
  ppuStack_d0 = (undefined1 **)0x492ad2;
  FUN_00408ed0();
  ppppuStack_c4 = (undefined1 ****)0xffffffff;
  local_c._0_1_ = 10;
  ppppuStack_c8 = (undefined1 ****)0x0;
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = 0;
  ppuStack_d0 = (undefined1 **)0x492aff;
  ppppuStack_cc = (undefined1 ****)puVar8;
  FUN_00408ed0();
  ppppuStack_c4 = (undefined1 ****)0x44;
  local_c._0_1_ = 0xb;
  ppppuStack_c8 = (undefined1 ****)0x492b0e;
  puVar8 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0xc;
  uVar5 = (undefined1)local_c;
  local_c._0_1_ = 0xc;
  local_80 = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    puStack_5c = (undefined1 *)0x0;
    local_c._0_1_ = uVar5;
  }
  else {
    ppppuStack_c4 = (undefined1 ****)0xffffffff;
    ppppuStack_c8 = (undefined1 ****)0x0;
    ppppuStack_cc = (undefined1 ****)auStack_50;
    *(undefined4 *)(puVar8 + 0x14) = 0xf;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *puVar8 = 0;
    ppuStack_d0 = (undefined1 **)0x492b3a;
    FUN_00408ed0();
    ppppuStack_c4 = (undefined1 ****)0xffffffff;
    local_c._0_1_ = 0xd;
    ppppuStack_c8 = (undefined1 ****)0x0;
    ppppuStack_cc = (undefined1 ****)auStack_34;
    *(undefined4 *)(puVar8 + 0x30) = 0xf;
    *(undefined4 *)(puVar8 + 0x2c) = 0;
    puVar8[0x1c] = 0;
    ppuStack_d0 = (undefined1 **)0x492b5d;
    FUN_00408ed0();
    *(int *)(puVar8 + 0x38) = iVar1;
    *(undefined4 *)(puVar8 + 0x3c) = 0;
    puVar8[0x40] = 0;
    puStack_5c = puVar8;
  }
  *(undefined1 **)(iVar1 + 0x3c) = puStack_5c;
  uStack_58 = 2;
  ppppuStack_c4 = (undefined1 ****)0x492b8a;
  FUN_00a39a80();
  if (0xf < uStack_94) {
    ppppuStack_c4 = (undefined1 ****)apppuStack_a8[0];
                    /* WARNING: Subroutine does not return */
    ppppuStack_c8 = (undefined1 ****)&UNK_00492b9f;
    FUN_00aae91b();
  }
  local_c._0_1_ = 1;
  uStack_94 = 0xf;
  uStack_98 = 0;
  uVar3 = (uint)apppuStack_a8[0] >> 8;
  apppuStack_a8[0] = (undefined4 ***)(uVar3 << 8);
  if (0xf < uStack_68) {
    ppppuStack_c4 = (undefined1 ****)apppuStack_7c[0];
                    /* WARNING: Subroutine does not return */
    ppppuStack_c8 = (undefined1 ****)&UNK_00492bc6;
    FUN_00aae91b();
  }
  ppppuStack_c4 = (undefined1 ****)0x0;
  ppppuStack_c8 = (undefined1 ****)&DAT_00ded94d;
  uStack_94 = 0xf;
  uStack_98 = 0;
  apppuStack_a8[0] = (undefined4 ***)(uVar3 << 8);
  ppppuStack_cc = (undefined1 ****)0x492be9;
  FUN_00409350();
  local_c._0_1_ = 0xe;
  ppppuStack_c4 = (undefined1 ****)0xd;
  ppppuStack_c8 = (undefined1 ****)0xdfbf58;
  uStack_68 = 0xf;
  uStack_6c = 0;
  apppuStack_7c[0] = (undefined4 ***)((uint)apppuStack_7c[0] & 0xffffff00);
  ppppuStack_cc = (undefined1 ****)0x492c0d;
  FUN_00409350();
  ppppuStack_c4 = (undefined1 ****)0x0;
  local_c._0_1_ = 0xf;
  uVar5 = (undefined1)local_c;
  local_c._0_1_ = 0xf;
  ppppuStack_c8 = (undefined1 ****)&LAB_0055a780;
  local_80 = auStack_148;
  local_88 = &pppuStack_150;
  pppuStack_150 = (undefined1 ****)0x0;
  uStack_14c = 0;
  iVar1 = *(int *)(local_ac + 0x48);
  pppppuVar4 = (undefined1 *****)&pppuStack_150;
  puVar8 = auStack_148;
  if (DAT_01262ef4 == (undefined1 ****)0x0) {
    local_88 = (undefined4 ****)FUN_00aae9af(0x44);
    local_c._0_1_ = 0x10;
    if ((undefined1 *****)local_88 == (undefined1 *****)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_006a4e30();
    }
    local_c._0_1_ = 0xf;
    FUN_006a59b0(uVar9);
    pppppuVar4 = (undefined1 *****)local_88;
    puVar8 = local_80;
    uVar5 = (undefined1)local_c;
  }
  local_c._0_1_ = uVar5;
  local_80 = puVar8;
  local_88 = pppppuVar4;
  uVar9 = *(undefined4 *)(iVar1 + 300);
  uVar16 = *(undefined4 *)(iVar1 + 0x128);
  uVar13 = *(undefined4 *)(local_ac + 0x48);
  uVar15 = 0;
  ppppuVar14 = apppuStack_a8;
  pppuVar12 = &ppuStack_60;
  uVar17 = uVar16;
  uVar18 = uVar9;
  uVar10 = FUN_006a55b0(pppuVar12,uVar13,ppppuVar14,0,uVar16,uVar9,uVar16,uVar9);
  FUN_006a7ed0(auStack_148,uVar10,pppuVar12,uVar13,ppppuVar14,uVar15,uVar16,uVar9,uVar17,uVar18);
  local_c._0_1_ = 0x11;
  uVar9 = *(undefined4 *)(DAT_012588e8 + 0xb24);
  if (DAT_01262ef4 == (undefined1 ****)0x0) {
    uStack_14c = 0x44;
    pppuStack_150 = (undefined1 ****)0x492cf1;
    local_88 = (undefined4 ****)FUN_00aae9af();
    local_c._0_1_ = 0x12;
    if ((undefined1 *****)local_88 == (undefined1 *****)0x0) {
      uStack_14c = 0;
    }
    else {
      uStack_14c = 0x492d0e;
      uStack_14c = FUN_006a4e30();
    }
    local_c._0_1_ = 0x11;
    pppuStack_150 = (undefined1 ****)0x492d20;
    FUN_006a59b0();
  }
  pppuStack_150 = DAT_01262ef4;
  local_c._0_1_ = 0xf;
  uStack_14c = uVar9;
  FUN_004933c0();
  if (0xf < uStack_68) {
    ppppuStack_c4 = (undefined1 ****)apppuStack_7c[0];
                    /* WARNING: Subroutine does not return */
    ppppuStack_c8 = (undefined1 ****)&UNK_00492d4a;
    FUN_00aae91b();
  }
  local_c._0_1_ = 1;
  uStack_68 = 0xf;
  uStack_6c = 0;
  apppuStack_7c[0] = (undefined4 ***)((uint)apppuStack_7c[0] & 0xffffff00);
  if (0xf < uStack_94) {
    ppppuStack_c4 = (undefined1 ****)apppuStack_a8[0];
                    /* WARNING: Subroutine does not return */
    ppppuStack_c8 = (undefined1 ****)&UNK_00492d75;
    FUN_00aae91b();
  }
  ppppuStack_c4 = (undefined1 ****)0x459c4400;
  ppppuStack_c8 = (undefined1 ****)0x492d8b;
  FUN_00401000();
  ppppuStack_c4 = (undefined1 ****)0x492d93;
  ppppuVar11 = (undefined1 ****)FUN_00b31c00();
  iVar1 = *(int *)(*(int *)(local_ac + 0x58) + 0x10);
  if (iVar1 == 4) {
    ppppuStack_c4 = (undefined1 ****)0x8;
    ppppuStack_c8 = (undefined1 ****)0xdfbf68;
    uStack_94 = 0xf;
    uStack_98 = 0;
    apppuStack_a8[0] = (undefined4 ***)((uint)apppuStack_a8[0] & 0xffffff00);
    ppppuStack_cc = (undefined1 ****)0x492dd4;
    FUN_00409350();
    local_88 = &ppppuStack_c4;
    local_c = CONCAT31(local_c._1_3_,0x13);
    ppppuStack_c8 = (undefined1 ****)apppuStack_a8;
    ppppuStack_cc = (undefined1 ****)0x492df1;
    ppppuStack_c4 = ppppuVar11;
    FUN_00475f40();
    if (0xf < uStack_94) {
      ppppuStack_c4 = (undefined1 ****)apppuStack_a8[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_c8 = (undefined1 ****)&UNK_00492e06;
      FUN_00aae91b();
    }
  }
  else if (iVar1 == 3) {
    ppppuStack_c4 = (undefined1 ****)0x492e21;
    FUN_009885d0();
    local_88 = &ppppuStack_c4;
    local_c = CONCAT31(local_c._1_3_,0x14);
    ppppuStack_cc = (undefined1 ****)0x492e3e;
    ppppuStack_c8 = (undefined1 ****)apppuStack_a8;
    ppppuStack_c4 = ppppuVar11;
    FUN_00475f40();
    if (0xf < uStack_94) {
      ppppuStack_c4 = (undefined1 ****)apppuStack_a8[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_c8 = (undefined1 ****)&UNK_00492e4f;
      FUN_00aae91b();
    }
  }
  else {
    if (iVar1 == 2) {
      ppppuStack_c4 = (undefined1 ****)0x492e67;
      FUN_009885d0();
      local_c = CONCAT31(local_c._1_3_,0x15);
    }
    else {
      if (iVar1 != 0) goto LAB_00492eb5;
      ppppuStack_c4 = (undefined1 ****)0x492e8f;
      FUN_009885d0();
      local_c = CONCAT31(local_c._1_3_,0x16);
    }
    local_88 = &ppppuStack_c4;
    ppppuStack_c8 = (undefined1 ****)apppuStack_a8;
    ppppuStack_cc = (undefined1 ****)0x492eac;
    ppppuStack_c4 = ppppuVar11;
    FUN_00475f40();
    ppppuStack_c4 = (undefined1 ****)0x492eb5;
    FUN_00408ad0();
  }
LAB_00492eb5:
  ppppuStack_c4 = (undefined1 ****)&ppuStack_60;
  local_c = 0xffffffff;
  ppppuStack_c8 = (undefined1 ****)0x492eca;
  FUN_0042b9f0();
  in_ECX = local_ac;
LAB_00492ed4:
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    uVar9 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    ppppuStack_c4 = (undefined1 ****)(in_ECX + 0x4c);
    ppppuStack_c8 = *(undefined1 *****)(in_ECX + 0x48);
    ppppuStack_cc = (undefined1 ****)local_8c;
    ppuStack_d0 = (undefined1 **)0x492efd;
    ppppuStack_c4 = (undefined1 ****)FUN_00469890();
    ppppuStack_cc = (undefined1 ****)0x492f04;
    ppppuStack_c8 = (undefined1 ****)uVar9;
    FUN_00457b00();
  }
  ExceptionList = local_14;
  return 1;
}


// FUN_00502090 @ 00502090 body=[[00502090, 00502460] [00502464, 0050248b] [0050248f, 005024b3] [005024b7, 005024d2] [005024d6, 005024f9] [005024fd, 005025c2] [005025c6, 005025fd] [00502601, 00502625] [00502629, 00502760] [00502764, 005028a4] [005028a8, 005028cb] [005028cf, 005029ea] [005029ee, 00502a1b] [00502a1f, 00502a45] [00502a49, 00502b4c] [00502b50, 00502b6e] [00502b72, 00502b87] [00502b8b, 00502bc0]]


void FUN_00502090(undefined4 ****param_1,undefined4 ***param_2,char param_3)

{
  undefined4 ***pppuVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 ***pppuVar4;
  undefined1 *puVar5;
  undefined4 ***pppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  int iVar9;
  int ***pppiVar10;
  undefined4 uVar11;
  int ****ppppiVar12;
  undefined4 uVar13;
  undefined4 **ppuVar14;
  undefined4 **ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 **ppuStack_1b0;
  undefined1 *puStack_1ac;
  undefined1 auStack_1a8 [104];
  undefined4 uStack_140;
  int **ppiStack_13c;
  undefined8 uStack_138;
  undefined4 ****ppppuStack_130;
  undefined4 ****local_12c;
  int **local_11c;
  int ***pppiStack_118;
  int ***local_114 [3];
  undefined4 uStack_108;
  uint local_104;
  uint local_100;
  int ***pppiStack_fc;
  int **local_f8;
  int **local_f4;
  int ***local_f0;
  undefined4 local_ec;
  uint local_e8;
  int ***local_e4 [3];
  undefined4 uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  int **local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 local_b4;
  uint uStack_b0;
  int ***apppiStack_ac [3];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [4];
  int ***pppiStack_50;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b960f6;
  local_14 = ExceptionList;
  for (local_12c = (undefined4 ****)param_1[0x142];
      (local_12c != (undefined4 ****)0x0 && (*local_12c != param_2));
      local_12c = (undefined4 ****)local_12c[2]) {
  }
  ppppuStack_130 = (undefined4 ****)0x5020e5;
  ExceptionList = &local_14;
  FUN_005f2ae0();
  for (pppuVar6 = param_1[0x13e]; pppuVar6 != (undefined4 ***)0x0;
      pppuVar6 = (undefined4 ***)pppuVar6[2]) {
    if ((undefined4 ***)*pppuVar6 == param_2) goto LAB_00502156;
  }
  pppuVar6 = param_1[0x13f];
  local_12c = (undefined4 ****)0x10;
  ppppuStack_130 = (undefined4 ****)0x502114;
  pppuVar4 = (undefined4 ***)FUN_00aae9af();
  if (pppuVar4 == (undefined4 ***)0x0) {
    pppuVar4 = (undefined4 ***)0x0;
  }
  else {
    *pppuVar4 = param_2;
    pppuVar4[1] = pppuVar6;
    pppuVar4[2] = (undefined4 **)0x0;
    *(undefined1 *)(pppuVar4 + 3) = 0;
  }
  pppuVar1 = param_1[0x140];
  param_1[0x13f] = pppuVar4;
  param_1[0x140] = (undefined4 ***)((int)pppuVar1 + 1);
  if (pppuVar1 == (undefined4 ***)0x0) {
    param_1[0x13e] = pppuVar4;
  }
  else {
    pppuVar6[2] = pppuVar4;
  }
LAB_00502156:
  local_f8 = (int **)&local_12c;
  local_12c = (undefined4 ****)0x3e8;
  uStack_138._4_4_ = (char *)param_1[0x2f3];
  ppppuStack_130 = (undefined4 ****)(param_2 + 0x1c);
  uStack_138._0_4_ = (int ****)0x502173;
  FUN_00568dc0();
  local_12c = (undefined4 ****)0x502180;
  FUN_0068de30();
  if (((param_3 == '\0') && (*(char *)(DAT_012588e8 + 0xd1c) != '\0')) &&
     (*(char *)(param_2 + 0x10d) != '\0')) {
    uVar8 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    local_12c = param_1 + 7;
    ppppuStack_130 = (undefined4 ****)param_2;
    uStack_138._4_4_ = (char *)0x5021b7;
    local_12c = (undefined4 ****)FUN_00469d10();
    uStack_138._4_4_ = (char *)0x5021c2;
    ppppuStack_130 = (undefined4 ****)uVar8;
    FUN_00457b00();
  }
  uVar2 = CONCAT44(uStack_138._4_4_,(int ****)uStack_138);
  uStack_138._0_4_ = (int ****)param_2[0xf7];
  if ((int ****)uStack_138 != (int ****)0x0) {
    if ((int)param_2[0x14] < *(int *)(DAT_012588e8 + 0xc04) - *(int *)(DAT_012588e8 + 0xc00) >> 2) {
      iVar9 = *(int *)(*(int *)(DAT_012588e8 + 0xc00) + (int)param_2[0x14] * 4);
    }
    else {
      iVar9 = 0;
    }
    local_12c = (undefined4 ****)0x0;
    uStack_138._4_4_ = (char *)((int)(int ****)uStack_138 >> 0x1f);
    ppppuStack_130 = (undefined4 ****)0x3e8;
    ppiStack_13c = (int **)0x50220b;
    uStack_138 = __allmul();
    local_12c = (undefined4 ****)(iVar9 * 1000 >> 0x1f);
    ppiStack_13c = (int **)0x502221;
    ppppuStack_130 = (undefined4 ****)(iVar9 * 1000);
    local_12c = (undefined4 ****)__alldiv();
    if ((int)local_12c < 1000) {
      local_12c = (undefined4 ****)0x3e8;
    }
    local_f8 = (int **)&local_12c;
    ppppuStack_130 = (undefined4 ****)0x50223d;
    FUN_005341a0();
    uVar2 = uStack_138;
  }
  uStack_138._0_4_ = (int ****)param_2[0x29];
  if ((int ****)uStack_138 != (int ****)0x0) {
    local_12c = (undefined4 ****)0x0;
    uStack_138._4_4_ = (char *)((int)(int ****)uStack_138 >> 0x1f);
    ppppuStack_130 = (undefined4 ****)0x186a0;
    ppiStack_13c = (int **)0x502258;
    uStack_138 = __allmul();
    local_12c = (undefined4 ****)0x0;
    ppppuStack_130 = (undefined4 ****)0x3e8;
    ppiStack_13c = (int **)0x502266;
    iVar9 = __alldiv();
    param_1[0x6a] = (undefined4 ***)((int)param_1[0x6a] + iVar9);
    if ((int)param_1[0x6a] < 1000) {
      param_1[0x6a] = (undefined4 ***)0x3e8;
    }
    uVar2 = uStack_138;
    if (100000 < (int)param_1[0x6a]) {
      param_1[0x6a] = (undefined4 ***)0x186a0;
    }
  }
  local_12c = param_1;
  ppppuStack_130 = (undefined4 ****)0x502293;
  uStack_138 = uVar2;
  FUN_00508330();
  if (*(undefined4 ****)(DAT_012588e8 + 0xb60) == param_1[8]) {
    local_f4 = (int **)0x0;
    local_f0 = (int ***)0x0;
    local_ec = 0;
    local_e8 = local_e8 & 0xffffff00;
    local_c = 3;
    local_12c = (undefined4 ****)0x2;
    ppppuStack_130 = (undefined4 ****)&DAT_00df8514;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (int ***)((uint)local_114[0] & 0xffffff00);
    uStack_138._4_4_ = (char *)0x5022e4;
    FUN_00409350();
    local_c._0_1_ = 4;
    local_12c = (undefined4 ****)0x9;
    ppppuStack_130 = (undefined4 ****)0xdfa8ec;
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = (int **)((uint)local_c8 & 0xffffff00);
    uStack_138._4_4_ = (char *)0x502308;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,5);
    local_12c = local_e4;
    ppppuStack_130 = (undefined4 ****)0x50231f;
    ppppuStack_130 = (undefined4 ****)(*(code *)(*param_2)[6])();
    puStack_10._0_1_ = 6;
    uStack_138._4_4_ = (char *)0x502339;
    FUN_00988fa0();
    ppppuStack_130 = &pppiStack_118;
    puStack_10._0_1_ = 7;
    uStack_138._4_4_ = (char *)0x502357;
    puVar5 = (undefined1 *)FUN_00988f20();
    ppppuStack_130 = (undefined4 ****)0xffffffff;
    puStack_10._0_1_ = 8;
    uStack_138._4_4_ = (char *)0x0;
    uStack_138._0_4_ = (int ****)&uStack_cc;
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = 0;
    ppiStack_13c = (int **)0x50238a;
    FUN_00408ed0();
    ppppuStack_130 = (undefined4 ****)0xffffffff;
    puStack_10._0_1_ = 9;
    uStack_138._4_4_ = (char *)0x0;
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = 0;
    ppiStack_13c = (int **)0x5023b7;
    uStack_138._0_4_ = (int ****)puVar5;
    FUN_00408ed0();
    ppppuStack_130 = (undefined4 ****)0x44;
    puStack_10._0_1_ = 10;
    uStack_138._4_4_ = (char *)0x5023c6;
    local_11c = (int **)FUN_00aae9af();
    puStack_10._0_1_ = 0xb;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 0xb;
    pppiStack_fc = (int ***)local_11c;
    if ((undefined4 ***)local_11c == (undefined4 ***)0x0) {
      local_11c = (int **)0x0;
      puStack_10._0_1_ = uVar3;
    }
    else {
      ppppuStack_130 = (undefined4 ****)0xffffffff;
      uStack_138._4_4_ = (char *)0x0;
      uStack_138._0_4_ = (int ****)auStack_8c;
      local_11c[5] = (int *)0xf;
      local_11c[4] = (int *)0x0;
      *(undefined1 *)local_11c = 0;
      ppiStack_13c = (int **)0x5023f5;
      FUN_00408ed0();
      ppppuStack_130 = (undefined4 ****)0xffffffff;
      puStack_10._0_1_ = 0xc;
      uStack_138._4_4_ = (char *)0x0;
      uStack_138._0_4_ = (int ****)auStack_70;
      local_11c[0xc] = (int *)0xf;
      local_11c[0xb] = (int *)0x0;
      *(undefined1 *)(local_11c + 7) = 0;
      ppiStack_13c = (int **)0x502418;
      FUN_00408ed0();
      local_11c[0xe] = (int *)0x0;
      local_11c[0xf] = (int *)0x0;
      *(undefined1 *)(local_11c + 0x10) = 0;
    }
    local_f0 = (int ***)0x1;
    ppppuStack_130 = (undefined4 ****)0x502449;
    local_f8 = local_11c;
    local_f4 = local_11c;
    FUN_00a39a80();
    if (0xf < uStack_9c) {
      ppppuStack_130 = (undefined4 ****)uStack_b0;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_00502461;
      FUN_00aae91b();
    }
    uStack_9c = 0xf;
    uStack_a0 = 0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    if (0xf < uStack_24) {
      ppppuStack_130 = (undefined4 ****)uStack_38;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_0050248c;
      FUN_00aae91b();
    }
    uStack_24 = 0xf;
    uStack_28 = 0;
    uStack_38 = uStack_38 & 0xffffff00;
    if (0xf < uStack_d4) {
      ppppuStack_130 = (undefined4 ****)local_e8;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_005024b4;
      FUN_00aae91b();
    }
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    if (0xf < local_b8) {
      ppppuStack_130 = (undefined4 ****)uStack_cc;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_005024d3;
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 3;
    local_b8 = 0xf;
    uStack_bc = 0;
    uStack_cc = uStack_cc & 0xffffff00;
    if (0xf < local_104) {
      ppppuStack_130 = (undefined4 ****)pppiStack_118;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_005024fa;
      FUN_00aae91b();
    }
    uStack_138._4_4_ = (char *)(param_1 + 7);
    ppppuStack_130 = (undefined4 ****)0x1;
    uStack_138._0_4_ = (int ****)auStack_54;
    ppiStack_13c = (int **)param_2;
    uStack_140 = 0x50251b;
    pppiStack_fc = (int ***)uStack_138._4_4_;
    FUN_00562570();
    puStack_10._0_1_ = 0xd;
    if (iStack_44 < 1) {
      ppppuStack_130 = (undefined4 ****)0x4;
      uStack_138._4_4_ = &DAT_00dfbe10;
      local_104 = 0xf;
      uStack_108 = 0;
      pppiStack_118 = (int ***)((uint)pppiStack_118 & 0xffffff00);
      uStack_138._0_4_ = (int ****)0x50254d;
      FUN_00409350();
      ppppuStack_130 = &pppiStack_118;
      uStack_138._4_4_ = (char *)&uStack_cc;
      puStack_10._0_1_ = 0xe;
      uStack_138._0_4_ = (int ****)0x502564;
      FUN_009a8ee0();
      puStack_10._0_1_ = 0xf;
      ppppuStack_130 = (undefined4 ****)0x502575;
      iVar9 = FUN_00475500();
      ppiStack_13c = (int **)*(undefined8 *)(iVar9 + 0x6c);
      uStack_138._0_4_ = (int ****)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20);
      uStack_138._4_4_ = (char *)*(undefined8 *)(iVar9 + 0x74);
      ppppuStack_130 = (undefined4 ****)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20);
      uStack_140 = 0x50259a;
      uStack_138._0_4_ = (int ****)FUN_009a9880();
      ppppuStack_130 = (undefined4 ****)0xffffffff;
      uStack_138._4_4_ = (char *)0x0;
      puStack_10._0_1_ = 0x10;
      ppiStack_13c = (int **)0x5025b2;
      FUN_00408ed0();
      if (0xf < uStack_d4) {
        ppppuStack_130 = (undefined4 ****)local_e8;
                    /* WARNING: Subroutine does not return */
        uStack_138._4_4_ = &UNK_005025c3;
        FUN_00aae91b();
      }
      uStack_d4 = 0xf;
      uStack_d8 = 0;
      local_e8 = local_e8 & 0xffffff00;
      puStack_10._0_1_ = 0x11;
      ppppuStack_130 = (undefined4 ****)0x5025e3;
      FUN_009adb70();
      if ((undefined4 ***)local_c8 != (undefined4 ***)0x0) {
        ppppuStack_130 = (undefined4 ****)0x5025f4;
        FUN_009e6a80();
        ppppuStack_130 = (undefined4 ****)local_c8;
                    /* WARNING: Subroutine does not return */
        uStack_138._4_4_ = &UNK_005025fe;
        FUN_00aae91b();
      }
      puStack_10._0_1_ = 0xd;
      local_c8 = (int **)0x0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      if (0xf < local_104) {
        ppppuStack_130 = (undefined4 ****)pppiStack_118;
                    /* WARNING: Subroutine does not return */
        uStack_138._4_4_ = &UNK_00502626;
        FUN_00aae91b();
      }
    }
    puStack_10._0_1_ = 0xd;
    ppppuStack_130 = (undefined4 ****)0x6;
    uStack_138._4_4_ = "EFFECT";
    local_104 = 0xf;
    uStack_108 = 0;
    pppiStack_118 = (int ***)((uint)pppiStack_118 & 0xffffff00);
    uStack_138._0_4_ = (int ****)0x50264a;
    FUN_00409350();
    ppppuStack_130 = (undefined4 ****)0xffffffff;
    puStack_10._0_1_ = 0x12;
    uStack_138._4_4_ = (char *)0x0;
    uStack_138._0_4_ = &pppiStack_118;
    uStack_78 = 0xf;
    uStack_7c = 0;
    auStack_8c[0] = 0;
    ppiStack_13c = (int **)0x50267b;
    FUN_00408ed0();
    ppppuStack_130 = (undefined4 ****)0xffffffff;
    uStack_138._4_4_ = (char *)0x0;
    uStack_138._0_4_ = (int ****)auStack_54;
    puStack_10._0_1_ = 0x13;
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = 0;
    ppiStack_13c = (int **)0x5026af;
    FUN_00408ed0();
    ppppuStack_130 = (undefined4 ****)0x44;
    puStack_10._0_1_ = 0x14;
    uStack_138._4_4_ = (char *)0x5026be;
    pppuVar6 = (undefined4 ***)FUN_00aae9af();
    puStack_10._0_1_ = 0x15;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 0x15;
    if (pppuVar6 == (undefined4 ***)0x0) {
      pppuVar6 = (undefined4 ***)0x0;
      puStack_10._0_1_ = uVar3;
    }
    else {
      ppppuStack_130 = (undefined4 ****)0xffffffff;
      uStack_138._4_4_ = (char *)0x0;
      uStack_138._0_4_ = (int ****)auStack_8c;
      pppuVar6[5] = (undefined4 **)0xf;
      pppuVar6[4] = (undefined4 **)0x0;
      *(undefined1 *)pppuVar6 = 0;
      ppiStack_13c = (int **)0x5026ed;
      FUN_00408ed0();
      ppppuStack_130 = (undefined4 ****)0xffffffff;
      puStack_10._0_1_ = 0x16;
      uStack_138._4_4_ = (char *)0x0;
      uStack_138._0_4_ = (int ****)auStack_70;
      pppuVar6[0xc] = (undefined4 **)0xf;
      pppuVar6[0xb] = (undefined4 **)0x0;
      *(undefined1 *)(pppuVar6 + 7) = 0;
      ppiStack_13c = (int **)0x502710;
      FUN_00408ed0();
      pppuVar6[0xe] = local_11c;
      pppuVar6[0xf] = (undefined4 **)0x0;
      *(undefined1 *)(pppuVar6 + 0x10) = 0;
    }
    local_11c[0xf] = (int *)pppuVar6;
    local_f0 = (int ***)0x2;
    ppppuStack_130 = (undefined4 ****)0x502748;
    local_f4 = (int **)pppuVar6;
    FUN_00a39a80();
    puStack_10._0_1_ = 0xd;
    if (0xf < local_104) {
      ppppuStack_130 = (undefined4 ****)pppiStack_118;
                    /* WARNING: Subroutine does not return */
      uStack_138._4_4_ = &UNK_00502761;
      FUN_00aae91b();
    }
    ppppuStack_130 = (undefined4 ****)0x4;
    uStack_138._4_4_ = &DAT_00dfaa80;
    local_104 = 0xf;
    uStack_108 = 0;
    pppiStack_118 = (int ***)((uint)pppiStack_118 & 0xffffff00);
    uStack_138._0_4_ = (int ****)0x502780;
    FUN_00409350();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x17);
    ppppuStack_130 = (undefined4 ****)&local_e8;
    uStack_138._4_4_ = (char *)0x502797;
    puVar5 = (undefined1 *)(*(code *)(*param_2)[0xb])();
    local_12c = (undefined4 ****)0xffffffff;
    local_c._0_1_ = 0x18;
    ppppuStack_130 = (undefined4 ****)0x0;
    uStack_138._4_4_ = (char *)local_114;
    uStack_74 = 0xf;
    uStack_78 = 0;
    auStack_88[0] = 0;
    uStack_138._0_4_ = (int ****)0x5027ca;
    FUN_00408ed0();
    local_12c = (undefined4 ****)0xffffffff;
    local_c._0_1_ = 0x19;
    ppppuStack_130 = (undefined4 ****)0x0;
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = 0;
    uStack_138._0_4_ = (int ****)0x5027f7;
    uStack_138._4_4_ = puVar5;
    FUN_00408ed0();
    local_12c = (undefined4 ****)0x44;
    local_c._0_1_ = 0x1a;
    ppppuStack_130 = (undefined4 ****)0x502806;
    ppppuVar7 = (undefined4 ****)FUN_00aae9af();
    local_c._0_1_ = 0x1b;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x1b;
    if (ppppuVar7 == (undefined4 ****)0x0) {
      pppiStack_118 = (int ***)0x0;
      local_c._0_1_ = uVar3;
    }
    else {
      local_12c = (undefined4 ****)0xffffffff;
      ppppuStack_130 = (undefined4 ****)0x0;
      uStack_138._4_4_ = auStack_88;
      ppppuVar7[5] = (undefined4 ***)0xf;
      ppppuVar7[4] = (undefined4 ***)0x0;
      *(undefined1 *)ppppuVar7 = 0;
      uStack_138._0_4_ = (int ****)0x502835;
      pppiStack_118 = (int ***)ppppuVar7;
      FUN_00408ed0();
      local_12c = (undefined4 ****)0xffffffff;
      local_c._0_1_ = 0x1c;
      ppppuStack_130 = (undefined4 ****)0x0;
      uStack_138._4_4_ = auStack_6c;
      ppppuVar7[0xc] = (undefined4 ***)0xf;
      ppppuVar7[0xb] = (undefined4 ***)0x0;
      *(undefined1 *)(ppppuVar7 + 7) = 0;
      uStack_138._0_4_ = (int ****)0x502858;
      FUN_00408ed0();
      ppppuVar7[0xe] = (undefined4 ***)local_11c;
      ppppuVar7[0xf] = (undefined4 ***)0x0;
      *(undefined1 *)(ppppuVar7 + 0x10) = 0;
      pppiStack_118 = (int ***)ppppuVar7;
    }
    local_11c[0xf] = (int *)pppiStack_118;
    local_ec = 3;
    local_12c = (undefined4 ****)0x502890;
    local_f0 = pppiStack_118;
    FUN_00a39a80();
    if (0xf < uStack_d0) {
      local_12c = (undefined4 ****)local_e4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_005028a5;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0xd;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    local_e4[0] = (int ***)((uint)local_e4[0] & 0xffffff00);
    if (0xf < local_100) {
      local_12c = (undefined4 ****)local_114[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_005028cc;
      FUN_00aae91b();
    }
    local_12c = (undefined4 ****)0x10;
    ppppuStack_130 = (undefined4 ****)0xdf2714;
    uStack_98 = 0xf;
    uStack_9c = 0;
    apppiStack_ac[0] = (int ***)((uint)apppiStack_ac[0] & 0xffffff00);
    uStack_138._4_4_ = (char *)0x5028f6;
    FUN_00409350();
    local_c._0_1_ = 0x1d;
    local_12c = (undefined4 ****)0x9;
    ppppuStack_130 = (undefined4 ****)0xdf2728;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (int ***)((uint)local_114[0] & 0xffffff00);
    uStack_138._4_4_ = (char *)0x50291a;
    FUN_00409350();
    local_12c = apppiStack_ac;
    ppppuStack_130 = (undefined4 ****)&local_c8;
    local_c._0_1_ = 0x1e;
    uStack_138._4_4_ = (char *)0x502931;
    FUN_009a8ee0();
    local_c._0_1_ = 0x1f;
    local_12c = (undefined4 ****)0x502942;
    iVar9 = FUN_00475500();
    uStack_138._0_4_ = (int ****)*(undefined8 *)(iVar9 + 0x6c);
    uStack_138._4_4_ = (char *)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20);
    ppppuStack_130 = (undefined4 ****)*(undefined8 *)(iVar9 + 0x74);
    local_12c = (undefined4 ****)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20);
    ppiStack_13c = (int **)0x502967;
    local_12c = (undefined4 ****)FUN_009a9880();
    ppppuStack_130 = local_114;
    uStack_138._4_4_ = auStack_88;
    local_c._0_1_ = 0x20;
    uStack_138._0_4_ = (int ****)0x502982;
    FUN_00424aa0();
    local_12c = (undefined4 ****)0x44;
    local_c._0_1_ = 0x21;
    ppppuStack_130 = (undefined4 ****)0x502993;
    iVar9 = FUN_00aae9af();
    local_c._0_1_ = 0x22;
    if (iVar9 == 0) {
      local_f0 = (undefined4 ***)0x0;
    }
    else {
      local_12c = (undefined4 ****)pppiStack_118;
      uStack_138._4_4_ = (undefined1 *)0x5029b3;
      ppppuStack_130 = (undefined4 ****)iVar9;
      local_f0 = (int ***)FUN_0042b900();
    }
    local_ec = 4;
    pppiStack_118[0xf] = (int **)local_f0;
    local_12c = (undefined4 ****)0x5029d6;
    FUN_00a39a80();
    if (0xf < uStack_d0) {
      local_12c = (undefined4 ****)local_e4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_005029eb;
      FUN_00aae91b();
    }
    local_12c = (undefined4 ****)&local_c8;
    uStack_d0 = 0xf;
    uStack_d4 = 0;
    local_e4[0] = (int ***)((uint)local_e4[0] & 0xffffff00);
    local_c._0_1_ = 0x1e;
    ppppuStack_130 = (undefined4 ****)0x502a0c;
    FUN_009a9740();
    if (0xf < local_100) {
      local_12c = (undefined4 ****)local_114[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_00502a1c;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0xd;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (int ***)((uint)local_114[0] & 0xffffff00);
    if (0xf < uStack_98) {
      local_12c = (undefined4 ****)apppiStack_ac[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_00502a46;
      FUN_00aae91b();
    }
    local_12c = (undefined4 ****)0x9;
    ppppuStack_130 = (undefined4 ****)0xdf0a24;
    uStack_98 = 0xf;
    uStack_9c = 0;
    apppiStack_ac[0] = (int ***)((uint)apppiStack_ac[0] & 0xffffff00);
    uStack_138._4_4_ = (char *)0x502a71;
    FUN_00409350();
    local_c._0_1_ = 0x23;
    local_12c = (undefined4 ****)0x9;
    ppppuStack_130 = (undefined4 ****)0xdfa8ec;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (int ***)((uint)local_114[0] & 0xffffff00);
    uStack_138._4_4_ = (char *)0x502a95;
    FUN_00409350();
    local_c._0_1_ = 0x24;
    pppiStack_118 = &ppuStack_1b0;
    ppuStack_1b0 = (int **)0x0;
    puStack_1ac = (undefined1 *)0x0;
    uVar17 = 0;
    uStack_90 = 0x2d2d2d;
    uVar16 = 0x2d2d2d;
    ppuVar15 = (undefined4 **)local_f8[1];
    ppuVar14 = (undefined4 **)*local_f8;
    uVar13 = 0;
    ppppiVar12 = apppiStack_ac;
    pppiVar10 = &local_f4;
    uVar11 = 0;
    FUN_006a4f40(pppiVar10,0,ppppiVar12,0,ppuVar14,ppuVar15,0x2d2d2d,0);
    uVar8 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1a8,uVar8,pppiVar10,uVar11,ppppiVar12,uVar13,ppuVar14,ppuVar15,uVar16,
                 uVar17);
    local_c._0_1_ = 0x25;
    ppuStack_1b0 = *(undefined4 ***)(DAT_012588e8 + 0xb24);
    puStack_1ac = &LAB_0055a780;
    uVar8 = FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,0x24);
    FUN_00549b30(uVar8);
    if (0xf < local_100) {
      local_12c = (undefined4 ****)local_114[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_00502b4d;
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = (int ***)((uint)local_114[0] & 0xffffff00);
    if (0xf < uStack_98) {
      local_12c = (undefined4 ****)apppiStack_ac[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_00502b6f;
      FUN_00aae91b();
    }
    if (0xf < uStack_3c) {
      local_12c = (undefined4 ****)pppiStack_50;
                    /* WARNING: Subroutine does not return */
      ppppuStack_130 = (undefined4 ****)&UNK_00502b88;
      FUN_00aae91b();
    }
    local_12c = (undefined4 ****)&local_f4;
    uStack_3c = 0xf;
    uStack_40 = 0;
    pppiStack_50 = (int ***)((uint)pppiStack_50 & 0xffffff00);
    ppppuStack_130 = (undefined4 ****)0x502baa;
    FUN_0042b9f0();
  }
  ExceptionList = local_14;
  return;
}


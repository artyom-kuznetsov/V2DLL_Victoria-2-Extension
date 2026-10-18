// FUN_0061ca40 @ 0061ca40  (requested 0061CA40, first bytes: 55 8B EC 6A FF 68 87 61)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0061ca40(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  int iVar16;
  int in_ECX;
  char *pcVar17;
  undefined1 uVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uStack_2f4;
  undefined1 local_2cc [8];
  int local_2c4;
  int local_2c0;
  undefined1 local_284 [36];
  undefined8 *local_260;
  undefined1 local_258 [28];
  undefined1 local_23c [20];
  undefined8 *local_228;
  int *local_224;
  undefined1 local_220 [28];
  undefined1 local_204 [28];
  undefined1 local_1e8 [28];
  uint local_1cc [4];
  undefined4 local_1bc;
  uint local_1b8;
  uint local_19c;
  int *piStack_198;
  uint local_194 [4];
  undefined4 local_184;
  uint local_180;
  undefined1 local_178 [28];
  undefined1 local_15c [16];
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_140;
  int local_130;
  undefined4 local_12c;
  undefined1 local_124;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [28];
  undefined1 local_e4 [28];
  undefined8 *local_c8;
  int *local_c4;
  undefined1 local_c0 [28];
  uint local_a4 [2];
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_94;
  uint local_90;
  int *local_88;
  int *local_84;
  undefined1 local_80 [36];
  undefined8 *local_5c;
  int local_58;
  uint local_54 [2];
  undefined1 local_4c [8];
  int local_44;
  uint local_40;
  undefined1 local_38 [28];
  int *local_1c;
  int *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  piVar19 = param_2;
  puStack_c = &LAB_00bb6187;
  local_10 = ExceptionList;
  local_18 = (int *)0x0;
  local_148 = 0xf;
  local_12c = 0xf;
  local_110 = 0xf;
  local_14c = 0;
  local_15c[0] = 0;
  local_130 = 0;
  local_140 = 0;
  local_114 = 0;
  local_124 = 0;
  local_108 = 0;
  local_104 = 1;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_88 = DAT_012588e8 + 0x2d7;
  uStack_2f4 = CONCAT44(0x61cad6,(int)uStack_2f4);
  ExceptionList = &local_10;
  local_1c = (int *)(**(code **)(*param_2 + 0x44))();
  if (0xf < (uint)local_1c[5]) {
    local_1c = (int *)*local_1c;
  }
  uStack_2f4 = CONCAT44(0x61caea,(int)uStack_2f4);
  piStack_198 = (int *)(**(code **)(*piVar19 + 0x44))();
  if (0xf < (uint)piStack_198[5]) {
    piStack_198 = (int *)*piStack_198;
  }
  uStack_2f4 = CONCAT44("filter_",local_1c);
  piVar6 = (int *)FUN_00aafe90();
  if (piVar6 == piStack_198) {
    uStack_2f4 = CONCAT44(0x61cb29,(int)uStack_2f4);
    iVar7 = (**(code **)(*piVar19 + 0x80))();
    pcVar1 = (&PTR_s_DIPLOMACY_FILTER_ALL_TOOLTIP_00f09640)[iVar7];
    local_44 = 0;
    local_40 = 0xf;
    local_54[0] = local_54[0] & 0xffffff00;
    pcVar17 = pcVar1;
    do {
      cVar4 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar4 != '\0');
    uStack_2f4 = CONCAT44((int)pcVar17 - (int)(pcVar1 + 1),pcVar1);
    FUN_00409350();
    uStack_2f4 = CONCAT44(local_54,local_9c);
    local_8._0_1_ = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 2;
    uStack_2f4 = CONCAT44(0x61cb75,(int)uStack_2f4);
    iVar7 = FUN_00475500();
    uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 3;
    FUN_00408ed0();
    if (0xf < local_180) {
      uStack_2f4 = CONCAT44(local_194[0],&UNK_0061cbc3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    local_8._0_1_ = 4;
    uStack_2f4 = CONCAT44(0x61cbee,(int)uStack_2f4);
    FUN_009adb70();
    if (local_98 != 0) {
      uStack_2f4 = CONCAT44(0x61cc03,(int)uStack_2f4);
      FUN_009e6a80();
      uStack_2f4 = CONCAT44(local_98,&UNK_0061cc0f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    uVar5 = (undefined1)local_8;
    local_8._0_1_ = 0;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0;
    if (0xf < local_40) {
      uStack_2f4 = CONCAT44(local_54[0],&UNK_0061cc3b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61cc4a,(int)uStack_2f4);
  local_1c = (int *)(**(code **)(*piVar19 + 0x44))();
  if (0xf < (uint)local_1c[5]) {
    local_1c = (int *)*local_1c;
  }
  uStack_2f4 = CONCAT44(0x61cc67,(int)uStack_2f4);
  puVar8 = (undefined4 *)(**(code **)(*piVar19 + 0x44))();
  if (0xf < (uint)puVar8[5]) {
    puVar8 = (undefined4 *)*puVar8;
  }
  uStack_2f4 = CONCAT44("sort_by_",local_1c);
  puVar9 = (undefined4 *)FUN_00aafe90();
  if (puVar9 == puVar8) {
    uStack_2f4 = CONCAT44(0x61cc97,(int)uStack_2f4);
    uVar10 = (**(code **)(*piVar19 + 0x80))();
    if (uVar10 < 9) {
      uStack_2f4 = CONCAT44(0x61ccaf,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_54,local_9c);
      local_8._0_1_ = 5;
      FUN_009a8ee0();
      local_8._0_1_ = 6;
      uStack_2f4 = CONCAT44(0x61cccd,(int)uStack_2f4);
      iVar7 = FUN_00475500();
      uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 7;
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x61cd0a,(int)uStack_2f4);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,5);
      uStack_2f4 = CONCAT44(local_9c,0x61cd1a);
      FUN_009a9740();
    }
    else {
      uVar5 = (undefined1)local_8;
      if (((int)(uVar10 - 9) < 0) ||
         (DAT_012588e8[0x2f9] - DAT_012588e8[0x2f8] >> 2 <= (int)(uVar10 - 9))) goto LAB_00621bd7;
      uStack_2f4 = CONCAT44(0x61cd5c,(int)uStack_2f4);
      uVar11 = FUN_004f97a0();
      local_8._0_1_ = 8;
      uStack_2f4 = CONCAT44(uVar11,local_80);
      FUN_0042c180();
      uStack_2f4 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x61cd94,(int)uStack_2f4);
      FUN_00408ad0();
    }
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61cda6,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61cdb0,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00621811:
    uVar5 = (undefined1)local_8;
    if (*(int *)(in_ECX + 0x38c) == DAT_012588e8[0x2d8]) goto LAB_00621bd7;
    uStack_2f4 = CONCAT44(0x621836,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 10;
    uStack_2f4 = CONCAT44(0x62184a,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_a4,local_4c);
    local_8._0_1_ = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    uStack_2f4 = CONCAT44(0x621865,(int)uStack_2f4);
    iVar7 = FUN_00475500();
    uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    local_8._0_1_ = 0xd;
    uStack_2f4 = CONCAT44(local_80,0x62189f);
    FUN_00988f20();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xe;
    FUN_00408ed0();
    if (0xf < local_180) {
      uStack_2f4 = CONCAT44(local_194[0],&UNK_006218cc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = local_194[0] & 0xffffff00;
    if (0xf < local_1b8) {
      uStack_2f4 = CONCAT44(local_1cc[0],&UNK_006218ff);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b8 = 0xf;
    local_1bc = 0;
    local_1cc[0] = local_1cc[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    uStack_2f4 = CONCAT44(local_4c,0x621926);
    FUN_009a9740();
    if (0xf < local_90) {
      uStack_2f4 = CONCAT44(local_a4[0],&UNK_0062193a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x621960,(int)uStack_2f4);
    FUN_00408ad0();
    local_5c = (undefined8 *)DAT_012588e8[0x2d7];
    uStack_2f4 = *(undefined8 *)(in_ECX + 0x388);
    piVar19 = (int *)FUN_005183f0();
    param_2 = (int *)((float)*piVar19 / 1000.0);
    uStack_2f4 = CONCAT44(0x6219c2,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xf;
    uVar5 = (undefined1)local_8;
    local_8._0_1_ = 0xf;
    if ((float)param_2 < 0.0) {
      uStack_2f4 = CONCAT44(0x6219dc,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 0x10;
      FUN_00408ed0();
      local_8._0_1_ = 0xf;
      uStack_2f4 = CONCAT44(0x6219fb,(int)uStack_2f4);
      FUN_00408ad0();
      uVar5 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar5;
    uStack_2f4 = CONCAT44(0x621a08,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x11;
    uStack_2f4 = CONCAT44(0x621a1c,(int)uStack_2f4);
    uVar11 = FUN_009885d0();
    local_8._0_1_ = 0x12;
    uStack_2f4 = CONCAT44(2,local_258);
    local_1c = (int *)FUN_00988d00();
    local_8._0_1_ = 0x13;
    uStack_2f4 = CONCAT44(0x621a5b,(int)uStack_2f4);
    local_18 = (int *)FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0x14;
    param_2 = (int *)FUN_009a8ee0();
    local_8._0_1_ = 0x15;
    uStack_2f4 = CONCAT44(0x621a7b,(int)uStack_2f4);
    iVar7 = FUN_00475500();
    uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    local_8._0_1_ = 0x16;
    uStack_2f4 = CONCAT44(local_18,0x621ab6);
    FUN_00988f20();
    local_8._0_1_ = 0x17;
    uStack_2f4 = CONCAT44(local_204,0x621ace);
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    uStack_2f4 = CONCAT44(local_1c,0x621ae3);
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    uStack_2f4 = CONCAT44(uVar11,0x621af2);
    FUN_00988f20();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0x1a;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x621b0d,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b18,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b23,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b2e,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b39,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0x14;
    uStack_2f4 = CONCAT44(local_4c,0x621b46);
    FUN_009a9740();
    uStack_2f4 = CONCAT44(0x621b51,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b5c,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x621b67,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0xf;
    uStack_2f4 = CONCAT44(0x621b73,(int)uStack_2f4);
    FUN_00408ad0();
    local_5c = (undefined8 *)DAT_012588e8[0x2d7];
    uStack_2f4 = *(undefined8 *)(in_ECX + 0x388);
    FUN_00517ed0();
    uStack_2f4 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x621bc8,(int)uStack_2f4);
    FUN_00408ad0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61cdc1,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61cdcb,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00621811;
  uStack_2f4 = CONCAT44(0x61cde3,(int)uStack_2f4);
  FUN_009885d0();
  local_8._0_1_ = 0x1c;
  uStack_2f4 = CONCAT44(0x61cdf4,(int)uStack_2f4);
  FUN_009885d0();
  local_8._0_1_ = 0x1d;
  uStack_2f4._0_4_ = 0x61ce05;
  uStack_2f4._4_4_ = local_54;
  piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_a4);
  piVar6 = (int *)(**(code **)(*piVar6 + 0x3c))();
  local_11 = piVar19 == piVar6;
  uStack_2f4 = CONCAT44(0x61ce22,(int)uStack_2f4);
  FUN_00408ad0();
  local_8._0_1_ = 0;
  uStack_2f4 = CONCAT44(0x61ce31,(int)uStack_2f4);
  FUN_00408ad0();
  if (local_11 != '\0') {
    uStack_2f4 = CONCAT44(0x61ce44,(int)uStack_2f4);
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    uStack_2f4 = CONCAT44(local_54,*(undefined4 *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4));
    FUN_00530e40();
LAB_0061ce6c:
    uStack_2f4 = 0xffffffff00000000;
    FUN_00448aa0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61ce97,(int)uStack_2f4);
  FUN_009885d0();
  local_8._0_1_ = 0x1f;
  uStack_2f4 = CONCAT44(0x61cea8,(int)uStack_2f4);
  FUN_009885d0();
  local_8._0_1_ = 0x20;
  uStack_2f4._0_4_ = 0x61ceb9;
  uStack_2f4._4_4_ = local_54;
  piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
  uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_a4);
  piVar6 = (int *)(**(code **)(*piVar6 + 0x3c))();
  local_11 = piVar19 == piVar6;
  uStack_2f4 = CONCAT44(0x61ced6,(int)uStack_2f4);
  FUN_00408ad0();
  local_8._0_1_ = 0;
  uStack_2f4 = CONCAT44(0x61cee5,(int)uStack_2f4);
  FUN_00408ad0();
  if (local_11 != '\0') {
    uStack_2f4 = CONCAT44(0x61cef8,(int)uStack_2f4);
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x21);
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    uStack_2f4 = CONCAT44(local_54,*(undefined4 *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4));
    FUN_0052fcd0();
    goto LAB_0061ce6c;
  }
  uStack_2f4 = CONCAT44(0x61cf2e,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61cf38,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
    uStack_2f4 = CONCAT44(0x61cf48,(int)uStack_2f4);
    uVar11 = (**(code **)(*piVar19 + 0x80))();
    uStack_2f4 = CONCAT44(uVar11,&param_2);
    puVar8 = (undefined4 *)FUN_0062f7b0();
    piVar19 = (int *)*puVar8;
    *puVar8 = 0;
    local_8._0_1_ = 0x22;
    uStack_2f4 = CONCAT44(0x61cf6a,(int)uStack_2f4);
    local_18 = piVar19;
    FUN_00475ef0();
    uStack_2f4 = CONCAT44(local_80,piVar19);
    FUN_00911be0();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0x23;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x61cf96,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61cfa2,(int)uStack_2f4);
    FUN_00475ef0();
    uVar5 = (undefined1)local_8;
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61cfae,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61cfb8,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
    iVar7 = *(int *)(DAT_012588e8[0x33e] + 8);
    uStack_2f4 = CONCAT44(0x61cfda,(int)uStack_2f4);
    iVar12 = (**(code **)(*piVar19 + 0x80))();
    uVar5 = (undefined1)local_8;
    if ((iVar7 == 0) || (*(int *)(DAT_012588e8[0x2b7] + iVar12 * 4) == 0)) goto LAB_00621bd7;
    local_1c = (int *)DAT_012588e8[0x2c3];
    uStack_2f4 = CONCAT44(0x61d00c,(int)uStack_2f4);
    iVar13 = FUN_00425a40();
    iVar12 = local_88[1];
    param_2 = (int *)CONCAT13(*(int *)(iVar13 + 4) == iVar12,param_2._0_3_);
    uStack_2f4 = CONCAT44(0x61d026,(int)uStack_2f4);
    iVar13 = FUN_00425ac0();
    bVar21 = true;
    if ((param_2._3_1_ != '\0') && (*(int **)(iVar7 + 0xa8) == local_1c)) {
      bVar21 = false;
    }
    uVar5 = (undefined1)local_8;
    if (((*(int *)(iVar13 + 4) == iVar12) && (*(int **)(iVar7 + 0xac) == local_1c)) || (!bVar21))
    goto LAB_00621bd7;
    piStack_198 = (int *)0x0;
    param_2 = (int *)0x0;
    uStack_2f4 = CONCAT44(0x61d077,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x24;
    uStack_2f4._4_4_ = (uint *)0x0;
    uStack_2f4._0_4_ = 0x61d088;
    uVar11 = FUN_0094bd40();
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,uVar11);
    FUN_00539630(iVar7,&piStack_198,&param_2,local_194,0);
    uVar10 = (int)piStack_198 - (int)param_2 >> 0x1f;
    local_84 = (int *)(((int)piStack_198 - (int)param_2 ^ uVar10) - uVar10);
    uStack_2f4 = CONCAT44(0x61d0bc,(int)uStack_2f4);
    iVar12 = FUN_00425a40();
    iVar7 = local_88[1];
    if (*(int *)(iVar12 + 4) == iVar7) {
LAB_0061d166:
      uStack_2f4 = CONCAT44(0x61d173,(int)uStack_2f4);
      uVar11 = FUN_004f97a0();
      uStack_2f4 = CONCAT44(uVar11,local_80);
      local_8._0_1_ = 0x25;
      FUN_0042c180();
      uStack_2f4 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0x26);
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x61d1aa,(int)uStack_2f4);
      FUN_00408ad0();
    }
    else {
      uStack_2f4 = CONCAT44(0x61d0d8,(int)uStack_2f4);
      iVar12 = FUN_00425ac0();
      if (*(int *)(iVar12 + 4) == iVar7) goto LAB_0061d166;
      uStack_2f4 = CONCAT44(0x61d0f1,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_1cc,local_9c);
      local_8._0_1_ = 0x27;
      local_1c = (int *)FUN_009a8ee0();
      local_8._0_1_ = 0x28;
      uStack_2f4 = CONCAT44(0x61d110,(int)uStack_2f4);
      iVar7 = FUN_00475500();
      uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 0x29;
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x61d14e,(int)uStack_2f4);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x27);
      uStack_2f4 = CONCAT44(local_9c,0x61d15e);
      FUN_009a9740();
    }
    local_8._0_1_ = 0x24;
    uStack_2f4 = CONCAT44(0x61d1b9,(int)uStack_2f4);
    FUN_00408ad0();
    if ((int)param_2 < (int)piStack_198) {
      uStack_2f4 = CONCAT44(0x61d1ce,(int)uStack_2f4);
      puVar8 = (undefined4 *)FUN_00425a40();
      local_260 = (undefined8 *)*puVar8;
      uStack_2f4 = CONCAT44(0x61d1f0,(int)uStack_2f4);
      FUN_004f97a0();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      piVar19 = (int *)0x1;
    }
    else {
      uStack_2f4 = CONCAT44(0x61d206,(int)uStack_2f4);
      piVar19 = (int *)FUN_00425ac0();
      local_5c = (undefined8 *)*piVar19;
      uStack_2f4 = CONCAT44(0x61d222,(int)uStack_2f4);
      FUN_004f97a0();
      local_8 = 0x2b;
      piVar19 = (int *)0x2;
    }
    uStack_2f4 = CONCAT44(0x61d239,(int)uStack_2f4);
    local_18 = piVar19;
    FUN_00401320();
    local_8 = 0x2c;
    if (((uint)piVar19 & 2) != 0) {
      piVar19 = (int *)((uint)piVar19 & 0xfffffffd);
      uStack_2f4 = CONCAT44(0x61d250,(int)uStack_2f4);
      FUN_00408ad0();
    }
    local_8._0_1_ = 0x2e;
    if (((uint)piVar19 & 1) != 0) {
      uStack_2f4 = CONCAT44(0x61d264,(int)uStack_2f4);
      FUN_00408ad0();
    }
    if ((int)local_84 < 0x19) {
      uStack_2f4 = CONCAT44(0x61d280,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x2f;
      uStack_2f4 = CONCAT44(0x61d294,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x30;
      uStack_2f4 = CONCAT44(0x61d2a8,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_204,local_9c);
      local_8._0_1_ = 0x31;
      FUN_009a8ee0();
      local_8._0_1_ = 0x32;
      uStack_2f4 = CONCAT44(0x61d2ca,(int)uStack_2f4);
      iVar7 = FUN_00475500();
      uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
      uVar11 = FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      local_8._0_1_ = 0x33;
      uStack_2f4 = CONCAT44(0x61d302,(int)uStack_2f4);
      uVar14 = FUN_004f97a0();
      local_8._0_1_ = 0x34;
      uStack_2f4 = CONCAT44(uVar14,0x61d317);
      FUN_00988fa0();
      local_8._0_1_ = 0x35;
      uStack_2f4 = CONCAT44(local_1cc,0x61d332);
      FUN_00988f20();
      local_8._0_1_ = 0x36;
      uStack_2f4 = CONCAT44(uVar11,0x61d344);
      FUN_00988f20();
      local_8._0_1_ = 0x37;
      uStack_2f4 = CONCAT44(local_284,0x61d35c);
      FUN_00988f20();
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 0x38;
      FUN_00448aa0();
      uStack_2f4 = CONCAT44(0x61d377,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d382,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d38d,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d398,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d3a3,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d3ae,(int)uStack_2f4);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x31);
      uStack_2f4 = CONCAT44(local_9c,0x61d3be);
      FUN_009a9740();
      uStack_2f4 = CONCAT44(0x61d3c9,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d3d4,(int)uStack_2f4);
      FUN_00408ad0();
    }
    else {
      if ((int)local_84 < 0x32) {
        uStack_2f4 = CONCAT44(0x61d3f8,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x39;
        uStack_2f4 = CONCAT44(0x61d40c,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x3a;
        uStack_2f4 = CONCAT44(0x61d420,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x3b;
        uStack_2f4 = CONCAT44(0x61d434,(int)uStack_2f4);
        FUN_009885d0();
        uStack_2f4 = CONCAT44(local_204,local_9c);
        local_8._0_1_ = 0x3c;
        FUN_009a8ee0();
        local_8._0_1_ = 0x3d;
        uStack_2f4 = CONCAT44(0x61d456,(int)uStack_2f4);
        iVar7 = FUN_00475500();
        uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
        uVar11 = FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
        local_8._0_1_ = 0x3e;
        uStack_2f4 = CONCAT44(0x61d48b,(int)uStack_2f4);
        uVar14 = FUN_004f97a0();
        local_8._0_1_ = 0x3f;
        uStack_2f4 = CONCAT44(uVar14,0x61d4a0);
        FUN_00988fa0();
        local_8._0_1_ = 0x40;
        uStack_2f4 = CONCAT44(local_1cc,0x61d4bb);
        FUN_00988f20();
        local_8._0_1_ = 0x41;
        uStack_2f4 = CONCAT44(uVar11,0x61d4cd);
        FUN_00988f20();
        local_8._0_1_ = 0x42;
        uStack_2f4 = CONCAT44(local_284,0x61d4e5);
        FUN_00988f20();
        local_8._0_1_ = 0x43;
        uStack_2f4 = CONCAT44(local_54,0x61d4fa);
        FUN_00988f20();
        local_8._0_1_ = 0x44;
        uStack_2f4 = CONCAT44(local_23c,0x61d512);
        FUN_00988f20();
        uStack_2f4 = 0xffffffff00000000;
        local_8._0_1_ = 0x45;
        FUN_00448aa0();
        uStack_2f4 = CONCAT44(0x61d52d,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d538,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d543,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d54e,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d559,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d564,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d56f,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d577,(int)uStack_2f4);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x3c);
      }
      else {
        uStack_2f4 = CONCAT44(0x61d585,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x46;
        uStack_2f4 = CONCAT44(0x61d599,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x47;
        uStack_2f4 = CONCAT44(0x61d5ad,(int)uStack_2f4);
        FUN_009885d0();
        local_8._0_1_ = 0x48;
        uStack_2f4 = CONCAT44(0x61d5c1,(int)uStack_2f4);
        FUN_009885d0();
        uStack_2f4 = CONCAT44(local_204,local_9c);
        local_8._0_1_ = 0x49;
        FUN_009a8ee0();
        local_8._0_1_ = 0x4a;
        uStack_2f4 = CONCAT44(0x61d5e3,(int)uStack_2f4);
        iVar7 = FUN_00475500();
        uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
        uVar11 = FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
        local_8._0_1_ = 0x4b;
        uStack_2f4 = CONCAT44(0x61d61b,(int)uStack_2f4);
        uVar14 = FUN_004f97a0();
        local_8._0_1_ = 0x4c;
        uStack_2f4 = CONCAT44(uVar14,0x61d630);
        FUN_00988fa0();
        local_8._0_1_ = 0x4d;
        uStack_2f4 = CONCAT44(local_1cc,0x61d64b);
        FUN_00988f20();
        local_8._0_1_ = 0x4e;
        uStack_2f4 = CONCAT44(uVar11,0x61d65d);
        FUN_00988f20();
        local_8._0_1_ = 0x4f;
        uStack_2f4 = CONCAT44(local_284,0x61d675);
        FUN_00988f20();
        local_8._0_1_ = 0x50;
        uStack_2f4 = CONCAT44(local_54,0x61d68a);
        FUN_00988f20();
        local_8._0_1_ = 0x51;
        uStack_2f4 = CONCAT44(local_23c,0x61d69f);
        FUN_00988f20();
        uStack_2f4 = 0xffffffff00000000;
        local_8._0_1_ = 0x52;
        FUN_00448aa0();
        uStack_2f4 = CONCAT44(0x61d6ba,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6c5,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6d0,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6db,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6e6,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6f1,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d6fc,(int)uStack_2f4);
        FUN_00408ad0();
        uStack_2f4 = CONCAT44(0x61d707,(int)uStack_2f4);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x49);
      }
      uStack_2f4 = CONCAT44(local_9c,0x61d717);
      FUN_009a9740();
      uStack_2f4 = CONCAT44(0x61d722,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d72d,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x61d738,(int)uStack_2f4);
      FUN_00408ad0();
    }
    local_8 = CONCAT31(local_8._1_3_,0x2e);
    uStack_2f4 = CONCAT44(0x61d747,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = 0xffffffff00000000;
    FUN_00448aa0();
    uStack_2f4 = CONCAT44(0x61d765,(int)uStack_2f4);
    FUN_00408ad0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61d775,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d77f,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_0062160f:
    param_2 = (int *)&stack0xfffffd14;
    uStack_2f4 = CONCAT44(DAT_012588e8[0x2d1],&stack0xfffffd14);
    FUN_0061b0d0();
    uStack_2f4 = CONCAT44(0x62164f,(int)uStack_2f4);
    iVar7 = (**(code **)(*piVar19 + 0x80))();
    param_2 = *(int **)((int)param_2 + iVar7 * 4);
    uStack_2f4 = CONCAT44(0x621664,(int)uStack_2f4);
    cVar4 = (**(code **)(*piVar19 + 0xc0))();
    if (cVar4 == '\0') {
      uStack_2f4 = CONCAT44(0x62171a,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x58;
      uStack_2f4 = CONCAT44(0x62172b,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_80,local_4c);
      local_8._0_1_ = 0x59;
      FUN_009a8ee0();
      local_8._0_1_ = 0x5a;
      uStack_2f4 = CONCAT44(0x621746,(int)uStack_2f4);
      iVar7 = FUN_00475500();
      uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      local_8._0_1_ = 0x5b;
      uStack_2f4 = CONCAT44(local_e4,0x621780);
      FUN_00988f20();
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 0x5c;
      FUN_00448aa0();
      uStack_2f4 = CONCAT44(0x62179b,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6217a6,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0x59;
    }
    else {
      uStack_2f4 = CONCAT44(0x62167c,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x53;
      uStack_2f4 = CONCAT44(0x62168d,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_80,local_4c);
      local_8._0_1_ = 0x54;
      FUN_009a8ee0();
      local_8._0_1_ = 0x55;
      uStack_2f4 = CONCAT44(0x6216a8,(int)uStack_2f4);
      iVar7 = FUN_00475500();
      uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
      local_8._0_1_ = 0x56;
      uStack_2f4 = CONCAT44(local_e4,0x6216e2);
      FUN_00988f20();
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 0x57;
      FUN_00448aa0();
      uStack_2f4 = CONCAT44(0x6216fd,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x621708,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0x54;
    }
    uStack_2f4._4_4_ = (uint *)local_4c;
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x6217b3);
    FUN_009a9740();
    uStack_2f4 = CONCAT44(0x6217bb,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x6217ca,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x6217d3,(int)uStack_2f4);
    (**(code **)(*piVar19 + 0x44))();
    uStack_2f4 = CONCAT44(0x6217dd,(int)uStack_2f4);
    uVar11 = FUN_0040b360();
    uStack_2f4 = CONCAT44(uVar11,local_88) & 0xffffffffff;
    FUN_00938ad0(param_2,local_38);
    uStack_2f4 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x5d);
    FUN_00448aa0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61d790,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d79a,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_0062160f;
  uStack_2f4 = CONCAT44(0x61d7ab,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d7b5,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_006213af:
    uStack_2f4 = CONCAT44(0x6213bf,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x5e;
    uStack_2f4 = CONCAT44(0x6213d0,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x5f;
    uStack_2f4._0_4_ = 0x6213e1;
    uStack_2f4._4_4_ = (uint *)local_80;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_e4);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x9c))();
    uVar5 = (**(code **)(*piVar6 + 0x94))();
    param_2 = (int *)CONCAT13(uVar5,param_2._0_3_);
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
    FUN_009885d0();
    if (param_2._3_1_ == '\0') {
      local_8._0_1_ = 0x67;
      (**(code **)(*piVar19 + 0x80))();
      uStack_2f4 = CONCAT44(0x6215ac,(int)uStack_2f4);
      uVar11 = FUN_004f97a0();
      local_8._0_1_ = 0x68;
      uStack_2f4 = CONCAT44(uVar11,0x6215c1);
      FUN_00988fa0();
      local_8._0_1_ = 0x69;
      uStack_2f4 = CONCAT44(local_80,0x6215d6);
      FUN_00988f20();
      uStack_2f4 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0x6a);
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x6215f1,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6215fc,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x621607,(int)uStack_2f4);
      FUN_00408ad0();
    }
    else {
      local_8._0_1_ = 0x60;
      (**(code **)(*piVar19 + 0x80))();
      uVar11 = FUN_004f97a0();
      local_8._0_1_ = 0x61;
      FUN_00988fa0(uVar11);
      local_8._0_1_ = 0x62;
      uVar11 = FUN_00988f20(local_80);
      local_8._0_1_ = 99;
      FUN_00408ed0(uVar11,0,0xffffffff);
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0;
      FUN_00408ad0();
      piVar6 = DAT_012588e8;
      iVar7 = (**(code **)(*piVar19 + 0x80))();
      local_5c = *(undefined8 **)(in_ECX + 0x388);
      uStack_2f4 = CONCAT44(local_220,
                            *(int *)(*(int *)(*(int *)(DAT_012587e4[1] +
                                                      *(int *)(in_ECX + 0x38c) * 4) + 0xbe8) +
                                    *(int *)(*(int *)(piVar6[0x2b7] + iVar7 * 4) + 0x20) * 4) + 0x6c
                           );
      uVar11 = FUN_0043b700();
      uStack_2f4 = CONCAT44(uVar11,local_1e8);
      local_8._0_1_ = 100;
      FUN_0042c180();
      local_8._0_1_ = 0x65;
      FUN_00988fa0();
      local_8 = CONCAT31(local_8._1_3_,0x66);
      uStack_2f4 = 0xffffffff00000000;
      FUN_00448aa0();
      uStack_2f4 = CONCAT44(0x62156a,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x621575,(int)uStack_2f4);
      FUN_00408ad0();
    }
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61d7c6,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d7d0,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_006213af;
  uStack_2f4 = CONCAT44(0x61d7e1,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d7eb,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  piVar6 = DAT_012588e8;
  if (cVar4 != '\0') {
    uStack_2f4 = 0x8dd0061d803;
    piVar19 = (int *)FUN_0090e850();
    local_8._0_1_ = 0x6b;
    uStack_2f4 = *(ulonglong *)(piVar6 + 0x2d7);
    param_2 = piVar19;
    (**(code **)(*piVar19 + 0x4c))();
    (**(code **)(*piVar19 + 0x48))(*(undefined4 *)(in_ECX + 0x388),*(undefined4 *)(in_ECX + 0x38c));
    uStack_2f4 = CONCAT44(local_38,piVar19);
    piVar19[6] = DAT_012588e8[0x2c3];
    FUN_00911be0();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0x6c;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x61d878,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61d884,(int)uStack_2f4);
    FUN_00475ef0();
    uVar5 = (undefined1)local_8;
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61d892,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d89c,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_006212cf:
    uStack_2f4 = CONCAT44(0x6212dc,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x6d;
    uStack_2f4._0_4_ = 0x6212ef;
    uStack_2f4._4_4_ = (uint *)local_80;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))();
    uStack_2f4._0_4_ = 0x6212f8;
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    piVar6 = (int *)*puVar8;
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x621306);
    FUN_00408ad0();
    param_2 = (int *)&stack0xfffffd14;
    uStack_2f4 = CONCAT44(DAT_012588e8[0x2d1],&stack0xfffffd14);
    FUN_0061b0d0();
    while (uVar5 = (undefined1)local_8, piVar6 != (int *)0x0) {
      iVar7 = *param_2;
      iVar12 = *piVar6;
      piVar6 = (int *)piVar6[2];
      if (((*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) & 0xfffffff8U) != 0) &&
         ((*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) & 0xfffffff8U) != 0)) {
        uStack_2f4 = CONCAT44(piVar19,0x621383);
        cVar4 = (**(code **)(*(int *)(*(int *)(iVar12 + 0x20) + 0x18) + 0x94))();
        if (cVar4 != '\0') {
          uStack_2f4 = CONCAT44(*(undefined4 *)(iVar7 + 0x3c),*(undefined4 *)(iVar7 + 0x2c));
          FUN_009373b0(iVar7,local_38);
          local_8 = CONCAT31(local_8._1_3_,0x6e);
          goto LAB_0061d959;
        }
      }
      param_2 = param_2 + 1;
    }
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61d8ad,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d8b7,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_006212cf;
  uStack_2f4 = CONCAT44(0x61d8c8,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d8d2,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
    piVar6 = DAT_012588e8 + 0x2d7;
    uStack_2f4 = CONCAT44(0x61d8ed,(int)uStack_2f4);
    (**(code **)(*DAT_012588e8 + 0x1c))();
    uStack_2f4 = CONCAT44(&param_2,&stack0xfffffd14);
    param_2 = (int *)0x0;
    FUN_0061aff0(piVar6,DAT_012588e8 + 0x2b7);
    piVar6 = piVar19 + 5;
    if (0xf < (uint)piVar19[10]) {
      piVar6 = (int *)*piVar6;
    }
    uStack_2f4 = CONCAT44(piVar6,0x61d92b);
    iVar7 = FUN_00aaf0c5();
    uVar5 = (undefined1)local_8;
    if ((iVar7 < 0) || ((int)param_2 <= iVar7)) goto LAB_00621bd7;
    uStack_2f4 = CONCAT44(local_38,*(undefined4 *)
                                    (*(int *)(*(int *)(local_2cc + iVar7 * 4 + -0x20) + 0x156c) + 8)
                         );
    FUN_0090a830();
    local_8 = CONCAT31(local_8._1_3_,0x6f);
LAB_0061d959:
    uStack_2f4 = 0xffffffff00000000;
    FUN_00408ed0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61d97a,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d984,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_006211f7:
    piVar6 = DAT_012588e8 + 0x2d7;
    uStack_2f4 = CONCAT44(0x62120a,(int)uStack_2f4);
    (**(code **)(*DAT_012588e8 + 0x1c))();
    uStack_2f4 = CONCAT44(&param_2,&stack0xfffffd14);
    param_2 = (int *)0x0;
    FUN_0061aff0(piVar6,DAT_012588e8 + 0x2b7);
    piVar6 = piVar19 + 5;
    if (0xf < (uint)piVar19[10]) {
      piVar6 = (int *)*piVar6;
    }
    uStack_2f4 = CONCAT44(piVar6,0x621248);
    iVar7 = FUN_00aaf0c5();
    uVar5 = (undefined1)local_8;
    if ((iVar7 < 0) || ((int)param_2 <= iVar7)) goto LAB_00621bd7;
    uVar11 = *(undefined4 *)(local_2cc + iVar7 * 4 + -0x20);
    uStack_2f4 = CONCAT44(0x621266,(int)uStack_2f4);
    param_2 = (int *)FUN_0050d510();
    uStack_2f4 = CONCAT44(&param_2,local_38);
    FUN_0054a540();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0x70;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x6212a3,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(local_c0,uVar11);
    FUN_0050d760();
    uStack_2f4 = 0xffffffff00000000;
    local_8 = CONCAT31(local_8._1_3_,0x71);
    FUN_00408ed0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61d995,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d99f,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_006211f7;
  uStack_2f4 = CONCAT44(0x61d9b0,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d9ba,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_006211f7;
  uStack_2f4 = CONCAT44(0x61d9cb,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61d9d5,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
    uVar5 = (undefined1)local_8;
    if (*(int *)(DAT_012588e8[0x33e] + 8) == 0) goto LAB_00621bd7;
    piVar19 = DAT_012588e8 + 0x2d7;
    uStack_2f4 = CONCAT44(0x61d9ff,(int)uStack_2f4);
    cVar4 = FUN_0042b220();
    uVar5 = (undefined1)local_8;
    if (cVar4 == '\0') goto LAB_00621bd7;
    local_5c = (undefined8 *)*piVar19;
    uStack_2f4 = CONCAT44(0x61da23,(int)uStack_2f4);
    piVar19 = (int *)FUN_005341f0();
    uStack_2f4 = CONCAT44(0x61da2d,(int)uStack_2f4);
    piVar6 = (int *)FUN_00427ee0();
    uStack_2f4 = 1000;
    iVar7 = __alldiv((longlong)*piVar6 * (longlong)*piVar19);
    param_2 = (int *)(iVar7 / 1000);
    uStack_2f4 = CONCAT44(&param_2,local_38);
    FUN_0054a540();
    local_8 = CONCAT31(local_8._1_3_,0x72);
    goto LAB_0061d959;
  }
  uStack_2f4 = CONCAT44(0x61da83,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61da8d,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
    uStack_2f4 = CONCAT44(0x61daa2,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0x73;
    uStack_2f4._0_4_ = 0x61dab3;
    uStack_2f4._4_4_ = local_54;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))();
    uStack_2f4._0_4_ = 0x61dabc;
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
    local_84 = (int *)*puVar8;
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x61dacc);
    FUN_00408ad0();
    param_2 = (int *)&stack0xfffffd14;
    uStack_2f4 = CONCAT44(DAT_012588e8[0x2d1],&stack0xfffffd14);
    FUN_0061b0d0();
    if (local_84 != (int *)0x0) {
      local_18 = param_2;
      do {
        iVar7 = *local_84;
        uStack_2f4 = CONCAT44(piVar19,0x61db30);
        local_84 = (int *)local_84[2];
        cVar4 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x20) + 0x18) + 0x94))();
        puVar15 = local_5c;
        if (cVar4 != '\0') {
          piVar20 = (int *)*local_18;
          piVar6 = piVar19 + 5;
          if (0xf < (uint)piVar19[10]) {
            piVar6 = (int *)*piVar6;
          }
          uStack_2f4 = CONCAT44(piVar6,0x61db54);
          piStack_198 = piVar20;
          local_1c = (int *)FUN_00aaf0c5();
          if ((int)local_1c < -1) {
            iVar7 = -2 - (int)local_1c;
            puVar15 = local_5c;
            if (-1 < iVar7) {
              uStack_2f4 = CONCAT44(0x61db75,(int)uStack_2f4);
              iVar12 = FUN_0090cc40();
              puVar15 = local_5c;
              if (iVar7 < *(int *)(iVar12 + 0x10) - *(int *)(iVar12 + 0xc) >> 2) {
                uStack_2f4 = CONCAT44(0x61db8b,(int)uStack_2f4);
                iVar12 = FUN_0090cc40();
                uVar11 = *(undefined4 *)(*(int *)(iVar12 + 0xc) + iVar7 * 4);
                uStack_2f4 = CONCAT44(0x61dba1,(int)uStack_2f4);
                FUN_009885d0();
                local_8._0_1_ = 0x74;
                uStack_2f4 = CONCAT44(0x61dbb5,(int)uStack_2f4);
                FUN_009885d0();
                local_8._0_1_ = 0x75;
                uStack_2f4 = CONCAT44(0x61dbc6,(int)uStack_2f4);
                FUN_009885d0();
                uStack_2f4 = CONCAT44(local_1e8,uVar11);
                local_8._0_1_ = 0x76;
                uVar11 = FUN_0090a830();
                uStack_2f4 = CONCAT44(local_54,local_9c);
                local_8._0_1_ = 0x77;
                param_2 = (int *)FUN_009a8ee0();
                local_8._0_1_ = 0x78;
                uStack_2f4 = CONCAT44(0x61dbf8,(int)uStack_2f4);
                iVar7 = FUN_00475500();
                uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
                local_8._0_1_ = 0x79;
                uStack_2f4 = CONCAT44(local_194,0x61dc36);
                FUN_00988f20();
                local_8._0_1_ = 0x7a;
                uStack_2f4 = CONCAT44(uVar11,0x61dc48);
                FUN_00988f20();
                local_8._0_1_ = 0x7b;
                uStack_2f4 = CONCAT44(local_1cc,0x61dc5d);
                FUN_00988f20();
                uStack_2f4 = 0xffffffff00000000;
                local_8._0_1_ = 0x7c;
                FUN_00408ed0();
                uStack_2f4 = CONCAT44(0x61dc78,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61dc83,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61dc8e,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61dc99,(int)uStack_2f4);
                FUN_00408ad0();
                local_8._0_1_ = 0x77;
                uStack_2f4 = CONCAT44(local_9c,0x61dca9);
                FUN_009a9740();
                uStack_2f4 = CONCAT44(0x61dcb4,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61dcbc,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61dcc7,(int)uStack_2f4);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                uStack_2f4 = CONCAT44(0x61dcd6,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = 0x61dce3;
                FUN_008a8650();
                local_2c4 = DAT_012588e8[0x2d7];
                local_2c0 = DAT_012588e8[0x2d8];
                uStack_2f4 = CONCAT44(local_2cc,local_220);
                FUN_0090a8e0();
                uStack_2f4 = 0xffffffff00000000;
                local_8 = CONCAT31(local_8._1_3_,0x7d);
                FUN_00408ed0();
                goto LAB_00621bce;
              }
            }
          }
          else {
            local_228 = (undefined8 *)piVar20[0xb];
            local_224 = piVar20 + 0xb;
            param_2 = (int *)0x0;
            uStack_2f4 = CONCAT44(0x61dd57,(int)uStack_2f4);
            cVar4 = FUN_0043a860();
            puVar15 = local_260;
            local_260 = local_228;
            while (cVar4 != '\0') {
              uStack_2f4 = *local_260;
              local_228 = local_260 + 1;
              piVar6 = (int *)FUN_009387c0();
              iVar12 = 0;
              iVar7 = piVar6[1] - *piVar6 >> 6;
              if (0 < iVar7) {
                do {
                  if (param_2 == local_1c) {
                    iVar7 = *piVar6;
                    uStack_2f4 = CONCAT44(0x61df61,(int)uStack_2f4);
                    FUN_009885d0();
                    local_8._0_1_ = 0x7e;
                    uStack_2f4 = CONCAT44(0x61df76,(int)uStack_2f4);
                    uVar11 = FUN_0055dd40();
                    local_8._0_1_ = 0x7f;
                    uStack_2f4 = CONCAT44(uVar11,0x61df8b);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x80;
                    uStack_2f4 = CONCAT44(local_a4,0x61dfa3);
                    FUN_00988f20();
                    uStack_2f4 = 0xffffffff00000000;
                    local_8._0_1_ = 0x81;
                    FUN_00408ed0();
                    uStack_2f4 = CONCAT44(0x61dfbe,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61dfc9,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61dfd4,(int)uStack_2f4);
                    FUN_00408ad0();
                    local_8._0_1_ = 0;
                    uStack_2f4 = CONCAT44(0x61dfe3,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(local_178,iVar12 * 0x40 + iVar7);
                    FUN_0094dbd0();
                    local_8._0_1_ = 0x82;
                    uStack_2f4 = CONCAT44(0x61dfff,(int)uStack_2f4);
                    FUN_00989020();
                    local_8._0_1_ = 0;
                    uStack_2f4 = CONCAT44(0x61e00e,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = 0;
                    FUN_00953560(local_54,piStack_198);
                    uVar18 = 0x83;
                    local_8._0_1_ = 0x83;
                    uVar5 = (undefined1)local_8;
                    local_8._0_1_ = 0x83;
                    if (local_44 != 0) {
                      uStack_2f4 = CONCAT44(local_54,0x61e040);
                      FUN_00988fa0();
                      local_8._0_1_ = 0x84;
                      uStack_2f4 = CONCAT44(0x61e04c,(int)uStack_2f4);
                      FUN_00989020();
                      local_8._0_1_ = 0x83;
                      uStack_2f4 = CONCAT44(0x61e057,(int)uStack_2f4);
                      FUN_00408ad0();
                      uVar5 = (undefined1)local_8;
                    }
                    local_8._0_1_ = uVar5;
                    uStack_2f4 = CONCAT44(0x61e065,(int)uStack_2f4);
                    param_2 = (int *)FUN_0055dd40();
                    local_8._0_1_ = 0x85;
                    uStack_2f4 = CONCAT44(0x61e07a,(int)uStack_2f4);
                    uVar11 = FUN_0055dd40();
                    local_8._0_1_ = 0x86;
                    uStack_2f4 = CONCAT44(param_2,"ENEMY");
                    FUN_0043ec10(local_38,"COUNTRY",uVar11);
                    local_8._0_1_ = 0x87;
                    uStack_2f4 = CONCAT44(0x61e0ad,(int)uStack_2f4);
                    FUN_00989020();
                    uStack_2f4 = CONCAT44(0x61e0b5,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e0c0,(int)uStack_2f4);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x83;
                    uStack_2f4 = CONCAT44(0x61e0ce,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e0d5,(int)uStack_2f4);
                    cVar4 = FUN_00952f10();
                    if (cVar4 == '\0') goto LAB_0061e16a;
                    uStack_2f4 = CONCAT44(local_c0,0x61e0e9);
                    uVar11 = FUN_00954510();
                    local_8._0_1_ = 0x88;
                    uStack_2f4 = CONCAT44(uVar11,0x61e0fb);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x89;
                    uStack_2f4 = CONCAT44(0x61e10d,(int)uStack_2f4);
                    FUN_00989020();
                    uStack_2f4 = CONCAT44(0x61e115,(int)uStack_2f4);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x83;
                    uStack_2f4 = CONCAT44(0x61e123,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e130,(int)uStack_2f4);
                    uVar11 = FUN_009542c0();
                    local_8._0_1_ = 0x8a;
                    uStack_2f4 = CONCAT44(uVar11,0x61e142);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x8b;
                    goto LAB_0061e149;
                  }
                  param_2 = (int *)((int)param_2 + 1);
                  iVar12 = iVar12 + 1;
                  piVar20 = piStack_198;
                } while (iVar12 < iVar7);
              }
              uStack_2f4 = CONCAT44(0x61ddb7,(int)uStack_2f4);
              cVar4 = FUN_0043a860();
              puVar15 = local_260;
              local_260 = local_228;
            }
            local_c8 = (undefined8 *)piVar20[0xf];
            local_c4 = piVar20 + 0xf;
            uStack_2f4 = CONCAT44(0x61ddd8,(int)uStack_2f4);
            local_228 = local_260;
            local_260 = puVar15;
            cVar4 = FUN_0043a860();
            puVar3 = local_c8;
            puVar15 = local_5c;
            while (local_5c = puVar3, local_c8 = local_5c, cVar4 != '\0') {
              uStack_2f4 = *local_5c;
              local_c8 = local_5c + 1;
              piVar6 = (int *)FUN_009387c0();
              iVar12 = 0;
              iVar7 = piVar6[1] - *piVar6 >> 6;
              if (0 < iVar7) {
                do {
                  if (param_2 == local_1c) {
                    iVar7 = *piVar6;
                    uStack_2f4 = CONCAT44(0x61e19d,(int)uStack_2f4);
                    FUN_009885d0();
                    local_8._0_1_ = 0x8c;
                    uStack_2f4 = CONCAT44(0x61e1af,(int)uStack_2f4);
                    uVar11 = FUN_0055dd40();
                    local_8._0_1_ = 0x8d;
                    uStack_2f4 = CONCAT44(uVar11,0x61e1c4);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x8e;
                    uStack_2f4 = CONCAT44(local_a4,0x61e1dc);
                    FUN_00988f20();
                    uStack_2f4 = 0xffffffff00000000;
                    local_8._0_1_ = 0x8f;
                    FUN_00408ed0();
                    uStack_2f4 = CONCAT44(0x61e1f7,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e202,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e20d,(int)uStack_2f4);
                    FUN_00408ad0();
                    local_8._0_1_ = 0;
                    uStack_2f4 = CONCAT44(0x61e21c,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(local_178,iVar12 * 0x40 + iVar7);
                    FUN_0094dbd0();
                    local_8._0_1_ = 0x90;
                    uStack_2f4 = CONCAT44(0x61e238,(int)uStack_2f4);
                    FUN_00989020();
                    local_8._0_1_ = 0;
                    uStack_2f4 = CONCAT44(0x61e247,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = 0;
                    FUN_00953560(local_54,piStack_198);
                    uVar18 = 0x91;
                    local_8._0_1_ = 0x91;
                    uVar5 = (undefined1)local_8;
                    local_8._0_1_ = 0x91;
                    if (local_44 != 0) {
                      uStack_2f4 = CONCAT44(local_54,0x61e279);
                      FUN_00988fa0();
                      local_8._0_1_ = 0x92;
                      uStack_2f4 = CONCAT44(0x61e285,(int)uStack_2f4);
                      FUN_00989020();
                      local_8._0_1_ = 0x91;
                      uStack_2f4 = CONCAT44(0x61e290,(int)uStack_2f4);
                      FUN_00408ad0();
                      uVar5 = (undefined1)local_8;
                    }
                    local_8._0_1_ = uVar5;
                    uStack_2f4 = CONCAT44(0x61e29e,(int)uStack_2f4);
                    param_2 = (int *)FUN_0055dd40();
                    local_8._0_1_ = 0x93;
                    uStack_2f4 = CONCAT44(0x61e2b3,(int)uStack_2f4);
                    uVar11 = FUN_0055dd40();
                    local_8._0_1_ = 0x94;
                    uStack_2f4 = CONCAT44(param_2,"ENEMY");
                    FUN_0043ec10(local_38,"COUNTRY",uVar11);
                    local_8._0_1_ = 0x95;
                    uStack_2f4 = CONCAT44(0x61e2e6,(int)uStack_2f4);
                    FUN_00989020();
                    uStack_2f4 = CONCAT44(0x61e2ee,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e2f9,(int)uStack_2f4);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x91;
                    uStack_2f4 = CONCAT44(0x61e307,(int)uStack_2f4);
                    FUN_00408ad0();
                    uStack_2f4 = CONCAT44(0x61e30e,(int)uStack_2f4);
                    cVar4 = FUN_00952f10();
                    if (cVar4 != '\0') {
                      uStack_2f4 = CONCAT44(local_c0,0x61e322);
                      uVar11 = FUN_00954510();
                      local_8._0_1_ = 0x96;
                      uStack_2f4 = CONCAT44(uVar11,0x61e334);
                      FUN_00988fa0();
                      local_8._0_1_ = 0x97;
                      uStack_2f4 = CONCAT44(0x61e346,(int)uStack_2f4);
                      FUN_00989020();
                      uStack_2f4 = CONCAT44(0x61e34e,(int)uStack_2f4);
                      FUN_00408ad0();
                      local_8._0_1_ = 0x91;
                      uStack_2f4 = CONCAT44(0x61e35c,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x61e369,(int)uStack_2f4);
                      uVar11 = FUN_009542c0();
                      local_8._0_1_ = 0x98;
                      uStack_2f4 = CONCAT44(uVar11,0x61e37b);
                      FUN_00988fa0();
                      local_8._0_1_ = 0x99;
LAB_0061e149:
                      uStack_2f4 = CONCAT44(0x61e154,(int)uStack_2f4);
                      FUN_00989020();
                      uStack_2f4 = CONCAT44(0x61e15c,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x61e16a,(int)uStack_2f4);
                      local_8._0_1_ = uVar18;
                      FUN_00408ad0();
                    }
LAB_0061e16a:
                    uStack_2f4 = CONCAT44(param_1,0x61e179);
                    FUN_0040c830();
                    uStack_2f4 = CONCAT44(0x61e181,(int)uStack_2f4);
                    FUN_00408ad0();
                    goto LAB_00621be6;
                  }
                  param_2 = (int *)((int)param_2 + 1);
                  iVar12 = iVar12 + 1;
                } while (iVar12 < iVar7);
              }
              uStack_2f4 = CONCAT44(0x61de34,(int)uStack_2f4);
              cVar4 = FUN_0043a860();
              puVar3 = local_c8;
              puVar15 = local_5c;
            }
          }
        }
        local_5c = puVar15;
        local_18 = local_18 + 1;
      } while (local_84 != (int *)0x0);
    }
    local_18 = *(int **)(DAT_012588e8[0x33e] + 8);
    if (local_18 != (int *)0x0) {
      uStack_2f4 = CONCAT44(0x61de6b,(int)uStack_2f4);
      FUN_0094bd40();
      uStack_2f4 = CONCAT44(0x61de7b,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x9a;
      uStack_2f4 = CONCAT44(0x61de8f,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x9b;
      uStack_2f4 = CONCAT44(0x61dea0,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0x9c;
      uStack_2f4._0_4_ = 0x61deb1;
      uStack_2f4._4_4_ = local_54;
      piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
      uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_a4);
      piVar6 = (int *)(**(code **)(*piVar6 + 0x6c))();
      piVar6 = (int *)(**(code **)(*piVar6 + 0x9c))();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0;
      FUN_00408ad0();
      cVar4 = (**(code **)(*piVar6 + 0x94))(piVar19);
      if (cVar4 == '\0') {
        FUN_009885d0();
        local_8._0_1_ = 0x9d;
        FUN_009885d0();
        local_8._0_1_ = 0x9e;
        FUN_009885d0();
        local_8._0_1_ = 0x9f;
        piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_54);
        piVar6 = (int *)(**(code **)(*piVar6 + 0x6c))(local_a4);
        piVar6 = (int *)(**(code **)(*piVar6 + 0x9c))(local_194);
        FUN_00408ad0();
        FUN_00408ad0();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        cVar4 = (**(code **)(*piVar6 + 0x94))(piVar19);
        if (cVar4 != '\0') {
          param_2 = (int *)0x0;
          uStack_2f4 = CONCAT44(0x61e447,(int)uStack_2f4);
          puVar8 = (undefined4 *)FUN_005fcd40();
          piVar6 = (int *)*puVar8;
          while (piVar6 != (int *)0x0) {
            iVar7 = *piVar6;
            piVar6 = (int *)piVar6[2];
            uStack_2f4 = CONCAT44(piVar19,0x61e461);
            cVar4 = (**(code **)(*(int *)(iVar7 + 0x1c) + 0x58))();
            if (cVar4 != '\0') goto LAB_0061e47d;
            param_2 = (int *)((int)param_2 + 1);
          }
        }
      }
      else {
        param_2 = (int *)0x0;
        puVar8 = (undefined4 *)FUN_005fcd40();
        piVar6 = (int *)*puVar8;
        while (piVar6 != (int *)0x0) {
          iVar7 = *piVar6;
          piVar6 = (int *)piVar6[2];
          uStack_2f4 = CONCAT44(piVar19,0x61df36);
          cVar4 = (**(code **)(*(int *)(iVar7 + 0x1c) + 0x58))();
          if (cVar4 != '\0') goto LAB_0061e47d;
          param_2 = (int *)((int)param_2 + 1);
        }
      }
      goto LAB_0061e488;
    }
    goto LAB_0061e541;
  }
  uStack_2f4 = CONCAT44(0x61e80d,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e817,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00620d93:
    uStack_2f4 = CONCAT44(0x620da0,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xb0;
    uStack_2f4._0_4_ = 0x620db3;
    uStack_2f4._4_4_ = (uint *)local_80;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))();
    uStack_2f4._0_4_ = 0x620dbc;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x2c))();
    piVar6 = (int *)*piVar6;
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x620dca);
    FUN_00408ad0();
    param_2 = (int *)0x0;
    local_18 = (int *)&stack0xfffffd14;
    uStack_2f4 = CONCAT44(DAT_012588e8[0x2d1],&stack0xfffffd14);
    FUN_0061b0d0();
    piVar20 = param_2;
    uVar5 = (undefined1)local_8;
    if (piVar6 != (int *)0x0) {
LAB_00620e13:
      iVar7 = *piVar6;
      piVar6 = (int *)piVar6[2];
      uStack_2f4 = CONCAT44(piVar19,0x620e2a);
      cVar4 = (**(code **)(*(int *)(*(int *)(iVar7 + 0x20) + 0x18) + 0x94))();
      if (cVar4 == '\0') goto code_r0x00620e2e;
      iVar7 = local_18[(int)piVar20];
      local_19c = 0;
      piStack_198 = (int *)0x0;
      uStack_2f4 = CONCAT44(0x620e56,(int)uStack_2f4);
      param_2 = (int *)iVar7;
      (**(code **)(*piVar19 + 0x44))();
      uStack_2f4 = CONCAT44(0x620e60,(int)uStack_2f4);
      cVar4 = FUN_0040b360();
      iVar12 = 0;
      if (cVar4 == '\0') {
        local_1c = (int *)(*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 3);
        if (0 < (int)local_1c) {
          do {
            iVar7 = *(int *)((int)param_2 + 0x3c);
            local_5c = *(undefined8 **)(iVar7 + iVar12 * 8);
            piVar19 = (int *)(iVar7 + iVar12 * 8);
            iVar7 = *(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 4 + iVar12 * 8) * 4);
            uVar10 = *(uint *)(iVar7 + 0x1a0);
            bVar21 = CARRY4(local_19c,uVar10);
            local_19c = local_19c + uVar10;
            piStack_198 = (int *)((int)piStack_198 + (uint)bVar21 + *(int *)(iVar7 + 0x1a4));
            uStack_2f4 = CONCAT44(0x62102d,(int)uStack_2f4);
            FUN_009885d0();
            local_8._0_1_ = 0xb8;
            uStack_2f4 = CONCAT44(0x62103e,(int)uStack_2f4);
            FUN_009885d0();
            local_8._0_1_ = 0xb9;
            local_5c = (undefined8 *)*piVar19;
            local_18 = (int *)&uStack_2f4;
            uStack_2f4 = *(undefined8 *)(*(int *)(DAT_012587e4[1] + piVar19[1] * 4) + 0x1a0);
            local_18 = (int *)FUN_00988bb0(local_1e8,0);
            local_8._0_1_ = 0xba;
            uStack_2f4 = CONCAT44(0x621091,(int)uStack_2f4);
            FUN_0055dd40();
            local_8._0_1_ = 0xbb;
            uStack_2f4 = CONCAT44(local_80,0x6210a6);
            FUN_00988f20();
            local_8._0_1_ = 0xbc;
            uStack_2f4 = CONCAT44(local_18,0x6210bb);
            FUN_00988f20();
            local_8._0_1_ = 0xbd;
            uStack_2f4 = CONCAT44(local_e4,0x6210d0);
            FUN_00988f20();
            local_8._0_1_ = 0xbe;
            uStack_2f4 = CONCAT44(0x6210df,(int)uStack_2f4);
            FUN_00989020();
            uStack_2f4 = CONCAT44(0x6210e7,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x6210f2,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x6210fd,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x621108,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x621113,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x62111b,(int)uStack_2f4);
            FUN_00408ad0();
            local_8._0_1_ = 0;
            uStack_2f4 = CONCAT44(0x62112a,(int)uStack_2f4);
            FUN_00408ad0();
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)local_1c);
        }
      }
      else {
        local_1c = (int *)(*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) >> 3);
        if (0 < (int)local_1c) {
          iVar7 = 0;
          do {
            local_5c = *(undefined8 **)(*(int *)((int)param_2 + 0x2c) + iVar7 * 8);
            piVar19 = (int *)(*(int *)((int)param_2 + 0x2c) + iVar7 * 8);
            iVar12 = *(int *)(DAT_012587e4[1] + piVar19[1] * 4);
            uVar10 = *(uint *)(iVar12 + 0x1a0);
            bVar21 = CARRY4(local_19c,uVar10);
            local_19c = local_19c + uVar10;
            piStack_198 = (int *)((int)piStack_198 + (uint)bVar21 + *(int *)(iVar12 + 0x1a4));
            uStack_2f4 = CONCAT44(0x620ec6,(int)uStack_2f4);
            FUN_009885d0();
            local_8._0_1_ = 0xb1;
            uStack_2f4 = CONCAT44(0x620ed7,(int)uStack_2f4);
            FUN_009885d0();
            local_8._0_1_ = 0xb2;
            local_5c = (undefined8 *)*piVar19;
            local_18 = (int *)&uStack_2f4;
            uStack_2f4 = *(undefined8 *)(*(int *)(DAT_012587e4[1] + piVar19[1] * 4) + 0x1a0);
            local_18 = (int *)FUN_00988bb0(local_1e8,0);
            local_8._0_1_ = 0xb3;
            uStack_2f4 = CONCAT44(0x620f2a,(int)uStack_2f4);
            FUN_0055dd40();
            local_8._0_1_ = 0xb4;
            uStack_2f4 = CONCAT44(local_80,0x620f3f);
            FUN_00988f20();
            local_8._0_1_ = 0xb5;
            uStack_2f4 = CONCAT44(local_18,0x620f54);
            FUN_00988f20();
            local_8._0_1_ = 0xb6;
            uStack_2f4 = CONCAT44(local_e4,0x620f69);
            FUN_00988f20();
            local_8._0_1_ = 0xb7;
            uStack_2f4 = CONCAT44(0x620f78,(int)uStack_2f4);
            FUN_00989020();
            uStack_2f4 = CONCAT44(0x620f80,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x620f8b,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x620f96,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x620fa1,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x620fac,(int)uStack_2f4);
            FUN_00408ad0();
            uStack_2f4 = CONCAT44(0x620fb4,(int)uStack_2f4);
            FUN_00408ad0();
            local_8._0_1_ = 0;
            uStack_2f4 = CONCAT44(0x620fc3,(int)uStack_2f4);
            FUN_00408ad0();
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)local_1c);
        }
      }
      uStack_2f4 = CONCAT44(0x621141,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xbf;
      param_2 = (int *)&uStack_2f4;
      uStack_2f4 = CONCAT44(piStack_198,local_19c);
      uVar11 = FUN_00988bb0(local_178,0);
      uStack_2f4 = CONCAT44(uVar11,local_100);
      local_8._0_1_ = 0xc0;
      FUN_0042c180();
      local_8._0_1_ = 0xc1;
      uStack_2f4 = CONCAT44(local_80,0x62119e);
      FUN_00988f20();
      local_8._0_1_ = 0xc2;
      uStack_2f4 = CONCAT44(local_15c,0x6211b3);
      FUN_00988f20();
      uStack_2f4 = 0xffffffff00000000;
      local_8 = CONCAT31(local_8._1_3_,0xc3);
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x6211ce,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6211d9,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6211e4,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6211ef,(int)uStack_2f4);
      FUN_00408ad0();
      goto LAB_00621bce;
    }
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61e828,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e832,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00620d93;
  uStack_2f4 = CONCAT44(0x61e843,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e84d,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00620c33:
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = CONCAT44(2,*(undefined4 *)
                             (*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0x1430));
    uVar11 = FUN_00988a50();
    uStack_2f4 = CONCAT44(uVar11,local_38);
    local_8._0_1_ = 0xc4;
    FUN_0042c180();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xc5;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x620ca1,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x620cb0,(int)uStack_2f4);
    FUN_00408ad0();
    uVar5 = (undefined1)local_8;
    if (*(int *)(in_ECX + 0x38c) != DAT_012588e8[0x2d8]) goto LAB_00621bd7;
    if (*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0x1430) != 0) {
      local_5c = *(undefined8 **)(in_ECX + 0x388);
      uStack_2f4 = CONCAT44(local_178,0x620d16);
      uVar11 = (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) +
                                    0x60c) + 0x1c))();
      local_8._0_1_ = 0xc6;
      uStack_2f4 = CONCAT44(uVar11,0x620d2b);
      FUN_00988fa0();
      local_8._0_1_ = 199;
      uStack_2f4 = CONCAT44(0x620d3d,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x620d48,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x620d57,(int)uStack_2f4);
      FUN_00408ad0();
    }
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    uStack_2f4 = CONCAT44(local_38,*(undefined4 *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4));
    FUN_00534210();
    local_8 = CONCAT31(local_8._1_3_,200);
    uStack_2f4 = CONCAT44(0x620d8b,(int)uStack_2f4);
    FUN_00989020();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61e85e,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e868,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00620c33;
  uStack_2f4 = CONCAT44(0x61e879,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e883,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00620b32:
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = (ulonglong)
                 *(uint *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0x680);
    uVar11 = FUN_00988a50();
    uStack_2f4 = CONCAT44(uVar11,local_38);
    local_8._0_1_ = 0xc9;
    FUN_0042c180();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xca;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x620ba0,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x620baf,(int)uStack_2f4);
    FUN_00408ad0();
    uVar5 = (undefined1)local_8;
    if (*(int *)(in_ECX + 0x38c) != DAT_012588e8[0x2d8]) goto LAB_00621bd7;
    uStack_2f4 = CONCAT44(0x620bd3,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xcb;
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = CONCAT44(local_80,1000);
    (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa48) + 0x24))
              (local_38,4);
    local_8 = CONCAT31(local_8._1_3_,0xcc);
    uStack_2f4 = CONCAT44(0x620c23,(int)uStack_2f4);
    FUN_00989020();
    uStack_2f4 = CONCAT44(0x620c2b,(int)uStack_2f4);
    FUN_00408ad0();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61e894,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e89e,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00620b32;
  uStack_2f4 = CONCAT44(0x61e8af,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e8b9,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_0062079a:
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    piVar19 = (int *)(in_ECX + 0x388);
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = ZEXT48(DAT_012587e4);
    FUN_00514390();
    uVar11 = FUN_00988a50();
    uStack_2f4 = CONCAT44(uVar11,local_38);
    local_8._0_1_ = 0xcd;
    FUN_0042c180();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xce;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x620808,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x620817,(int)uStack_2f4);
    FUN_00408ad0();
    local_5c = (undefined8 *)*piVar19;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa60) + 0x3a8)
        != 0) {
      uStack_2f4 = CONCAT44(0x62084f,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xcf;
      uStack_2f4 = CONCAT44(0x620860,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xd0;
      local_5c = (undefined8 *)*piVar19;
      param_2 = (int *)&uStack_2f4;
      uStack_2f4 = CONCAT44(local_80,1000);
      (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa48) + 0x24
                  ))(local_178,0x75);
      local_8._0_1_ = 0xd1;
      uStack_2f4 = CONCAT44(local_e4,0x6208b5);
      FUN_00988f20();
      local_8._0_1_ = 0xd2;
      uStack_2f4 = CONCAT44(0x6208c4,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x6208cf,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6208da,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6208e2,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x6208f1,(int)uStack_2f4);
      FUN_00408ad0();
    }
    local_5c = (undefined8 *)*piVar19;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa60) + 0x3b0)
        != 0) {
      uStack_2f4 = CONCAT44(0x620928,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xd3;
      uStack_2f4 = CONCAT44(0x620939,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xd4;
      local_5c = (undefined8 *)*piVar19;
      param_2 = (int *)&uStack_2f4;
      uStack_2f4 = CONCAT44(local_80,1000);
      (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa48) + 0x24
                  ))(local_c0,0x76);
      local_8._0_1_ = 0xd5;
      uStack_2f4 = CONCAT44(local_e4,0x62098b);
      FUN_00988f20();
      local_8._0_1_ = 0xd6;
      uStack_2f4 = CONCAT44(0x62099a,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x6209a2,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6209ad,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6209b5,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x6209c4,(int)uStack_2f4);
      FUN_00408ad0();
    }
    uStack_2f4 = CONCAT44(0x6209d4,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xd7;
    uStack_2f4 = CONCAT44(0x6209e5,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0xd8;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd9;
    uStack_2f4 = CONCAT44(0x620a00,(int)uStack_2f4);
    iVar7 = FUN_00475500();
    uStack_2f4 = *(undefined8 *)(iVar7 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    local_8._0_1_ = 0xda;
    uStack_2f4 = CONCAT44(local_e4,0x620a3a);
    FUN_00988f20();
    local_8._0_1_ = 0xdb;
    uStack_2f4 = CONCAT44(0x620a49,(int)uStack_2f4);
    FUN_00989020();
    uStack_2f4 = CONCAT44(0x620a51,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x620a5c,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0xd8;
    uStack_2f4 = CONCAT44(local_4c,0x620a69);
    FUN_009a9740();
    uStack_2f4 = CONCAT44(0x620a71,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x620a80,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x620a90,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xdc;
    local_5c = (undefined8 *)*piVar19;
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = CONCAT44(1,*(undefined4 *)
                             (*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) +
                                      0xbcc) + 0x70));
    FUN_009c8ea0();
    local_8._0_1_ = 0xdd;
    uStack_2f4 = CONCAT44(local_a4,0x620ae0);
    FUN_00988f20();
    local_8._0_1_ = 0xde;
    uStack_2f4 = CONCAT44(0x620aef,(int)uStack_2f4);
    FUN_00989020();
    uStack_2f4 = CONCAT44(0x620af7,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x620b02,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x620b11,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = ZEXT48(local_15c);
    FUN_00787150(piVar19,"ARMY_TECHNOLOGY_LEVELS");
    uVar5 = (undefined1)local_8;
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61e8ca,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e8d4,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_0062079a;
  uStack_2f4 = CONCAT44(0x61e8e5,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e8ef,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_0062054f:
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    piVar19 = (int *)(in_ECX + 0x388);
    param_2 = (int *)&uStack_2f4;
    uStack_2f4 = ZEXT48(DAT_012587e4);
    FUN_00514370();
    uVar11 = FUN_00988a50();
    uStack_2f4 = CONCAT44(uVar11,local_38);
    local_8._0_1_ = 0xdf;
    FUN_0042c180();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xe0;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x6205bd,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x6205cc,(int)uStack_2f4);
    FUN_00408ad0();
    local_5c = (undefined8 *)*piVar19;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa60) + 0x398)
        != 0) {
      uStack_2f4 = CONCAT44(0x620604,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xe1;
      uStack_2f4 = CONCAT44(0x620615,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xe2;
      local_5c = (undefined8 *)*piVar19;
      param_2 = (int *)&uStack_2f4;
      uStack_2f4 = CONCAT44(local_80,1000);
      (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa48) + 0x24
                  ))(local_178,0x73);
      local_8._0_1_ = 0xe3;
      uStack_2f4 = CONCAT44(local_e4,0x62066a);
      FUN_00988f20();
      local_8._0_1_ = 0xe4;
      uStack_2f4 = CONCAT44(0x620679,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x620684,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x62068f,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x620697,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x6206a6,(int)uStack_2f4);
      FUN_00408ad0();
    }
    local_5c = (undefined8 *)*piVar19;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa60) + 0x3a0)
        != 0) {
      uStack_2f4 = CONCAT44(0x6206dd,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xe5;
      uStack_2f4 = CONCAT44(0x6206ee,(int)uStack_2f4);
      FUN_009885d0();
      local_8._0_1_ = 0xe6;
      local_5c = (undefined8 *)*piVar19;
      param_2 = (int *)&uStack_2f4;
      uStack_2f4 = CONCAT44(local_80,1000);
      (**(code **)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0xa48) + 0x24
                  ))(local_c0,0x74);
      local_8._0_1_ = 0xe7;
      uStack_2f4 = CONCAT44(local_e4,0x620740);
      FUN_00988f20();
      local_8._0_1_ = 0xe8;
      uStack_2f4 = CONCAT44(0x62074f,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x620757,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x620762,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x62076a,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x620779,(int)uStack_2f4);
      FUN_00408ad0();
    }
    uStack_2f4 = ZEXT48(local_15c);
    FUN_00787150(piVar19,"NAVY_TECHNOLOGY_LEVELS");
    uVar5 = (undefined1)local_8;
    goto LAB_00621bd7;
  }
  uStack_2f4 = CONCAT44(0x61e900,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e90a,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_0062054f;
  uStack_2f4 = CONCAT44(0x61e91b,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e925,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00620462:
    uStack_2f4 = CONCAT44(0x62046f,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0xe9;
    FUN_009a8ee0();
    local_8._0_1_ = 0xea;
    uStack_2f4 = CONCAT44(0x62048b,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x620498,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xeb;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x6204d4,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0xe9;
    uStack_2f4 = CONCAT44(local_4c,0x6204e0);
    FUN_009a9740();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x6204ec,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x6204fc,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_e4,local_4c);
    uVar5 = 0xec;
    local_8._0_1_ = 0xec;
    FUN_009a8ee0();
    local_8._0_1_ = 0xed;
    uStack_2f4 = CONCAT44(0x620518,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x620525,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    local_8._0_1_ = 0xee;
LAB_00620433:
    uStack_2f4 = 0xffffffff00000000;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x62044b,(int)uStack_2f4);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,uVar5);
    uStack_2f4 = CONCAT44(local_4c,0x620457);
    FUN_009a9740();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61e936,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e940,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00620462;
  uStack_2f4 = CONCAT44(0x61e951,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e95b,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_0062034b:
    uStack_2f4 = CONCAT44(0x620358,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0xef;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf0;
    uStack_2f4 = CONCAT44(0x620374,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x620381,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xf1;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x6203bd,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0xef;
    uStack_2f4 = CONCAT44(local_4c,0x6203c9);
    FUN_009a9740();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x6203d5,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x6203e5,(int)uStack_2f4);
    FUN_009885d0();
    uVar5 = 0xf2;
    uStack_2f4 = CONCAT44(local_e4,local_4c);
    local_8._0_1_ = 0xf2;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf3;
    uStack_2f4 = CONCAT44(0x620401,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x62040e,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    local_8._0_1_ = 0xf4;
    goto LAB_00620433;
  }
  uStack_2f4 = CONCAT44(0x61e96c,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e976,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_0062034b;
  uStack_2f4 = CONCAT44(0x61e987,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e991,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') {
LAB_00620180:
    uStack_2f4 = CONCAT44(0x62018d,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0xf5;
    FUN_009a8ee0();
    local_8._0_1_ = 0xf6;
    uStack_2f4 = CONCAT44(0x6201a8,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x6201b5,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xf7;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x6201f1,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0xf5;
    uStack_2f4 = CONCAT44(local_4c,0x6201fe);
    FUN_009a9740();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x62020a,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x620213,(int)uStack_2f4);
    iVar7 = (**(code **)(*piVar19 + 0x4c))();
    if (iVar7 == 2) {
      uStack_2f4 = CONCAT44(0x620229,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_80,local_4c);
      local_8._0_1_ = 0xf8;
      FUN_009a8ee0();
      local_8._0_1_ = 0xf9;
      uStack_2f4 = CONCAT44(0x620245,(int)uStack_2f4);
      FUN_00475500();
      uStack_2f4 = CONCAT44(0x620252,(int)uStack_2f4);
      puVar15 = (undefined8 *)FUN_0040b440();
      uStack_2f4 = puVar15[1];
      uVar11 = FUN_009a9880(*puVar15);
      local_8._0_1_ = 0xfa;
      uStack_2f4 = CONCAT44(uVar11,0x620288);
      FUN_00988fa0();
      local_8._0_1_ = 0xfb;
      uStack_2f4 = CONCAT44(0x62029a,(int)uStack_2f4);
      FUN_00989020();
      uStack_2f4 = CONCAT44(0x6202a2,(int)uStack_2f4);
      FUN_00408ad0();
      uStack_2f4 = CONCAT44(0x6202ad,(int)uStack_2f4);
      FUN_00408ad0();
      local_8._0_1_ = 0xf8;
      uStack_2f4 = CONCAT44(local_4c,0x6202b9);
      FUN_009a9740();
      local_8._0_1_ = 0;
      uStack_2f4 = CONCAT44(0x6202c5,(int)uStack_2f4);
      FUN_00408ad0();
    }
    uStack_2f4 = CONCAT44(0x6202d2,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_80,local_4c);
    local_8._0_1_ = 0xfc;
    FUN_009a8ee0();
    local_8._0_1_ = 0xfd;
    uStack_2f4 = CONCAT44(0x6202ee,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x6202fb,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xfe;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x620337,(int)uStack_2f4);
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0xfc);
    uStack_2f4 = CONCAT44(local_4c,0x620343);
    FUN_009a9740();
    goto LAB_00621bce;
  }
  uStack_2f4 = CONCAT44(0x61e9a2,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e9ac,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 != '\0') goto LAB_00620180;
  uStack_2f4 = CONCAT44(0x61e9bd,(int)uStack_2f4);
  (**(code **)(*piVar19 + 0x44))();
  uStack_2f4 = CONCAT44(0x61e9c7,(int)uStack_2f4);
  cVar4 = FUN_0040b360();
  if (cVar4 == '\0') {
    uStack_2f4 = CONCAT44(0x61eab0,(int)uStack_2f4);
    (**(code **)(*piVar19 + 0x44))();
    uStack_2f4 = CONCAT44(0x61eaba,(int)uStack_2f4);
    cVar4 = FUN_0040b360();
    if (cVar4 == '\0') {
      uStack_2f4 = CONCAT44(0x61eb5e,(int)uStack_2f4);
      (**(code **)(*piVar19 + 0x44))();
      uStack_2f4 = CONCAT44(0x61eb68,(int)uStack_2f4);
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        uStack_2f4 = CONCAT44(0x61ebe6,(int)uStack_2f4);
        (**(code **)(*piVar19 + 0x44))();
        uStack_2f4 = CONCAT44(0x61ebf0,(int)uStack_2f4);
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          uStack_2f4 = CONCAT44(0x61ec51,(int)uStack_2f4);
          (**(code **)(*piVar19 + 0x44))();
          uStack_2f4 = CONCAT44(0x61ec5b,(int)uStack_2f4);
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            uStack_2f4 = CONCAT44(0x61ee3a,(int)uStack_2f4);
            (**(code **)(*piVar19 + 0x44))();
            uStack_2f4 = CONCAT44(0x61ee44,(int)uStack_2f4);
            cVar4 = FUN_0040b360();
            if (cVar4 == '\0') {
              uStack_2f4 = CONCAT44(0x61eeb1,(int)uStack_2f4);
              (**(code **)(*piVar19 + 0x44))();
              uStack_2f4 = CONCAT44(0x61eebb,(int)uStack_2f4);
              cVar4 = FUN_0040b360();
              if (cVar4 == '\0') {
                uStack_2f4 = CONCAT44(0x61ef54,(int)uStack_2f4);
                (**(code **)(*piVar19 + 0x44))();
                uStack_2f4 = CONCAT44(0x61ef5e,(int)uStack_2f4);
                cVar4 = FUN_0040b360();
                if (cVar4 == '\0') {
                  uStack_2f4 = CONCAT44(0x61ef6f,(int)uStack_2f4);
                  (**(code **)(*piVar19 + 0x44))();
                  uStack_2f4 = CONCAT44(0x61ef79,(int)uStack_2f4);
                  cVar4 = FUN_0040b360();
                  if (cVar4 == '\0') {
                    uStack_2f4 = CONCAT44(0x61ef8a,(int)uStack_2f4);
                    (**(code **)(*piVar19 + 0x44))();
                    uStack_2f4 = CONCAT44(0x61ef94,(int)uStack_2f4);
                    cVar4 = FUN_0040b360();
                    if (cVar4 == '\0') {
                      uStack_2f4 = CONCAT44(0x61efa5,(int)uStack_2f4);
                      (**(code **)(*piVar19 + 0x44))();
                      uStack_2f4 = CONCAT44(0x61efaf,(int)uStack_2f4);
                      cVar4 = FUN_0040b360();
                      if (cVar4 == '\0') {
                        uStack_2f4 = CONCAT44(0x61efc0,(int)uStack_2f4);
                        (**(code **)(*piVar19 + 0x44))();
                        uStack_2f4 = CONCAT44(0x61efca,(int)uStack_2f4);
                        cVar4 = FUN_0040b360();
                        if (cVar4 == '\0') {
                          uStack_2f4 = CONCAT44(0x61efdf,(int)uStack_2f4);
                          FUN_009885d0();
                          local_8 = 0x125;
                          uStack_2f4._0_4_ = 0x61eff3;
                          uStack_2f4._4_4_ = local_54;
                          iVar7 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))();
                          uStack_2f4 = CONCAT44(uStack_2f4._4_4_,piVar19);
                          local_11 = (**(code **)(*(int *)(iVar7 + 4) + 0x94))();
                          local_8 = 0;
                          FUN_00408ad0();
                          if (local_11 != '\0') {
                            FUN_009885d0();
                            local_8 = 0x126;
                            piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))();
                            puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
                            piVar6 = (int *)*puVar8;
                            local_8._0_1_ = 0;
                            local_8._1_3_ = 0;
                            uStack_2f4 = CONCAT44(0x61f062,(int)uStack_2f4);
                            local_18 = piVar6;
                            FUN_00408ad0();
                            piVar2 = local_88;
                            piVar20 = local_18;
                            local_18 = piVar6;
                            while (bVar21 = local_18 != (int *)0x0, local_18 = piVar20,
                                  uVar5 = (undefined1)local_8, bVar21) {
                              local_18 = (int *)piVar20[2];
                              param_2 = *(int **)(*piVar20 + 0x20);
                              uStack_2f4 = CONCAT44(piVar19,0x61f090);
                              cVar4 = (**(code **)(param_2[6] + 0x94))();
                              piVar20 = local_18;
                              if (cVar4 != '\0') {
                                uStack_2f4 = CONCAT44(0x61f0a5,(int)uStack_2f4);
                                FUN_009885d0();
                                local_8 = 0x127;
                                uStack_2f4._0_4_ = 0x61f0b9;
                                uStack_2f4._4_4_ = local_54;
                                piVar6 = (int *)(**(code **)(*param_2 + 0x34))();
                                local_8._0_1_ = 0;
                                local_8._1_3_ = 0;
                                uStack_2f4._0_4_ = 0x61f0ca;
                                FUN_00408ad0();
                                param_2 = DAT_012587e4;
                                uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x61f0de);
                                uVar11 = (**(code **)(*piVar6 + 0x80))();
                                uStack_2f4 = CONCAT44(uVar11,0x61f0ed);
                                FUN_0048d050();
                                piVar20 = local_18;
                                if (piVar6 == piVar19) {
                                  uStack_2f4 = CONCAT44(0x61f102,(int)uStack_2f4);
                                  FUN_009885d0();
                                  uStack_2f4 = CONCAT44(local_80,local_4c);
                                  local_8 = 0x128;
                                  param_2 = (int *)FUN_009a8ee0();
                                  local_8._0_1_ = 0x29;
                                  uStack_2f4 = CONCAT44(0x61f121,(int)uStack_2f4);
                                  FUN_00475500();
                                  uStack_2f4 = CONCAT44(0x61f12e,(int)uStack_2f4);
                                  puVar15 = (undefined8 *)FUN_0040b440();
                                  uStack_2f4 = puVar15[1];
                                  FUN_009a9880(*puVar15);
                                  uStack_2f4 = 0xffffffff00000000;
                                  local_8._0_1_ = 0x2a;
                                  FUN_00408ed0();
                                  uStack_2f4 = CONCAT44(0x61f16b,(int)uStack_2f4);
                                  FUN_00408ad0();
                                  local_8 = CONCAT31(local_8._1_3_,0x28);
                                  uStack_2f4 = CONCAT44(local_4c,0x61f178);
                                  FUN_009a9740();
                                  local_8 = 0;
                                  uStack_2f4 = CONCAT44(0x61f187,(int)uStack_2f4);
                                  FUN_00408ad0();
                                  piVar6 = local_c4;
                                  local_5c = (undefined8 *)*piVar2;
                                  if (*(char *)(*(int *)(DAT_012587e4[1] + piVar2[1] * 4) + 0x31) ==
                                      '\0') {
                                    uStack_2f4 = CONCAT44(0x61f5f9,(int)uStack_2f4);
                                    FUN_009885d0();
                                    uStack_2f4 = CONCAT44(local_80,local_4c);
                                    local_8 = 0x13e;
                                    param_2 = (int *)FUN_009a8ee0();
                                    local_8._0_1_ = 0x3f;
                                    uStack_2f4 = CONCAT44(0x61f618,(int)uStack_2f4);
                                    FUN_00475500();
                                    uStack_2f4 = CONCAT44(0x61f625,(int)uStack_2f4);
                                    puVar15 = (undefined8 *)FUN_0040b440();
                                    uStack_2f4 = puVar15[1];
                                    FUN_009a9880(*puVar15);
                                    uStack_2f4 = 0xffffffff00000000;
                                    local_8._0_1_ = 0x40;
                                    FUN_00408ed0();
                                    uStack_2f4 = CONCAT44(0x61f662,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    local_8 = CONCAT31(local_8._1_3_,0x3e);
LAB_0061f66a:
                                    uStack_2f4._4_4_ = (uint *)local_4c;
                                    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,0x61f66f);
                                    FUN_009a9740();
                                  }
                                  else {
                                    if (local_c4 == (int *)piVar2[1]) {
                                      uStack_2f4 = CONCAT44(0x61f1c1,(int)uStack_2f4);
                                      FUN_009885d0();
                                      uStack_2f4 = CONCAT44(local_80,local_4c);
                                      local_8 = 299;
                                      param_2 = (int *)FUN_009a8ee0();
                                      local_8._0_1_ = 0x2c;
                                      uStack_2f4 = CONCAT44(0x61f1e0,(int)uStack_2f4);
                                      FUN_00475500();
                                      uStack_2f4 = CONCAT44(0x61f1ed,(int)uStack_2f4);
                                      puVar15 = (undefined8 *)FUN_0040b440();
                                      uStack_2f4 = puVar15[1];
                                      FUN_009a9880(*puVar15);
                                      uStack_2f4 = 0xffffffff00000000;
                                      local_8._0_1_ = 0x2d;
                                      FUN_00408ed0();
                                      uStack_2f4 = CONCAT44(0x61f22a,(int)uStack_2f4);
                                      FUN_00408ad0();
                                      local_8 = CONCAT31(local_8._1_3_,0x2b);
                                      goto LAB_0061f66a;
                                    }
                                    if (*(char *)(*(int *)(DAT_012587e4[1] + (int)local_c4 * 4) +
                                                 0x31) != '\0') {
                                      uStack_2f4 = CONCAT44(0x61f251,(int)uStack_2f4);
                                      FUN_009885d0();
                                      uStack_2f4 = CONCAT44(local_80,local_4c);
                                      local_8 = 0x12e;
                                      param_2 = (int *)FUN_009a8ee0();
                                      local_8._0_1_ = 0x2f;
                                      uStack_2f4 = CONCAT44(0x61f270,(int)uStack_2f4);
                                      FUN_00475500();
                                      uStack_2f4 = CONCAT44(0x61f27d,(int)uStack_2f4);
                                      puVar15 = (undefined8 *)FUN_0040b440();
                                      uStack_2f4 = puVar15[1];
                                      FUN_009a9880(*puVar15);
                                      uStack_2f4 = 0xffffffff00000000;
                                      local_8._0_1_ = 0x30;
                                      FUN_00408ed0();
                                      uStack_2f4 = CONCAT44(0x61f2ba,(int)uStack_2f4);
                                      FUN_00408ad0();
                                      local_8 = CONCAT31(local_8._1_3_,0x2e);
                                      goto LAB_0061f66a;
                                    }
                                    local_5c = (undefined8 *)*piVar2;
                                    uStack_2f4 = CONCAT44(0x61f2e0,(int)uStack_2f4);
                                    cVar4 = FUN_009313e0();
                                    if (cVar4 != '\0') {
                                      uStack_2f4 = CONCAT44(0x61f2f5,(int)uStack_2f4);
                                      FUN_009885d0();
                                      uStack_2f4 = CONCAT44(local_80,local_4c);
                                      local_8 = 0x131;
                                      param_2 = (int *)FUN_009a8ee0();
                                      local_8._0_1_ = 0x32;
                                      uStack_2f4 = CONCAT44(0x61f314,(int)uStack_2f4);
                                      FUN_00475500();
                                      uStack_2f4 = CONCAT44(0x61f321,(int)uStack_2f4);
                                      puVar15 = (undefined8 *)FUN_0040b440();
                                      uStack_2f4 = puVar15[1];
                                      FUN_009a9880(*puVar15);
                                      uStack_2f4 = 0xffffffff00000000;
                                      local_8._0_1_ = 0x33;
                                      FUN_00408ed0();
                                      uStack_2f4 = CONCAT44(0x61f35e,(int)uStack_2f4);
                                      FUN_00408ad0();
                                      local_8 = CONCAT31(local_8._1_3_,0x31);
                                      goto LAB_0061f66a;
                                    }
                                    local_5c = (undefined8 *)*piVar2;
                                    param_2 = (int *)DAT_012587e4[1];
                                    uStack_2f4 = CONCAT44(0x61f390,(int)uStack_2f4);
                                    cVar4 = FUN_0092e270();
                                    if (cVar4 != '\0') {
                                      local_5c = (undefined8 *)*piVar2;
                                      uStack_2f4 = CONCAT44(0x61f3b4,(int)uStack_2f4);
                                      iVar7 = FUN_009311f0();
                                      if ((iVar7 < 5) &&
                                         (local_5c = *(undefined8 **)(param_2[piVar2[1]] + 0xcf8),
                                         *(int **)(param_2[piVar2[1]] + 0xcfc) != piVar6)) {
                                        uStack_2f4 = CONCAT44(0x61f3ed,(int)uStack_2f4);
                                        FUN_009885d0();
                                        uStack_2f4 = CONCAT44(local_80,local_4c);
                                        local_8 = 0x134;
                                        param_2 = (int *)FUN_009a8ee0();
                                        local_8._0_1_ = 0x35;
                                        uStack_2f4 = CONCAT44(0x61f40c,(int)uStack_2f4);
                                        FUN_00475500();
                                        uStack_2f4 = CONCAT44(0x61f419,(int)uStack_2f4);
                                        puVar15 = (undefined8 *)FUN_0040b440();
                                        uStack_2f4 = puVar15[1];
                                        FUN_009a9880(*puVar15);
                                        uStack_2f4 = 0xffffffff00000000;
                                        local_8._0_1_ = 0x36;
                                        FUN_00408ed0();
                                        uStack_2f4 = CONCAT44(0x61f456,(int)uStack_2f4);
                                        FUN_00408ad0();
                                        local_8 = CONCAT31(local_8._1_3_,0x34);
                                        goto LAB_0061f66a;
                                      }
                                    }
                                    local_5c = (undefined8 *)*piVar2;
                                    if (*(int *)(*(int *)(*(int *)(param_2[piVar2[1]] + 0xbe8) +
                                                         (int)piVar6 * 4) + 0x34) != 0) {
                                      uStack_2f4 = CONCAT44(0x61f491,(int)uStack_2f4);
                                      FUN_009885d0();
                                      uStack_2f4 = CONCAT44(local_80,local_4c);
                                      local_8 = 0x137;
                                      param_2 = (int *)FUN_009a8ee0();
                                      local_8._0_1_ = 0x38;
                                      uStack_2f4 = CONCAT44(0x61f4b0,(int)uStack_2f4);
                                      FUN_00475500();
                                      uStack_2f4 = CONCAT44(0x61f4bd,(int)uStack_2f4);
                                      puVar15 = (undefined8 *)FUN_0040b440();
                                      uStack_2f4 = puVar15[1];
                                      FUN_009a9880(*puVar15);
                                      uStack_2f4 = 0xffffffff00000000;
                                      local_8._0_1_ = 0x39;
                                      FUN_00408ed0();
                                      uStack_2f4 = CONCAT44(0x61f4fa,(int)uStack_2f4);
                                      FUN_00408ad0();
                                      local_8 = CONCAT31(local_8._1_3_,0x37);
                                      goto LAB_0061f66a;
                                    }
                                    local_5c = (undefined8 *)*piVar2;
                                    uStack_2f4 = CONCAT44(0x61f51d,(int)uStack_2f4);
                                    cVar4 = FUN_00531cb0();
                                    if (cVar4 == '\0') {
                                      uStack_2f4 = CONCAT44(0x61f532,(int)uStack_2f4);
                                      FUN_009885d0();
                                      uStack_2f4 = CONCAT44(local_80,local_4c);
                                      local_8 = 0x13a;
                                      param_2 = (int *)FUN_009a8ee0();
                                      local_8._0_1_ = 0x3b;
                                      uStack_2f4 = CONCAT44(0x61f551,(int)uStack_2f4);
                                      FUN_00475500();
                                      uStack_2f4 = CONCAT44(0x61f55e,(int)uStack_2f4);
                                      puVar15 = (undefined8 *)FUN_0040b440();
                                      uStack_2f4 = puVar15[1];
                                      FUN_009a9880(*puVar15);
                                      uStack_2f4 = 0xffffffff00000000;
                                      local_8._0_1_ = 0x3c;
                                      FUN_00408ed0();
                                      uStack_2f4 = CONCAT44(0x61f59b,(int)uStack_2f4);
                                      FUN_00408ad0();
                                      local_8 = CONCAT31(local_8._1_3_,0x3a);
                                      goto LAB_0061f66a;
                                    }
                                    local_5c = (undefined8 *)*piVar2;
                                    uStack_2f4 = CONCAT44(&local_c8,local_38);
                                    FUN_005325e0();
                                    uStack_2f4 = 0xffffffff00000000;
                                    local_8 = 0x13d;
                                    FUN_00408ed0();
                                  }
                                  local_8._0_1_ = 0;
                                  local_8._1_3_ = 0;
                                  uStack_2f4 = CONCAT44(0x61f67e,(int)uStack_2f4);
                                  FUN_00408ad0();
                                  piVar20 = local_18;
                                }
                              }
                            }
                            goto LAB_00621bd7;
                          }
                          FUN_009885d0();
                          local_8 = 0x141;
                          local_18 = (int *)&DAT_00000008;
                          iVar7 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
                          cVar4 = (**(code **)(*(int *)(iVar7 + 0x18) + 0x94))(piVar19);
                          if (cVar4 == '\0') {
LAB_0061f740:
                            local_11 = '\0';
                          }
                          else {
                            (**(code **)(*piVar19 + 0x44))();
                            cVar4 = FUN_0040b360();
                            if (cVar4 == '\0') {
                              (**(code **)(*piVar19 + 0x44))();
                              cVar4 = FUN_0040b360();
                              if (cVar4 == '\0') {
                                (**(code **)(*piVar19 + 0x44))();
                                cVar4 = FUN_0040b360();
                                if (cVar4 == '\0') {
                                  (**(code **)(*piVar19 + 0x44))();
                                  cVar4 = FUN_0040b360();
                                  if (cVar4 == '\0') {
                                    (**(code **)(*piVar19 + 0x44))();
                                    cVar4 = FUN_0040b360();
                                    if (cVar4 == '\0') goto LAB_0061f740;
                                  }
                                }
                              }
                            }
                            local_11 = '\x01';
                          }
                          local_8._0_1_ = 0;
                          local_8._1_3_ = 0;
                          FUN_00408ad0();
                          piVar6 = DAT_012588e8;
                          if (local_11 == '\0') {
                            (**(code **)(*piVar19 + 0x44))();
                            uStack_2f4 = CONCAT44(0x61fbd5,(int)uStack_2f4);
                            cVar4 = FUN_0040b360();
                            if (cVar4 == '\0') {
                              uStack_2f4 = CONCAT44(0x61fbe2,(int)uStack_2f4);
                              (**(code **)(*piVar19 + 0x44))();
                              uStack_2f4 = CONCAT44(0x61fbec,(int)uStack_2f4);
                              cVar4 = FUN_0040b360();
                              if (cVar4 == '\0') {
                                uStack_2f4 = CONCAT44(0x61fbf9,(int)uStack_2f4);
                                (**(code **)(*piVar19 + 0x44))();
                                uStack_2f4 = CONCAT44(0x61fc03,(int)uStack_2f4);
                                cVar4 = FUN_0040b360();
                                if (cVar4 == '\0') {
                                  uStack_2f4 = CONCAT44(0x61fc10,(int)uStack_2f4);
                                  (**(code **)(*piVar19 + 0x44))();
                                  uStack_2f4 = CONCAT44(0x61fc1a,(int)uStack_2f4);
                                  cVar4 = FUN_0040b360();
                                  uVar5 = (undefined1)local_8;
                                  if (cVar4 == '\0') goto LAB_00621bd7;
                                }
                              }
                            }
                            uStack_2f4 = CONCAT44(param_2,0x61fc34);
                            FUN_00648150();
                            local_8 = 0x155;
                            uStack_2f4 = CONCAT44(0x61fc48,(int)uStack_2f4);
                            FUN_004115d0();
                            local_8._0_1_ = 0;
                            local_8._1_3_ = 0;
                            uStack_2f4 = CONCAT44(0x61fc5a,(int)uStack_2f4);
                            FUN_00459820();
                            uVar5 = (undefined1)local_8;
                          }
                          else {
                            piVar19 = DAT_012588e8 + 0x2f8;
                            local_1c = piVar19;
                            FUN_009885d0();
                            local_8 = 0x142;
                            piStack_198 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))
                                                           (local_e4);
                            local_8._0_1_ = 0;
                            local_8._1_3_ = 0;
                            uStack_2f4 = CONCAT44(0x61f7a6,(int)uStack_2f4);
                            FUN_00408ad0();
                            local_18 = (int *)0x0;
                            local_88 = (int *)(piVar6[0x2f9] - *piVar19 >> 2);
                            uVar5 = (undefined1)local_8;
                            if (0 < (int)local_88) {
                              do {
                                iVar7 = *(int *)(*local_1c + (int)local_18 * 4);
                                piVar6 = (int *)(iVar7 + 0x1c);
                                uStack_2f4 = CONCAT44(local_38,0x61f7d7);
                                uStack_2f4._4_4_ = (uint *)FUN_009888f0();
                                local_8 = 0x143;
                                uStack_2f4._0_4_ = 0x61f7ec;
                                iVar12 = (**(code **)(*piStack_198 + 0x6c))();
                                local_8._0_1_ = 0;
                                local_8._1_3_ = 0;
                                uStack_2f4._0_4_ = 0x61f7fd;
                                FUN_00408ad0();
                                uStack_2f4 = CONCAT44(uStack_2f4._4_4_,param_2);
                                cVar4 = (**(code **)(*(int *)(iVar12 + 0x18) + 0x94))();
                                piVar19 = param_2;
                                if (cVar4 != '\0') {
                                  uStack_2f4 = CONCAT44(0x61f823,(int)uStack_2f4);
                                  (**(code **)(*param_2 + 0x44))();
                                  uStack_2f4 = CONCAT44(0x61f82d,(int)uStack_2f4);
                                  cVar4 = FUN_0040b360();
                                  if (cVar4 == '\0') {
                                    uStack_2f4 = CONCAT44(0x61f884,(int)uStack_2f4);
                                    (**(code **)(*piVar19 + 0x44))();
                                    uStack_2f4 = CONCAT44(0x61f88e,(int)uStack_2f4);
                                    cVar4 = FUN_0040b360();
                                    if (cVar4 != '\0') {
                                      local_5c = (undefined8 *)*piVar6;
                                      uStack_2f4 = CONCAT44(0x61f8bd,(int)uStack_2f4);
                                      FUN_00931400();
                                      local_8 = 0x145;
                                      goto LAB_0061f863;
                                    }
                                    uStack_2f4 = CONCAT44(0x61f8d6,(int)uStack_2f4);
                                    FUN_009885d0();
                                    local_8 = 0x146;
                                    local_5c = (undefined8 *)*piVar6;
                                    uStack_2f4 = CONCAT44(0x61f905,(int)uStack_2f4);
                                    FUN_00931230();
                                    uStack_2f4 = CONCAT44(0x61f912,(int)uStack_2f4);
                                    FUN_009885d0();
                                    uStack_2f4 = CONCAT44(local_194,local_4c);
                                    local_8._0_1_ = 0x47;
                                    local_84 = (int *)FUN_009a8ee0();
                                    local_8._0_1_ = 0x48;
                                    uStack_2f4 = CONCAT44(0x61f92e,(int)uStack_2f4);
                                    FUN_00475500();
                                    uStack_2f4 = CONCAT44(0x61f93b,(int)uStack_2f4);
                                    puVar15 = (undefined8 *)FUN_0040b440();
                                    uStack_2f4 = puVar15[1];
                                    local_84 = (int *)FUN_009a9880(*puVar15);
                                    local_8._0_1_ = 0x49;
                                    uStack_2f4 = CONCAT44(0x61f974,(int)uStack_2f4);
                                    uVar11 = FUN_0055dd40();
                                    uStack_2f4 = CONCAT44(local_84,"OPINION");
                                    local_8._0_1_ = 0x4a;
                                    FUN_0043ec10(local_c0,&DAT_00e06d74,uVar11);
                                    local_8._0_1_ = 0x4b;
                                    uStack_2f4 = CONCAT44(local_1cc,0x61f9b0);
                                    FUN_00988f20();
                                    local_8._0_1_ = 0x4c;
                                    uStack_2f4 = CONCAT44(0x61f9bf,(int)uStack_2f4);
                                    FUN_00989020();
                                    uStack_2f4 = CONCAT44(0x61f9c7,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61f9d2,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61f9dd,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61f9e8,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    local_8 = CONCAT31(local_8._1_3_,0x47);
                                    uStack_2f4 = CONCAT44(local_4c,0x61f9f5);
                                    FUN_009a9740();
                                    uStack_2f4 = CONCAT44(0x61fa00,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    local_8 = 0;
                                    uStack_2f4 = CONCAT44(0x61fa12,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61fa1f,(int)uStack_2f4);
                                    FUN_009885d0();
                                    local_8 = 0x14d;
                                    local_5c = (undefined8 *)*piVar6;
                                    local_84 = (int *)&uStack_2f4;
                                    uStack_2f4 = CONCAT44(1,*(undefined4 *)
                                                             (*(int *)(*(int *)(DAT_012587e4[1] +
                                                                               *(int *)(iVar7 + 0x20
                                                                                       ) * 4) +
                                                                      0xbe8) +
                                                             *(int *)(in_ECX + 0x38c) * 4));
                                    FUN_009311d0();
                                    uVar11 = FUN_00988a50();
                                    local_8._0_1_ = 0x4e;
                                    uStack_2f4 = CONCAT44(0x61fa75,(int)uStack_2f4);
                                    uVar14 = FUN_0055dd70();
                                    uStack_2f4 = CONCAT44(uVar11,"VALUE");
                                    local_8._0_1_ = 0x4f;
                                    FUN_0043ec10(local_c0,"GP_ADJ",uVar14);
                                    local_8._0_1_ = 0x50;
                                    uStack_2f4 = CONCAT44(local_54,0x61faab);
                                    FUN_00988f20();
                                    local_8 = CONCAT31(local_8._1_3_,0x51);
                                    uStack_2f4 = CONCAT44(0x61faba,(int)uStack_2f4);
                                    FUN_00989020();
                                    uStack_2f4 = CONCAT44(0x61fac2,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61facd,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61fad8,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61fae3,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    local_8 = 0;
                                    uStack_2f4 = CONCAT44(0x61faf2,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    local_5c = *(undefined8 **)(in_ECX + 0x388);
                                    local_84 = (int *)&uStack_2f4;
                                    uStack_2f4 = *(undefined8 *)
                                                  (*(int *)(*(int *)(DAT_012587e4[1] +
                                                                    *(int *)(in_ECX + 0x38c) * 4) +
                                                           0x1580) + *(int *)(iVar7 + 0x20) * 8);
                                    uVar11 = FUN_00988bb0(local_258,1);
                                    local_8 = 0x152;
                                    uStack_2f4 = CONCAT44(0x61fb4f,(int)uStack_2f4);
                                    uVar14 = FUN_0055dd70();
                                    uStack_2f4 = CONCAT44(uVar11,"VALUE");
                                    local_8._0_1_ = 0x53;
                                    FUN_0043ec10(local_1e8,"GP_ADJ",uVar14);
                                    local_8 = CONCAT31(local_8._1_3_,0x54);
                                    uStack_2f4 = CONCAT44(0x61fb82,(int)uStack_2f4);
                                    FUN_00989020();
                                    uStack_2f4 = CONCAT44(0x61fb8d,(int)uStack_2f4);
                                    FUN_00408ad0();
                                    uStack_2f4 = CONCAT44(0x61fb98,(int)uStack_2f4);
                                    FUN_00408ad0();
                                  }
                                  else {
                                    local_5c = (undefined8 *)*piVar6;
                                    uStack_2f4 = CONCAT44(0x61f85c,(int)uStack_2f4);
                                    FUN_00931270();
                                    local_8 = 0x144;
LAB_0061f863:
                                    uStack_2f4 = 0xffffffff00000000;
                                    FUN_00408ed0();
                                  }
                                  local_8._0_1_ = 0;
                                  local_8._1_3_ = 0;
                                  uStack_2f4 = CONCAT44(0x61fbaa,(int)uStack_2f4);
                                  FUN_00408ad0();
                                }
                                local_18 = (int *)((int)local_18 + 1);
                                uVar5 = (undefined1)local_8;
                              } while ((int)local_18 < (int)local_88);
                            }
                          }
                          goto LAB_00621bd7;
                        }
                      }
                    }
                    iVar7 = *(int *)(DAT_012588e8[0x33e] + 8);
                    uVar5 = (undefined1)local_8;
                    if (iVar7 == 0) goto LAB_00621bd7;
                    if (*(int *)(iVar7 + 0x60) == 0) {
                      iVar12 = (*(int *)(iVar7 + 0x30) - *(int *)(iVar7 + 0x2c) >> 3) +
                               (*(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 3);
                      uStack_2f4 = CONCAT44(0x61fcd1,(int)uStack_2f4);
                      FUN_00425a40();
                      uStack_2f4 = CONCAT44(0x61fcdb,(int)uStack_2f4);
                      cVar4 = FUN_0042bb00();
                      if (cVar4 == '\0') {
                        iVar12 = iVar12 + 1;
                      }
                      uStack_2f4 = CONCAT44(0x61fcea,(int)uStack_2f4);
                      FUN_00425ac0();
                      uStack_2f4 = CONCAT44(0x61fcf4,(int)uStack_2f4);
                      cVar4 = FUN_0042bb00();
                      if (cVar4 == '\0') {
                        iVar12 = iVar12 + 1;
                      }
                      iVar13 = *(int *)(DAT_012586dc + 0x30);
                      iVar16 = iVar12 * 1000;
                      puVar15 = (undefined8 *)
                                ((*(int *)(iVar7 + 0x50) - *(int *)(iVar7 + 0x4c) >> 3) * 1000 +
                                iVar16);
                      if (puVar15 == (undefined8 *)0x0) {
                        iVar12 = -1;
                      }
                      else if (iVar16 + 0x189373U < 0x39580e) {
                        iVar12 = (iVar12 * 1000000) / (int)puVar15;
                      }
                      else {
                        local_58 = iVar16 >> 0x1f;
                        local_c4 = (int *)((int)puVar15 >> 0x1f);
                        uStack_2f4 = 1000;
                        local_c8 = puVar15;
                        uVar22 = __allmul(iVar16,local_58);
                        uStack_2f4 = CONCAT44(local_c4,local_c8);
                        iVar12 = __alldiv(uVar22);
                        local_58 = iVar12 >> 0x1f;
                      }
                      uStack_2f4 = 1000;
                      puVar15 = (undefined8 *)
                                __alldiv((longlong)iVar12 * (longlong)*(int *)(iVar13 + 0x4fc));
                      iVar7 = *(int *)(iVar7 + 0x10);
                      iVar12 = *(int *)(iVar13 + 0x4d8);
                      if (iVar12 == 0) {
                        iVar12 = -1;
                      }
                      else {
                        iVar12 = (int)(100000000 / (longlong)iVar12);
                      }
                      if (puVar15 == (undefined8 *)0x0) {
                        iVar12 = -1;
                      }
                      else if ((iVar12 < -0x189373) || (0x20c49a < iVar12)) {
                        uStack_2f4 = 1000;
                        local_c4 = (int *)((int)puVar15 >> 0x1f);
                        local_c8 = puVar15;
                        uVar22 = __allmul(iVar12,iVar12 >> 0x1f);
                        uStack_2f4 = CONCAT44(local_c4,local_c8);
                        iVar12 = __alldiv(uVar22);
                        local_58 = iVar12 >> 0x1f;
                      }
                      else {
                        iVar12 = (iVar12 * 1000) / (int)puVar15;
                      }
                      uStack_2f4 = 1000;
                      iVar7 = __alldiv((longlong)iVar12 * (longlong)(100000 - iVar7));
                      if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
                        uStack_2f4 = 1000;
                        uVar22 = __allmul(iVar7,iVar7 >> 0x1f);
                        uStack_2f4 = 100000;
                        local_58 = __alldiv(uVar22);
                        local_58 = local_58 >> 0x1f;
                      }
                      uStack_2f4 = CONCAT44(local_c0,0x61fe86);
                      uVar11 = FUN_009888f0();
                      uStack_2f4 = CONCAT44(uVar11,local_38);
                      local_8 = 0x122;
                      FUN_0042c180();
                      uStack_2f4 = 0xffffffff00000000;
                      local_8 = CONCAT31(local_8._1_3_,0x23);
                      FUN_00408ed0();
                      uStack_2f4 = CONCAT44(0x61febf,(int)uStack_2f4);
                      FUN_00408ad0();
                      local_8 = 0;
                      uStack_2f4 = CONCAT44(0x61fecd,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(local_100,0x61fede);
                      FUN_00475d50();
                      uStack_2f4 = 0xffffffff00000000;
                      local_8 = 0x124;
                      FUN_00408ed0();
                      local_8._1_3_ = 0;
                    }
                    else {
                      uStack_2f4 = CONCAT44(local_38,0x61fc8a);
                      FUN_00475d50();
                      uStack_2f4 = 0xffffffff00000000;
                      local_8 = 0x121;
                      FUN_00408ed0();
                      local_8._1_3_ = 0;
                    }
                    goto LAB_00621bd2;
                  }
                }
                local_5c = *(undefined8 **)(in_ECX + 0x388);
                piVar19 = *(int **)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0x84c
                                   );
                uStack_2f4 = CONCAT44(0x61ff38,(int)uStack_2f4);
                local_18 = piVar19;
                FUN_009885d0();
                local_8 = 0x113;
                uStack_2f4 = CONCAT44(0x61ff4c,(int)uStack_2f4);
                FUN_009885d0();
                local_8._0_1_ = 0x14;
                uStack_2f4 = CONCAT44(local_1e8,0x61ff61);
                uVar11 = (**(code **)(*(int *)piVar19[0x15] + 0x18))();
                uStack_2f4 = CONCAT44(local_178,piVar19);
                local_8._0_1_ = 0x15;
                FUN_009790b0();
                local_8._0_1_ = 0x16;
                uStack_2f4 = CONCAT44(local_80,0x61ff88);
                FUN_00988f20();
                local_8._0_1_ = 0x17;
                uStack_2f4 = CONCAT44(uVar11,0x61ff9a);
                FUN_00988f20();
                local_8._0_1_ = 0x18;
                uStack_2f4 = CONCAT44(local_e4,0x61ffaf);
                FUN_00988f20();
                uStack_2f4 = 0xffffffff00000000;
                local_8 = CONCAT31(local_8._1_3_,0x19);
                FUN_00408ed0();
                uStack_2f4 = CONCAT44(0x61ffcb,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61ffd6,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61ffe1,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61ffec,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61fff7,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61ffff,(int)uStack_2f4);
                FUN_00408ad0();
                local_8._0_1_ = 0;
                local_8._1_3_ = 0;
                uStack_2f4 = CONCAT44(0x62000d,(int)uStack_2f4);
                FUN_00408ad0();
                iVar7 = DAT_01258a48;
                param_2 = (int *)0x0;
                piVar19 = (int *)(*(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2
                                 );
                local_1c = piVar19;
                uVar5 = (undefined1)local_8;
                if (0 < (int)piVar19) {
                  do {
                    piVar6 = param_2;
                    uStack_2f4 = CONCAT44(0x62003d,(int)uStack_2f4);
                    cVar4 = (**(code **)(**(int **)(*(int *)(iVar7 + 0x28) + (int)param_2 * 4) +
                                        0x18))();
                    if (cVar4 != '\0') {
                      if (local_130 != 0) {
                        uStack_2f4 = CONCAT44(0x62005e,(int)uStack_2f4);
                        FUN_00989030();
                      }
                      uStack_2f4 = CONCAT44(0x62006e,(int)uStack_2f4);
                      FUN_009885d0();
                      local_8 = 0x11a;
                      uStack_2f4 = CONCAT44(0x620082,(int)uStack_2f4);
                      FUN_009885d0();
                      local_8._0_1_ = 0x1b;
                      uStack_2f4 = CONCAT44(0x62009b,(int)uStack_2f4);
                      piVar19 = (int *)FUN_00978100();
                      uStack_2f4 = CONCAT44(local_204,0x6200ab);
                      uVar11 = (**(code **)(*piVar19 + 0x18))();
                      local_8._0_1_ = 0x1c;
                      uStack_2f4 = CONCAT44(*(undefined4 *)
                                             (*(int *)(iVar7 + 0x28) + (int)param_2 * 4),0x6200ca);
                      FUN_00974c50();
                      local_8._0_1_ = 0x1d;
                      uStack_2f4 = CONCAT44(local_54,0x6200df);
                      FUN_00988f20();
                      local_8._0_1_ = 0x1e;
                      uStack_2f4 = CONCAT44(uVar11,0x6200f1);
                      FUN_00988f20();
                      local_8._0_1_ = 0x1f;
                      uStack_2f4 = CONCAT44(local_a4,0x620109);
                      FUN_00988f20();
                      local_8 = CONCAT31(local_8._1_3_,0x20);
                      uStack_2f4 = CONCAT44(0x620118,(int)uStack_2f4);
                      FUN_00989020();
                      uStack_2f4 = CONCAT44(0x620123,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x62012e,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x620139,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x620144,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x62014f,(int)uStack_2f4);
                      FUN_00408ad0();
                      uStack_2f4 = CONCAT44(0x620157,(int)uStack_2f4);
                      FUN_00408ad0();
                      local_8._0_1_ = 0;
                      local_8._1_3_ = 0;
                      uStack_2f4 = CONCAT44(0x620169,(int)uStack_2f4);
                      FUN_00408ad0();
                      piVar19 = local_1c;
                      piVar6 = param_2;
                    }
                    param_2 = (int *)((int)piVar6 + 1);
                    uVar5 = (undefined1)local_8;
                  } while ((int)param_2 < (int)piVar19);
                }
                goto LAB_00621bd7;
              }
              local_5c = *(undefined8 **)(in_ECX + 0x388);
              uVar5 = (undefined1)local_8;
              if (*(char *)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) + 0x12d0) ==
                  '\0') goto LAB_00621bd7;
              uStack_2f4 = CONCAT44(0x61eef0,(int)uStack_2f4);
              iVar7 = FUN_00576f80();
              local_5c = *(undefined8 **)(in_ECX + 0x388);
              uStack_2f4 = CONCAT44(local_38,0x61ef25);
              (**(code **)(**(int **)(*(int *)(iVar7 + 0x80) +
                                     *(int *)(*(int *)(DAT_012587e4[1] +
                                                      *(int *)(in_ECX + 0x38c) * 4) + 0xe40) * 4) +
                          0x1c))();
              uStack_2f4 = 0xffffffff00000000;
              local_8 = 0x112;
              FUN_00408ed0();
              local_8._1_3_ = 0;
            }
            else {
              local_5c = *(undefined8 **)(in_ECX + 0x388);
              uStack_2f4 = *(undefined8 *)(in_ECX + 0x388);
              (**(code **)(**(int **)(*(int *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4) +
                                     0xbd0) + 0x28))();
              uStack_2f4 = 0xffffffff00000000;
              local_8 = 0x111;
              FUN_00408ed0();
              local_8._1_3_ = 0;
            }
          }
          else {
            uStack_2f4 = CONCAT44(0x61ec73,(int)uStack_2f4);
            FUN_009885d0();
            uStack_2f4 = CONCAT44(local_194,local_9c);
            local_8 = 0x108;
            FUN_009a8ee0();
            local_8._0_1_ = 9;
            uStack_2f4 = CONCAT44(0x61ec94,(int)uStack_2f4);
            FUN_00475500();
            uStack_2f4 = CONCAT44(0x61eca1,(int)uStack_2f4);
            puVar15 = (undefined8 *)FUN_0040b440();
            uStack_2f4 = puVar15[1];
            FUN_009a9880(*puVar15);
            uStack_2f4 = 0xffffffff00000000;
            local_8._0_1_ = 10;
            FUN_00408ed0();
            uStack_2f4 = CONCAT44(0x61ecdd,(int)uStack_2f4);
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,8);
            uStack_2f4 = CONCAT44(local_9c,0x61eced);
            FUN_009a9740();
            uStack_2f4 = CONCAT44(0x61ecf8,(int)uStack_2f4);
            FUN_00408ad0();
            local_5c = *(undefined8 **)(in_ECX + 0x388);
            local_18 = *(int **)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4);
            local_40 = 0xf;
            local_44 = 0;
            local_54[0] = local_54[0] & 0xffffff00;
            local_8 = 0x10b;
            piVar19 = local_18;
            piVar6 = (int *)local_18[0x395];
            while (piVar6 != (int *)0x0) {
              iVar7 = *piVar6;
              param_2 = (int *)piVar6[2];
              piVar6 = param_2;
              if (iVar7 != piVar19[0x399]) {
                if (local_44 != 0) {
                  uStack_2f4 = CONCAT44(0x61ed64,(int)uStack_2f4);
                  FUN_00989030();
                }
                uStack_2f4 = CONCAT44(0x61ed74,(int)uStack_2f4);
                uVar11 = FUN_009885d0();
                local_8._0_1_ = 0xc;
                uStack_2f4 = CONCAT44(iVar7,0x61ed86);
                uVar14 = FUN_00974c50();
                local_8._0_1_ = 0xd;
                uStack_2f4 = CONCAT44(0x61ed9c,(int)uStack_2f4);
                FUN_009885d0();
                local_8._0_1_ = 0xe;
                uStack_2f4 = CONCAT44(uVar14,0x61edae);
                FUN_00988f20();
                local_8._0_1_ = 0xf;
                uStack_2f4 = CONCAT44(uVar11,0x61edbd);
                FUN_00988f20();
                local_8._0_1_ = 0x10;
                uStack_2f4 = CONCAT44(0x61edc9,(int)uStack_2f4);
                FUN_00989020();
                uStack_2f4 = CONCAT44(0x61edd1,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61eddc,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61ede7,(int)uStack_2f4);
                FUN_00408ad0();
                uStack_2f4 = CONCAT44(0x61edf2,(int)uStack_2f4);
                FUN_00408ad0();
                local_8 = CONCAT31(local_8._1_3_,0xb);
                uStack_2f4 = CONCAT44(0x61ee01,(int)uStack_2f4);
                FUN_00408ad0();
                piVar19 = local_18;
                piVar6 = param_2;
              }
            }
            uStack_2f4 = 0xffffffff00000000;
            FUN_00408ed0();
            local_8._1_3_ = 0;
          }
          goto LAB_00621bd2;
        }
        piVar6 = piVar19 + 5;
        if (0xf < (uint)piVar19[10]) {
          piVar6 = (int *)*piVar6;
        }
        uStack_2f4 = CONCAT44(piVar6,&local_5c);
        FUN_0055c6c0();
        iVar7 = local_58;
        uVar5 = (undefined1)local_8;
        if (local_58 == 0) goto LAB_00621bd7;
        uStack_2f4 = CONCAT44(0x61ec28,(int)uStack_2f4);
        FUN_009885d0();
        local_8 = 0x107;
        uStack_2f4 = CONCAT44(local_54,*(undefined4 *)(DAT_012587e4[1] + iVar7 * 4));
        FUN_0052fcd0();
      }
      else {
        piVar6 = piVar19 + 5;
        if (0xf < (uint)piVar19[10]) {
          piVar6 = (int *)*piVar6;
        }
        uStack_2f4 = CONCAT44(piVar6,&local_5c);
        FUN_0055c6c0();
        iVar7 = local_58;
        uVar5 = (undefined1)local_8;
        if (local_58 == 0) goto LAB_00621bd7;
        uStack_2f4 = CONCAT44(0x61eba0,(int)uStack_2f4);
        FUN_009885d0();
        local_8 = 0x106;
        uStack_2f4 = CONCAT44(local_54,*(undefined4 *)(DAT_012587e4[1] + iVar7 * 4));
        FUN_00530e40();
      }
      uStack_2f4 = 0xffffffff00000000;
      FUN_00448aa0();
      local_8._1_3_ = 0;
    }
    else {
      uStack_2f4 = CONCAT44(0x61eacf,(int)uStack_2f4);
      FUN_009885d0();
      uStack_2f4 = CONCAT44(local_54,local_9c);
      local_8 = 0x103;
      FUN_009a8ee0();
      local_8._0_1_ = 4;
      uStack_2f4 = CONCAT44(0x61eaf0,(int)uStack_2f4);
      FUN_00475500();
      uStack_2f4 = CONCAT44(0x61eafa,(int)uStack_2f4);
      puVar15 = (undefined8 *)FUN_0040b440();
      uStack_2f4 = puVar15[1];
      FUN_009a9880(*puVar15);
      uStack_2f4 = 0xffffffff00000000;
      local_8._0_1_ = 5;
      FUN_00408ed0();
      uStack_2f4 = CONCAT44(0x61eb36,(int)uStack_2f4);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,3);
      uStack_2f4 = CONCAT44(local_9c,0x61eb46);
      FUN_009a9740();
      local_8._1_3_ = 0;
    }
  }
  else {
    local_5c = *(undefined8 **)(in_ECX + 0x388);
    uStack_2f4 = CONCAT44(local_38,*(undefined4 *)(DAT_012587e4[1] + *(int *)(in_ECX + 0x38c) * 4));
    FUN_00537a30();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xff;
    FUN_00408ed0();
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_2f4 = CONCAT44(0x61ea14,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x61ea21,(int)uStack_2f4);
    FUN_009885d0();
    uStack_2f4 = CONCAT44(local_54,local_9c);
    local_8 = 0x100;
    FUN_009a8ee0();
    local_8._0_1_ = 1;
    uStack_2f4 = CONCAT44(0x61ea42,(int)uStack_2f4);
    FUN_00475500();
    uStack_2f4 = CONCAT44(0x61ea4c,(int)uStack_2f4);
    puVar15 = (undefined8 *)FUN_0040b440();
    uStack_2f4 = puVar15[1];
    FUN_009a9880(*puVar15);
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 2;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x61ea88,(int)uStack_2f4);
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    uStack_2f4 = CONCAT44(local_9c,0x61ea98);
    FUN_009a9740();
    local_8._1_3_ = 0;
  }
LAB_00621bd2:
  local_8._0_1_ = 0;
  uStack_2f4 = CONCAT44(0x621bd7,(int)uStack_2f4);
  FUN_00408ad0();
  uVar5 = (undefined1)local_8;
LAB_00621bd7:
  local_8._0_1_ = uVar5;
  uStack_2f4 = CONCAT44(param_1,0x621be6);
  FUN_0040c830();
LAB_00621be6:
  uStack_2f4 = CONCAT44(0x621bf1,(int)uStack_2f4);
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
LAB_0061e47d:
  uStack_2f4 = CONCAT44(0x61e488,(int)uStack_2f4);
  FUN_00424b60();
LAB_0061e488:
  uStack_2f4 = CONCAT44(0x61e493,(int)uStack_2f4);
  cVar4 = FUN_0094be90();
  if (cVar4 == '\0') {
LAB_0061e541:
    uStack_2f4 = CONCAT44(0x61e551,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xa4;
    uStack_2f4 = CONCAT44(0x61e562,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xa5;
    uStack_2f4._0_4_ = 0x61e573;
    uStack_2f4._4_4_ = local_54;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_a4);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x9c))();
    uVar5 = (**(code **)(*piVar6 + 0x94))();
    param_2 = (int *)CONCAT13(uVar5,param_2._0_3_);
    uStack_2f4 = CONCAT44(0x61e59d,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61e5ac,(int)uStack_2f4);
    FUN_00408ad0();
    if (param_2._3_1_ != '\0') {
      piVar6 = piVar19 + 5;
      if (0xf < (uint)piVar19[10]) {
        piVar6 = (int *)*piVar6;
      }
      uStack_2f4 = CONCAT44(piVar6,0x61e5c7);
      iVar7 = FUN_00aaf0c5();
      local_5c = (undefined8 *)*local_88;
      uVar5 = (undefined1)local_8;
      if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + local_88[1] * 4) + 0xbe8) +
                           *(int *)(in_ECX + 0x38c) * 4) + 0x34) == 0) goto LAB_00621bd7;
      local_5c = (undefined8 *)*local_88;
      uStack_2f4 = *(ulonglong *)local_88;
      piVar19 = (int *)FUN_009387c0();
      uStack_2f4 = CONCAT44(local_38,iVar7 * 0x40 + *piVar19);
      FUN_0094dbd0();
      local_8 = CONCAT31(local_8._1_3_,0xa6);
      goto LAB_0061d959;
    }
    uStack_2f4 = CONCAT44(0x61e648,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xa7;
    uStack_2f4 = CONCAT44(0x61e659,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xa8;
    uStack_2f4._0_4_ = 0x61e66a;
    uStack_2f4._4_4_ = local_54;
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))();
    uStack_2f4 = CONCAT44(uStack_2f4._4_4_,local_a4);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x9c))();
    uVar5 = (**(code **)(*piVar6 + 0x94))();
    param_2 = (int *)CONCAT13(uVar5,param_2._0_3_);
    uStack_2f4 = CONCAT44(0x61e694,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61e6a3,(int)uStack_2f4);
    FUN_00408ad0();
    uVar5 = (undefined1)local_8;
    if (param_2._3_1_ == '\0') goto LAB_00621bd7;
    piVar6 = piVar19 + 5;
    if (0xf < (uint)piVar19[10]) {
      piVar6 = (int *)*piVar6;
    }
    uStack_2f4 = CONCAT44(piVar6,0x61e6be);
    FUN_00aaf0c5();
    uStack_2f4 = CONCAT44(0x61e6c8,(int)uStack_2f4);
    FUN_0090cc40();
    uStack_2f4 = CONCAT44(0x61e6cf,(int)uStack_2f4);
    param_2 = (int *)FUN_0090d6a0();
    uStack_2f4 = CONCAT44(0x61e6df,(int)uStack_2f4);
    FUN_009885d0();
    local_8._0_1_ = 0xa9;
    uStack_2f4 = CONCAT44(local_100,param_2);
    uVar11 = FUN_0090a830();
    local_8._0_1_ = 0xaa;
    uStack_2f4 = CONCAT44(uVar11,0x61e708);
    FUN_00988fa0();
    local_8._0_1_ = 0xab;
    uStack_2f4 = CONCAT44(local_54,0x61e71c);
    FUN_00988f20();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xac;
    FUN_00408ed0();
    uStack_2f4 = CONCAT44(0x61e737,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x61e742,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x61e74d,(int)uStack_2f4);
    FUN_00408ad0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61e759,(int)uStack_2f4);
    FUN_00408ad0();
    piVar19 = local_88;
    local_5c = (undefined8 *)*local_88;
    uStack_2f4 = CONCAT44(0x61e789,(int)uStack_2f4);
    iVar7 = FUN_0092f080();
    uVar5 = (undefined1)local_8;
    if (iVar7 == 0) goto LAB_00621bd7;
    local_5c = (undefined8 *)*piVar19;
    uStack_2f4 = CONCAT44(0x61e7b5,(int)uStack_2f4);
    iVar7 = FUN_0092f080();
    uStack_2f4 = CONCAT44(local_100,iVar7 + 0x1c);
    uVar11 = FUN_0043b700();
    uStack_2f4 = CONCAT44(uVar11,local_c0);
    local_8._0_1_ = 0xad;
    FUN_0042c180();
    local_8._0_1_ = 0xae;
    FUN_00988fa0();
    local_8 = CONCAT31(local_8._1_3_,0xaf);
  }
  else {
    uStack_2f4 = CONCAT44(local_38,&local_2c4);
    FUN_0094dbd0();
    uStack_2f4 = 0xffffffff00000000;
    local_8._0_1_ = 0xa0;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    uStack_2f4 = CONCAT44(0x61e4cb,(int)uStack_2f4);
    FUN_00408ad0();
    uStack_2f4 = CONCAT44(0x61e4dc,(int)uStack_2f4);
    uVar11 = FUN_0055dd40();
    local_8._0_1_ = 0xa1;
    uStack_2f4 = CONCAT44(0x61e4f3,(int)uStack_2f4);
    uVar14 = FUN_0055dd40();
    uStack_2f4 = CONCAT44(uVar11,"ENEMY");
    local_8._0_1_ = 0xa2;
    FUN_0043ec10(local_38,"COUNTRY",uVar14);
    local_8 = CONCAT31(local_8._1_3_,0xa3);
  }
  uStack_2f4 = CONCAT44(0x61e523,(int)uStack_2f4);
  FUN_00989020();
  uStack_2f4 = CONCAT44(0x61e52b,(int)uStack_2f4);
  FUN_00408ad0();
  uStack_2f4 = CONCAT44(0x61e536,(int)uStack_2f4);
  FUN_00408ad0();
LAB_00621bce:
  goto LAB_00621bd2;
code_r0x00620e2e:
  piVar20 = (int *)((int)piVar20 + 1);
  uVar5 = (undefined1)local_8;
  if (piVar6 == (int *)0x0) goto LAB_00621bd7;
  goto LAB_00620e13;
}


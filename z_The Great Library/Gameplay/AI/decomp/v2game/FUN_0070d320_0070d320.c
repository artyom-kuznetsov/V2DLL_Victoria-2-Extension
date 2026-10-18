// FUN_0070d320 @ 0070d320 body=[[0070d320, 0070d411] [0070d415, 0070d461] [0070d465, 0070d4b4] [0070d4b8, 0070d507] [0070d50b, 0070d55a] [0070d55e, 0070d5ad] [0070d5b1, 0070d6ad] [0070d6b1, 0070d6d3] [0070d6d7, 0070d6f7] [0070d6fb, 0070d718] [0070d71c, 0070d73c] [0070d740, 0070d75e] [0070d762, 0070d85d] [0070d861, 0070d886] [0070d88a, 0070d8ad] [0070d8b1, 0070d8d1] [0070d8d5, 0070d8f8] [0070d8fc, 0070d91d] [0070d921, 0070da1f] [0070da23, 0070da45] [0070da49, 0070da69] [0070da6d, 0070da8a] [0070da8e, 0070daae] [0070dab2, 0070dad0] [0070dad4, 0070dba8] [0070dbac, 0070dbd1] [0070dbd5, 0070dbf8] [0070dbfc, 0070dc1c] [0070dc20, 0070dc43] [0070dc47, 0070dc68] [0070dc6c, 0070dd41] [0070dd45, 0070dd67] [0070dd6b, 0070dd8b] [0070dd8f, 0070ddac] [0070ddb0, 0070ddd0] [0070ddd4, 0070ddf2] [0070ddf6, 0070dee9] [0070deed, 0070df1c] [0070df20, 0070df45] [0070df49, 0070df6e] [0070df72, 0070df97] [0070df9b, 0070dfc0] [0070dfc4, 0070dfdc]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_0070d320(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 *puVar12;
  int aiStack_1b0 [6];
  uint auStack_198 [4];
  int aiStack_17c [5];
  undefined4 local_168;
  uint local_164;
  uint local_15c;
  undefined4 local_14c;
  uint local_148;
  uint local_140 [4];
  undefined4 local_130;
  uint local_12c;
  uint local_124;
  undefined4 local_114;
  uint local_110;
  uint local_108;
  undefined4 local_f8;
  uint local_f4;
  uint local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = param_1;
  iVar7 = DAT_012587f4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7ceb0;
  local_10 = ExceptionList;
  local_30 = *(int *)(DAT_012588e8 + 0xbcc);
  local_c0 = DAT_012587f4 * 0x10;
  auStack_198[3] = 0x70d365;
  iVar6 = DAT_012587f4 * -0x10;
  piVar11 = (int *)(&stack0xfffffe78 + iVar6);
  iVar8 = 0;
  if (0 < DAT_012587f4) {
    do {
      piVar1 = (int *)(*(int *)(local_30 + 0x5fc) + (uint)*(byte *)(local_30 + 0x5bc + iVar8) * 8);
      iVar2 = *piVar1;
      iVar3 = piVar1[1];
      *piVar11 = iVar8;
      piVar11[2] = iVar2;
      piVar11[3] = iVar3;
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 4;
    } while (iVar8 < DAT_012587f4);
  }
  iVar8 = local_c0 + iVar6;
  param_1 = param_1 & 0xffffff00;
  auStack_198[DAT_012587f4 * -4 + 3] = param_1;
  auStack_198[DAT_012587f4 * -4 + 2] =
       (int)(&stack0xfffffe78 + iVar8) - (int)(&stack0xfffffe78 + iVar6) >> 4;
  auStack_198[DAT_012587f4 * -4 + 1] = (uint)(&stack0xfffffe78 + iVar8);
  auStack_198[DAT_012587f4 * -4] = (uint)(&stack0xfffffe78 + iVar6);
  aiStack_1b0[DAT_012587f4 * -4 + 5] = 0x70d3c3;
  ExceptionList = &local_10;
  FUN_00719630();
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d3e1;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 0;
  local_c0 = uVar4 + 0x328;
  auStack_198[iVar7 * -4] = 0x70d3fc;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d412;
    FUN_00aae91b();
  }
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d430;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 1;
  local_30 = uVar4 + 0x344;
  auStack_198[iVar7 * -4] = 0x70d44c;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d462;
    FUN_00aae91b();
  }
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d480;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 2;
  local_cc = uVar4 + 0x360;
  auStack_198[iVar7 * -4] = 0x70d49f;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d4b5;
    FUN_00aae91b();
  }
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d4d3;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 3;
  local_c4 = uVar4 + 0x37c;
  auStack_198[iVar7 * -4] = 0x70d4f2;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d508;
    FUN_00aae91b();
  }
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d526;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 4;
  local_c8 = uVar4 + 0x398;
  auStack_198[iVar7 * -4] = 0x70d545;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d55b;
    FUN_00aae91b();
  }
  auStack_198[iVar7 * -4 + 3] = 0;
  auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00ded94d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  auStack_198[iVar7 * -4 + 1] = 0x70d579;
  FUN_00409350();
  auStack_198[iVar7 * -4 + 3] = 0xffffffff;
  auStack_198[iVar7 * -4 + 2] = 0;
  auStack_198[iVar7 * -4 + 1] = (uint)local_2c;
  local_8 = 5;
  local_d0 = uVar4 + 0x3b4;
  auStack_198[iVar7 * -4] = 0x70d598;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
    auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
    auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d5ae;
    FUN_00aae91b();
  }
  puVar12 = &stack0xfffffe78 + iVar6;
  if (((int)auStack_198[iVar7 * -4 + DAT_012587f4 * 4 + 3] < 1) &&
     (puVar12 = &stack0xfffffe78 + iVar6, (int)auStack_198[iVar7 * -4 + DAT_012587f4 * 4 + 3] < 0))
  {
    auStack_198[iVar7 * -4 + 3] = 4;
    auStack_198[iVar7 * -4 + 2] = (uint)&DAT_00dfd504;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    auStack_198[iVar7 * -4 + 1] = 0x70d5ea;
    FUN_00409350();
    local_8 = 6;
    auStack_198[iVar7 * -4 + 2] = 0;
    auStack_198[iVar7 * -4 + 3] = 0;
    uVar4 = auStack_198[iVar7 * -4 + DAT_012587f4 * 4 + 2];
    uVar5 = (auStack_198 + iVar7 * -4 + DAT_012587f4 * 4 + 2)[1];
    auStack_198[iVar7 * -4 + 2] = -uVar4;
    auStack_198[iVar7 * -4 + 1] = 2;
    auStack_198[iVar7 * -4] = (uint)local_84;
    auStack_198[iVar7 * -4 + 3] = -(uVar5 + (uVar4 != 0));
    aiStack_1b0[iVar7 * -4 + 5] = 0x70d625;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 7;
    uVar10 = *(undefined4 *)
              (*(int *)(DAT_012587f0 + 0xc) + auStack_198[iVar7 * -4 + DAT_012587f4 * 4] * 4);
    auStack_198[iVar7 * -4 + 3] = (uint)local_a0;
    auStack_198[iVar7 * -4 + 2] = uVar10;
    auStack_198[iVar7 * -4 + 1] = 0x70d650;
    uVar10 = FUN_005659c0();
    auStack_198[iVar7 * -4 + 3] = uVar10;
    local_8._0_1_ = 8;
    auStack_198[iVar7 * -4 + 2] = 0x70d662;
    FUN_00988fa0();
    auStack_198[iVar7 * -4 + 3] = (uint)local_2c;
    local_8._0_1_ = 9;
    auStack_198[iVar7 * -4 + 2] = 0x70d67a;
    FUN_00988f20();
    local_8._0_1_ = 10;
    auStack_198[iVar7 * -4 + 3] = uVar9;
    auStack_198[iVar7 * -4 + 2] = 0x70d68c;
    uVar10 = FUN_00988f20();
    auStack_198[iVar7 * -4 + 3] = 0xffffffff;
    auStack_198[iVar7 * -4 + 2] = 0;
    auStack_198[iVar7 * -4 + 1] = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    auStack_198[iVar7 * -4] = 0x70d69f;
    FUN_00448aa0();
    if (0xf < local_38) {
      auStack_198[iVar7 * -4 + 3] = local_4c[0];
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d6ae;
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_a8) {
      auStack_198[iVar7 * -4 + 3] = local_bc[0];
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d6d4;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_54) {
      auStack_198[iVar7 * -4 + 3] = local_68;
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d6f8;
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_8c) {
      auStack_198[iVar7 * -4 + 3] = local_a0[0];
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d719;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_70) {
      auStack_198[iVar7 * -4 + 3] = local_84[0];
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d73d;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    puVar12 = &stack0xfffffe78 + iVar6;
    if (0xf < local_18) {
      auStack_198[iVar7 * -4 + 3] = local_2c[0];
                    /* WARNING: Subroutine does not return */
      auStack_198[iVar7 * -4 + 2] = (uint)&UNK_0070d75f;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if ((aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4 + 5] < 1) &&
     (aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4 + 5] < 0)) {
    *(undefined4 *)(puVar12 + -4) = 4;
    *(undefined **)(puVar12 + -8) = &DAT_00dfd504;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    *(undefined4 *)(puVar12 + -0xc) = 0x70d79b;
    FUN_00409350();
    local_8 = 0xc;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -4) = 0;
    iVar8 = aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4 + 4];
    iVar2 = (aiStack_1b0 + iVar7 * -4 + DAT_012587f4 * 4 + 4)[1];
    *(int *)(puVar12 + -8) = -iVar8;
    *(undefined4 *)(puVar12 + -0xc) = 2;
    *(uint **)(puVar12 + -0x10) = local_4c;
    *(uint *)(puVar12 + -4) = -(iVar2 + (uint)(iVar8 != 0));
    *(undefined4 *)(puVar12 + -0x14) = 0x70d7d6;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 0xd;
    uVar10 = *(undefined4 *)
              (*(int *)(DAT_012587f0 + 0xc) +
              *(int *)(&stack0xfffffe78 + (DAT_012587f4 + -2) * 0x10 + iVar6) * 4);
    *(uint **)(puVar12 + -4) = local_bc;
    *(undefined4 *)(puVar12 + -8) = uVar10;
    *(undefined4 *)(puVar12 + -0xc) = 0x70d803;
    uVar10 = FUN_005659c0();
    *(undefined4 *)(puVar12 + -4) = uVar10;
    local_8._0_1_ = 0xe;
    *(undefined4 *)(puVar12 + -8) = 0x70d815;
    FUN_00988fa0();
    *(uint **)(puVar12 + -4) = local_2c;
    local_8._0_1_ = 0xf;
    *(undefined4 *)(puVar12 + -8) = 0x70d82d;
    FUN_00988f20();
    local_8._0_1_ = 0x10;
    *(undefined4 *)(puVar12 + -4) = uVar9;
    *(undefined4 *)(puVar12 + -8) = 0x70d83f;
    uVar10 = FUN_00988f20();
    *(undefined4 *)(puVar12 + -4) = 0xffffffff;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -0xc) = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0x11);
    *(undefined4 *)(puVar12 + -0x10) = 0x70d84f;
    FUN_00448aa0();
    if (0xf < local_70) {
      *(uint *)(puVar12 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d85e;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_8c) {
      *(uint *)(puVar12 + -4) = local_a0[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d887;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_54) {
      *(uint *)(puVar12 + -4) = local_68;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d8ae;
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_a8) {
      *(uint *)(puVar12 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d8d2;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_38) {
      *(uint *)(puVar12 + -4) = local_4c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d8f9;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_18) {
      *(uint *)(puVar12 + -4) = local_2c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070d91e;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if ((aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4 + 1] < 1) &&
     (aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4 + 1] < 0)) {
    *(undefined4 *)(puVar12 + -4) = 4;
    *(undefined **)(puVar12 + -8) = &DAT_00dfd504;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    *(undefined4 *)(puVar12 + -0xc) = 0x70d95a;
    FUN_00409350();
    local_8 = 0x12;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -4) = 0;
    iVar8 = aiStack_1b0[iVar7 * -4 + DAT_012587f4 * 4];
    iVar2 = (aiStack_1b0 + iVar7 * -4 + DAT_012587f4 * 4)[1];
    *(int *)(puVar12 + -8) = -iVar8;
    *(undefined4 *)(puVar12 + -0xc) = 2;
    *(uint **)(puVar12 + -0x10) = local_4c;
    *(uint *)(puVar12 + -4) = -(iVar2 + (uint)(iVar8 != 0));
    *(undefined4 *)(puVar12 + -0x14) = 0x70d995;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 0x13;
    uVar10 = *(undefined4 *)
              (*(int *)(DAT_012587f0 + 0xc) +
              *(int *)(&stack0xfffffe78 + (DAT_012587f4 + -3) * 0x10 + iVar6) * 4);
    *(uint **)(puVar12 + -4) = local_bc;
    *(undefined4 *)(puVar12 + -8) = uVar10;
    *(undefined4 *)(puVar12 + -0xc) = 0x70d9c2;
    uVar10 = FUN_005659c0();
    *(undefined4 *)(puVar12 + -4) = uVar10;
    local_8._0_1_ = 0x14;
    *(undefined4 *)(puVar12 + -8) = 0x70d9d4;
    FUN_00988fa0();
    *(uint **)(puVar12 + -4) = local_2c;
    local_8._0_1_ = 0x15;
    *(undefined4 *)(puVar12 + -8) = 0x70d9ec;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    *(undefined4 *)(puVar12 + -4) = uVar9;
    *(undefined4 *)(puVar12 + -8) = 0x70d9fe;
    uVar10 = FUN_00988f20();
    *(undefined4 *)(puVar12 + -4) = 0xffffffff;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -0xc) = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0x17);
    *(undefined4 *)(puVar12 + -0x10) = 0x70da11;
    FUN_00448aa0();
    if (0xf < local_70) {
      *(uint *)(puVar12 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070da20;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_8c) {
      *(uint *)(puVar12 + -4) = local_a0[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070da46;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_54) {
      *(uint *)(puVar12 + -4) = local_68;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070da6a;
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_a8) {
      *(uint *)(puVar12 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070da8b;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_38) {
      *(uint *)(puVar12 + -4) = local_4c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070daaf;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_18) {
      *(uint *)(puVar12 + -4) = local_2c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dad1;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if ((-1 < aiStack_17c[iVar7 * -4]) &&
     ((0 < aiStack_17c[iVar7 * -4] || (aiStack_17c[iVar7 * 0xfffffffcU + 0xffffffff] != 0)))) {
    *(undefined4 *)(puVar12 + -4) = 4;
    *(undefined **)(puVar12 + -8) = &DAT_00dfd504;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    *(undefined4 *)(puVar12 + -0xc) = 0x70db04;
    FUN_00409350();
    local_8 = 0x18;
    *(int *)(puVar12 + -8) = aiStack_17c[iVar7 * 0xfffffffcU + 0xffffffff];
    iVar8 = aiStack_17c[iVar7 * -4];
    *(undefined4 *)(puVar12 + -0xc) = 2;
    *(uint **)(puVar12 + -0x10) = local_4c;
    *(int *)(puVar12 + -4) = iVar8;
    *(undefined4 *)(puVar12 + -0x14) = 0x70db29;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 0x19;
    uVar10 = *(undefined4 *)(*(int *)(DAT_012587f0 + 0xc) + *(int *)(&stack0xfffffe78 + iVar6) * 4);
    *(uint **)(puVar12 + -4) = local_bc;
    *(undefined4 *)(puVar12 + -8) = uVar10;
    *(undefined4 *)(puVar12 + -0xc) = 0x70db4b;
    uVar10 = FUN_005659c0();
    *(undefined4 *)(puVar12 + -4) = uVar10;
    local_8._0_1_ = 0x1a;
    *(undefined4 *)(puVar12 + -8) = 0x70db5d;
    FUN_00988fa0();
    *(uint **)(puVar12 + -4) = local_2c;
    local_8._0_1_ = 0x1b;
    *(undefined4 *)(puVar12 + -8) = 0x70db75;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    *(undefined4 *)(puVar12 + -4) = uVar9;
    *(undefined4 *)(puVar12 + -8) = 0x70db87;
    uVar10 = FUN_00988f20();
    *(undefined4 *)(puVar12 + -4) = 0xffffffff;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -0xc) = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    *(undefined4 *)(puVar12 + -0x10) = 0x70db9a;
    FUN_00448aa0();
    if (0xf < local_70) {
      *(uint *)(puVar12 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dba9;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_8c) {
      *(uint *)(puVar12 + -4) = local_a0[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dbd2;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_54) {
      *(uint *)(puVar12 + -4) = local_68;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dbf9;
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_a8) {
      *(uint *)(puVar12 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dc1d;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_38) {
      *(uint *)(puVar12 + -4) = local_4c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dc44;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_18) {
      *(uint *)(puVar12 + -4) = local_2c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dc69;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if ((-1 < aiStack_17c[iVar7 * 0xfffffffcU + 4]) &&
     ((0 < aiStack_17c[iVar7 * 0xfffffffcU + 4] || (aiStack_17c[iVar7 * 0xfffffffcU + 3] != 0)))) {
    *(undefined4 *)(puVar12 + -4) = 4;
    *(undefined **)(puVar12 + -8) = &DAT_00dfd504;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    *(undefined4 *)(puVar12 + -0xc) = 0x70dc9c;
    FUN_00409350();
    local_8 = 0x1e;
    *(int *)(puVar12 + -8) = aiStack_17c[iVar7 * 0xfffffffcU + 3];
    uVar10 = aiStack_17c[iVar7 * 0xfffffffcU + 4];
    *(undefined4 *)(puVar12 + -0xc) = 2;
    *(uint **)(puVar12 + -0x10) = local_4c;
    *(undefined4 *)(puVar12 + -4) = uVar10;
    *(undefined4 *)(puVar12 + -0x14) = 0x70dcc1;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 0x1f;
    uVar10 = *(undefined4 *)
              (*(int *)(DAT_012587f0 + 0xc) + aiStack_17c[iVar7 * 0xfffffffcU + 1] * 4);
    *(uint **)(puVar12 + -4) = local_bc;
    *(undefined4 *)(puVar12 + -8) = uVar10;
    *(undefined4 *)(puVar12 + -0xc) = 0x70dce4;
    uVar10 = FUN_005659c0();
    *(undefined4 *)(puVar12 + -4) = uVar10;
    local_8._0_1_ = 0x20;
    *(undefined4 *)(puVar12 + -8) = 0x70dcf6;
    FUN_00988fa0();
    *(uint **)(puVar12 + -4) = local_2c;
    local_8._0_1_ = 0x21;
    *(undefined4 *)(puVar12 + -8) = 0x70dd0e;
    FUN_00988f20();
    local_8._0_1_ = 0x22;
    *(undefined4 *)(puVar12 + -4) = uVar9;
    *(undefined4 *)(puVar12 + -8) = 0x70dd20;
    uVar10 = FUN_00988f20();
    *(undefined4 *)(puVar12 + -4) = 0xffffffff;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -0xc) = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0x23);
    *(undefined4 *)(puVar12 + -0x10) = 0x70dd33;
    FUN_00448aa0();
    if (0xf < local_70) {
      *(uint *)(puVar12 + -4) = local_84[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dd42;
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_8c) {
      *(uint *)(puVar12 + -4) = local_a0[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dd68;
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_54) {
      *(uint *)(puVar12 + -4) = local_68;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dd8c;
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_a8) {
      *(uint *)(puVar12 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070ddad;
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_38) {
      *(uint *)(puVar12 + -4) = local_4c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070ddd1;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_18) {
      *(uint *)(puVar12 + -4) = local_2c[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070ddf3;
      FUN_00aae91b();
    }
  }
  local_8 = 0xffffffff;
  if ((-1 < aiStack_17c[iVar7 * 0xfffffffcU + 8]) &&
     ((0 < aiStack_17c[iVar7 * 0xfffffffcU + 8] || (aiStack_17c[iVar7 * 0xfffffffcU + 7] != 0)))) {
    *(undefined4 *)(puVar12 + -4) = 4;
    *(undefined **)(puVar12 + -8) = &DAT_00dfd504;
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = local_ec[0] & 0xffffff00;
    *(undefined4 *)(puVar12 + -0xc) = 0x70de32;
    FUN_00409350();
    local_8 = 0x24;
    *(int *)(puVar12 + -8) = aiStack_17c[iVar7 * 0xfffffffcU + 7];
    uVar10 = aiStack_17c[iVar7 * 0xfffffffcU + 8];
    *(undefined4 *)(puVar12 + -0xc) = 2;
    *(int **)(puVar12 + -0x10) = aiStack_17c + 1;
    *(undefined4 *)(puVar12 + -4) = uVar10;
    *(undefined4 *)(puVar12 + -0x14) = 0x70de5a;
    uVar9 = FUN_00988bb0();
    local_8._0_1_ = 0x25;
    uVar10 = *(undefined4 *)
              (*(int *)(DAT_012587f0 + 0xc) + aiStack_17c[iVar7 * 0xfffffffcU + 5] * 4);
    *(uint **)(puVar12 + -4) = local_140;
    *(undefined4 *)(puVar12 + -8) = uVar10;
    *(undefined4 *)(puVar12 + -0xc) = 0x70de7d;
    uVar10 = FUN_005659c0();
    *(undefined4 *)(puVar12 + -4) = uVar10;
    local_8._0_1_ = 0x26;
    *(undefined4 *)(puVar12 + -8) = 0x70de92;
    FUN_00988fa0();
    *(uint **)(puVar12 + -4) = local_ec;
    local_8._0_1_ = 0x27;
    *(undefined4 *)(puVar12 + -8) = 0x70dead;
    FUN_00988f20();
    local_8._0_1_ = 0x28;
    *(undefined4 *)(puVar12 + -4) = uVar9;
    *(undefined4 *)(puVar12 + -8) = 0x70dec2;
    uVar10 = FUN_00988f20();
    *(undefined4 *)(puVar12 + -4) = 0xffffffff;
    *(undefined4 *)(puVar12 + -8) = 0;
    *(undefined4 *)(puVar12 + -0xc) = uVar10;
    local_8 = CONCAT31(local_8._1_3_,0x29);
    *(undefined4 *)(puVar12 + -0x10) = 0x70ded5;
    FUN_00448aa0();
    if (0xf < local_f4) {
      *(uint *)(puVar12 + -4) = local_108;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070deea;
      FUN_00aae91b();
    }
    local_f4 = 0xf;
    local_f8 = 0;
    local_108 = local_108 & 0xffffff00;
    if (0xf < local_148) {
      *(uint *)(puVar12 + -4) = local_15c;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070df1d;
      FUN_00aae91b();
    }
    local_148 = 0xf;
    local_14c = 0;
    local_15c = local_15c & 0xffffff00;
    if (0xf < local_110) {
      *(uint *)(puVar12 + -4) = local_124;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070df46;
      FUN_00aae91b();
    }
    local_110 = 0xf;
    local_114 = 0;
    local_124 = local_124 & 0xffffff00;
    if (0xf < local_12c) {
      *(uint *)(puVar12 + -4) = local_140[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070df6f;
      FUN_00aae91b();
    }
    local_12c = 0xf;
    local_130 = 0;
    local_140[0] = local_140[0] & 0xffffff00;
    if (0xf < local_164) {
      *(int *)(puVar12 + -4) = aiStack_17c[1];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070df98;
      FUN_00aae91b();
    }
    local_164 = 0xf;
    local_168 = 0;
    aiStack_17c[1] = aiStack_17c[1] & 0xffffff00;
    if (0xf < local_d8) {
      *(uint *)(puVar12 + -4) = local_ec[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -8) = &UNK_0070dfc1;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}


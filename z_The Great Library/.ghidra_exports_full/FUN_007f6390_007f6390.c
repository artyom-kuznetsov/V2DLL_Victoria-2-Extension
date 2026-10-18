// FUN_007f6390 @ 007f6390 body=[[007f6390, 007f6442] [007f6446, 007f654a] [007f654e, 007f659e] [007f65a2, 007f6604] [007f6608, 007f6661] [007f6665, 007f6680] [007f6684, 007f674c] [007f6750, 007f67c5] [007f67c9, 007f697d] [007f6981, 007f6b98] [007f6b9c, 007f6c90] [007f6c94, 007f6cb8] [007f6cbc, 007f6cd7] [007f6cdb, 007f6dab] [007f6daf, 007f6db8] [007f6dbc, 007f6dc8] [007f6dcc, 007f6de4] [007f6de8, 007f6e13] [007f6e17, 007f6e3d] [007f6e41, 007f6e67] [007f6e6b, 007f6e91] [007f6e95, 007f6ea7]]


void FUN_007f6390(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  undefined1 auStack_30c [4];
  undefined4 uStack_308;
  int iStack_304;
  undefined *puStack_300;
  undefined ***pppuStack_2fc;
  uint *puStack_2f8;
  undefined **local_268 [48];
  undefined **local_1a8;
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  uint local_140 [4];
  undefined4 local_130;
  uint local_12c;
  undefined **local_124 [5];
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  int local_f4;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  int local_94;
  float local_90;
  void *local_8c;
  int local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  int local_7c;
  int local_78;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  int *local_44;
  int *local_40;
  uint local_38 [3];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6aa86;
  local_10 = ExceptionList;
  puStack_2f8 = (uint *)0xe1a5bc;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  pppuStack_2fc = (undefined ***)0x7f63d0;
  ExceptionList = &local_10;
  FUN_00409350();
  pppuStack_2fc = (undefined ***)local_38;
  puStack_2f8 = (uint *)0x840;
  local_8 = 0;
  puStack_300 = (undefined *)0x7f63e9;
  FUN_004015b0();
  local_8._0_1_ = 1;
  FUN_00987d20();
  puStack_2f8 = (uint *)0x7f6402;
  FUN_00401280();
  local_8 = (uint)local_8._1_3_ << 8;
  puStack_2f8 = (uint *)0x7f6414;
  FUN_00987ac0();
  local_1a8 = std::ios_base::vftable;
  puStack_2f8 = (uint *)0x7f642a;
  FUN_00aad52d();
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f6443;
    FUN_00aae91b();
  }
  fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_90 = (float)fVar10;
  puStack_2f8 = (uint *)0x7f6463;
  local_8c = _malloc(0x1000000);
  puStack_2f8 = (uint *)0xe1b234;
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8[0] = local_e8[0] & 0xffffff00;
  pppuStack_2fc = (undefined ***)0x7f6491;
  FUN_00409350();
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_00436780();
  local_8._0_1_ = 4;
  FUN_004367c0();
  local_8._0_1_ = 5;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 5;
  local_80 = *(undefined1 **)(DAT_012586e0 + 0x5c);
  if (local_80 == (undefined1 *)0x1) {
    puStack_2f8 = (uint *)0x0;
    puStack_300 = (undefined *)0x7f6505;
    pppuStack_2fc = (undefined ***)local_140;
    FUN_00408ed0();
  }
  else if (local_80 == (undefined1 *)0x2) {
    puStack_2f8 = local_140;
    pppuStack_2fc = (undefined ***)local_74;
    puStack_300 = (undefined *)0x7f65e0;
    local_8._0_1_ = uVar1;
    pppuStack_2fc = (undefined ***)FUN_00436de0();
    puStack_2f8 = (uint *)0x0;
    local_8._0_1_ = 9;
    puStack_300 = (undefined *)0x7f65f2;
    FUN_00408ed0();
    local_8._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      puStack_2f8 = (uint *)&UNK_007f6605;
      FUN_00aae91b();
    }
    puStack_2f8 = (uint *)0xe1ae0c;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    pppuStack_2fc = (undefined ***)0x7f6626;
    FUN_00409350();
    local_8._0_1_ = 10;
    puStack_2f8 = (uint *)0x7f663c;
    pppuStack_2fc = (undefined ***)FUN_00988f20();
    puStack_2f8 = (uint *)0x0;
    local_8._0_1_ = 0xb;
    puStack_300 = (undefined *)0x7f664f;
    FUN_00408ed0();
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      puStack_2f8 = (uint *)&UNK_007f6662;
      FUN_00aae91b();
    }
    goto joined_r0x007f6676;
  }
  puStack_2f8 = (uint *)0x7f6525;
  pppuStack_2fc = (undefined ***)FUN_00988f20();
  puStack_2f8 = (uint *)0x0;
  local_8._0_1_ = 6;
  puStack_300 = (undefined *)0x7f6538;
  FUN_00408ed0();
  local_8._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f654b;
    FUN_00aae91b();
  }
  puStack_2f8 = (uint *)0xe1ae0c;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  pppuStack_2fc = (undefined ***)0x7f6567;
  FUN_00409350();
  local_8._0_1_ = 7;
  puStack_2f8 = (uint *)0x7f657d;
  pppuStack_2fc = (undefined ***)FUN_00988f20();
  puStack_2f8 = (uint *)0x0;
  local_8._0_1_ = 8;
  puStack_300 = (undefined *)0x7f6590;
  FUN_00408ed0();
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f659f;
    FUN_00aae91b();
  }
joined_r0x007f6676:
  local_74[0] = local_74[0] & 0xffffff00;
  if (0xf < local_24) {
    local_8._0_1_ = 5;
    local_60 = 0xf;
    local_64 = 0;
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f6681;
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_60 = 0xf;
  local_64 = 0;
  puStack_2f8 = (uint *)0x0;
  pppuStack_2fc = (undefined ***)local_cc;
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = local_15c[0] & 0xffffff00;
  puStack_300 = (undefined *)0x7f66b2;
  FUN_00408ed0();
  local_58 = (int *)0x0;
  local_54 = (int *)0x0;
  local_50 = (int *)0x0;
  piVar4 = (int *)0x0;
  piVar8 = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_84 = auStack_30c;
  local_8._0_1_ = 0xe;
  puStack_2f8 = (uint *)0xf;
  pppuStack_2fc = (undefined ***)0x0;
  auStack_30c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_124,local_e8,1);
  local_8._0_1_ = 0xf;
  local_84 = (undefined1 *)(*(int *)(param_1 + 400) * *(int *)(param_1 + 0x18c));
  local_1c = 0;
  piVar6 = (int *)0x0;
  if (0 < (int)local_84) {
    do {
      iVar5 = local_1c * 0x3c0;
      iVar7 = *(int *)(param_1 + 0x19c);
      piVar6 = *(int **)(iVar5 + iVar7);
      iVar2 = *(int *)(iVar5 + 4 + iVar7) - (int)piVar6 >> 2;
      iVar3 = 0;
      piVar4 = local_48;
      if (0 < iVar2) {
        do {
          if (*(char *)(*(int *)(*piVar6 + 8) + 0x2a) != '\0') {
            puStack_2f8 = local_15c;
            puStack_300 = (undefined *)local_1c;
            iStack_304 = param_1;
            uStack_308 = 0x7f688c;
            pppuStack_2fc = (undefined ***)(iVar5 + iVar7);
            FUN_00809240();
            if (0 < *(int *)(iVar5 + 0x27c + *(int *)(param_1 + 0x19c))) {
              uVar9 = 0;
              puStack_2f8 = (uint *)0xe1a5bc;
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              pppuStack_2fc = (undefined ***)0x7f68bf;
              FUN_00409350();
              pppuStack_2fc = (undefined ***)local_38;
              puStack_2f8 = (uint *)0x87a;
              local_8._0_1_ = 0x10;
              puStack_300 = (undefined *)0x7f68d9;
              FUN_004015b0();
              local_8 = CONCAT31(local_8._1_3_,0x11);
              puStack_2f8 = (uint *)0x7f68f0;
              puStack_2f8 = (uint *)FUN_00987d20();
              pppuStack_2fc = (undefined ***)0x7f68f6;
              piVar4 = (int *)FUN_00455470();
              puStack_300 = (undefined *)0x7f68fe;
              pppuStack_2fc = (undefined ***)piVar4;
              FUN_00408be0();
              if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
                 (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34
                                      ))(), iVar7 == -1)) {
                uVar9 = 4;
              }
              if (uVar9 != 0) {
                puStack_2f8 = (uint *)(*(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar9)
                ;
                if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
                  puStack_2f8 = (uint *)((uint)puStack_2f8 | 4);
                }
                pppuStack_2fc = (undefined ***)0x7f6942;
                FUN_00401120();
              }
              local_8._0_1_ = 0x10;
              puStack_2f8 = (uint *)0x7f6952;
              FUN_00987ac0();
              local_1a8 = std::ios_base::vftable;
              puStack_2f8 = (uint *)0x7f6968;
              FUN_00aad52d();
              iVar7 = local_1c;
              local_8._0_1_ = 0xf;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                puStack_2f8 = (uint *)&UNK_007f697e;
                FUN_00aae91b();
              }
              puStack_2f8 = (uint *)param_1;
              pppuStack_2fc = (undefined ***)0x7f6991;
              local_18[0] = FUN_0080b6f0();
              if ((&local_1c < local_54) && (local_58 <= &local_1c)) {
                iVar7 = (int)&local_1c - (int)local_58;
                if (local_54 == local_50) {
                  uVar9 = (int)local_54 - (int)local_58 >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_007f6b4f;
                  if ((uint)((int)local_50 - (int)local_58 >> 2) < uVar9 + 1) {
                    puStack_2f8 = (uint *)0x7f69f4;
                    FUN_004bf300();
                  }
                }
                if (local_54 != (int *)0x0) {
                  *local_54 = local_58[iVar7 >> 2];
                }
              }
              else {
                if (local_54 == local_50) {
                  uVar9 = (int)local_54 - (int)local_58 >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_007f6b4f;
                  if ((uint)((int)local_50 - (int)local_58 >> 2) < uVar9 + 1) {
                    puStack_2f8 = (uint *)0x7f6a4b;
                    FUN_004bf300();
                  }
                }
                if (local_54 != (int *)0x0) {
                  *local_54 = iVar7;
                }
              }
              local_54 = local_54 + 1;
              if ((local_18 < local_44) && (local_48 <= local_18)) {
                local_88 = (int)local_18 - (int)local_48 >> 2;
                if (local_44 == local_40) {
                  uVar9 = (int)local_44 - (int)local_48 >> 2;
                  if (0x3ffffffe < uVar9) {
LAB_007f6b4f:
                    /* WARNING: Subroutine does not return */
                    puStack_2f8 = (uint *)0x7f6b59;
                    FUN_00aad3ad();
                  }
                  if ((uint)((int)local_40 - (int)local_48 >> 2) < uVar9 + 1) {
                    puStack_2f8 = (uint *)0x7f6abe;
                    FUN_004bf300();
                  }
                }
                if (local_44 != (int *)0x0) {
                  *local_44 = local_48[local_88];
                }
                local_44 = local_44 + 1;
              }
              else {
                if (local_44 == local_40) {
                  uVar9 = (int)local_44 - (int)local_48 >> 2;
                  if (0x3ffffffe < uVar9) goto LAB_007f6b4f;
                  if ((uint)((int)local_40 - (int)local_48 >> 2) < uVar9 + 1) {
                    puStack_2f8 = (uint *)0x7f6b1d;
                    FUN_004bf300();
                  }
                }
                if (local_44 != (int *)0x0) {
                  *local_44 = local_18[0];
                }
                local_44 = local_44 + 1;
              }
            }
            piVar8 = local_44;
            piVar4 = local_48;
            puStack_2f8 = (uint *)0x7f6b4a;
            FUN_007d85d0();
            break;
          }
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 1;
          piVar8 = local_44;
        } while (iVar3 < iVar2);
      }
      local_1c = local_1c + 1;
      piVar6 = local_54;
    } while (local_1c < (int)local_84);
  }
  local_8._0_1_ = 0xe;
  local_124[0] = &PTR_FUN_00e37dc0;
  if (local_f4 != 0) {
    puStack_2f8 = (uint *)0x7f679a;
    PHYSFS_close();
    local_f4 = 0;
  }
  local_124[0] = &PTR_FUN_00e3b540;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f67c6;
    FUN_00aae91b();
  }
  local_94 = (int)piVar6 - (int)local_58 >> 2;
  local_18[0] = (int)piVar8 - (int)piVar4 >> 2;
  iVar7 = 0;
  iVar2 = 0;
  local_7c = 0;
  local_78 = 0;
  if (0 < local_18[0]) {
    local_7c = 0;
    do {
      local_7c = local_7c + piVar4[iVar2];
      iVar3 = piVar4[iVar2];
      if (iVar7 <= iVar3) {
        iVar7 = iVar3;
        local_78 = iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_18[0]);
  }
  puStack_2f8 = (uint *)0xe1b24c;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  pppuStack_2fc = (undefined ***)0x7f6828;
  FUN_00409350();
  local_8._0_1_ = 0x12;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0x12;
  if (local_80 == (undefined1 *)0x2) {
    puStack_2f8 = local_140;
    pppuStack_2fc = (undefined ***)local_74;
    puStack_300 = (undefined *)0x7f6b73;
    local_8._0_1_ = uVar1;
    pppuStack_2fc = (undefined ***)FUN_00436de0();
    puStack_2f8 = (uint *)0x0;
    local_8._0_1_ = 0x14;
    puStack_300 = (undefined *)0x7f6b86;
    FUN_00408ed0();
  }
  else {
    puStack_2f8 = (uint *)0x7f6848;
    pppuStack_2fc = (undefined ***)FUN_00988f20();
    puStack_2f8 = (uint *)0x0;
    local_8._0_1_ = 0x13;
    puStack_300 = (undefined *)0x7f6859;
    FUN_00408ed0();
  }
  if (0xf < local_60) {
    local_8._0_1_ = 0x12;
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f6b99;
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x12;
  local_80 = auStack_30c;
  puStack_2f8 = (uint *)0xf;
  pppuStack_2fc = (undefined ***)0x0;
  auStack_30c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_124,local_38,1);
  puStack_2f8 = (uint *)&local_94;
  local_8 = CONCAT31(local_8._1_3_,0x15);
  pppuStack_2fc = (undefined ***)0x7f6bed;
  FUN_00993720();
  puStack_2f8 = (uint *)&local_7c;
  pppuStack_2fc = (undefined ***)0x7f6bfe;
  FUN_00993720();
  puStack_2f8 = (uint *)&local_78;
  pppuStack_2fc = (undefined ***)0x7f6c0f;
  FUN_00993720();
  if (0 < local_18[0]) {
    iVar7 = (int)local_58 - (int)piVar4;
    piVar8 = piVar4;
    do {
      puStack_2f8 = (uint *)(iVar7 + (int)piVar8);
      pppuStack_2fc = (undefined ***)0x7f6c33;
      FUN_00993720();
      pppuStack_2fc = (undefined ***)0x7f6c41;
      puStack_2f8 = (uint *)piVar8;
      FUN_00993720();
      piVar8 = piVar8 + 1;
      local_18[0] = local_18[0] + -1;
    } while (local_18[0] != 0);
  }
  local_124[0] = &PTR_FUN_00e37dc0;
  if (local_f4 != 0) {
    puStack_2f8 = (uint *)0x7f6c65;
    PHYSFS_close();
    local_f4 = 0;
  }
  local_124[0] = &PTR_FUN_00e3b540;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f6c91;
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110 = local_110 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    puStack_2f8 = (uint *)&UNK_007f6cb9;
    FUN_00aae91b();
  }
  piVar8 = (int *)(param_1 + 0x190c);
  if (piVar8 != &local_2c) {
    if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      puStack_2f8 = (uint *)&UNK_007f6cd8;
      FUN_00aae91b();
    }
    *piVar8 = 0;
    *(undefined4 *)(param_1 + 0x1910) = 0;
    *(undefined4 *)(param_1 + 0x1914) = 0;
  }
  local_8._0_1_ = 0xe;
  fVar11 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  fVar10 = (float10)local_90;
  puStack_2f8 = (uint *)0xe1a5bc;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  pppuStack_2fc = (undefined ***)0x7f6d1a;
  FUN_00409350();
  pppuStack_2fc = (undefined ***)local_74;
  puStack_2f8 = (uint *)0x918;
  local_8._0_1_ = 0x17;
  puStack_300 = (undefined *)0x7f6d37;
  FUN_004015b0();
  local_8._0_1_ = 0x18;
  puStack_300 = (undefined *)0x7f6d5c;
  pppuStack_2fc = (undefined ***)(float)(fVar11 - fVar10);
  puStack_300 = (undefined *)FUN_00987d20();
  iStack_304 = 0x7f6d62;
  puStack_300 = (undefined *)FUN_0048b410();
  iStack_304 = 0x7f6d6b;
  iStack_304 = FUN_00418e30();
  uStack_308 = 0x7f6d71;
  FUN_00401280();
  pppuStack_2fc = local_268;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  puStack_300 = (undefined *)0x7f6d84;
  FUN_00987ac0();
  pppuStack_2fc = local_268;
  local_268[0] = std::ios_base::vftable;
  puStack_300 = (undefined *)0x7f6d9a;
  FUN_00aad52d();
  if (local_60 < 0x10) {
    if (piVar4 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6db9;
      pppuStack_2fc = (undefined ***)piVar4;
      FUN_00aae91b();
    }
    if (local_58 != (int *)0x0) {
      pppuStack_2fc = (undefined ***)local_58;
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6dc9;
      FUN_00aae91b();
    }
    if (0xf < local_148) {
      pppuStack_2fc = (undefined ***)local_15c[0];
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6de5;
      FUN_00aae91b();
    }
    local_148 = 0xf;
    local_14c = 0;
    local_15c[0] = local_15c[0] & 0xffffff00;
    if (0xf < local_12c) {
      pppuStack_2fc = (undefined ***)local_140[0];
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6e14;
      FUN_00aae91b();
    }
    local_12c = 0xf;
    local_130 = 0;
    local_140[0] = local_140[0] & 0xffffff00;
    if (0xf < local_9c) {
      pppuStack_2fc = (undefined ***)local_b0;
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6e3e;
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    if (0xf < local_b8) {
      pppuStack_2fc = (undefined ***)local_cc[0];
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6e68;
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_d4) {
      pppuStack_2fc = (undefined ***)local_e8[0];
                    /* WARNING: Subroutine does not return */
      puStack_300 = &UNK_007f6e92;
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return;
  }
  pppuStack_2fc = (undefined ***)local_74[0];
                    /* WARNING: Subroutine does not return */
  puStack_300 = &UNK_007f6dac;
  FUN_00aae91b();
}


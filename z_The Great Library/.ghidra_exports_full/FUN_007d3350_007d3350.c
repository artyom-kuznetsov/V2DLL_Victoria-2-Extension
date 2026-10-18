// FUN_007d3350 @ 007d3350 body=[[007d3350, 007d3496] [007d34a0, 007d35a7] [007d35ab, 007d3afb] [007d3aff, 007d3c0d] [007d3c11, 007d3d1f] [007d3d23, 007d3e31] [007d3e35, 007d3f58] [007d3f5c, 007d418f]]


void FUN_007d3350(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_ECX;
  int iVar11;
  int *piVar12;
  uint uVar13;
  float fVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined **local_1b8 [48];
  undefined **local_f8 [19];
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  int local_90;
  int local_8c;
  int local_88;
  float local_84;
  int local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b596c5;
  local_10 = ExceptionList;
  local_74 = 0;
  ExceptionList = &local_10;
  if (0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14)) {
    do {
      iVar7 = local_74;
      iVar9 = *(int *)(param_1 + 0x18);
      local_6c = local_74 * 0x10;
      iVar10 = *(int *)(local_6c + iVar9);
      if (iVar10 != *(int *)(local_6c + 4 + iVar9)) {
        iVar9 = *(int *)(local_6c + 4 + iVar9);
        iVar11 = local_74 * 0x24;
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x14 + iVar11) = 1;
        local_90 = ((iVar9 - iVar10) / 0x1c) * 4;
        local_80 = iVar11;
        FUN_009f9630(*(int *)(param_1 + 0x24) + iVar11,*(undefined4 *)(*(int *)(param_1 + 4) + 100),
                     local_90,8,0,0);
        iVar9 = *(int *)(param_1 + 0x24);
        piVar12 = *(int **)(iVar9 + iVar11);
        if (piVar12 == (int *)0x0) {
          local_70 = 0;
        }
        else {
          uVar8 = 0;
          if ((*(char *)(iVar9 + 0x15 + iVar11) != '\0') &&
             (*(char *)(iVar9 + 0x16 + iVar11) == '\0')) {
            uVar8 = 0x2000;
          }
          (**(code **)(*piVar12 + 0x2c))(piVar12,0,0,&local_88,uVar8);
          local_70 = local_88;
        }
        iVar11 = 0;
        local_4c = 0;
        local_8c = *(int *)(param_1 + 8) * (iVar7 % *(int *)(param_1 + 0x10)) +
                   *(int *)(param_1 + 8) / 2;
        piVar12 = (int *)(*(int *)(param_1 + 0x18) + local_6c);
        local_78 = *(int *)(param_1 + 0xc) * (iVar7 / *(int *)(param_1 + 0x10)) +
                   *(int *)(param_1 + 0xc) / 2;
        iVar10 = piVar12[1] - *piVar12;
        iVar9 = iVar10 >> 0x1f;
        if (iVar10 / 0x1c + iVar9 != iVar9) {
          do {
            iVar9 = local_90;
            if (local_90 <= iVar11) {
              uVar13 = 0;
              local_54 = 0xf;
              local_58 = 0;
              local_68[0] = local_68[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              local_8 = 0;
              FUN_004015b0(local_68,0x2a5,0x1000);
              local_8 = CONCAT31(local_8._1_3_,1);
              uVar8 = FUN_00987d20(iVar11,extraout_ECX,&DAT_00ded950,extraout_ECX,iVar9);
              uVar8 = FUN_00455470(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_00455470(uVar8);
              FUN_00408be0(piVar12);
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = local_8 & 0xffffff00;
              FUN_00987ac0(local_f8);
              local_f8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_f8);
              local_8 = 0xffffffff;
              if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_68[0]);
              }
            }
            iVar9 = *(int *)(local_6c + *(int *)(param_1 + 0x18));
            iVar10 = *(int *)(iVar9 + 8 + local_4c * 0x1c);
            piVar12 = (int *)(iVar9 + local_4c * 0x1c);
            fVar14 = (float)piVar12[4];
            fVar1 = (float)piVar12[5];
            fVar2 = (float)piVar12[6];
            local_7c = (float)(piVar12[1] - local_78);
            iVar9 = iVar10 * 0x30;
            uVar4 = *(undefined8 *)(&DAT_00f0c968 + iVar9);
            local_84 = (float)(*piVar12 - local_8c);
            fVar6 = *(float *)(&DAT_00f0c970 + iVar9);
            local_3c = *(undefined8 *)(&DAT_00f0c974 + iVar9);
            local_34 = *(float *)(&DAT_00f0c97c + iVar9);
            local_30 = *(undefined8 *)(&DAT_00f0c980 + iVar9);
            local_28 = *(float *)(&DAT_00f0c988 + iVar9);
            uVar5 = *(undefined8 *)(&DAT_00f0c98c + iVar9);
            local_1c = *(float *)(&DAT_00f0c994 + iVar9);
            uVar13 = local_4c & 0x80000003;
            DAT_012589a5 = uVar13 == 0;
            fVar3 = (float)piVar12[3];
            if ((int)uVar13 < 0) {
              DAT_012589a5 = (uVar13 - 1 | 0xfffffffc) == 0xffffffff;
            }
            iVar9 = *(int *)(&DAT_00f09410 + iVar10 * 4);
            local_18 = (float *)&DAT_00f0c764;
            local_48._0_4_ = (float)uVar4;
            local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_24._0_4_ = (float)uVar5;
            local_24._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            if (iVar9 == 0) {
              local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
              local_24 = CONCAT44(local_24._4_4_,fVar1 + (float)local_24);
              local_1c = local_1c + fVar2;
              uVar4 = local_48;
              local_40 = fVar14 + fVar6;
              uVar5 = local_24;
              if (!(bool)DAT_012589a5) goto LAB_007d39ce;
              local_18 = (float *)&DAT_00f0c864;
LAB_007d39cb:
              local_40 = fVar14 + fVar6;
              uVar4 = local_48;
              uVar5 = local_24;
            }
            else {
              if (iVar9 == 5) {
                local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
                local_24 = CONCAT44(local_24._4_4_,fVar1 + (float)local_24);
                local_1c = local_1c + fVar2;
                if ((bool)DAT_012589a5) {
                  local_18 = (float *)&DAT_00f0c8a4;
                }
                else {
                  local_18 = (float *)&DAT_00f0c7a4;
                }
                goto LAB_007d39cb;
              }
              if (iVar9 == 6) {
                local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
                local_24 = CONCAT44(local_24._4_4_,fVar1 + (float)local_24);
                local_1c = local_1c + fVar2;
                if ((bool)DAT_012589a5) {
                  local_18 = (float *)&DAT_00f0c8c4;
                }
                else {
                  local_18 = (float *)&DAT_00f0c7c4;
                }
                goto LAB_007d39cb;
              }
              local_3c._4_4_ = (undefined4)((ulonglong)local_3c >> 0x20);
              local_24 = uVar5;
              if (iVar9 == 1) {
                local_18 = (float *)&DAT_00f0c884;
                if (!(bool)DAT_012589a5) {
                  local_18 = (float *)&DAT_00f0c784;
                }
                local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
                local_3c = CONCAT44(local_3c._4_4_,fVar1 + (float)local_3c);
                local_34 = local_34 + fVar2;
                goto LAB_007d39cb;
              }
              if (iVar9 == 2) {
                local_18 = (float *)&DAT_00f0c884;
                if (!(bool)DAT_012589a5) {
                  local_18 = (float *)&DAT_00f0c784;
                }
                local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
                local_3c = CONCAT44(local_3c._4_4_,fVar3 + (float)local_3c);
                local_34 = local_34 + fVar14;
                goto LAB_007d39cb;
              }
              local_40 = fVar6;
              if (9 < iVar9) {
                local_48 = CONCAT44(local_48._4_4_,fVar3 + (float)local_48);
                local_40 = fVar14 + fVar6;
                local_24 = CONCAT44(local_24._4_4_,fVar1 + (float)local_24);
                local_1c = local_1c + fVar2;
                uVar4 = local_48;
                uVar5 = local_24;
                if ((bool)DAT_012589a5) {
                  if (iVar9 == 10) {
                    local_18 = (float *)&DAT_00f0c8e4;
                  }
                  else if (iVar9 == 0xb) {
                    local_18 = (float *)&DAT_00f0c904;
                  }
                  else if (iVar9 == 0xc) {
                    local_18 = (float *)&DAT_00f0c924;
                  }
                  else {
                    if (iVar9 != 0xd) goto LAB_007d39ce;
                    local_18 = (float *)&DAT_00f0c944;
                  }
                }
                else if (iVar9 == 10) {
                  local_18 = (float *)&DAT_00f0c7e4;
                }
                else if (iVar9 == 0xb) {
                  local_18 = (float *)&DAT_00f0c804;
                }
                else if (iVar9 == 0xc) {
                  local_18 = (float *)&DAT_00f0c824;
                }
                else {
                  if (iVar9 != 0xd) goto LAB_007d39ce;
                  local_18 = (float *)&DAT_00f0c844;
                }
                goto LAB_007d39cb;
              }
            }
LAB_007d39ce:
            local_24 = uVar5;
            local_48 = uVar4;
            if (DAT_013f08b4 != '\0') {
              local_54 = 0xf;
              local_58 = 0;
              local_68[0] = local_68[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              local_8 = 2;
              FUN_004015b0(local_68,0x30f,5);
              local_8 = CONCAT31(local_8._1_3_,3);
              iVar9 = piVar12[1];
              uVar8 = FUN_00987d20(piVar12[2],iVar9,&DAT_00ded950,iVar9,*piVar12,iVar9,&DAT_00ded950
                                   ,iVar9,iVar9);
              uVar8 = FUN_00455470(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              uVar8 = FUN_00455470(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_00455470(uVar8);
              FUN_00408be0(piVar12);
              uVar13 = 0;
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = CONCAT31(local_8._1_3_,2);
              FUN_00987ac0(local_f8);
              local_f8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_f8);
              local_8 = 0xffffffff;
              if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_68[0]);
              }
              uVar13 = 0;
              local_54 = 0xf;
              local_58 = 0;
              local_68[0] = local_68[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              uVar16 = 0x310;
              local_8 = 4;
              FUN_004015b0(local_68,0x310,5);
              local_8 = CONCAT31(local_8._1_3_,5);
              puVar15 = &DAT_00ded950;
              fVar14 = local_40;
              uVar8 = FUN_00987d20((float)local_48);
              uVar8 = FUN_0048b410(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_0048b410(uVar8,puVar15,uVar16,fVar14);
              FUN_00408be0(piVar12);
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = CONCAT31(local_8._1_3_,4);
              FUN_00987ac0(local_f8);
              local_f8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_f8);
              local_8 = 0xffffffff;
              if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_68[0]);
              }
              uVar13 = 0;
              local_54 = 0xf;
              local_58 = 0;
              local_68[0] = local_68[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              uVar16 = 0x311;
              local_8 = 6;
              FUN_004015b0(local_68,0x311,5);
              local_8 = CONCAT31(local_8._1_3_,7);
              puVar15 = &DAT_00ded950;
              fVar14 = local_34;
              uVar8 = FUN_00987d20((float)local_3c);
              uVar8 = FUN_0048b410(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_0048b410(uVar8,puVar15,uVar16,fVar14);
              FUN_00408be0(piVar12);
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = CONCAT31(local_8._1_3_,6);
              FUN_00987ac0(local_f8);
              local_f8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_f8);
              local_8 = 0xffffffff;
              if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_68[0]);
              }
              uVar13 = 0;
              local_54 = 0xf;
              local_58 = 0;
              local_68[0] = local_68[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              uVar16 = 0x312;
              local_8 = 8;
              FUN_004015b0(local_68,0x312,5);
              local_8 = CONCAT31(local_8._1_3_,9);
              puVar15 = &DAT_00ded950;
              fVar14 = local_28;
              uVar8 = FUN_00987d20((float)local_30);
              uVar8 = FUN_0048b410(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_0048b410(uVar8,puVar15,uVar16,fVar14);
              FUN_00408be0(piVar12);
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = CONCAT31(local_8._1_3_,8);
              FUN_00987ac0(local_f8);
              local_f8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_f8);
              local_8 = 0xffffffff;
              if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_68[0]);
              }
              uVar13 = 0;
              local_98 = 0xf;
              local_9c = 0;
              local_ac[0] = local_ac[0] & 0xffffff00;
              FUN_00409350("beachmanager.cpp",0x10);
              uVar16 = 0x313;
              local_8 = 10;
              FUN_004015b0(local_ac,0x313,5);
              local_8 = CONCAT31(local_8._1_3_,0xb);
              puVar15 = &DAT_00ded950;
              fVar14 = local_1c;
              uVar8 = FUN_00987d20((float)local_24);
              uVar8 = FUN_0048b410(uVar8);
              uVar8 = FUN_00418e30(uVar8);
              piVar12 = (int *)FUN_0048b410(uVar8,puVar15,uVar16,fVar14);
              FUN_00408be0(piVar12);
              if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
                 (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) +
                                      0x34))(), iVar9 == -1)) {
                uVar13 = 4;
              }
              if (uVar13 != 0) {
                uVar13 = *(uint *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0xc) | uVar13;
                if (*(int *)((int)piVar12 + *(int *)(*piVar12 + 4) + 0x38) == 0) {
                  uVar13 = uVar13 | 4;
                }
                FUN_00401120(uVar13,0);
              }
              local_8 = CONCAT31(local_8._1_3_,10);
              FUN_00987ac0(local_1b8);
              local_1b8[0] = std::ios_base::vftable;
              FUN_00aad52d(local_1b8);
              local_8 = 0xffffffff;
              if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_ac[0]);
              }
              local_98 = 0xf;
              local_9c = 0;
              local_ac[0] = local_ac[0] & 0xffffff00;
            }
            *(short *)(local_70 + iVar11 * 8) = (short)(int)((local_84 + (float)local_48) * 2.0);
            *(short *)(local_70 + 2 + iVar11 * 8) = (short)(int)((local_7c + local_40) * 2.0);
            *(short *)(local_70 + 4 + iVar11 * 8) = (short)(int)(*local_18 * 100.0);
            *(short *)(local_70 + 6 + iVar11 * 8) = (short)(int)(local_18[1] * 100.0);
            *(short *)(local_70 + 8 + iVar11 * 8) = (short)(int)((local_84 + (float)local_3c) * 2.0)
            ;
            *(short *)(local_70 + 10 + iVar11 * 8) = (short)(int)((local_34 + local_7c) * 2.0);
            *(short *)(local_70 + 0xc + iVar11 * 8) = (short)(int)(local_18[2] * 100.0);
            *(short *)(local_70 + 0xe + iVar11 * 8) = (short)(int)(local_18[3] * 100.0);
            *(short *)(local_70 + 0x10 + iVar11 * 8) =
                 (short)(int)((local_84 + (float)local_30) * 2.0);
            *(short *)(local_70 + 0x12 + iVar11 * 8) = (short)(int)((local_28 + local_7c) * 2.0);
            *(short *)(local_70 + 0x14 + iVar11 * 8) = (short)(int)(local_18[4] * 100.0);
            *(short *)(local_70 + 0x16 + iVar11 * 8) = (short)(int)(local_18[5] * 100.0);
            *(short *)(local_70 + 0x18 + iVar11 * 8) =
                 (short)(int)((local_84 + (float)local_24) * 2.0);
            *(short *)(local_70 + 0x1a + iVar11 * 8) = (short)(int)((local_1c + local_7c) * 2.0);
            *(short *)(local_70 + 0x1c + iVar11 * 8) = (short)(int)(local_18[6] * 100.0);
            local_4c = local_4c + 1;
            *(short *)(local_70 + 0x1e + iVar11 * 8) = (short)(int)(local_18[7] * 100.0);
            piVar12 = (int *)(*(int *)(param_1 + 0x18) + local_6c);
            iVar11 = iVar11 + 4;
          } while (local_4c < (uint)((piVar12[1] - *piVar12) / 0x1c));
        }
        piVar12 = *(int **)(*(int *)(param_1 + 0x24) + local_80);
        (**(code **)(*piVar12 + 0x30))(piVar12);
      }
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0x14));
  }
  ExceptionList = local_10;
  return;
}


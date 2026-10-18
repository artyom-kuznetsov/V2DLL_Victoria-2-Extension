// FUN_007dd7e0 @ 007dd7e0 body=[[007dd7e0, 007dd909] [007dd910, 007de041] [007de04a, 007de134] [007de138, 007de1d6] [007de1da, 007de29f] [007de2a3, 007de2ce] [007de2d2, 007de2f5] [007de2f9, 007de31a] [007de31e, 007de4b8] [007de4bc, 007de78c] [007de790, 007de832] [007de836, 007deaf2] [007deaf6, 007dec78] [007dec7c, 007decaa] [007decae, 007deccc]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

void FUN_007dd7e0(int param_1,int param_2,int param_3,int *param_4,float param_5)

{
  char cVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  char *******pppppppcVar12;
  undefined8 *puVar13;
  undefined4 *******pppppppuVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar21;
  float fVar22;
  uint *puVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined4 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  uint uVar38;
  undefined8 *puVar39;
  bool bVar40;
  float10 fVar41;
  float10 fVar42;
  float10 fVar43;
  float10 fVar44;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  longlong lVar51;
  undefined8 uVar52;
  longlong lVar53;
  size_t sStack_1b8;
  size_t asStack_1b4 [3];
  undefined4 local_19c;
  uint local_188;
  undefined4 local_180;
  uint local_16c;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  int *local_134;
  int local_130;
  undefined4 local_12c;
  int *local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  int local_108;
  undefined4 *******local_104 [4];
  int local_f4;
  uint local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  char *******local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  int *local_a8;
  float local_a4;
  undefined8 local_a0;
  uint local_98 [3];
  float local_8c [5];
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined1 *local_64;
  uint local_60;
  uint local_5c;
  undefined4 *******local_58 [3];
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_28;
  undefined4 local_24;
  int *local_20;
  float local_1c;
  float local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b88a39;
  pvStack_10 = ExceptionList;
  local_5c = 0x7fffffff;
  local_28 = NAN;
  local_e0 = 0;
  local_70 = 0;
  local_38 = 0;
  local_8c[1] = 0.0;
  local_8c[2] = 0.0;
  fVar22 = (float)(*(int *)(DAT_012588e8 + 0xae0) - *(int *)(DAT_012588e8 + 0xadc) >> 2);
  local_48 = 0.0;
  local_60 = 0x80000000;
  local_18 = -0.0;
  local_a0 = 0;
  local_a4 = fVar22;
  asStack_1b4[2] = 0x7dd87e;
  asStack_1b4[2 - (int)fVar22] = (int)fVar22 * 4;
  asStack_1b4[1 - (int)fVar22] = 0;
  asStack_1b4[-(int)fVar22] = (size_t)(&stack0xfffffe58 + (int)fVar22 * -4);
  local_64 = &stack0xfffffe58 + (int)fVar22 * -4;
  (&sStack_1b8)[-(int)fVar22] = 0x7dd88c;
  ExceptionList = &pvStack_10;
  _memset((void *)asStack_1b4[-(int)fVar22],asStack_1b4[1 - (int)fVar22],
          asStack_1b4[2 - (int)fVar22]);
  pcVar2 = *(code **)(*DAT_0125870c + 0x24);
  local_a8 = DAT_0125870c;
  puVar24 = (undefined1 *)(asStack_1b4 + (2 - (int)fVar22));
  asStack_1b4[2 - (int)fVar22] = 0x7dd8a2;
  local_d0._4_4_ = (*pcVar2)();
  local_e8 = 0;
  local_20 = (int *)0x1;
  if ((int)local_d0._4_4_ < 2) {
LAB_007ddac4:
    uVar18 = local_5c;
    local_5c = local_60;
    local_60 = uVar18;
  }
  else {
    do {
      if (*(char *)((int)local_20 + param_2) == param_3) {
        iVar20 = *(int *)(local_a8[0xaa9] + (int)local_20 * 4);
        iVar19 = *(int *)(iVar20 + 0x18);
        iVar17 = 0;
        iVar10 = *(int *)(iVar19 + 0x14c) - *(int *)(iVar19 + 0x148) >> 3;
        if (0 < iVar10) {
          do {
            *(int *)(local_64 + *(int *)(*(int *)(iVar19 + 0x148) + 4 + iVar17 * 8) * 4) =
                 *(int *)(local_64 + *(int *)(*(int *)(iVar19 + 0x148) + 4 + iVar17 * 8) * 4) + 1;
            iVar17 = iVar17 + 1;
            fVar22 = local_a4;
          } while (iVar17 < iVar10);
        }
        local_e8 = local_e8 + 1;
        local_e4 = *(int *)(iVar20 + 0xc0);
        local_1c = 0.0;
        if (0 < *(int *)(iVar20 + 0xc4)) {
          do {
            if (0 < local_e4) {
              uVar38 = (int)local_1c + *(int *)(iVar20 + 0xbc);
              iVar19 = local_a8[0x84b];
              local_108 = (local_e4 - 1U >> 1) + 1;
              uVar18 = *(uint *)(iVar20 + 0xb8);
              do {
                local_10c = uVar18;
                if (*(int *)(iVar19 + 4) + -1 < (int)uVar18) {
                  local_10c = *(int *)(iVar19 + 4) - 1;
                }
                uVar21 = uVar38;
                if ((int)uVar38 < 0) {
                  uVar21 = 0;
                }
                if (*(int *)(iVar19 + 8) + -1 < (int)uVar21) {
                  uVar21 = *(int *)(iVar19 + 8) - 1;
                }
                if (*(int *)(local_a8[0xaa9] +
                            (uint)*(ushort *)
                                   (*(int *)(iVar19 + 0x18) * uVar21 +
                                    *(int *)(iVar19 + 0xc) * local_10c + *(int *)(iVar19 + 0x20)) *
                            4) == iVar20) {
                  local_e0 = CONCAT44(local_e0._4_4_ + ((int)uVar18 >> 0x1f) +
                                      (uint)CARRY4((uint)local_e0,uVar18),(uint)local_e0 + uVar18);
                  local_70 = CONCAT44((int)local_70._4_4_ + ((int)uVar38 >> 0x1f) +
                                      (uint)CARRY4((uint)(float)local_70,uVar38),
                                      (int)(float)local_70 + uVar38);
                  uVar21 = uVar38 * uVar18;
                  local_38 = CONCAT44(local_38._4_4_ + ((int)uVar21 >> 0x1f) +
                                      (uint)CARRY4((uint)local_38,uVar21),(uint)local_38 + uVar21);
                  uVar21 = uVar18 * uVar18;
                  bVar40 = CARRY4((uint)local_8c[1],uVar21);
                  local_8c[1] = (float)((int)local_8c[1] + uVar21);
                  local_8c[2] = (float)((int)local_8c[2] + ((int)uVar21 >> 0x1f) + (uint)bVar40);
                  uVar21 = uVar38 * uVar38;
                  local_48 = (double)CONCAT44((int)local_48._4_4_ + ((int)uVar21 >> 0x1f) +
                                              (uint)CARRY4((uint)(float)local_48,uVar21),
                                              (int)(float)local_48 + uVar21);
                  local_a0 = CONCAT44(local_a0._4_4_ + (0xfffffffe < (uint)local_a0),
                                      (uint)local_a0 + 1);
                  if ((int)uVar18 <= (int)local_5c) {
                    local_5c = uVar18;
                  }
                  if ((int)local_60 <= (int)uVar18) {
                    local_60 = uVar18;
                  }
                  if ((int)uVar38 <= (int)local_28) {
                    local_28 = (float)uVar38;
                  }
                  if ((int)local_18 <= (int)uVar38) {
                    local_18 = (float)uVar38;
                  }
                }
                uVar18 = uVar18 + 2;
                local_108 = local_108 + -1;
              } while (local_108 != 0);
              local_108 = 0;
              fVar22 = local_a4;
            }
            local_1c = (float)((int)local_1c + 2);
          } while ((int)local_1c < *(int *)(iVar20 + 0xc4));
        }
      }
      local_20 = (int *)((int)local_20 + 1);
    } while ((int)local_20 < (int)local_d0._4_4_);
    if ((int)local_60 < (int)local_5c) goto LAB_007ddac4;
  }
  fVar50 = local_28;
  if ((int)local_18 < (int)local_28) {
    local_28 = local_18;
    local_18 = fVar50;
  }
  uVar9 = (uint)local_38;
  uVar8 = local_a0._4_4_;
  *(int *)(puVar24 + -4) = local_38._4_4_;
  uVar11 = (uint)local_a0;
  *(undefined4 *)(puVar24 + -8) = uVar9;
  *(undefined4 *)(puVar24 + -0xc) = uVar8;
  *(undefined4 *)(puVar24 + -0x10) = uVar11;
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddafb;
  lVar51 = __allmul();
  *(uint *)(puVar24 + -4) = local_e0._4_4_;
  uVar11 = (float)local_70;
  uVar8 = local_70._4_4_;
  *(uint *)(puVar24 + -8) = (uint)local_e0;
  *(undefined4 *)(puVar24 + -0xc) = uVar8;
  *(undefined4 *)(puVar24 + -0x10) = uVar11;
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddb1a;
  local_d0 = __allmul();
  fVar50 = local_8c[1];
  local_d0 = lVar51 - local_d0;
  uVar38 = local_a0._4_4_;
  local_38 = local_a0 & 0x7fffffffffffffff;
  fVar41 = (float10)local_38;
  local_38 = (ulonglong)(local_a0._4_4_ & 0x80000000) << 0x20;
  fVar42 = (float10)(longlong)local_38;
  uVar18 = local_e0._4_4_;
  uVar11 = (uint)local_e0;
  local_38 = local_e0 & 0x7fffffffffffffff;
  fVar43 = (float10)local_38;
  local_38 = (ulonglong)(local_e0._4_4_ & 0x80000000) << 0x20;
  fVar44 = (float10)(longlong)local_38;
  local_38 = local_70 & 0x7fffffffffffffff;
  local_1c = (float)((-fVar44 + fVar43) / (-fVar42 + fVar41));
  fVar43 = (float10)local_38;
  local_38 = (ulonglong)((uint)local_70._4_4_ & 0x80000000) << 0x20;
  fVar44 = (float10)(longlong)local_38;
  *(float *)(puVar24 + -4) = local_8c[2];
  uVar8 = (uint)local_a0;
  *(float *)(puVar24 + -8) = fVar50;
  *(uint *)(puVar24 + -0xc) = uVar38;
  *(undefined4 *)(puVar24 + -0x10) = uVar8;
  local_a4 = (float)((-fVar44 + fVar43) / (-fVar42 + fVar41));
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddbec;
  uVar52 = __allmul();
  *(uint *)(puVar24 + -4) = uVar18;
  local_e4 = (int)((ulonglong)uVar52 >> 0x20);
  *(undefined4 *)(puVar24 + -8) = uVar11;
  *(uint *)(puVar24 + -0xc) = uVar18;
  *(undefined4 *)(puVar24 + -0x10) = uVar11;
  local_d0._4_4_ = (uint)uVar52;
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddc01;
  uVar52 = __allmul();
  fVar46 = local_1c;
  fVar50 = local_a4;
  bVar40 = local_d0._4_4_ < (uint)uVar52;
  iVar19 = local_d0._4_4_ - (uint)uVar52;
  iVar20 = local_e4 - (int)((ulonglong)uVar52 >> 0x20);
  uVar9 = (float)local_48;
  uVar8 = local_a0._4_4_;
  *(float *)(puVar24 + -4) = local_48._4_4_;
  uVar11 = (uint)local_a0;
  *(undefined4 *)(puVar24 + -8) = uVar9;
  *(undefined4 *)(puVar24 + -0xc) = uVar8;
  *(undefined4 *)(puVar24 + -0x10) = uVar11;
  local_20 = (int *)(float)(extraout_ST0 / (float10)CONCAT44(iVar20 - (uint)bVar40,iVar19));
  local_8c[3] = fVar50 - (float)local_20 * fVar46;
  local_8c[0] = (float)(int)local_5c;
  local_8c[1] = (float)(int)local_5c * (float)local_20 + local_8c[3];
  local_8c[2] = (float)(int)local_60;
  local_8c[3] = (float)(int)local_60 * (float)local_20 + local_8c[3];
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddcc8;
  lVar51 = __allmul();
  uVar11 = (float)local_70;
  uVar8 = local_70._4_4_;
  *(float *)(puVar24 + -4) = local_70._4_4_;
  *(undefined4 *)(puVar24 + -8) = uVar11;
  *(undefined4 *)(puVar24 + -0xc) = uVar8;
  *(undefined4 *)(puVar24 + -0x10) = uVar11;
  *(undefined4 *)(puVar24 + -0x14) = 0x7ddcdb;
  lVar53 = __allmul();
  local_48 = (double)(lVar51 - lVar53);
  local_20 = (int *)(float)(extraout_ST0_00 / (float10)(longlong)local_48);
  local_48._4_4_ = local_1c - (float)local_20 * local_a4;
  local_48._0_4_ = (float)(int)local_28;
  local_4c = (float)(int)local_28 * (float)local_20 + local_48._4_4_;
  local_40 = (float)(int)local_18;
  local_48._4_4_ = (float)(int)local_18 * (float)local_20 + local_48._4_4_;
  local_124 = (int *)0x0;
  local_120 = 0;
  local_11c = 0;
  local_134 = (int *)0x0;
  local_130 = 0;
  local_12c = 0;
  local_8 = 1;
  iVar20 = (int)local_8c[2];
  iVar19 = (int)local_8c[1];
  *(int ***)(puVar24 + -4) = &local_124;
  *(int *)(puVar24 + -8) = iVar20;
  *(int *)(puVar24 + -0xc) = iVar19;
  *(undefined4 *)(puVar24 + -0x10) = 0x7dddc7;
  FUN_007dbdd0();
  iVar20 = (int)local_48._4_4_;
  iVar19 = (int)(float)local_48;
  *(int ***)(puVar24 + -4) = &local_134;
  *(int *)(puVar24 + -8) = iVar20;
  *(int *)(puVar24 + -0xc) = iVar19;
  *(undefined4 *)(puVar24 + -0x10) = 0x7dddec;
  FUN_007dbdd0();
  piVar16 = local_a8;
  *(undefined4 *)(puVar24 + -4) = 1;
  *(int *)(puVar24 + -8) = param_3;
  *(int *)(puVar24 + -0xc) = param_2;
  *(int *)(puVar24 + -0x10) = param_1;
  *(int ***)(puVar24 + -0x14) = &local_124;
  *(int **)(puVar24 + -0x18) = piVar16;
  *(undefined4 *)(puVar24 + -0x1c) = 0x7dde10;
  FUN_007dbec0();
  piVar16 = local_a8;
  *(undefined4 *)(puVar24 + -0x1c) = 1;
  *(int *)(puVar24 + -0x20) = param_3;
  *(int *)(puVar24 + -0x24) = param_2;
  *(int *)(puVar24 + -0x28) = param_1;
  *(int ***)(puVar24 + -0x2c) = &local_134;
  *(int **)(puVar24 + -0x30) = piVar16;
  *(undefined4 *)(puVar24 + -0x34) = 0x7dde2b;
  FUN_007dbec0();
  local_78 = (float)*local_124;
  iVar20 = local_120 - (int)local_124 >> 3;
  iVar19 = local_130 - (int)local_134 >> 3;
  fVar45 = (float)local_124[iVar20 * 2 + -2];
  fVar49 = (float)*local_134;
  fVar50 = (float)local_134[iVar19 * 2 + -2];
  local_8c[1] = (float)local_124[1];
  local_8c[3] = (float)local_124[iVar20 * 2 + -1];
  fVar46 = fVar45;
  if ((double)local_124[iVar20 * 2 + -2] < (double)*local_124) {
    local_8c[1] = (float)local_124[iVar20 * 2 + -1];
    local_8c[3] = (float)local_124[1];
    fVar46 = local_78;
    local_78 = fVar45;
  }
  fVar45 = fVar49;
  fVar7 = (float)local_134[1];
  local_40 = (float)local_134[iVar19 * 2 + -1];
  if (fVar50 < (float)*local_134) {
    fVar45 = fVar50;
    fVar50 = fVar49;
    fVar7 = (float)local_134[iVar19 * 2 + -1];
    local_40 = (float)local_134[1];
  }
  fVar49 = (fVar46 - local_78) * (fVar46 - local_78) +
           (local_8c[3] - local_8c[1]) * (local_8c[3] - local_8c[1]);
  fVar6 = (fVar50 - fVar45) * (fVar50 - fVar45) + (local_40 - fVar7) * (local_40 - fVar7);
  local_1c = fVar49;
  *(int *)(puVar24 + -4) = iVar20;
  if (fVar49 <= fVar6) {
    local_70 = CONCAT44(local_40,fVar50);
    local_78 = fVar45;
    local_74 = fVar7;
    *(float *)(puVar24 + -4) = fVar6;
  }
  else {
    local_74 = local_8c[1];
    local_70 = CONCAT44(local_8c[3],fVar46);
    *(float *)(puVar24 + -4) = local_1c;
  }
  *(undefined4 *)(puVar24 + -8) = 0x7ddfd7;
  fVar41 = (float10)FUN_00401030();
  local_28 = (float)fVar41;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = (char *******)((uint)local_c4[0] & 0xffffff00);
  local_8._0_1_ = 2;
  if (param_5._0_1_ == '\0') {
    local_d0._4_4_ = (local_e8 * 0x3c) / 100;
    fVar50 = 0.0;
    local_1c = 0.0;
    if (0 < (int)fVar22) {
      iVar20 = 0;
      iVar19 = 0;
      do {
        if (*(int *)(local_64 + iVar20) < *(int *)(local_64 + iVar19)) {
          iVar20 = iVar19;
          local_1c = fVar50;
        }
        fVar50 = (float)((int)fVar50 + 1);
        iVar19 = iVar19 + 4;
      } while ((int)fVar50 < (int)fVar22);
    }
    if ((local_1c == *(float *)(param_1 + 4)) ||
       (*(int *)(local_64 + (int)local_1c * 4) <= (int)local_d0._4_4_)) {
      pcVar2 = *(code **)(*param_4 + 0x18);
      *(uint **)(puVar24 + -4) = local_150;
      puVar25 = (undefined4 *)(puVar24 + -8);
      puVar24 = puVar24 + -8;
      *puVar25 = 0x7de108;
      uVar11 = (*pcVar2)();
      *(undefined4 *)(puVar24 + -4) = 0xffffffff;
      *(undefined4 *)(puVar24 + -8) = 0;
      *(undefined4 *)(puVar24 + -0xc) = uVar11;
      local_8._0_1_ = 5;
      *(undefined4 *)(puVar24 + -0x10) = 0x7de11c;
      FUN_00408ed0();
      local_8._0_1_ = 2;
      if (0xf < local_13c) {
        *(uint *)(puVar24 + -4) = local_150[0];
        goto LAB_007de130;
      }
    }
    else {
      *(undefined4 *)(puVar24 + -4) = 0x7de0cd;
      uVar11 = FUN_004f97a0();
      *(undefined4 *)(puVar24 + -4) = 0xffffffff;
      *(undefined4 *)(puVar24 + -8) = 0;
      *(undefined4 *)(puVar24 + -0xc) = uVar11;
      local_8._0_1_ = 4;
      *(undefined4 *)(puVar24 + -0x10) = 0x7de0e1;
      FUN_00408ed0();
      local_8._0_1_ = 2;
      if (0xf < local_13c) {
        *(uint *)(puVar24 + -4) = local_150[0];
LAB_007de130:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar24 + -8) = &UNK_007de135;
        FUN_00aae91b();
      }
    }
  }
  else {
    *(undefined4 *)(puVar24 + -4) = 0x7de00e;
    uVar11 = FUN_0055dd40();
    *(undefined4 *)(puVar24 + -4) = 0xffffffff;
    *(undefined4 *)(puVar24 + -8) = 0;
    *(undefined4 *)(puVar24 + -0xc) = uVar11;
    local_8._0_1_ = 3;
    *(undefined4 *)(puVar24 + -0x10) = 0x7de021;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_13c) {
      *(uint *)(puVar24 + -4) = local_150[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar24 + -8) = &UNK_007de042;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  pppppppcVar12 = local_c4[0];
  if (local_b0 < 0x10) {
    pppppppcVar12 = (char *******)local_c4;
  }
  *(undefined4 *)(puVar24 + -4) = local_b4;
  *(char ********)(puVar24 + -8) = pppppppcVar12;
  puVar26 = puVar24 + -0xc;
  *(undefined4 *)(puVar24 + -0xc) = 0x7de163;
  CharUpperBuffA(*(LPSTR *)(puVar24 + -8),*(DWORD *)(puVar24 + -4));
  pppppppcVar12 = local_c4[0];
  if (local_b0 < 0x10) {
    pppppppcVar12 = (char *******)local_c4;
  }
  if ((((*(char *)pppppppcVar12 == 'T') && (*(char *)((int)pppppppcVar12 + 1) == 'H')) &&
      (*(char *)((int)pppppppcVar12 + 2) == 'E')) && (*(char *)((int)pppppppcVar12 + 3) == ' ')) {
    *(undefined4 *)(puVar26 + -4) = local_b4;
    *(undefined4 *)(puVar26 + -8) = 0x7de1ab;
    uVar11 = FUN_009895f0();
    *(undefined4 *)(puVar26 + -4) = 0xffffffff;
    *(undefined4 *)(puVar26 + -8) = 0;
    *(undefined4 *)(puVar26 + -0xc) = uVar11;
    local_8._0_1_ = 6;
    *(undefined4 *)(puVar26 + -0x10) = 0x7de1bf;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_16c) {
      *(undefined4 *)(puVar26 + -4) = local_180;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar26 + -8) = &UNK_007de1d7;
      FUN_00aae91b();
    }
  }
  puVar27 = puVar26;
  if (param_5._0_1_ == '\0') {
    *(undefined4 *)(puVar26 + -4) = 0x7de20c;
    FUN_0055dd70();
    local_8._0_1_ = 7;
    pppppppuVar14 = local_58[0];
    if ((uint)local_48._4_4_ < 0x10) {
      pppppppuVar14 = local_58;
    }
    *(float *)(puVar26 + -4) = (float)local_48;
    *(undefined4 ********)(puVar26 + -8) = pppppppuVar14;
    puVar27 = puVar26 + -0xc;
    *(undefined4 *)(puVar26 + -0xc) = 0x7de222;
    CharUpperBuffA(*(LPSTR *)(puVar26 + -8),*(DWORD *)(puVar26 + -4));
    *(undefined4 *)(puVar27 + -4) = 1;
    *(undefined1 **)(puVar27 + -8) = &DAT_00ded950;
    local_8c[2] = 2.10195e-44;
    local_8c[1] = 0.0;
    local_98[0] = local_98[0] & 0xffffff00;
    *(undefined4 *)(puVar27 + -0xc) = 0x7de248;
    FUN_00409350();
    *(uint **)(puVar27 + -4) = local_98;
    local_8._0_1_ = 8;
    *(undefined4 *)(puVar27 + -8) = 0x7de261;
    FUN_00988f20();
    *(char *********)(puVar27 + -4) = local_c4;
    local_8._0_1_ = 9;
    *(undefined4 *)(puVar27 + -8) = 0x7de279;
    uVar11 = FUN_00988f20();
    *(undefined4 *)(puVar27 + -4) = 0xffffffff;
    *(undefined4 *)(puVar27 + -8) = 0;
    *(undefined4 *)(puVar27 + -0xc) = uVar11;
    local_8._0_1_ = 10;
    *(undefined4 *)(puVar27 + -0x10) = 0x7de28c;
    FUN_00408ed0();
    if (0xf < local_188) {
      *(undefined4 *)(puVar27 + -4) = local_19c;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + -8) = &UNK_007de2a0;
      FUN_00aae91b();
    }
    if (0xf < local_13c) {
      *(uint *)(puVar27 + -4) = local_150[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + -8) = &UNK_007de2cf;
      FUN_00aae91b();
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150[0] = local_150[0] & 0xffffff00;
    if (0xf < (uint)local_8c[2]) {
      *(uint *)(puVar27 + -4) = local_98[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + -8) = &UNK_007de2f6;
      FUN_00aae91b();
    }
    local_8._0_1_ = 2;
    local_8c[2] = 2.10195e-44;
    local_8c[1] = 0.0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < (uint)local_48._4_4_) {
      *(undefined4 ********)(puVar27 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + -8) = &UNK_007de31b;
      FUN_00aae91b();
    }
    local_48._4_4_ = 2.10195e-44;
    local_48._0_4_ = 0.0;
    local_58[0] = (undefined4 *******)((uint)local_58[0] & 0xffffff00);
  }
  local_114 = 0;
  local_110 = 0;
  local_24 = 0;
  pcVar2 = *(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38);
  local_1c = 0.0;
  puVar28 = puVar27 + -4;
  *(undefined4 *)(puVar27 + -4) = 0x7de351;
  fVar22 = (float)(*pcVar2)();
  *(undefined4 **)(puVar28 + -4) = &local_24;
  piVar16 = *(int **)((int)fVar22 + 0x365c);
  pcVar2 = *(code **)(*piVar16 + 0x34);
  *(undefined4 **)(puVar28 + -8) = &local_114;
  *(undefined4 *)(puVar28 + -0xc) = 100000;
  *(undefined4 *)(puVar28 + -0x10) = 100000;
  *(char *********)(puVar28 + -0x14) = local_c4;
  puVar29 = puVar28 + -0x18;
  local_20 = piVar16;
  *(undefined4 *)(puVar28 + -0x18) = 0x7de382;
  param_5 = fVar22;
  (*pcVar2)();
  local_48 = (double)(local_a0 & 0x7fffffffffffffff);
  dVar47 = (double)(longlong)local_48;
  local_48 = (double)((ulonglong)(local_a0._4_4_ & 0x80000000) << 0x20);
  local_18 = (local_28 / (float)(int)(short)local_24) * 11.0;
  local_48 = ((-(double)(longlong)local_48 + dVar47) / (double)local_28) * 40.0;
  if ((float)(local_48 / (double)(int)local_24._2_2_) < local_18) {
    local_18 = (float)(local_48 / (double)(int)local_24._2_2_);
  }
  if (local_18 <= 25.0) {
    if (local_18 < DAT_00f177dc) {
      if (0xf < local_b0) {
        *(char ********)(puVar29 + -4) = local_c4[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar29 + -8) = &UNK_007de4b9;
        FUN_00aae91b();
      }
      goto LAB_007decba;
    }
  }
  else {
    local_18 = DAT_00f177d0;
  }
  puVar23 = (uint *)(*(int *)(param_1 + 4) * 0x10 + DAT_01267a34);
  pfVar3 = (float *)puVar23[1];
  local_8c[0] = 0.0;
  local_8c[1] = (float)((uint)local_8c[1] & 0xffffff00);
  if (local_8c < pfVar3) {
    pfVar4 = (float *)*puVar23;
    if (local_8c < pfVar4) goto LAB_007de524;
    if (pfVar3 == (float *)puVar23[2]) {
      uVar18 = (int)pfVar3 - (int)pfVar4 >> 4;
      if (0xffffffe < uVar18) {
        *(char **)(puVar29 + -4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
        *(undefined4 *)(puVar29 + -8) = 0x7de498;
        FUN_00aad3ad();
      }
      uVar18 = uVar18 + 1;
      uVar38 = (int)puVar23[2] - (int)pfVar4 >> 4;
      if (uVar38 < uVar18) {
        if (0xfffffff - (uVar38 >> 1) < uVar38) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar38 + (uVar38 >> 1);
        }
        if (uVar38 < uVar18) {
          uVar38 = uVar18;
        }
        *(uint *)(puVar29 + -4) = uVar38;
        *(undefined4 *)(puVar29 + -8) = 0x7de4fd;
        FUN_007df560();
        fVar22 = param_5;
      }
    }
    puVar13 = (undefined8 *)puVar23[1];
    puVar39 = (undefined8 *)(((int)local_8c - (int)pfVar4 & 0xfffffff0U) + *puVar23);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = *puVar39;
      uVar52 = puVar39[1];
      goto LAB_007de590;
    }
  }
  else {
LAB_007de524:
    if (pfVar3 == (float *)puVar23[2]) {
      uVar18 = (int)((int)pfVar3 - *puVar23) >> 4;
      if (0xffffffe < uVar18) {
        *(char **)(puVar29 + -4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
        *(undefined4 *)(puVar29 + -8) = 0x7de543;
        FUN_00aad3ad();
      }
      uVar18 = uVar18 + 1;
      uVar38 = (int)((int)puVar23[2] - *puVar23) >> 4;
      if (uVar38 < uVar18) {
        if (0xfffffff - (uVar38 >> 1) < uVar38) {
          uVar38 = 0;
        }
        else {
          uVar38 = uVar38 + (uVar38 >> 1);
        }
        if (uVar38 < uVar18) {
          uVar38 = uVar18;
        }
        *(uint *)(puVar29 + -4) = uVar38;
        *(undefined4 *)(puVar29 + -8) = 0x7de573;
        FUN_007df560();
      }
    }
    puVar13 = (undefined8 *)puVar23[1];
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = CONCAT44(local_8c[1],local_8c[0]);
      uVar52 = CONCAT44(local_8c[3],local_8c[2]);
LAB_007de590:
      puVar13[1] = uVar52;
    }
  }
  puVar23[1] = puVar23[1] + 0x10;
  local_64 = *(undefined1 **)(DAT_01267a34 + 4 + *(int *)(param_1 + 4) * 0x10);
  bVar40 = local_18 < DAT_00f177e0;
  local_64[-0xc] = bVar40;
  piVar16 = local_20;
  if (bVar40) {
    piVar16 = *(int **)((int)fVar22 + 0x3660);
    pcVar2 = *(code **)(*piVar16 + 0x34);
    *(undefined4 **)(puVar29 + -4) = &local_24;
    *(undefined4 **)(puVar29 + -8) = &local_114;
    *(undefined4 *)(puVar29 + -0xc) = 100000;
    *(undefined4 *)(puVar29 + -0x10) = 100000;
    *(char *********)(puVar29 + -0x14) = local_c4;
    puVar30 = (undefined4 *)(puVar29 + -0x18);
    puVar29 = puVar29 + -0x18;
    local_20 = piVar16;
    *puVar30 = 0x7de5fd;
    (*pcVar2)();
    local_18 = (local_28 / (float)(int)(short)local_24) * 11.0;
    if ((float)(local_48 / (double)(int)local_24._2_2_) < local_18) {
      local_18 = (float)(local_48 / (double)(int)local_24._2_2_);
    }
    if (25.0 < local_18) {
      local_18 = DAT_00f177d0;
    }
  }
  *(undefined4 *)(puVar29 + -4) = 0xffffffff;
  *(undefined4 *)(puVar29 + -8) = 0;
  *(char *********)(puVar29 + -0xc) = local_c4;
  local_f0 = 0xf;
  local_f4 = 0;
  local_104[0] = (undefined4 *******)((uint)local_104[0] & 0xffffff00);
  *(undefined4 *)(puVar29 + -0x10) = 0x7de6a8;
  FUN_00408ed0();
  local_8._0_1_ = 0xb;
  pppppppuVar14 = local_104[0];
  if (local_f0 < 0x10) {
    pppppppuVar14 = local_104;
  }
  *(int *)(puVar29 + -4) = local_f4;
  *(undefined4 ********)(puVar29 + -8) = pppppppuVar14;
  puVar31 = puVar29 + -0xc;
  *(undefined4 *)(puVar29 + -0xc) = 0x7de6cf;
  CharUpperBuffA(*(LPSTR *)(puVar29 + -8),*(DWORD *)(puVar29 + -4));
  pcVar2 = *(code **)(*piVar16 + 0x34);
  *(undefined4 **)(puVar31 + -4) = &local_24;
  *(undefined4 **)(puVar31 + -8) = &local_114;
  *(undefined4 *)(puVar31 + -0xc) = 100000;
  *(undefined4 *)(puVar31 + -0x10) = 100000;
  *(char *********)(puVar31 + -0x14) = local_c4;
  puVar32 = puVar31 + -0x18;
  *(undefined4 *)(puVar31 + -0x18) = 0x7de6f4;
  (*pcVar2)();
  uVar11 = extraout_ECX;
  if (((float)(int)(short)local_24 * local_18) / local_28 < DAT_00f177d8) {
    do {
      *(undefined4 *)(puVar32 + -4) = 0;
      iVar20 = (int)local_1c + 1;
      *(undefined1 **)(puVar32 + -8) = &DAT_00ded94d;
      local_1c = (float)iVar20;
      *(undefined4 *)(puVar32 + -0xc) = 0x7de749;
      FUN_00409350();
      local_48 = 3.18299368644791e-313;
      local_58[0] = (undefined4 *******)((uint)local_58[0] & 0xffffff00);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      if (0 < iVar20) {
        do {
          *(undefined4 *)(puVar32 + -4) = 1;
          *(undefined1 **)(puVar32 + -8) = &DAT_00ded950;
          *(undefined4 *)(puVar32 + -0xc) = 0x7de772;
          FUN_00448740();
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
      iVar19 = 0;
      iVar20 = local_f4 + -1;
      param_5 = (float)((uint)param_5 & 0xffff0000);
      if (0 < iVar20) {
        do {
          pppppppuVar14 = local_104[0];
          if (local_f0 < 0x10) {
            pppppppuVar14 = local_104;
          }
          pcVar15 = (char *)&param_5;
          param_5 = (float)CONCAT31(param_5._1_3_,*(undefined1 *)((int)pppppppuVar14 + iVar19));
          do {
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          *(int *)(puVar32 + -4) = (int)pcVar15 - ((int)&param_5 + 1);
          *(float **)(puVar32 + -8) = &param_5;
          *(undefined4 *)(puVar32 + -0xc) = 0x7de7c9;
          FUN_00448740();
          *(undefined4 *)(puVar32 + -4) = 0xffffffff;
          *(undefined4 *)(puVar32 + -8) = 0;
          *(undefined4 *********)(puVar32 + -0xc) = local_58;
          *(undefined4 *)(puVar32 + -0x10) = 0x7de7dc;
          FUN_00448aa0();
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar20);
      }
      pppppppuVar14 = local_104[0];
      if (local_f0 < 0x10) {
        pppppppuVar14 = local_104;
      }
      pcVar15 = (char *)&param_5;
      param_5 = (float)CONCAT31(param_5._1_3_,*(undefined1 *)((int)pppppppuVar14 + local_f4 + -1));
      do {
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 != '\0');
      *(int *)(puVar32 + -4) = (int)pcVar15 - ((int)&param_5 + 1);
      *(float **)(puVar32 + -8) = &param_5;
      *(undefined4 *)(puVar32 + -0xc) = 0x7de821;
      FUN_00448740();
      local_8._0_1_ = 0xb;
      if (0xf < (uint)local_48._4_4_) {
        *(undefined4 ********)(puVar32 + -4) = local_58[0];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar32 + -8) = &UNK_007de833;
        FUN_00aae91b();
      }
      pcVar2 = *(code **)(*local_20 + 0x34);
      *(undefined4 **)(puVar32 + -4) = &local_24;
      *(undefined4 **)(puVar32 + -8) = &local_114;
      *(undefined4 *)(puVar32 + -0xc) = 100000;
      *(undefined4 *)(puVar32 + -0x10) = 100000;
      *(char *********)(puVar32 + -0x14) = local_c4;
      puVar33 = (undefined4 *)(puVar32 + -0x18);
      puVar32 = puVar32 + -0x18;
      *puVar33 = 0x7de85c;
      (*pcVar2)();
      uVar11 = extraout_ECX_00;
    } while (((float)(int)(short)local_24 * local_18) / local_28 < DAT_00f177d8);
  }
  local_8c[1] = (float)local_70 - local_78;
  local_8c[3] = local_70._4_4_ - local_74;
  local_48 = (double)local_8c[1] * (double)local_8c[1];
  dVar48 = local_48 + 0.0;
  dVar47 = (double)local_8c[3];
  *(undefined4 *)(puVar32 + -4) = uVar11;
  *(float *)(puVar32 + -4) = (float)(dVar48 + dVar47 * dVar47);
  *(undefined4 *)(puVar32 + -8) = 0x7de90c;
  fVar41 = (float10)FUN_00401030();
  param_5 = (float)((float10)1 / fVar41);
  local_8c[1] = local_8c[1] * param_5;
  local_8c[2] = param_5 * 0.0;
  local_8c[3] = local_8c[3] * param_5;
  fVar22 = local_8c[2] * 0.0 - local_8c[3];
  local_48 = (double)CONCAT44(local_8c[3] * 0.0 - local_8c[1] * 0.0,fVar22);
  local_38 = (ulonglong)local_48;
  local_d8 = local_8c[1] - local_8c[2] * 0.0;
  local_e0 = (ulonglong)local_48;
  local_48 = 0.0;
  local_40 = 0.0;
  fVar50 = (float)(int)local_24._2_2_ * 0.5 * local_18 * 0.04;
  piVar16 = *(int **)(local_64 + -0x10);
  *(float *)(local_64 + -8) = ((float)local_70 + local_78) * 0.5 - fVar22 * fVar50;
  *(float *)(local_64 + -4) = (local_70._4_4_ + local_74) * 0.5 - local_d8 * fVar50;
  local_30 = local_d8;
  if (piVar16 != (int *)0x0) {
    piVar5 = (int *)*piVar16;
    if (piVar5 != (int *)0x0) {
      iVar20 = *piVar5;
      *(int **)(puVar32 + -4) = piVar5;
      pcVar2 = *(code **)(iVar20 + 8);
      puVar34 = (undefined4 *)(puVar32 + -8);
      puVar32 = puVar32 + -8;
      *puVar34 = 0x7deabe;
      (*pcVar2)();
    }
    piVar5 = (int *)piVar16[1];
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 8);
      *(int **)(puVar32 + -4) = piVar5;
      puVar35 = (undefined4 *)(puVar32 + -8);
      puVar32 = puVar32 + -8;
      *puVar35 = 0x7deacd;
      (*pcVar2)();
    }
    piVar5 = (int *)piVar16[2];
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 8);
      *(int **)(puVar32 + -4) = piVar5;
      puVar36 = (undefined4 *)(puVar32 + -8);
      puVar32 = puVar32 + -8;
      *puVar36 = 0x7deadc;
      (*pcVar2)();
    }
    *(int **)(puVar32 + -4) = piVar16;
    piVar16[2] = 0;
    *piVar16 = 0;
    piVar16[1] = 0;
    piVar16[3] = 0;
    piVar16[4] = 0;
    piVar16[7] = 0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar32 + -8) = &UNK_007deaf3;
    FUN_00aae91b();
  }
  *(undefined4 *)(puVar32 + -4) = 0x24;
  *(undefined4 *)(puVar32 + -8) = 0x7deafd;
  piVar16 = (int *)FUN_00aae9af();
  if (piVar16 == (int *)0x0) {
    piVar16 = (int *)0x0;
  }
  else {
    *piVar16 = 0;
    piVar16[1] = 0;
    piVar16[2] = 0;
    piVar16[3] = 0;
    piVar16[4] = 0;
    *(undefined1 *)(piVar16 + 5) = 0;
    piVar16[6] = 0;
    piVar16[7] = 0;
    piVar16[8] = 0;
  }
  *(int **)(local_64 + -0x10) = piVar16;
  iVar19 = DAT_01258a74;
  iVar20 = 0;
  iVar10 = 0;
  if (0 < local_f4) {
    do {
      pppppppuVar14 = local_104[0];
      if (local_f0 < 0x10) {
        pppppppuVar14 = local_104;
      }
      if (*(char *)(iVar10 + (int)pppppppuVar14) == ' ') {
        iVar20 = iVar20 + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_f4);
  }
  iVar20 = local_f4 - iVar20;
  *(undefined4 *)(puVar32 + -4) = 0;
  *(undefined4 *)(puVar32 + -8) = 0x102;
  *(undefined4 *)(puVar32 + -0xc) = 0x14;
  *(undefined1 *)(piVar16 + 5) = 1;
  uVar11 = *(undefined4 *)(iVar19 + 100);
  iVar20 = iVar20 * 6;
  *(int *)(puVar32 + -0x10) = iVar20;
  *(undefined4 *)(puVar32 + -0x14) = uVar11;
  *(int **)(puVar32 + -0x18) = piVar16;
  *(undefined4 *)(puVar32 + -0x1c) = 0x7deb85;
  FUN_009f9630();
  piVar5 = (int *)*piVar16;
  if (piVar5 == (int *)0x0) {
    uVar11 = extraout_ECX_01;
    fVar22 = 0.0;
  }
  else {
    uVar11 = 0;
    if ((*(char *)((int)piVar16 + 0x15) != '\0') && (*(char *)((int)piVar16 + 0x16) == '\0')) {
      uVar11 = 0x2000;
    }
    pcVar2 = *(code **)(*piVar5 + 0x2c);
    *(undefined4 *)(puVar32 + -4) = uVar11;
    *(float **)(puVar32 + -8) = &param_5;
    *(undefined4 *)(puVar32 + -0xc) = 0;
    *(undefined4 *)(puVar32 + -0x10) = 0;
    *(int **)(puVar32 + -0x14) = piVar5;
    puVar37 = (undefined4 *)(puVar32 + -0x18);
    puVar32 = puVar32 + -0x18;
    *puVar37 = 0x7debb1;
    (*pcVar2)();
    uVar11 = extraout_ECX_02;
    fVar22 = param_5;
  }
  fVar50 = local_18;
  *(undefined4 *)(puVar32 + -4) = 100000;
  *(undefined4 *)(puVar32 + -8) = uVar11;
  *(float *)(puVar32 + -8) = fVar50;
  *(float **)(puVar32 + -0xc) = local_8c + 1;
  *(undefined8 **)(puVar32 + -0x10) = &local_e0;
  piVar5 = local_20;
  *(undefined8 **)(puVar32 + -0x14) = &local_48;
  *(char *********)(puVar32 + -0x18) = local_c4;
  *(float *)(puVar32 + -0x1c) = fVar22;
  *(int **)(puVar32 + -0x20) = piVar5;
  *(undefined4 *)(puVar32 + -0x24) = 0x7debe7;
  FUN_00a26d00();
  uVar18 = local_5c;
  *(uint *)(puVar32 + -4) = local_60;
  *(uint *)(puVar32 + -8) = uVar18;
  puVar27 = local_64;
  *(undefined4 *)(puVar32 + -0xc) = *(undefined4 *)(local_64 + -4);
  *(undefined4 *)(puVar32 + -0x10) = *(undefined4 *)(puVar27 + -8);
  *(float *)(puVar32 + -0x14) = local_70._4_4_;
  *(float *)(puVar32 + -0x18) = (float)local_70;
  *(float *)(puVar32 + -0x1c) = local_74;
  *(float *)(puVar32 + -0x20) = local_78;
  *(int *)(puVar32 + -0x24) = iVar20;
  *(float *)(puVar32 + -0x28) = fVar22;
  *(int *)(puVar32 + -0x2c) = param_3;
  *(int *)(puVar32 + -0x30) = param_2;
  piVar5 = local_a8;
  *(char *********)(puVar32 + -0x34) = local_c4;
  *(int *)(puVar32 + -0x38) = param_1;
  *(int **)(puVar32 + -0x3c) = piVar5;
  *(undefined4 *)(puVar32 + -0x40) = 0x7dec57;
  FUN_007dc320();
  pcVar2 = *(code **)(*(int *)*piVar16 + 0x30);
  *(int **)(puVar32 + -4) = (int *)*piVar16;
  puVar29 = puVar32 + -8;
  *(undefined4 *)(puVar32 + -8) = 0x7dec64;
  (*pcVar2)();
  if (0xf < local_f0) {
    *(undefined4 ********)(puVar29 + -4) = local_104[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar29 + -8) = &UNK_007dec79;
    FUN_00aae91b();
  }
  local_f0 = 0xf;
  local_f4 = 0;
  local_104[0] = (undefined4 *******)((uint)local_104[0] & 0xffffff00);
  if (0xf < local_b0) {
    *(char ********)(puVar29 + -4) = local_c4[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar29 + -8) = &UNK_007decab;
    FUN_00aae91b();
  }
LAB_007decba:
  local_b0 = 0xf;
  local_b4 = 0;
  *(int **)(puVar29 + -4) = local_134;
  local_c4[0] = (char *******)((uint)local_c4[0] & 0xffffff00);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar29 + -8) = &UNK_007deccd;
  FUN_00aae91b();
}


// FUN_00b057b0 @ 00b057b0 body=[[00b057b0, 00b06258] [00b06260, 00b063df]]


void FUN_00b057b0(int param_1,int param_2,float param_3,undefined4 param_4,int *param_5)

{
  short *psVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  float *pfVar12;
  uint uVar13;
  int in_ECX;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint local_2c;
  uint local_28;
  int local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar9 = *(uint *)(param_2 + 0x48);
  uVar10 = *(uint *)(in_ECX + 0xa0);
  uVar18 = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(float *)(param_1 + 0x18) = param_3;
  fVar2 = 0.0;
  if (3 < (int)uVar9) {
    piVar14 = (int *)(*(int *)(in_ECX + 0x44) + 8);
    iVar16 = (uVar9 - 4 >> 2) + 1;
    uVar18 = iVar16 * 4;
    do {
      if (fVar2 < *(float *)(piVar14[-2] + 0x60)) {
        fVar2 = *(float *)(piVar14[-2] + 0x60);
      }
      if (fVar2 < *(float *)(piVar14[-1] + 0x60)) {
        fVar2 = *(float *)(piVar14[-1] + 0x60);
      }
      if (fVar2 < *(float *)(*piVar14 + 0x60)) {
        fVar2 = *(float *)(*piVar14 + 0x60);
      }
      if (fVar2 < *(float *)(piVar14[1] + 0x60)) {
        fVar2 = *(float *)(piVar14[1] + 0x60);
      }
      piVar14 = piVar14 + 4;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (uVar18 < uVar9) {
    piVar14 = (int *)(*(int *)(in_ECX + 0x44) + uVar18 * 4);
    iVar16 = uVar9 - uVar18;
    do {
      if (fVar2 < *(float *)(*piVar14 + 0x60)) {
        fVar2 = *(float *)(*piVar14 + 0x60);
      }
      piVar14 = piVar14 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  local_28 = 0;
  if (uVar9 != 0) {
    do {
      piVar14 = (int *)**(int **)(*(int *)(param_2 + 0x44) + local_28 * 4);
      if (piVar14 != (int *)0x0) {
        local_2c = 0;
        fVar2 = param_3;
        if (uVar10 != 0) {
          do {
            uVar11 = FUN_00b03970(fVar2,piVar14);
            uVar18 = (uint)uVar11;
            if (uVar11 == 0xffff) {
              uVar11 = *(ushort *)(piVar14 + 1);
              if (uVar11 == 0) {
                local_10 = 0.0;
                local_c = 0.0;
                local_8 = 0.0;
                local_4 = 1.0;
              }
              else {
                sVar5 = *(short *)(*piVar14 + -10 + (uint)uVar11 * 0xc);
                psVar1 = (short *)(*piVar14 + -0xc + (uint)uVar11 * 0xc);
                sVar6 = psVar1[2];
                sVar7 = psVar1[3];
                sVar8 = *psVar1;
LAB_00b0596c:
                local_18 = (int)sVar8;
                local_8 = (float)(int)sVar6 * 3.051851e-05;
                local_4 = (float)(int)sVar7 * 3.051851e-05;
                local_c = (float)(int)sVar5 * 3.051851e-05;
                local_10 = (float)local_18 * 3.051851e-05;
              }
            }
            else {
              if ((int)(*(ushort *)(piVar14 + 1) - 1) < (int)(uVar18 + 1)) {
                sVar5 = *(short *)(*piVar14 + -10 + (uint)*(ushort *)(piVar14 + 1) * 0xc);
                psVar1 = (short *)(*piVar14 + -0xc + (uint)*(ushort *)(piVar14 + 1) * 0xc);
                sVar6 = psVar1[2];
                sVar7 = psVar1[3];
                sVar8 = *psVar1;
                goto LAB_00b0596c;
              }
              iVar16 = *piVar14 + uVar18 * 0xc;
              (**(code **)(*(int *)piVar14[2] + 4))
                        (&local_10,uVar18,
                         (fVar2 - *(float *)(*piVar14 + 8 + uVar18 * 0xc)) /
                         (*(float *)(iVar16 + 0x14) - *(float *)(iVar16 + 8)));
            }
            pfVar12 = (float *)((*(int *)(in_ECX + 0x7c) * uVar10 + local_2c) * 0x10 + *param_5);
            local_2c = local_2c + 1;
            fVar3 = 1.0 / SQRT(local_4 * local_4 +
                               local_8 * local_8 + local_10 * local_10 + local_c * local_c);
            *pfVar12 = local_10 * fVar3;
            pfVar12[1] = local_c * fVar3;
            pfVar12[2] = local_8 * fVar3;
            pfVar12[3] = fVar3 * local_4;
            fVar2 = *(float *)(in_ECX + 0x90) + fVar2;
          } while (local_2c < uVar10);
        }
        uVar18 = 0;
        do {
          iVar16 = param_5[2] + (uVar18 + *(int *)(in_ECX + 0x7c) * 4) * uVar10 * 4;
          uVar13 = 0;
          if (3 < (int)uVar10) {
            iVar17 = *param_5;
            puVar15 = (undefined4 *)(iVar16 + 8);
            do {
              puVar15[-2] = *(undefined4 *)
                             (iVar17 + (uVar18 + (*(int *)(in_ECX + 0x7c) * uVar10 + uVar13) * 4) *
                                       4);
              puVar15[-1] = *(undefined4 *)
                             (iVar17 + (uVar18 + 4 + (*(int *)(in_ECX + 0x7c) * uVar10 + uVar13) * 4
                                       ) * 4);
              *puVar15 = *(undefined4 *)
                          (iVar17 + (uVar18 + 8 + (*(int *)(in_ECX + 0x7c) * uVar10 + uVar13) * 4) *
                                    4);
              iVar19 = *(int *)(in_ECX + 0x7c) * uVar10 + uVar13;
              uVar13 = uVar13 + 4;
              puVar15[1] = *(undefined4 *)(iVar17 + (uVar18 + 0xc + iVar19 * 4) * 4);
              puVar15 = puVar15 + 4;
            } while (uVar13 < uVar10 - 3);
          }
          if (uVar13 < uVar10) {
            iVar17 = *param_5;
            do {
              iVar19 = *(int *)(in_ECX + 0x7c) * uVar10 + uVar13;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar16 + -4 + uVar13 * 4) =
                   *(undefined4 *)(iVar17 + (uVar18 + iVar19 * 4) * 4);
            } while (uVar13 < uVar10);
          }
          FUN_00b1bf40(iVar16,uVar10);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        *(int *)(in_ECX + 0x7c) = *(int *)(in_ECX + 0x7c) + 1;
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar9);
  }
  *(uint *)(in_ECX + 0xb4) = *(int *)(in_ECX + 0x7c) * uVar10 * 4;
  local_28 = 0;
  if (uVar9 != 0) {
    do {
      piVar14 = *(int **)(*(int *)(*(int *)(param_2 + 0x44) + local_28 * 4) + 0x58);
      if (piVar14 != (int *)0x0) {
        local_2c = 0;
        fVar2 = param_3;
        if (uVar10 != 0) {
          do {
            uVar11 = FUN_00b03970(fVar2,piVar14);
            uVar18 = (uint)uVar11;
            if (uVar11 == 0xffff) {
              uVar11 = *(ushort *)(piVar14 + 1);
              if (uVar11 == 0) {
                local_10 = 0.0;
                local_c = 0.0;
                local_8 = 0.0;
                local_4 = 1.0;
              }
              else {
                sVar5 = *(short *)(*piVar14 + -10 + (uint)uVar11 * 0xc);
                psVar1 = (short *)(*piVar14 + -0xc + (uint)uVar11 * 0xc);
                sVar6 = psVar1[2];
                sVar7 = psVar1[3];
                sVar8 = *psVar1;
LAB_00b05c38:
                local_18 = (int)sVar8;
                local_c = (float)(int)sVar5 * 3.051851e-05;
                local_8 = (float)(int)sVar6 * 3.051851e-05;
                local_4 = (float)(int)sVar7 * 3.051851e-05;
                local_10 = (float)local_18 * 3.051851e-05;
              }
            }
            else {
              if ((int)(*(ushort *)(piVar14 + 1) - 1) < (int)(uVar18 + 1)) {
                sVar5 = *(short *)(*piVar14 + -10 + (uint)*(ushort *)(piVar14 + 1) * 0xc);
                psVar1 = (short *)(*piVar14 + -0xc + (uint)*(ushort *)(piVar14 + 1) * 0xc);
                sVar6 = psVar1[2];
                sVar7 = psVar1[3];
                sVar8 = *psVar1;
                goto LAB_00b05c38;
              }
              iVar16 = *piVar14 + uVar18 * 0xc;
              (**(code **)(*(int *)piVar14[2] + 4))
                        (&local_10,uVar18,
                         (fVar2 - *(float *)(*piVar14 + 8 + uVar18 * 0xc)) /
                         (*(float *)(iVar16 + 0x14) - *(float *)(iVar16 + 8)));
            }
            pfVar12 = (float *)((*(int *)(in_ECX + 0x80) * uVar10 + local_2c) * 0x10 + *param_5);
            local_2c = local_2c + 1;
            *pfVar12 = local_10;
            pfVar12[1] = local_c;
            pfVar12[2] = local_8;
            pfVar12[3] = local_4;
            fVar2 = *(float *)(in_ECX + 0x90) + fVar2;
          } while (local_2c < uVar10);
        }
        uVar18 = 0;
        do {
          uVar13 = 0;
          iVar16 = param_5[2] +
                   ((uVar18 + *(int *)(in_ECX + 0x80) * 4) * uVar10 + *(int *)(in_ECX + 0xb4)) * 4;
          if (3 < (int)uVar10) {
            iVar17 = *param_5;
            puVar15 = (undefined4 *)(iVar16 + 8);
            do {
              puVar15[-2] = *(undefined4 *)
                             (iVar17 + (uVar18 + (*(int *)(in_ECX + 0x80) * uVar10 + uVar13) * 4) *
                                       4);
              puVar15[-1] = *(undefined4 *)
                             (iVar17 + (uVar18 + 4 + (*(int *)(in_ECX + 0x80) * uVar10 + uVar13) * 4
                                       ) * 4);
              *puVar15 = *(undefined4 *)
                          (iVar17 + (uVar18 + 8 + (*(int *)(in_ECX + 0x80) * uVar10 + uVar13) * 4) *
                                    4);
              iVar19 = *(int *)(in_ECX + 0x80) * uVar10 + uVar13;
              uVar13 = uVar13 + 4;
              puVar15[1] = *(undefined4 *)(iVar17 + (uVar18 + 0xc + iVar19 * 4) * 4);
              puVar15 = puVar15 + 4;
            } while (uVar13 < uVar10 - 3);
          }
          if (uVar13 < uVar10) {
            iVar17 = *param_5;
            do {
              iVar19 = *(int *)(in_ECX + 0x80) * uVar10 + uVar13;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar16 + -4 + uVar13 * 4) =
                   *(undefined4 *)(iVar17 + (uVar18 + iVar19 * 4) * 4);
            } while (uVar13 < uVar10);
          }
          FUN_00b1bf40(iVar16,uVar10);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        *(int *)(in_ECX + 0x80) = *(int *)(in_ECX + 0x80) + 1;
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar9);
  }
  iVar17 = (*(int *)(in_ECX + 0x80) + *(int *)(in_ECX + 0x7c)) * uVar10;
  iVar16 = iVar17 * 4;
  if (iVar16 != 0) {
    FUN_00b1c4c0(param_5[2],iVar16,param_5[3],param_1 + 0xc,*(undefined4 *)(in_ECX + 0x98));
    iVar17 = iVar17 * 8;
    FUN_00b1b8c0(param_5[3],iVar17,param_1,param_1 + 0x1c,0);
    *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + *(int *)(param_1 + 0x1c);
    *(int *)(in_ECX + 0x70) = iVar17;
  }
  local_28 = 0;
  if (uVar9 != 0) {
    do {
      iVar16 = *(int *)(*(int *)(param_2 + 0x44) + local_28 * 4);
      piVar14 = *(int **)(iVar16 + 4);
      if (piVar14 != (int *)0x0) {
        local_2c = 0;
        fVar2 = param_3;
        if (uVar10 != 0) {
          do {
            uVar11 = FUN_00b03860(fVar2,piVar14);
            uVar13 = (uint)uVar11;
            uVar18 = (uint)*(ushort *)(piVar14 + 1);
            if (uVar11 == 0xffff) {
              if (*(ushort *)(piVar14 + 1) != 0) {
                pfVar12 = (float *)(*piVar14 + -0x10 + uVar18 * 0x10);
LAB_00b05ef3:
                local_10 = *pfVar12;
                local_c = pfVar12[1];
                local_8 = pfVar12[2];
              }
            }
            else {
              if ((int)(uVar18 - 1) < (int)(uVar13 + 1)) {
                pfVar12 = (float *)(*piVar14 + -0x10 + uVar18 * 0x10);
                goto LAB_00b05ef3;
              }
              iVar17 = *piVar14 + uVar13 * 0x10;
              (**(code **)(*(int *)piVar14[2] + 4))
                        (&local_10,uVar13,
                         (fVar2 - *(float *)(*piVar14 + 0xc + uVar13 * 0x10)) /
                         (*(float *)(iVar17 + 0x1c) - *(float *)(iVar17 + 0xc)));
            }
            fVar3 = *(float *)(iVar16 + 0x14);
            fVar4 = *(float *)(iVar16 + 0x18);
            pfVar12 = (float *)(param_5[1] + (*(int *)(in_ECX + 0x84) * uVar10 + local_2c) * 0xc);
            local_2c = local_2c + 1;
            *pfVar12 = local_10 - *(float *)(iVar16 + 0x10);
            pfVar12[1] = local_c - fVar3;
            pfVar12[2] = local_8 - fVar4;
            fVar2 = *(float *)(in_ECX + 0x90) + fVar2;
          } while (local_2c < uVar10);
        }
        uVar18 = 0;
        do {
          iVar16 = param_5[2] + (uVar18 + *(int *)(in_ECX + 0x84) * 3) * uVar10 * 4;
          uVar13 = 0;
          if (3 < (int)uVar10) {
            iVar17 = param_5[1];
            puVar15 = (undefined4 *)(iVar16 + 8);
            do {
              puVar15[-2] = *(undefined4 *)
                             (iVar17 + (uVar18 + (*(int *)(in_ECX + 0x84) * uVar10 + uVar13) * 3) *
                                       4);
              puVar15[-1] = *(undefined4 *)
                             (iVar17 + uVar18 * 4 +
                                       (*(int *)(in_ECX + 0x84) * uVar10 + 1 + uVar13) * 0xc);
              *puVar15 = *(undefined4 *)
                          (iVar17 + uVar18 * 4 +
                                    (*(int *)(in_ECX + 0x84) * uVar10 + 2 + uVar13) * 0xc);
              iVar19 = *(int *)(in_ECX + 0x84) * uVar10 + 3 + uVar13;
              uVar13 = uVar13 + 4;
              puVar15[1] = *(undefined4 *)(iVar17 + uVar18 * 4 + iVar19 * 0xc);
              puVar15 = puVar15 + 4;
            } while (uVar13 < uVar10 - 3);
          }
          if (uVar13 < uVar10) {
            iVar17 = param_5[1];
            do {
              iVar19 = *(int *)(in_ECX + 0x84) * uVar10 + uVar13;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar16 + -4 + uVar13 * 4) =
                   *(undefined4 *)(iVar17 + (uVar18 + iVar19 * 3) * 4);
            } while (uVar13 < uVar10);
          }
          FUN_00b1bf40(iVar16,uVar10);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 3);
        *(int *)(in_ECX + 0x84) = *(int *)(in_ECX + 0x84) + 1;
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar9);
  }
  if (*(int *)(in_ECX + 0x84) != 0) {
    iVar16 = *(int *)(in_ECX + 0x84) * uVar10;
    FUN_00b1c4c0(param_5[2],iVar16 * 3,param_5[3],param_1 + 0x10,*(undefined4 *)(in_ECX + 0x94));
    iVar16 = iVar16 * 6;
    FUN_00b1b8c0(param_5[3],iVar16,param_1 + 4,(int *)(param_1 + 0x20),0);
    *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + *(int *)(param_1 + 0x20);
    *(int *)(in_ECX + 0x74) = iVar16;
  }
  local_28 = 0;
  if (uVar9 != 0) {
    do {
      iVar16 = *(int *)(*(int *)(param_2 + 0x44) + local_28 * 4);
      piVar14 = *(int **)(iVar16 + 0x5c);
      if (piVar14 != (int *)0x0) {
        local_2c = 0;
        fVar2 = param_3;
        if (uVar10 != 0) {
          do {
            uVar11 = FUN_00b03860(fVar2,piVar14);
            uVar13 = (uint)uVar11;
            uVar18 = (uint)*(ushort *)(piVar14 + 1);
            if (uVar11 == 0xffff) {
              if (*(ushort *)(piVar14 + 1) != 0) {
                pfVar12 = (float *)(*piVar14 + -0x10 + uVar18 * 0x10);
LAB_00b0619e:
                local_10 = *pfVar12;
                local_c = pfVar12[1];
                local_8 = pfVar12[2];
              }
            }
            else {
              if ((int)(uVar18 - 1) < (int)(uVar13 + 1)) {
                pfVar12 = (float *)(*piVar14 + -0x10 + uVar18 * 0x10);
                goto LAB_00b0619e;
              }
              iVar17 = *piVar14 + uVar13 * 0x10;
              (**(code **)(*(int *)piVar14[2] + 4))
                        (&local_10,uVar13,
                         (fVar2 - *(float *)(*piVar14 + 0xc + uVar13 * 0x10)) /
                         (*(float *)(iVar17 + 0x1c) - *(float *)(iVar17 + 0xc)));
            }
            fVar3 = *(float *)(iVar16 + 0x44);
            fVar4 = *(float *)(iVar16 + 0x48);
            pfVar12 = (float *)(param_5[1] + (*(int *)(in_ECX + 0x88) * uVar10 + local_2c) * 0xc);
            local_2c = local_2c + 1;
            *pfVar12 = local_10 - *(float *)(iVar16 + 0x40);
            pfVar12[1] = local_c - fVar3;
            pfVar12[2] = local_8 - fVar4;
            fVar2 = *(float *)(in_ECX + 0x90) + fVar2;
          } while (local_2c < uVar10);
        }
        uVar18 = 0;
        do {
          iVar16 = param_5[2] + (uVar18 + *(int *)(in_ECX + 0x88) * 3) * uVar10 * 4;
          uVar13 = 0;
          if (3 < (int)uVar10) {
            iVar17 = param_5[1];
            puVar15 = (undefined4 *)(iVar16 + 8);
            do {
              puVar15[-2] = *(undefined4 *)
                             (iVar17 + (uVar18 + (*(int *)(in_ECX + 0x88) * uVar10 + uVar13) * 3) *
                                       4);
              puVar15[-1] = *(undefined4 *)
                             (iVar17 + uVar18 * 4 +
                                       (*(int *)(in_ECX + 0x88) * uVar10 + 1 + uVar13) * 0xc);
              *puVar15 = *(undefined4 *)
                          (iVar17 + uVar18 * 4 +
                                    (*(int *)(in_ECX + 0x88) * uVar10 + 2 + uVar13) * 0xc);
              iVar19 = *(int *)(in_ECX + 0x88) * uVar10 + 3 + uVar13;
              uVar13 = uVar13 + 4;
              puVar15[1] = *(undefined4 *)(iVar17 + uVar18 * 4 + iVar19 * 0xc);
              puVar15 = puVar15 + 4;
            } while (uVar13 < uVar10 - 3);
          }
          if (uVar13 < uVar10) {
            iVar17 = param_5[1];
            do {
              iVar19 = *(int *)(in_ECX + 0x88) * uVar10 + uVar13;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(iVar16 + -4 + uVar13 * 4) =
                   *(undefined4 *)(iVar17 + (uVar18 + iVar19 * 3) * 4);
            } while (uVar13 < uVar10);
          }
          FUN_00b1bf40(iVar16,uVar10);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 3);
        *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar9);
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    iVar16 = *(int *)(in_ECX + 0x88) * uVar10;
    FUN_00b1c4c0(param_5[2],iVar16 * 3,param_5[3],param_1 + 0x14,*(undefined4 *)(in_ECX + 0x9c));
    iVar16 = iVar16 * 6;
    FUN_00b1b8c0(param_5[3],iVar16,param_1 + 8,(int *)(param_1 + 0x24),0);
    *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + *(int *)(param_1 + 0x24);
    *(int *)(in_ECX + 0x78) = iVar16;
  }
  return;
}


// FUN_00adec30 @ 00adec30 body=[[00adec30, 00adedbc] [00adedc0, 00adf416]]


void FUN_00adec30(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  int in_ECX;
  undefined4 *puVar19;
  float *pfVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  float *pfVar24;
  uint uVar25;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3789d;
  local_c = ExceptionList;
  uVar13 = DAT_00ef259c ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  iVar14 = FUN_00add310(3,param_1);
  if (iVar14 != -1) {
    piVar7 = *(int **)(*(int *)(in_ECX + 0x30) + iVar14 * 4);
    piVar1 = (int *)(in_ECX + 0x30);
    if ((piVar7 != (int *)0x0) && (iVar14 = (**(code **)(*piVar7 + 0x10))(uVar13), iVar14 != 0)) {
      uVar13 = *(uint *)(in_ECX + 0x34);
      iVar22 = 0;
      uVar25 = 0;
      if (uVar13 != 0) {
        do {
          iVar15 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
          if (iVar15 == 2) {
            if (iVar22 == 0) {
              if ((uVar25 != 0xffffffff) &&
                 (piVar7 = *(int **)(*piVar1 + uVar25 * 4), piVar7 != (int *)0x0)) {
                iVar22 = (**(code **)(*piVar7 + 0x10))();
                goto LAB_00adecc3;
              }
              break;
            }
            iVar22 = iVar22 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar13);
      }
      iVar22 = 0;
LAB_00adecc3:
      uVar13 = *(uint *)(in_ECX + 0x34);
      uVar25 = 0;
      param_1 = (int *)0x0;
      if (uVar13 != 0) {
        do {
          iVar15 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
          if (iVar15 == 2) {
            if (param_1 == (int *)0x0) {
              if ((uVar25 != 0xffffffff) &&
                 (piVar7 = *(int **)(*piVar1 + uVar25 * 4), piVar7 != (int *)0x0)) {
                iVar15 = (**(code **)(*piVar7 + 0x14))();
                goto LAB_00adecf8;
              }
              break;
            }
            param_1 = (int *)((int)param_1 + 1);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar13);
      }
      iVar15 = 0;
LAB_00adecf8:
      if (iVar22 == 0) {
        iVar15 = (*(code *)PTR_FUN_00f01b08)(0x1c,0xcc,4,0,0,0xffffffff);
        if (iVar15 == 0) {
          uVar16 = 0;
        }
        else {
          iStack_4 = iVar22;
          uVar16 = FUN_00b07970(*(undefined4 *)(in_ECX + 0x18),2,0x10,1);
        }
        iVar22 = *(int *)(in_ECX + 0x34);
        uVar13 = iVar22 + 1;
        iStack_4 = 0xffffffff;
        *(uint *)(in_ECX + 0x34) = uVar13;
        if (*(uint *)(in_ECX + 0x38) < uVar13) {
          FUN_00aeb6c0(iVar22 + 2);
        }
        puVar18 = (undefined4 *)(*piVar1 + -4 + *(int *)(in_ECX + 0x34) * 4);
        if (puVar18 != (undefined4 *)0x0) {
          *puVar18 = uVar16;
        }
        uVar13 = *(uint *)(in_ECX + 0x34);
        iVar22 = 0;
        uVar25 = 0;
        if (uVar13 != 0) {
          do {
            iVar15 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
            if (iVar15 == 2) {
              if (iVar22 == 0) {
                if ((uVar25 != 0xffffffff) &&
                   (piVar7 = *(int **)(*piVar1 + uVar25 * 4), piVar7 != (int *)0x0)) {
                  iVar22 = (**(code **)(*piVar7 + 0x10))();
                  goto LAB_00adede2;
                }
                break;
              }
              iVar22 = iVar22 + 1;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar13);
        }
        iVar22 = 0;
LAB_00adede2:
        uVar13 = *(uint *)(in_ECX + 0x34);
        uVar25 = 0;
        param_1 = (int *)0x0;
        if (uVar13 != 0) {
          do {
            iVar15 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
            if (iVar15 == 2) {
              if (param_1 == (int *)0x0) {
                if ((uVar25 != 0xffffffff) &&
                   (piVar7 = *(int **)(*piVar1 + uVar25 * 4), piVar7 != (int *)0x0)) {
                  iVar15 = (**(code **)(*piVar7 + 0x14))();
                  goto LAB_00adee1b;
                }
                break;
              }
              param_1 = (int *)((int)param_1 + 1);
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 < uVar13);
        }
        iVar15 = 0;
      }
LAB_00adee1b:
      uVar13 = *(uint *)(in_ECX + 0x34);
      uVar25 = 0;
      param_1 = (int *)0x0;
      if (uVar13 != 0) {
        do {
          iVar17 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
          if (iVar17 == 0) {
            if (param_1 == (int *)0x0) {
              if ((uVar25 != 0xffffffff) &&
                 (piVar7 = *(int **)(*piVar1 + uVar25 * 4), piVar7 != (int *)0x0)) {
                iStack_50 = (**(code **)(*piVar7 + 0x14))();
                goto LAB_00adee5e;
              }
              break;
            }
            param_1 = (int *)((int)param_1 + 1);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar13);
      }
      iStack_50 = 0;
LAB_00adee5e:
      uVar13 = *(uint *)(in_ECX + 0x34);
      uVar25 = 0;
      param_1 = (int *)0x0;
      if (uVar13 != 0) {
        do {
          iVar17 = (**(code **)(**(int **)(*piVar1 + uVar25 * 4) + 4))();
          if (iVar17 == 1) {
            if (param_1 == (int *)0x0) {
              if ((uVar25 != 0xffffffff) &&
                 (piVar1 = *(int **)(*piVar1 + uVar25 * 4), piVar1 != (int *)0x0)) {
                iStack_48 = (**(code **)(*piVar1 + 0x14))();
                goto LAB_00adeea3;
              }
              break;
            }
            param_1 = (int *)((int)param_1 + 1);
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar13);
      }
      iStack_48 = 0;
LAB_00adeea3:
      iVar17 = *(int *)(in_ECX + 0x10);
      uVar13 = 0;
      if (*(int *)(in_ECX + 0x18) != 0) {
        puVar18 = (undefined4 *)(iVar15 + 8);
        puVar19 = (undefined4 *)(iVar22 + 0xc);
        do {
          puVar18[-2] = 0;
          uVar13 = uVar13 + 1;
          puVar18[-1] = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar19[-3] = 0;
          puVar19[-2] = 0;
          *(undefined4 *)((iVar22 - iVar15) + -0x10 + (int)(puVar18 + 4)) = 0;
          *puVar19 = 0;
          puVar18 = puVar18 + 4;
          puVar19 = puVar19 + 4;
        } while (uVar13 < *(uint *)(in_ECX + 0x18));
      }
      uStack_4c = 0;
      if (*(int *)(in_ECX + 0x1c) != 0) {
        param_1 = (int *)(iVar17 + 8);
        do {
          iVar17 = param_1[-2];
          iVar23 = param_1[-1];
          iVar8 = *param_1;
          FUN_00add0c0(iStack_50 + iVar17 * 0xc,iStack_50 + iVar23 * 0xc,iStack_50 + iVar8 * 0xc,
                       iVar14 + iVar17 * 8,iVar14 + iVar23 * 8,iVar14 + iVar8 * 8,&fStack_30,
                       &fStack_3c);
          fVar2 = fStack_28 * fStack_28 + fStack_2c * fStack_2c + fStack_30 * fStack_30;
          if (0.0 < fVar2) {
            fVar2 = 1.0 / SQRT(fVar2);
            fStack_30 = fVar2 * fStack_30;
            fStack_2c = fVar2 * fStack_2c;
            fStack_28 = fVar2 * fStack_28;
          }
          fVar2 = fStack_34 * fStack_34 + fStack_38 * fStack_38 + fStack_3c * fStack_3c;
          if (0.0 < fVar2) {
            fVar2 = 1.0 / SQRT(fVar2);
            fStack_3c = fVar2 * fStack_3c;
            fStack_38 = fVar2 * fStack_38;
            fStack_34 = fVar2 * fStack_34;
          }
          iVar17 = iVar17 * 0x10;
          iVar23 = iVar23 * 0x10;
          *(float *)(iVar17 + iVar15) = *(float *)(iVar17 + iVar15) + fStack_30;
          param_1 = param_1 + 3;
          *(float *)(iVar17 + 4 + iVar15) = *(float *)(iVar17 + 4 + iVar15) + fStack_2c;
          *(float *)(iVar17 + 8 + iVar15) = *(float *)(iVar17 + 8 + iVar15) + fStack_28;
          *(undefined4 *)(iVar17 + 0xc + iVar15) = *(undefined4 *)(iVar17 + 0xc + iVar15);
          *(float *)(iVar23 + iVar15) = *(float *)(iVar23 + iVar15) + fStack_30;
          *(float *)(iVar23 + 4 + iVar15) = *(float *)(iVar23 + 4 + iVar15) + fStack_2c;
          *(float *)(iVar23 + 8 + iVar15) = *(float *)(iVar23 + 8 + iVar15) + fStack_28;
          *(undefined4 *)(iVar23 + 0xc + iVar15) = *(undefined4 *)(iVar23 + 0xc + iVar15);
          *(float *)(iVar15 + iVar8 * 0x10) = *(float *)(iVar15 + iVar8 * 0x10) + fStack_30;
          *(float *)(iVar15 + 4 + iVar8 * 0x10) = *(float *)(iVar15 + 4 + iVar8 * 0x10) + fStack_2c;
          *(float *)(iVar15 + 8 + iVar8 * 0x10) = *(float *)(iVar15 + 8 + iVar8 * 0x10) + fStack_28;
          *(undefined4 *)(iVar15 + 0xc + iVar8 * 0x10) =
               *(undefined4 *)(iVar15 + 0xc + iVar8 * 0x10);
          *(float *)(iVar17 + iVar22) = *(float *)(iVar17 + iVar22) + fStack_3c;
          *(float *)(iVar17 + 4 + iVar22) = *(float *)(iVar17 + 4 + iVar22) + fStack_38;
          *(float *)(iVar17 + 8 + iVar22) = *(float *)(iVar17 + 8 + iVar22) + fStack_34;
          puVar18 = (undefined4 *)(iVar17 + 0xc + iVar22);
          *puVar18 = *puVar18;
          uStack_4c = uStack_4c + 3;
          *(float *)(iVar23 + iVar22) = *(float *)(iVar23 + iVar22) + fStack_3c;
          *(float *)(iVar23 + 4 + iVar22) = *(float *)(iVar23 + 4 + iVar22) + fStack_38;
          *(float *)(iVar23 + 8 + iVar22) = *(float *)(iVar23 + 8 + iVar22) + fStack_34;
          puVar18 = (undefined4 *)(iVar23 + 0xc + iVar22);
          *puVar18 = *puVar18;
          *(float *)(iVar22 + iVar8 * 0x10) = fStack_3c + *(float *)(iVar22 + iVar8 * 0x10);
          *(float *)(iVar22 + 4 + iVar8 * 0x10) = fStack_38 + *(float *)(iVar22 + 4 + iVar8 * 0x10);
          *(float *)(iVar22 + 8 + iVar8 * 0x10) = fStack_34 + *(float *)(iVar22 + 8 + iVar8 * 0x10);
          puVar18 = (undefined4 *)(iVar22 + 0xc + iVar8 * 0x10);
          *puVar18 = *puVar18;
        } while (uStack_4c < *(uint *)(in_ECX + 0x1c));
      }
      uVar13 = 0;
      if (*(int *)(in_ECX + 0x18) != 0) {
        pfVar24 = (float *)(iStack_48 + 8);
        pfVar20 = (float *)(iVar15 + 4);
        pfVar21 = (float *)(iVar22 + 8);
        do {
          fVar2 = pfVar24[-2];
          fVar3 = pfVar24[-1];
          fVar4 = *pfVar24;
          fVar5 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
          if (0.0 < fVar5) {
            fVar5 = 1.0 / SQRT(fVar5);
            fVar2 = fVar5 * fVar2;
            fVar3 = fVar3 * fVar5;
            fVar4 = fVar5 * fVar4;
          }
          fStack_30 = pfVar20[-1];
          fStack_2c = *pfVar20;
          fVar5 = pfVar20[1];
          fVar6 = fVar5 * fVar5 + fStack_2c * fStack_2c + fStack_30 * fStack_30;
          if (fVar6 <= 1e-05) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = SQRT(fVar6);
          }
          if (1e-05 <= fVar12) {
            fVar6 = 1.0 / SQRT(fVar6);
            fStack_30 = fVar6 * fStack_30;
            fStack_2c = fStack_2c * fVar6;
            fVar5 = fVar5 * fVar6;
          }
          else {
            fStack_30 = 1.0;
            fVar5 = 0.0;
            fStack_2c = 0.0;
          }
          fStack_3c = pfVar21[-2];
          fStack_38 = *(float *)((int)pfVar20 + (iVar22 - iVar15));
          fVar6 = *pfVar21;
          fVar12 = fVar6 * fVar6 + fStack_38 * fStack_38 + fStack_3c * fStack_3c;
          if (fVar12 <= 1e-05) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = SQRT(fVar12);
          }
          if (1e-05 <= fVar9) {
            fVar12 = 1.0 / SQRT(fVar12);
            fStack_3c = fStack_3c * fVar12;
            fStack_38 = fStack_38 * fVar12;
            fVar12 = fVar12 * fVar6;
          }
          else {
            fVar12 = 0.0;
            fStack_3c = 0.0;
            fStack_38 = 1.0;
          }
          fVar6 = fVar5 * fVar4 + fStack_2c * fVar3 + fStack_30 * fVar2;
          fVar11 = fStack_30 - fVar6 * fVar2;
          fVar9 = fStack_2c - fVar3 * fVar6;
          fVar6 = fVar5 - fVar4 * fVar6;
          fVar10 = fVar6 * fVar6 + fVar9 * fVar9 + fVar11 * fVar11;
          if (0.0 < fVar10) {
            fVar10 = 1.0 / SQRT(fVar10);
            fVar11 = fVar10 * fVar11;
            fVar9 = fVar10 * fVar9;
            fVar6 = fVar10 * fVar6;
          }
          if (0.0 <= (fStack_2c * fVar2 - fStack_30 * fVar3) * fVar12 +
                     (fVar4 * fStack_30 - fVar5 * fVar2) * fStack_38 +
                     (fVar5 * fVar3 - fStack_2c * fVar4) * fStack_3c) {
            fVar2 = 1.0;
          }
          else {
            fVar2 = -1.0;
          }
          uVar13 = uVar13 + 1;
          pfVar20[-1] = fVar11;
          pfVar24 = pfVar24 + 3;
          *pfVar20 = fVar9;
          pfVar20[1] = fVar6;
          pfVar20[2] = fVar2;
          pfVar21[-2] = pfVar20[-1];
          *(float *)((int)pfVar20 + (iVar22 - iVar15)) = *pfVar20;
          *pfVar21 = pfVar20[1];
          pfVar21[1] = pfVar20[2];
          pfVar20 = pfVar20 + 4;
          pfVar21 = pfVar21 + 4;
        } while (uVar13 < *(uint *)(in_ECX + 0x18));
      }
    }
  }
  ExceptionList = local_c;
  return;
}


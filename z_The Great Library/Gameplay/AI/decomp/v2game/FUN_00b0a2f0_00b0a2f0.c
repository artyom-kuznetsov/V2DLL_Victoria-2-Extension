// FUN_00b0a2f0 @ 00b0a2f0 body=[[00b0a2f0, 00b0a359] [00b0a360, 00b0a63e]]


void FUN_00b0a2f0(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  ushort uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int in_ECX;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float10 fVar18;
  float10 fVar19;
  int iStack_30;
  float fStack_20;
  uint uStack_14;
  
  iVar9 = *(int *)(*(int *)(in_ECX + 4) + 0x14);
  piVar1 = (int *)(iVar9 + 0x17c);
  if (((piVar1 != (int *)0x0) &&
      (iVar14 = *(int *)(*(int *)(iVar9 + 0x1ac) + 0xd8),
      *(int *)(iVar14 + 4 + *(int *)(iVar9 + 0x1d0) * 8) != 0)) &&
     (piVar8 = (int *)(**(code **)(**(int **)(iVar14 + *(int *)(iVar9 + 0x1d0) * 8 + 4) + 0x10))(),
     piVar8 != (int *)0x0)) {
    uVar5 = piVar8[1];
    uVar16 = 0;
    if (uVar5 != 0) {
      do {
        iVar9 = FUN_00adfc50(*(undefined4 *)(*(int *)(*piVar8 + uVar16 * 4) + 4));
        if (((iVar9 != -1) && (iVar9 = *piVar1 + iVar9 * 0xc, iVar9 != 0)) &&
           (*(char *)(iVar9 + 8) == '\0')) {
          *(undefined4 *)(iVar9 + 4) = 0;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar5);
    }
    iVar9 = *(int *)(*(int *)(in_ECX + 4) + 8);
    if (iVar9 != 0) {
      while (iVar9 = iVar9 + -1, iVar9 != -1) {
        iVar14 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 4) + iVar9 * 4);
        fVar3 = *(float *)(iVar14 + 0x2c);
        iVar10 = (**(code **)(**(int **)(iVar14 + 0x8c) + 4))();
        if (iVar10 == 2) {
          iVar10 = *(int *)(iVar14 + 0x8c);
          uStack_14 = 0;
          if (uVar5 != 0) {
            do {
              iVar12 = *(int *)(*piVar8 + uStack_14 * 4);
              iVar11 = FUN_00adfc50(*(undefined4 *)(iVar12 + 4));
              if (((iVar11 != -1) && (iVar11 = *piVar1 + iVar11 * 0xc, iVar11 != 0)) &&
                 (*(char *)(iVar11 + 8) == '\0')) {
                if (*(int *)(iVar12 + 0x10) == 0) {
                  iVar12 = FUN_00b06db0(*(undefined4 *)(iVar12 + 4));
                  if (iVar12 == -1) {
                    if ((*(byte *)(iVar14 + 0x9c) >> 3 & 1) == 0) {
                      fVar18 = (float10)0;
                    }
                    else {
                      fVar18 = (float10)*(float *)(iVar11 + 4);
                    }
                  }
                  else {
                    iVar12 = *(int *)(*(int *)(iVar10 + 0x44) + iVar12 * 4);
                    if (*(short *)(iVar12 + 4) == 0) {
                      fVar18 = (float10)*(float *)(iVar12 + 0x10);
                    }
                    else {
                      fVar18 = (float10)FUN_00b0a660(*(undefined4 *)(iVar14 + 0x14),0,0);
                    }
                  }
                }
                else {
                  fVar18 = (float10)0;
                  fStack_20 = (float)fVar18;
                  if (*(char *)(iVar10 + 0x54) != '\0') {
                    uVar16 = *(uint *)(iVar10 + 0x48);
                    uVar15 = 0;
                    iStack_30 = 0;
                    if (uVar16 != 0) {
                      do {
                        piVar6 = *(int **)(*(int *)(iVar10 + 0x44) + uVar15 * 4);
                        if (((*(uint *)(iVar12 + 0x10) & piVar6[5]) != 0) &&
                           (uVar17 = (uint)*(ushort *)(piVar6 + 1), *(ushort *)(piVar6 + 1) != 0)) {
                          fVar4 = *(float *)(iVar14 + 0x14);
                          uVar7 = FUN_00adcb60(fVar4,piVar6);
                          uVar13 = (uint)uVar7;
                          if (uVar7 == 0xffff) {
                            fVar18 = (float10)*(ushort *)(*piVar6 + -8 + uVar17 * 8) *
                                     (float10)1.5259022e-05;
                          }
                          else if ((int)(uVar17 - 1) < (int)(uVar13 + 1)) {
                            fVar18 = (float10)*(ushort *)(*piVar6 + -8 + uVar17 * 8) *
                                     (float10)1.5259022e-05;
                          }
                          else {
                            iVar2 = *piVar6 + uVar13 * 8;
                            fVar18 = (float10)(**(code **)(*(int *)piVar6[2] + 4))
                                                        (uVar13,(fVar4 - *(float *)(*piVar6 + 4 +
                                                                                   uVar13 * 8)) /
                                                                (*(float *)(iVar2 + 0xc) -
                                                                *(float *)(iVar2 + 4)));
                          }
                          fVar18 = fVar18 + (float10)fStack_20;
                          iStack_30 = iStack_30 + 1;
                          fStack_20 = (float)fVar18;
                        }
                        uVar15 = uVar15 + 1;
                      } while (uVar15 < uVar16);
                      if (iStack_30 != 0) {
                        fVar19 = (float10)iStack_30;
                        if (iStack_30 < 0) {
                          fVar19 = fVar19 + (float10)4.2949673e+09;
                        }
                        fVar18 = fVar18 / fVar19;
                      }
                    }
                  }
                }
                fVar19 = (float10)fVar3;
                *(float *)(iVar11 + 4) =
                     (float)(fVar18 * fVar19 +
                            ((float10)1 - fVar19) * (float10)*(float *)(iVar11 + 4));
              }
              uStack_14 = uStack_14 + 1;
            } while (uStack_14 < uVar5);
          }
        }
        else {
          uVar16 = 0;
          if (uVar5 != 0) {
            do {
              iVar14 = FUN_00adfc50(*(undefined4 *)(*(int *)(*piVar8 + uVar16 * 4) + 4));
              if (((iVar14 != -1) && (iVar14 = *piVar1 + iVar14 * 0xc, iVar14 != 0)) &&
                 (*(char *)(iVar14 + 8) == '\0')) {
                *(float *)(iVar14 + 4) = (1.0 - fVar3) * *(float *)(iVar14 + 4);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar5);
          }
        }
      }
    }
  }
  return;
}


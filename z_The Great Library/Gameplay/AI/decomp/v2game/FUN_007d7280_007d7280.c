// FUN_007d7280 @ 007d7280 body=[[007d7280, 007d7709] [007d7710, 007d7759] [007d7760, 007d78a7] [007d78b0, 007d798d] [007d7991, 007d79a8] [007d79ac, 007d79eb]]


/* WARNING: Removing unreachable block (ram,0x007d7980) */
/* WARNING: Removing unreachable block (ram,0x007d7988) */
/* WARNING: Removing unreachable block (ram,0x007d7991) */
/* WARNING: Removing unreachable block (ram,0x007d79a0) */
/* WARNING: Removing unreachable block (ram,0x007d7979) */
/* WARNING: Removing unreachable block (ram,0x007d79a3) */

void FUN_007d7280(int *param_1)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int in_ECX;
  undefined1 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_34;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43118;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d8660();
  local_8 = 0;
  local_24 = (int *)*param_1;
  if (local_24 != (int *)param_1[1]) {
    do {
      local_1c = (int *)*local_24;
      if (local_1c != (int *)local_24[1]) {
        do {
          iVar13 = *local_1c;
          iVar12 = local_1c[1];
          iVar4 = *(int *)(in_ECX + 0x40) * iVar12 + iVar13;
          iVar8 = *(int *)(in_ECX + 0x3c) + iVar4 * 4;
          piVar11 = (int *)(iVar12 * 0x10);
          local_34 = CONCAT13(*(undefined1 *)(iVar8 + 3),
                              CONCAT12(*(undefined1 *)(iVar8 + 2),
                                       CONCAT11(*(undefined1 *)(iVar8 + 1),
                                                *(undefined1 *)(*(int *)(in_ECX + 0x3c) + iVar4 * 4)
                                               )));
          iVar8 = (piVar11[1] - *piVar11) / 0xc;
          local_18 = 0;
          if (0 < iVar8) {
            piVar5 = (int *)*piVar11;
            do {
              if (*piVar5 == iVar13) {
                if (local_18 != -1) {
                  puVar6 = (undefined4 *)(*piVar11 + 4 + local_18 * 0xc);
                  *puVar6 = local_34;
                  *(undefined1 *)(puVar6 + 1) = 1;
                  goto LAB_007d739d;
                }
                break;
              }
              local_18 = local_18 + 1;
              piVar5 = piVar5 + 3;
            } while (local_18 < iVar8);
          }
          FUN_007d8480();
LAB_007d739d:
          if (iVar13 + 1 < *(int *)(in_ECX + 0x40)) {
            iVar8 = (piVar11[1] - *piVar11) / 0xc;
            local_18 = 0;
            if (0 < iVar8) {
              piVar5 = (int *)*piVar11;
              do {
                if (*piVar5 == iVar13 + 1) {
                  if (local_18 != -1) goto LAB_007d7430;
                  break;
                }
                local_18 = local_18 + 1;
                piVar5 = piVar5 + 3;
              } while (local_18 < iVar8);
            }
            FUN_007d8480();
          }
LAB_007d7430:
          if (iVar12 + 1 < *(int *)(in_ECX + 0x44)) {
            piVar5 = (int *)((iVar12 + 1) * 0x10);
            iVar8 = (piVar5[1] - *piVar5) / 0xc;
            local_18 = 0;
            if (0 < iVar8) {
              piVar5 = (int *)*piVar5;
              do {
                if (*piVar5 == iVar13) {
                  if (local_18 != -1) goto LAB_007d74d1;
                  break;
                }
                local_18 = local_18 + 1;
                piVar5 = piVar5 + 3;
              } while (local_18 < iVar8);
            }
            FUN_007d8480();
          }
LAB_007d74d1:
          if (-1 < iVar13 + -1) {
            piVar5 = (int *)*piVar11;
            iVar8 = (piVar11[1] - (int)piVar5) / 0xc;
            local_20 = 0;
            if (0 < iVar8) {
              do {
                if (*piVar5 == iVar13 + -1) {
                  if (local_20 != -1) goto LAB_007d756b;
                  break;
                }
                local_20 = local_20 + 1;
                piVar5 = piVar5 + 3;
              } while (local_20 < iVar8);
            }
            FUN_007d8480();
          }
LAB_007d756b:
          if (-1 < iVar12 + -1) {
            piVar11 = (int *)((iVar12 + -1) * 0x10);
            iVar8 = (piVar11[1] - *piVar11) / 0xc;
            iVar12 = 0;
            if (0 < iVar8) {
              piVar11 = (int *)*piVar11;
              do {
                if (*piVar11 == iVar13) {
                  if (iVar12 != -1) goto LAB_007d75f9;
                  break;
                }
                iVar12 = iVar12 + 1;
                piVar11 = piVar11 + 3;
              } while (iVar12 < iVar8);
            }
            FUN_007d8480();
          }
LAB_007d75f9:
          local_1c = local_1c + 2;
        } while (local_1c != (int *)local_24[1]);
      }
      local_24 = local_24 + 4;
    } while (local_24 != (int *)param_1[1]);
  }
  uVar14 = 0;
  param_1 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  if (0 < *(int *)(in_ECX + 0x44)) {
    piVar11 = (int *)0x0;
    do {
      FUN_007d8b50(*piVar11,piVar11[1],(piVar11[1] - *piVar11) / 0xc);
      uVar14 = (int)param_1 + (piVar11[1] - *piVar11) / 0xc;
      local_1c = (int *)((int)local_1c + 1);
      piVar11 = piVar11 + 4;
      param_1 = (int *)uVar14;
    } while ((int)local_1c < *(int *)(in_ECX + 0x44));
  }
  lVar1 = (ulonglong)(*(int *)(in_ECX + 0x44) + 1) * 4;
  puVar6 = (undefined4 *)FUN_00aad56b(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 **)(in_ECX + 0x8c) = puVar6;
  *puVar6 = 0;
  uVar7 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar14 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar14 * 2));
  *(undefined4 *)(in_ECX + 0x90) = uVar7;
  uVar7 = FUN_00aad56b(uVar14);
  *(undefined4 *)(in_ECX + 0x94) = uVar7;
  uVar7 = FUN_00aad56b(uVar14 * 4);
  *(undefined4 *)(in_ECX + 0x9c) = uVar7;
  param_1 = (int *)0x0;
  local_24 = (int *)0x0;
  local_1c = (int *)0x0;
  if (0 < *(int *)(in_ECX + 0x44)) {
    piVar11 = (int *)0x0;
    do {
      piVar5 = (int *)(*(int *)(in_ECX + 0x8c) + (int)local_1c * 4);
      piVar5[1] = (piVar11[1] - *piVar11) / 0xc + *piVar5;
      local_18 = (piVar11[1] - *piVar11) / 0xc;
      if (0 < local_18) {
        iVar8 = 0;
        do {
          *(undefined2 *)(*(int *)(in_ECX + 0x90) + (int)param_1 * 2) =
               *(undefined2 *)(iVar8 + *piVar11);
          if (((*(char *)(*piVar11 + 8 + iVar8) == '\0') || ((int)local_1c < 1)) ||
             (*(int *)(in_ECX + 0x44) + -1 <= (int)local_1c)) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
          }
          *(undefined1 *)((int)param_1 + *(int *)(in_ECX + 0x94)) = uVar10;
          if (*(char *)((int)param_1 + *(int *)(in_ECX + 0x94)) == '\x01') {
            local_20 = local_20 + 1;
          }
          *(undefined1 *)((int)local_24 + *(int *)(in_ECX + 0x9c)) =
               *(undefined1 *)(*piVar11 + 4 + iVar8);
          *(undefined1 *)(*(int *)(in_ECX + 0x9c) + 1 + (int)local_24) =
               *(undefined1 *)(*piVar11 + 5 + iVar8);
          *(undefined1 *)(*(int *)(in_ECX + 0x9c) + 2 + (int)local_24) =
               *(undefined1 *)(*piVar11 + 6 + iVar8);
          *(undefined1 *)(*(int *)(in_ECX + 0x9c) + 3 + (int)local_24) =
               *(undefined1 *)(*piVar11 + 7 + iVar8);
          param_1 = (int *)((int)param_1 + 1);
          local_24 = (int *)((int)local_24 + 4);
          iVar8 = iVar8 + 0xc;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_1c = (int *)((int)local_1c + 1);
      piVar11 = piVar11 + 4;
    } while ((int)local_1c < *(int *)(in_ECX + 0x44));
  }
  lVar1 = (ulonglong)(uint)(local_20 * 2) * 2;
  uVar7 = FUN_00aad56b(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)(in_ECX + 0x98) = uVar7;
  local_24 = (int *)0x0;
  local_1c = (int *)0x0;
  if (0 < *(int *)(in_ECX + 0x44)) {
    do {
      iVar8 = *(int *)(*(int *)(in_ECX + 0x8c) + 4 + (int)local_1c * 4);
      for (iVar13 = *(int *)(*(int *)(in_ECX + 0x8c) + (int)local_1c * 4); iVar13 < iVar8;
          iVar13 = iVar13 + 1) {
        iVar12 = *(int *)(in_ECX + 0x90);
        sVar3 = *(short *)(iVar12 + iVar13 * 2);
        if (*(char *)(iVar13 + *(int *)(in_ECX + 0x94)) == '\x01') {
          piVar11 = (int *)(*(int *)(in_ECX + 0x8c) + -4 + (int)local_1c * 4);
          for (psVar9 = (short *)(iVar12 + *piVar11 * 2);
              psVar9 < (short *)(iVar12 + piVar11[1] * 2); psVar9 = psVar9 + 1) {
            if (sVar3 <= *psVar9) {
              if (sVar3 == *psVar9) {
                sVar2 = (short)((int)psVar9 - iVar12 >> 1);
                goto LAB_007d78c6;
              }
              break;
            }
          }
          sVar2 = -1;
LAB_007d78c6:
          *(short *)(*(int *)(in_ECX + 0x98) + (int)local_24 * 2) = sVar2 - (short)iVar13;
          iVar12 = *(int *)(in_ECX + 0x90);
          piVar11 = (int *)(*(int *)(in_ECX + 0x8c) + 4 + (int)local_1c * 4);
          for (psVar9 = (short *)(iVar12 + *piVar11 * 2);
              psVar9 < (short *)(iVar12 + piVar11[1] * 2); psVar9 = psVar9 + 1) {
            if (sVar3 <= *psVar9) {
              if (sVar3 == *psVar9) {
                sVar3 = (short)((int)psVar9 - iVar12 >> 1);
                goto LAB_007d7919;
              }
              break;
            }
          }
          sVar3 = -1;
LAB_007d7919:
          *(short *)(*(int *)(in_ECX + 0x98) + ((int)local_24 + 1) * 2) = sVar3 - (short)iVar13;
          local_24 = (int *)((int)local_24 + 2);
        }
      }
      local_1c = (int *)((int)local_1c + 1);
    } while ((int)local_1c < *(int *)(in_ECX + 0x44));
  }
  FUN_00aaea59(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  FUN_00aaea59(*(undefined4 *)(in_ECX + 0x50));
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined1 *)(in_ECX + 0x88) = 1;
  ExceptionList = local_10;
  return;
}


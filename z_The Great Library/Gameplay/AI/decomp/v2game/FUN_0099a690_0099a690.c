// FUN_0099a690 @ 0099a690 body=[[0099a690, 0099a995]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0099a690(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int in_EAX;
  int *piVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint auStack_50 [2];
  int *local_38;
  undefined1 *local_34;
  int *local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  undefined1 *local_c;
  int local_8;
  
  puVar7 = param_1;
  iVar6 = (*(int *)(in_EAX + 0xdc) - *(int *)(in_EAX + 0xd8)) / 0xc;
  auStack_50[1] = 0x99a6c6;
  iVar5 = -(iVar6 * 4 + 8);
  *(undefined4 *)(&stack0xffffffb8 + iVar5) = 0xa110ca7e;
  *(undefined4 *)(&stack0xffffffbc + iVar6 * 4 + iVar5) = 0xa110ca7e;
  local_c = &stack0xffffffbc + iVar5;
  iVar14 = (*(int *)(in_EAX + 0xdc) - *(int *)(in_EAX + 0xd8)) / 0xc;
  *(undefined4 *)((int)auStack_50 + iVar5 + 4) = 0x99a704;
  iVar6 = -(iVar14 * 4 + 8);
  *(undefined4 *)(&stack0xffffffb8 + iVar6 + iVar5) = 0xa110ca7e;
  piVar8 = (int *)(&stack0xffffffbc + iVar6 + iVar5);
  piVar8[iVar14] = -0x5eef3582;
  local_14 = (int *)((*(int *)(in_EAX + 0xdc) - *(int *)(in_EAX + 0xd8)) / 0xc);
  param_1 = (uint *)0x0;
  if (0 < (int)local_14) {
    local_8 = 0;
    piVar13 = piVar8;
    do {
      iVar11 = *(int *)(in_EAX + 0xd8) + local_8;
      iVar14 = *(int *)(iVar11 + 4);
      iVar11 = *(int *)(iVar11 + 8);
      if (((iVar11 != 0) && (iVar14 != 0)) && (*(char *)(iVar14 + 0x4f) != '\0')) {
        param_1 = (uint *)((int)param_1 + 1);
        *(int *)(((int)local_c - (int)piVar8) + (int)piVar13) = iVar11;
        *piVar13 = iVar14;
        piVar13 = piVar13 + 1;
      }
      local_8 = local_8 + 0xc;
      local_14 = (int *)((int)local_14 + -1);
      local_18 = (int)local_c - (int)piVar8;
    } while (local_14 != (int *)0x0);
  }
  piVar13 = (int *)(in_EAX + 0x50);
  iVar14 = *(int *)(in_EAX + 0x54) - *piVar13 >> 2;
  local_10 = piVar8;
  if (iVar14 < 0x65) {
    local_8 = iVar14 + -1;
    local_14 = piVar13;
    if (-1 < local_8) {
      do {
        iVar14 = 0;
        if (0 < (int)param_1) {
          do {
            if (*(int *)(*piVar13 + local_8 * 4) == *(int *)(local_c + iVar14 * 4)) {
              piVar8 = local_10 + iVar14;
              piVar13 = (int *)puVar7[1];
              if ((piVar8 < piVar13) && (piVar4 = (int *)*puVar7, piVar4 <= piVar8)) {
                if (piVar13 == (int *)puVar7[2]) {
                  uVar10 = (int)piVar13 - (int)piVar4 >> 2;
                  if (0x3ffffffe < uVar10) {
LAB_0099a98c:
                    *(char **)((int)auStack_50 + iVar6 + iVar5 + 4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
                    *(Alignment **)((int)auStack_50 + iVar6 + iVar5) = &UNK_0099a996;
                    FUN_00aad3ad();
                  }
                  uVar10 = uVar10 + 1;
                  uVar12 = (int)puVar7[2] - (int)piVar4 >> 2;
                  if (uVar12 < uVar10) {
                    if (0x3fffffff - (uVar12 >> 1) < uVar12) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = uVar12 + (uVar12 >> 1);
                    }
                    if (uVar12 < uVar10) {
                      uVar12 = uVar10;
                    }
                    *(uint *)((int)auStack_50 + iVar6 + iVar5 + 4) = uVar12;
                    *(undefined4 *)((int)auStack_50 + iVar6 + iVar5) = 0x99a910;
                    FUN_004bf300();
                  }
                }
                if ((undefined4 *)puVar7[1] != (undefined4 *)0x0) {
                  *(undefined4 *)puVar7[1] =
                       *(undefined4 *)(*puVar7 + ((int)piVar8 - (int)piVar4 >> 2) * 4);
                }
              }
              else {
                if (piVar13 == (int *)puVar7[2]) {
                  uVar10 = (int)((int)piVar13 - *puVar7) >> 2;
                  if (0x3ffffffe < uVar10) goto LAB_0099a98c;
                  uVar10 = uVar10 + 1;
                  uVar12 = (int)((int)puVar7[2] - *puVar7) >> 2;
                  if (uVar12 < uVar10) {
                    if (0x3fffffff - (uVar12 >> 1) < uVar12) {
                      uVar12 = 0;
                    }
                    else {
                      uVar12 = uVar12 + (uVar12 >> 1);
                    }
                    if (uVar12 < uVar10) {
                      uVar12 = uVar10;
                    }
                    *(uint *)((int)auStack_50 + iVar6 + iVar5 + 4) = uVar12;
                    *(undefined4 *)((int)auStack_50 + iVar6 + iVar5) = 0x99a961;
                    FUN_004bf300();
                  }
                }
                if ((int *)puVar7[1] != (int *)0x0) {
                  *(int *)puVar7[1] = *piVar8;
                }
              }
              puVar7[1] = puVar7[1] + 4;
              piVar13 = local_14;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)param_1);
        }
        local_8 = local_8 + -1;
        if (local_8 < 0) {
          return;
        }
      } while( true );
    }
  }
  else {
    *(undefined4 *)((int)auStack_50 + iVar6 + iVar5 + 4) = 0x99a7a7;
    iVar11 = -(iVar14 * 4 + 8);
    *(undefined4 *)(&stack0xffffffb8 + iVar11 + iVar6 + iVar5) = 0xa110ca7e;
    puVar9 = &stack0xffffffbc + iVar11 + iVar6 + iVar5;
    *(undefined4 *)(puVar9 + iVar14 * 4) = 0xa110ca7e;
    iVar14 = *(int *)(in_EAX + 0x54) - *piVar13;
    local_24 = iVar14 >> 2;
    local_1c = (int)(local_24 + (iVar14 >> 0x1f & 3U)) >> 2;
    if (local_1c < 100) {
      local_1c = 100;
    }
    else if (local_24 < local_1c) {
      local_1c = local_24;
    }
    local_34 = local_c;
    local_30 = local_10;
    local_2c = (int)param_1;
    local_14 = (int *)puVar9;
    *(int ***)((int)auStack_50 + iVar11 + iVar6 + iVar5 + 4) = &local_38;
    local_20 = 0;
    local_38 = piVar13;
    local_28 = puVar9;
    *(undefined4 *)((int)auStack_50 + iVar11 + iVar6 + iVar5) = 0x99a815;
    FUN_0099e9f0();
    iVar14 = *(int *)(in_EAX + 0x54) - *piVar13 >> 2;
    while (iVar14 = iVar14 + -1, -1 < iVar14) {
      iVar1 = *(int *)((int)local_14 + iVar14 * 4);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)puVar7[1];
        param_1 = (uint *)iVar1;
        if ((&param_1 < puVar2) && (puVar3 = (undefined4 *)*puVar7, puVar3 <= &param_1)) {
          if (puVar2 == (undefined4 *)puVar7[2]) {
            *(undefined4 *)((int)auStack_50 + iVar11 + iVar6 + iVar5 + 4) = 0x99a853;
            FUN_00a513f0();
          }
          if ((undefined4 *)puVar7[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar7[1] =
                 *(undefined4 *)(*puVar7 + ((int)&param_1 - (int)puVar3 >> 2) * 4);
          }
        }
        else {
          if (puVar2 == (undefined4 *)puVar7[2]) {
            *(undefined4 *)((int)auStack_50 + iVar11 + iVar6 + iVar5 + 4) = 0x99a86f;
            FUN_00a513f0();
          }
          if ((int *)puVar7[1] != (int *)0x0) {
            *(int *)puVar7[1] = iVar1;
          }
        }
        puVar7[1] = puVar7[1] + 4;
      }
    }
  }
  return;
}


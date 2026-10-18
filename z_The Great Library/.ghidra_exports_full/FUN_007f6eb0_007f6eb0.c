// FUN_007f6eb0 @ 007f6eb0 body=[[007f6eb0, 007f7159] [007f7160, 007f72b7] [007f72c0, 007f740e] [007f7410, 007f756f]]


void FUN_007f6eb0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  local_1c = 1;
  if (1 < (uint)(*(int *)(param_1 + 0x20) - iVar4 >> 2)) {
    do {
      local_8 = *(int *)(iVar4 + local_1c * 4);
      iVar4 = *(int *)(*(int *)(local_8 + 0x10) + 0x140) / *(int *)(param_1 + 0x194);
      local_14[2] = *(int *)(*(int *)(local_8 + 0x10) + 0x144) / *(int *)(param_1 + 0x198);
      puVar8 = (uint *)((*(int *)(param_1 + 0x18c) * local_14[2] + iVar4) * 0x10 + param_2);
      piVar1 = (int *)puVar8[1];
      local_14[1] = iVar4;
      if ((&local_8 < piVar1) && (piVar2 = (int *)*puVar8, piVar2 <= &local_8)) {
        if (piVar1 == (int *)puVar8[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar8[1] =
               *(undefined4 *)(*puVar8 + ((int)&local_8 - (int)piVar2 >> 2) * 4);
        }
      }
      else {
        if (piVar1 == (int *)puVar8[2]) {
          FUN_00a513f0();
        }
        if ((int *)puVar8[1] != (int *)0x0) {
          *(int *)puVar8[1] = local_8;
        }
      }
      puVar8[1] = puVar8[1] + 4;
      local_8 = *(int *)(local_8 + 8);
      if (*(char *)(local_8 + 0x2a) != '\0') {
        piVar1 = (int *)((*(int *)(param_1 + 0x18c) * local_14[2] + iVar4) * 0x3c0 + 0x3a0 +
                        *(int *)(param_1 + 0x19c));
        if ((piVar1[3] == 0) && (piVar1[2] == 0)) {
          *(undefined8 *)piVar1 = *(undefined8 *)(local_8 + 0xb8);
          *(undefined8 *)(piVar1 + 2) = *(undefined8 *)(local_8 + 0xc0);
        }
        else {
          iVar5 = *(int *)(local_8 + 0xb8);
          if (iVar5 < *piVar1) {
            piVar1[2] = piVar1[2] + (*piVar1 - iVar5);
            *piVar1 = iVar5;
          }
          if (piVar1[2] + *piVar1 < *(int *)(local_8 + 0xb8) + *(int *)(local_8 + 0xc0)) {
            piVar1[2] = (*(int *)(local_8 + 0xc0) - *piVar1) + *(int *)(local_8 + 0xb8);
          }
          iVar5 = piVar1[1];
          iVar3 = *(int *)(local_8 + 0xbc);
          if (iVar3 < iVar5) {
            piVar1[1] = iVar3;
            piVar1[3] = (iVar5 - iVar3) + piVar1[3];
          }
          if (piVar1[3] + piVar1[1] < *(int *)(local_8 + 0xbc) + *(int *)(local_8 + 0xc4)) {
            piVar1[3] = (*(int *)(local_8 + 0xc4) - piVar1[1]) + *(int *)(local_8 + 0xbc);
          }
        }
        local_18 = 0;
        local_20 = iVar4;
        if (*(int *)(local_8 + 0xb8) < *(int *)(param_1 + 0x194) * iVar4) {
          do {
            if ((*(int *)(param_1 + 0x18c) * local_14[2] - local_18) + -1 + iVar4 < 0) break;
            iVar5 = *(int *)(param_1 + 0x18c) * local_14[2];
            local_14[0] = iVar5 + iVar4;
            puVar8 = (uint *)(((iVar5 - local_18) + iVar4) * 0x3c0 + -0x34 +
                             *(int *)(param_1 + 0x19c));
            piVar1 = (int *)puVar8[1];
            if (local_14 < piVar1) {
              piVar2 = (int *)*puVar8;
              if (local_14 < piVar2) goto LAB_007f70ec;
              if (piVar1 == (int *)puVar8[2]) {
                FUN_007b94a0();
              }
              if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar8[1] =
                     *(undefined4 *)(*puVar8 + ((int)local_14 - (int)piVar2 >> 2) * 4);
              }
            }
            else {
LAB_007f70ec:
              if (piVar1 == (int *)puVar8[2]) {
                FUN_007b94a0();
              }
              if ((int *)puVar8[1] != (int *)0x0) {
                *(int *)puVar8[1] = local_14[0];
              }
            }
            puVar8[1] = puVar8[1] + 4;
            local_20 = local_20 + -1;
            local_18 = local_18 + 1;
          } while (*(int *)(local_8 + 0xb8) < *(int *)(param_1 + 0x194) * local_20);
        }
        local_18 = 0;
        if (*(int *)(param_1 + 0x194) * (iVar4 + 1) <
            *(int *)(local_8 + 0xc0) + *(int *)(local_8 + 0xb8)) {
          do {
            iVar5 = *(int *)(param_1 + 0x18c);
            if (*(int *)(param_1 + 400) * iVar5 < iVar5 * local_14[2] + local_18 + 1 + iVar4) break;
            local_14[0] = iVar5 * local_14[2] + iVar4;
            puVar8 = (uint *)((iVar5 * local_14[2] + local_18 + iVar4) * 0x3c0 + 0x74c +
                             *(int *)(param_1 + 0x19c));
            piVar1 = (int *)puVar8[1];
            if ((local_14 < piVar1) && (piVar2 = (int *)*puVar8, piVar2 <= local_14)) {
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)((int)piVar1 - *puVar8) >> 2;
                if (0x3ffffffe < uVar6) goto LAB_007f7566;
                uVar6 = uVar6 + 1;
                uVar7 = (int)((int)puVar8[2] - *puVar8) >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                  iVar4 = local_14[1];
                }
              }
              if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar8[1] =
                     *(undefined4 *)(*puVar8 + ((int)local_14 - (int)piVar2 >> 2) * 4);
              }
            }
            else {
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)((int)piVar1 - *puVar8) >> 2;
                if (0x3ffffffe < uVar6) goto LAB_007f7566;
                uVar6 = uVar6 + 1;
                uVar7 = (int)((int)puVar8[2] - *puVar8) >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                  iVar4 = local_14[1];
                }
              }
              if ((int *)puVar8[1] != (int *)0x0) {
                *(int *)puVar8[1] = local_14[0];
              }
            }
            puVar8[1] = puVar8[1] + 4;
            local_18 = local_18 + 1;
          } while ((iVar4 + 1 + local_18) * *(int *)(param_1 + 0x194) <
                   *(int *)(local_8 + 0xc0) + *(int *)(local_8 + 0xb8));
        }
        iVar5 = local_14[2];
        if (*(int *)(local_8 + 0xbc) < *(int *)(param_1 + 0x198) * local_14[2]) {
          do {
            if (*(int *)(param_1 + 0x18c) * (iVar5 + -1) + iVar4 < 0) break;
            iVar4 = *(int *)(param_1 + 0x18c) * local_14[2] + local_14[1];
            puVar8 = (uint *)((*(int *)(param_1 + 0x18c) * (iVar5 + -1) + local_14[1]) * 0x3c0 +
                              0x38c + *(int *)(param_1 + 0x19c));
            piVar1 = (int *)puVar8[1];
            local_18 = iVar4;
            if (&local_18 < piVar1) {
              piVar2 = (int *)*puVar8;
              if (&local_18 < piVar2) goto LAB_007f7371;
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)piVar1 - (int)piVar2 >> 2;
                if (0x3ffffffe < uVar6) goto LAB_007f7566;
                uVar6 = uVar6 + 1;
                uVar7 = (int)puVar8[2] - (int)piVar2 >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                }
              }
              if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar8[1] =
                     *(undefined4 *)(*puVar8 + ((int)&local_18 - (int)piVar2 >> 2) * 4);
              }
            }
            else {
LAB_007f7371:
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)((int)piVar1 - *puVar8) >> 2;
                if (0x3ffffffe < uVar6) goto LAB_007f7566;
                uVar6 = uVar6 + 1;
                uVar7 = (int)((int)puVar8[2] - *puVar8) >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                }
              }
              if ((int *)puVar8[1] != (int *)0x0) {
                *(int *)puVar8[1] = iVar4;
              }
            }
            puVar8[1] = puVar8[1] + 4;
            iVar5 = iVar5 + -1;
            iVar4 = local_14[1];
          } while (*(int *)(local_8 + 0xbc) < *(int *)(param_1 + 0x198) * iVar5);
        }
        iVar5 = local_14[2] + 1;
        if (*(int *)(param_1 + 0x198) * (local_14[2] + 1) <
            *(int *)(local_8 + 0xc4) + *(int *)(local_8 + 0xbc)) {
          do {
            local_14[0] = iVar5;
            iVar5 = *(int *)(param_1 + 0x18c);
            if (*(int *)(param_1 + 400) * iVar5 < iVar5 * local_14[0] + iVar4) break;
            iVar4 = local_14[2] * iVar5 + local_14[1];
            puVar8 = (uint *)((local_14[0] * iVar5 + local_14[1]) * 0x3c0 + 0x38c +
                             *(int *)(param_1 + 0x19c));
            piVar1 = (int *)puVar8[1];
            local_18 = iVar4;
            if ((&local_18 < piVar1) && (piVar2 = (int *)*puVar8, piVar2 <= &local_18)) {
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)piVar1 - (int)piVar2 >> 2;
                if (0x3ffffffe < uVar6) goto LAB_007f7566;
                uVar6 = uVar6 + 1;
                uVar7 = (int)puVar8[2] - (int)piVar2 >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                }
              }
              if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
                *(undefined4 *)puVar8[1] =
                     *(undefined4 *)(*puVar8 + ((int)&local_18 - (int)piVar2 >> 2) * 4);
              }
            }
            else {
              if (piVar1 == (int *)puVar8[2]) {
                uVar6 = (int)((int)piVar1 - *puVar8) >> 2;
                if (0x3ffffffe < uVar6) {
LAB_007f7566:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar6 = uVar6 + 1;
                uVar7 = (int)((int)puVar8[2] - *puVar8) >> 2;
                if (uVar7 < uVar6) {
                  if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_004bf300(uVar7);
                }
              }
              if ((int *)puVar8[1] != (int *)0x0) {
                *(int *)puVar8[1] = iVar4;
              }
            }
            puVar8[1] = puVar8[1] + 4;
            local_14[0] = local_14[0] + 1;
            iVar4 = local_14[1];
            iVar5 = local_14[0];
          } while (*(int *)(param_1 + 0x198) * local_14[0] <
                   *(int *)(local_8 + 0xc4) + *(int *)(local_8 + 0xbc));
        }
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      local_1c = local_1c + 1;
    } while (local_1c < (uint)(*(int *)(param_1 + 0x20) - iVar4 >> 2));
  }
  return;
}


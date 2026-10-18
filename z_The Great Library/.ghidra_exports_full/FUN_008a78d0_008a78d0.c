// FUN_008a78d0 @ 008a78d0 body=[[008a78d0, 008a7cb2]]


void FUN_008a78d0(int param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined1 local_70 [8];
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c [2];
  
  FUN_008a7700(param_1);
  uVar4 = FUN_009b7950(0x20,0);
  FUN_008a8650(uVar4);
  iVar9 = *DAT_012587e4;
  local_20 = DAT_012588e8;
  local_14 = DAT_012587e4;
  local_10 = 0;
  piVar6 = DAT_012587e4;
  local_1c = iVar9;
  if (0 < iVar9) {
    do {
      iVar8 = *(int *)(local_14[1] + local_10 * 4);
      local_28 = *(undefined4 *)(iVar8 + 0x1c);
      iVar8 = *(int *)(piVar6[1] + *(int *)(iVar8 + 0x20) * 4);
      pvVar1 = *(void **)(iVar8 + 8);
      if (pvVar1 != *(void **)(iVar8 + 0xc)) {
        FID_conflict__memcpy(pvVar1,*(void **)(iVar8 + 0xc),0);
        piVar6 = DAT_012587e4;
        *(void **)(iVar8 + 0xc) = pvVar1;
        iVar9 = local_1c;
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar9);
  }
  local_18 = 0;
  if (0 < iVar9) {
    do {
      iVar9 = *(int *)(local_14[1] + local_18 * 4);
      local_68 = *(undefined4 *)(iVar9 + 0x1c);
      local_64 = *(int *)(iVar9 + 0x20);
      iVar9 = *(int *)(piVar6[1] + local_64 * 4);
      if (0 < (int)(*(int *)(iVar9 + 0x9dc) - *(int *)(iVar9 + 0x9d8) & 0xfffffffcU)) {
        iVar9 = *(int *)(piVar6[1] + local_64 * 4);
        puVar10 = (uint *)(iVar9 + 8);
        iVar8 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
        local_10 = 0;
        local_28 = local_68;
        local_24 = iVar8;
        if (0 < iVar8) {
          do {
            iVar11 = *(int *)(*(int *)(param_1 + 0x10) + local_10 * 4);
            local_c[0] = iVar11;
            cVar3 = (**(code **)(*(int *)(iVar11 + 0x30) + 0x18))(local_70);
            if (cVar3 != '\0') {
              piVar6 = *(int **)(iVar9 + 0xc);
              if ((local_c < piVar6) && (piVar2 = (int *)*puVar10, piVar2 <= local_c)) {
                if (piVar6 == *(int **)(iVar9 + 0x10)) {
                  uVar5 = (int)piVar6 - (int)piVar2 >> 2;
                  if (0x3ffffffe < uVar5) goto LAB_008a7b9c;
                  uVar5 = uVar5 + 1;
                  uVar7 = (int)*(int **)(iVar9 + 0x10) - (int)piVar2 >> 2;
                  if (uVar7 < uVar5) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar5) {
                      uVar7 = uVar5;
                    }
                    FUN_004bf300(uVar7);
                    iVar8 = local_24;
                  }
                }
                if (*(undefined4 **)(iVar9 + 0xc) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar9 + 0xc) =
                       *(undefined4 *)(*puVar10 + ((int)local_c - (int)piVar2 >> 2) * 4);
                }
              }
              else {
                if (piVar6 == *(int **)(iVar9 + 0x10)) {
                  uVar5 = (int)((int)piVar6 - *puVar10) >> 2;
                  if (0x3ffffffe < uVar5) goto LAB_008a7b9c;
                  uVar5 = uVar5 + 1;
                  uVar7 = (int)((int)*(int **)(iVar9 + 0x10) - *puVar10) >> 2;
                  if (uVar7 < uVar5) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar5) {
                      uVar7 = uVar5;
                    }
                    FUN_004bf300(uVar7);
                    iVar11 = local_c[0];
                  }
                }
                if (*(int **)(iVar9 + 0xc) != (int *)0x0) {
                  **(int **)(iVar9 + 0xc) = iVar11;
                }
              }
              *(int *)(iVar9 + 0xc) = *(int *)(iVar9 + 0xc) + 4;
            }
            local_10 = local_10 + 1;
            piVar6 = DAT_012587e4;
          } while (local_10 < iVar8);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_1c);
  }
  local_28 = 0x2d2d2d;
  local_68 = 0x2d2d2d;
  local_64 = 0;
  piVar6 = (int *)(**(code **)(*DAT_0125870c + 0x24))();
  local_1c = 0;
  local_14 = piVar6;
  if (0 < (int)piVar6) {
    do {
      iVar9 = *(int *)(*(int *)(local_20 + 0xacc) + local_1c * 4);
      pvVar1 = *(void **)(iVar9 + 0x14);
      if (pvVar1 != *(void **)(iVar9 + 0x18)) {
        FID_conflict__memcpy(pvVar1,*(void **)(iVar9 + 0x18),0);
        *(void **)(iVar9 + 0x18) = pvVar1;
        piVar6 = local_14;
      }
      local_1c = local_1c + 1;
    } while (local_1c < (int)piVar6);
  }
  local_c[0] = 0;
  if (0 < (int)piVar6) {
    do {
      local_24 = *(int *)(*(int *)(local_20 + 0xacc) + local_c[0] * 4);
      if (*(int *)(local_24 + 300) != 0) {
        iVar9 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2;
        local_18 = 0;
        local_60 = local_c[0];
        local_1c = iVar9;
        if (0 < iVar9) {
          do {
            iVar11 = local_24;
            iVar8 = *(int *)(*(int *)(param_1 + 0x30) + local_18 * 4);
            local_10 = iVar8;
            cVar3 = (**(code **)(*(int *)(iVar8 + 0x30) + 0x18))(local_70);
            if (cVar3 != '\0') {
              piVar6 = *(int **)(iVar11 + 0x18);
              puVar10 = (uint *)(iVar11 + 0x14);
              if ((&local_10 < piVar6) && (piVar2 = (int *)*puVar10, piVar2 <= &local_10)) {
                if (piVar6 == *(int **)(iVar11 + 0x1c)) {
                  uVar5 = (int)piVar6 - (int)piVar2 >> 2;
                  if (0x3ffffffe < uVar5) goto LAB_008a7b9c;
                  uVar5 = uVar5 + 1;
                  uVar7 = (int)*(int **)(iVar11 + 0x1c) - (int)piVar2 >> 2;
                  if (uVar7 < uVar5) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar5) {
                      uVar7 = uVar5;
                    }
                    FUN_004bf300(uVar7);
                    iVar9 = local_1c;
                  }
                }
                if (*(undefined4 **)(iVar11 + 0x18) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar11 + 0x18) =
                       *(undefined4 *)(*puVar10 + ((int)&local_10 - (int)piVar2 >> 2) * 4);
                }
              }
              else {
                if (piVar6 == *(int **)(iVar11 + 0x1c)) {
                  uVar5 = (int)((int)piVar6 - *puVar10) >> 2;
                  if (0x3ffffffe < uVar5) {
LAB_008a7b9c:
                    /* WARNING: Subroutine does not return */
                    FUN_00aad3ad("vector<T> too long");
                  }
                  uVar5 = uVar5 + 1;
                  uVar7 = (int)((int)*(int **)(iVar11 + 0x1c) - *puVar10) >> 2;
                  if (uVar7 < uVar5) {
                    if (0x3fffffff - (uVar7 >> 1) < uVar7) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = uVar7 + (uVar7 >> 1);
                    }
                    if (uVar7 < uVar5) {
                      uVar7 = uVar5;
                    }
                    FUN_004bf300(uVar7);
                    iVar9 = local_1c;
                  }
                }
                if (*(int **)(iVar11 + 0x18) != (int *)0x0) {
                  **(int **)(iVar11 + 0x18) = iVar8;
                }
              }
              *(int *)(iVar11 + 0x18) = *(int *)(iVar11 + 0x18) + 4;
            }
            local_18 = local_18 + 1;
            piVar6 = local_14;
          } while (local_18 < iVar9);
        }
      }
      local_c[0] = local_c[0] + 1;
    } while (local_c[0] < (int)piVar6);
  }
  return;
}


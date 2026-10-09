// FUN_0059b840 @ 0059b840

void FUN_0059b840(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_ESI;
  uint uVar11;
  undefined4 **ppuVar12;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3fa08;
  if (*(char *)(unaff_ESI + 0x18c) == '\0') {
    ExceptionList = &local_10;
    *(undefined1 *)(unaff_ESI + 0x18c) = 1;
    local_44 = (undefined4 *)0x0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = (undefined4 *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_54 = (undefined4 *)0x0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_8 = 2;
    piVar4 = *(int **)(unaff_ESI + 0x20);
    iVar6 = local_3c;
    while (local_3c = iVar6, piVar4 != (int *)0x0) {
      local_20 = (int *)piVar4[2];
      if (*piVar4 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*piVar4 + 0x38);
      }
      piVar3 = (int *)*piVar3;
      piVar4 = local_20;
      if (piVar3 != (int *)0x0) {
        FUN_00401000(0x42c90000);
        local_24 = FUN_00b31c00();
        local_18 = piVar3;
        do {
          iVar6 = *local_18;
          local_1c = iVar6;
          if ((*(int *)(iVar6 + 0x3c) < local_24) || (*(int *)(iVar6 + 0x40) < 1000)) {
            iVar8 = *(int *)(unaff_ESI + 0x180);
            local_18 = (int *)local_18[2];
            piVar4 = (int *)FUN_00aae9af(0x10);
            if (piVar4 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              *piVar4 = iVar6;
              piVar4[1] = iVar8;
              piVar4[2] = 0;
              *(undefined1 *)(piVar4 + 3) = 0;
            }
            iVar6 = *(int *)(unaff_ESI + 0x184);
            *(int **)(unaff_ESI + 0x180) = piVar4;
            *(int *)(unaff_ESI + 0x184) = iVar6 + 1;
            if (iVar6 == 0) {
              *(int **)(unaff_ESI + 0x17c) = piVar4;
            }
            else {
              *(int **)(iVar8 + 8) = piVar4;
            }
          }
          else {
            if (*(int *)(*(int *)(iVar6 + 0x38) + 0x23c) < 1) {
              if (*(int *)(*(int *)(iVar6 + 0x38) + 0x228) < 1000) {
                ppuVar12 = &local_44;
              }
              else {
                ppuVar12 = &local_34;
              }
            }
            else {
              ppuVar12 = &local_54;
            }
            local_18 = (int *)local_18[2];
            FUN_005ab8a0(ppuVar12,&local_1c);
          }
          piVar4 = local_20;
          iVar6 = local_3c;
        } while (local_18 != (int *)0x0);
      }
    }
    local_1c = local_2c / 2;
    local_18 = (int *)iVar6;
    local_24 = FUN_0059c520(*(undefined4 *)(unaff_ESI + 0x1c));
    if (local_24 < local_2c + iVar6) {
      iVar5 = (int)(local_24 + (local_24 >> 0x1f & 3U)) >> 2;
      for (iVar8 = iVar6 + iVar5 * 2; iVar8 < local_24; iVar8 = iVar8 + 2) {
        iVar5 = iVar5 + 1;
      }
      if (iVar5 < local_1c) {
        local_1c = iVar5;
      }
      if (local_24 < iVar5 * 2 + iVar6) {
        local_18 = (int *)(local_24 + iVar5 * -2);
      }
    }
    iVar6 = FUN_005db9b0();
    if (iVar6 < (int)local_18) {
      local_18 = (int *)iVar6;
    }
    if ((local_1c < 1) && (0 < local_2c)) {
      local_1c = 1;
    }
    uVar10 = 0;
    if (local_54 != (undefined4 *)0x0) {
      local_1c = local_1c + (int)local_18;
      puVar7 = local_54;
      do {
        puVar1 = (undefined4 *)puVar7[2];
        uVar2 = *puVar7;
        if ((int)uVar10 < local_1c) {
          uVar9 = uVar10 & 0x80000001;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
          }
          *(undefined4 *)
           (unaff_ESI + 300 + ((-(uint)(uVar9 != 0) & 0xfffffffe) + 1) * ((int)(uVar10 + 1) / 2) * 4
           ) = uVar2;
        }
        else {
          local_20 = *(int **)(unaff_ESI + 0x170);
          puVar7 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = uVar2;
            puVar7[1] = local_20;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar6 = *(int *)(unaff_ESI + 0x174);
          *(undefined4 **)(unaff_ESI + 0x170) = puVar7;
          *(int *)(unaff_ESI + 0x174) = iVar6 + 1;
          if (iVar6 == 0) {
            *(undefined4 **)(unaff_ESI + 0x16c) = puVar7;
          }
          else {
            local_20[2] = (int)puVar7;
          }
        }
        uVar10 = uVar10 + 1;
        puVar7 = puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    if (local_44 != (undefined4 *)0x0) {
      puVar7 = local_44;
      uVar10 = -(int)local_18;
      do {
        uVar11 = uVar10 + 1;
        puVar1 = (undefined4 *)puVar7[2];
        uVar2 = *puVar7;
        uVar9 = (int)local_18 + -1 + uVar11;
        if ((int)uVar9 < (int)local_18) {
          uVar9 = uVar9 & 0x80000001;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
          }
          local_20 = (int *)((-(uint)(uVar9 != 0) & 0xfffffffe) + 1);
          *(undefined4 *)
           (unaff_ESI + 0xac + (int)local_20 * ((int)(uVar11 + (int)local_18) / 2) * 4) = uVar2;
        }
        else {
          if ((int)uVar9 < (int)local_18 * 2) {
            uVar10 = uVar10 & 0x80000001;
            if ((int)uVar10 < 0) {
              uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
            }
            iVar6 = ((-(uint)(uVar10 != 0) & 0xfffffffe) + 1) * ((int)uVar11 / 2);
            if (*(int *)(unaff_ESI + 300 + iVar6 * 4) == 0) {
              *(undefined4 *)(unaff_ESI + 300 + iVar6 * 4) = uVar2;
              goto LAB_0059bbc9;
            }
          }
          local_20 = *(int **)(unaff_ESI + 0x170);
          puVar7 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = uVar2;
            puVar7[1] = local_20;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar6 = *(int *)(unaff_ESI + 0x174);
          *(undefined4 **)(unaff_ESI + 0x170) = puVar7;
          *(int *)(unaff_ESI + 0x174) = iVar6 + 1;
          if (iVar6 == 0) {
            *(undefined4 **)(unaff_ESI + 0x16c) = puVar7;
          }
          else {
            local_20[2] = (int)puVar7;
          }
        }
LAB_0059bbc9:
        puVar7 = puVar1;
        uVar10 = uVar11;
      } while (puVar1 != (undefined4 *)0x0);
    }
    if (local_34 != (undefined4 *)0x0) {
      local_1c = (int)local_18 + 1;
      uVar10 = (int)local_18 * 2 - local_24;
      local_18 = (int *)(local_24 - (int)local_18);
      puVar7 = local_34;
      do {
        puVar1 = (undefined4 *)puVar7[2];
        uVar2 = *puVar7;
        if ((int)((int)local_18 + uVar10) < local_24) {
          uVar9 = (int)local_18 + uVar10 & 0x80000001;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
          }
          *(undefined4 *)
           (unaff_ESI + 0xac + ((-(uint)(uVar9 != 0) & 0xfffffffe) + 1) * (local_1c / 2) * 4) =
               uVar2;
        }
        else {
          if ((int)uVar10 < local_24) {
            uVar9 = uVar10 & 0x80000001;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
            }
            iVar6 = ((-(uint)(uVar9 != 0) & 0xfffffffe) + 1) * ((int)(uVar10 + 1) / 2);
            if (*(int *)(unaff_ESI + 300 + iVar6 * 4) == 0) {
              *(undefined4 *)(unaff_ESI + 300 + iVar6 * 4) = uVar2;
              goto LAB_0059bcd6;
            }
          }
          local_20 = *(int **)(unaff_ESI + 0x170);
          puVar7 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = uVar2;
            puVar7[1] = local_20;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar6 = *(int *)(unaff_ESI + 0x174);
          *(int *)(unaff_ESI + 0x174) = iVar6 + 1;
          *(undefined4 **)(unaff_ESI + 0x170) = puVar7;
          if (iVar6 == 0) {
            *(undefined4 **)(unaff_ESI + 0x16c) = puVar7;
          }
          else {
            local_20[2] = (int)puVar7;
          }
        }
LAB_0059bcd6:
        local_1c = local_1c + 1;
        uVar10 = uVar10 + 1;
        puVar7 = puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
    FUN_009a63f0();
  }
  ExceptionList = local_10;
  return;
}



// FUN_00520ed0 @ 00520ed0 body=[[00520ed0, 00520f6c] [00520f70, 00520fed] [00520ff0, 00521137] [00521141, 005211a5] [005211af, 00521240] [00521244, 0052138c] [00521390, 005213ec] [005213f0, 00521408] [00521410, 0052152b] [0052152f, 0052153b] [0052153f, 00521554]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00521536) */
/* WARNING: Removing unreachable block (ram,0x00521523) */

void FUN_00520ed0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined4 *puVar18;
  int iVar19;
  undefined4 auStack_80 [2];
  int *local_6c;
  int *local_68;
  int *local_58;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 *puVar17;
  
  puStack_c = &LAB_00bb41b1;
  local_10 = ExceptionList;
  if (0 < *(int *)(param_1 + 0xe4c)) {
    auStack_80[1] = 0x520f0b;
    iVar19 = -(*(int *)(param_1 + 0xe4c) * 4 + 8);
    iVar7 = *(int *)(param_1 + 0xe4c);
    *(undefined4 *)(&stack0xffffff88 + iVar19) = 0xa110ca7e;
    *(undefined4 *)(&stack0xffffff8c + iVar7 * 4 + iVar19) = 0xa110ca7e;
    iVar7 = *(int *)(param_1 + 0xe4c);
    *(undefined4 *)((int)auStack_80 + iVar19 + 4) = 0x520f39;
    iVar15 = -(iVar7 * 4 + 8);
    puVar16 = &stack0xffffff88 + iVar15 + iVar19;
    iVar7 = *(int *)(param_1 + 0xe4c);
    *(undefined4 *)(&stack0xffffff88 + iVar15 + iVar19) = 0xa110ca7e;
    *(undefined4 *)(&stack0xffffff8c + iVar7 * 4 + iVar15 + iVar19) = 0xa110ca7e;
    piVar12 = *(int **)(param_1 + 0xe44);
    piVar8 = (int *)(&stack0xffffff8c + iVar15 + iVar19);
    local_18[0] = (undefined4 *)0x0;
    if (piVar12 != (int *)0x0) {
      local_1c = &stack0xffffff8c + (iVar19 - (int)piVar8);
      piVar14 = piVar8;
LAB_00520f70:
      iVar7 = *piVar12;
      piVar12 = (int *)piVar12[2];
      piVar6 = piVar12;
      if (piVar12 != (int *)0x0) {
        do {
          iVar2 = *piVar6;
          piVar6 = (int *)piVar6[2];
          if (((*(int *)(iVar7 + 0x250) == *(int *)(iVar2 + 0x250)) && (*(int *)(iVar7 + 0x84) < 1))
             && (*(int *)(iVar2 + 0x84) < 1)) {
            local_18[0] = (undefined4 *)((int)local_18[0] + 1);
            *(int *)(local_1c + (int)piVar14) = iVar7;
            *piVar14 = iVar2;
            piVar14 = piVar14 + 1;
            break;
          }
        } while (piVar6 != (int *)0x0);
        goto LAB_00520f70;
      }
    }
    puVar13 = local_18[0];
    local_6c = (int *)0x0;
    local_68 = (int *)0x0;
    local_8 = 0;
    uStack_7 = 0;
    *(undefined4 **)((int)auStack_80 + iVar15 + iVar19 + 4) = local_18[0];
    *(undefined4 *)((int)auStack_80 + iVar15 + iVar19) = 0x520fd0;
    ExceptionList = &local_10;
    FUN_004bf300();
    if (0 < (int)puVar13) {
      local_1c = &stack0xffffff8c + (iVar19 - (int)piVar8);
      local_30 = puVar13;
      do {
        puVar13 = *(undefined4 **)((int)piVar8 + (int)local_1c);
        puVar10 = (undefined4 *)*piVar8;
        local_2c = piVar8;
        *(undefined4 *)(puVar16 + -4) = 0x290;
        local_28 = puVar10;
        local_24 = puVar13;
        *(undefined4 *)(puVar16 + -8) = 0x521008;
        iVar7 = FUN_00aae9af();
        local_8 = 1;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          *(undefined4 **)(puVar16 + -4) = puVar10;
          *(undefined4 **)(puVar16 + -8) = puVar13;
          *(int *)(puVar16 + -0xc) = iVar7;
          *(undefined4 *)(puVar16 + -0x10) = 0x52101e;
          iVar7 = FUN_004cde60();
        }
        local_8 = 0;
        iVar19 = *(int *)(param_1 + 0xe48);
        *(undefined4 *)(puVar16 + -4) = 0x10;
        local_20 = iVar7;
        *(undefined4 *)(puVar16 + -8) = 0x521038;
        piVar8 = (int *)FUN_00aae9af();
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar7;
          piVar8[1] = iVar19;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar15 = *(int *)(param_1 + 0xe4c);
        *(int **)(param_1 + 0xe48) = piVar8;
        *(int *)(param_1 + 0xe4c) = iVar15 + 1;
        if (iVar15 == 0) {
          *(int **)(param_1 + 0xe44) = piVar8;
        }
        else {
          *(int **)(iVar19 + 8) = piVar8;
        }
        if (&local_20 < local_68) {
          if (local_68 == (int *)0x0) {
            *(undefined4 *)(puVar16 + -4) = 0x5210a3;
            FUN_007b94a0();
          }
          else {
            *local_68 = *(int *)(((int)&local_20 >> 2) * 4);
          }
        }
        else if (local_68 == (int *)0x0) {
          *(undefined4 *)(puVar16 + -4) = 0x5210c6;
          FUN_007b94a0();
        }
        else {
          *local_68 = iVar7;
        }
        piVar12 = local_28;
        local_68 = local_68 + 1;
        for (piVar8 = *(int **)(param_1 + 0xe44); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          if ((undefined4 *)*piVar8 == local_24) {
            if (piVar8 != (int *)0x0) {
              if (*(char *)(param_1 + 0xe50) == '\0') {
                iVar7 = piVar8[1];
                iVar19 = piVar8[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar19;
                }
                if (iVar19 != 0) {
                  *(int *)(iVar19 + 4) = iVar7;
                }
                if (piVar8 == *(int **)(param_1 + 0xe44)) {
                  *(int *)(param_1 + 0xe44) = iVar19;
                }
                if (piVar8 == *(int **)(param_1 + 0xe48)) {
                  *(int *)(param_1 + 0xe48) = iVar7;
                }
                *(int **)(puVar16 + -4) = piVar8;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar16 + -8) = &UNK_00521138;
                FUN_00aae91b();
              }
              *(undefined1 *)(piVar8 + 3) = 1;
            }
            break;
          }
        }
        for (piVar8 = *(int **)(param_1 + 0xe44); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
          if ((undefined4 *)*piVar8 == local_28) {
            if (piVar8 != (int *)0x0) {
              if (*(char *)(param_1 + 0xe50) == '\0') {
                iVar7 = piVar8[1];
                iVar19 = piVar8[2];
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 8) = iVar19;
                }
                if (iVar19 != 0) {
                  *(int *)(iVar19 + 4) = iVar7;
                }
                if (piVar8 == *(int **)(param_1 + 0xe44)) {
                  *(int *)(param_1 + 0xe44) = iVar19;
                }
                if (piVar8 == *(int **)(param_1 + 0xe48)) {
                  *(int *)(param_1 + 0xe48) = iVar7;
                }
                *(int **)(puVar16 + -4) = piVar8;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar16 + -8) = &UNK_005211a6;
                FUN_00aae91b();
              }
              *(undefined1 *)(piVar8 + 3) = 1;
            }
            break;
          }
        }
        if (local_24 != (undefined4 *)0x0) {
          pcVar3 = *(code **)*local_24;
          *(undefined4 *)(puVar16 + -4) = 1;
          puVar17 = (undefined4 *)(puVar16 + -8);
          puVar16 = puVar16 + -8;
          *puVar17 = 0x5211bd;
          (*pcVar3)();
        }
        if (piVar12 != (undefined4 *)0x0) {
          pcVar3 = *(code **)*piVar12;
          *(undefined4 *)(puVar16 + -4) = 1;
          puVar18 = (undefined4 *)(puVar16 + -8);
          puVar16 = puVar16 + -8;
          *puVar18 = 0x5211cb;
          (*pcVar3)();
        }
        piVar8 = local_2c + 1;
        local_30 = (undefined4 *)((int)local_30 + -1);
      } while (local_30 != (undefined4 *)0x0);
      if (0 < (int)local_18[0]) {
        local_2c = piVar8;
        *(int *)(puVar16 + -4) = param_1;
        *(undefined4 *)(puVar16 + -8) = 0x5211f0;
        FUN_00520150();
        iVar7 = DAT_0125ce80;
        if (DAT_0125ce80 == 0) {
          *(undefined4 *)(puVar16 + -4) = 0x3c;
          *(undefined4 *)(puVar16 + -8) = 0x521200;
          iVar7 = FUN_00aae9af();
          local_8 = 2;
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            *(undefined4 *)(puVar16 + -4) = 0x521215;
            iVar7 = FUN_004dada0();
          }
          iVar19 = DAT_0125ce80;
          local_8 = 3;
          if ((iVar7 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
            *(int *)(puVar16 + -4) = DAT_0125ce80;
            *(undefined4 *)(puVar16 + -8) = 0x52123b;
            FUN_004dadf0();
            *(int *)(puVar16 + -4) = iVar19;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_00521241;
            FUN_00aae91b();
          }
        }
        DAT_0125ce80 = iVar7;
        iVar19 = DAT_0125ce80;
        iVar15 = 0;
        piVar8 = (int *)(DAT_0125ce80 + 0xc);
        local_58 = (int *)0x0;
        local_8 = 4;
        *(int *)(puVar16 + -4) = *(int *)(DAT_0125ce80 + 0x10) - *piVar8 >> 2;
        *(undefined4 *)(puVar16 + -8) = 0x52126e;
        FUN_004bf300();
        iVar7 = *piVar8;
        piVar12 = (int *)0x0;
        if (0 < (int)(*(int *)(iVar19 + 0x10) - iVar7 & 0xfffffffcU)) {
          do {
            piVar14 = (int *)(iVar7 + iVar15 * 4);
            if (*(char *)(*piVar14 + 0xbe) != '\0') {
              if (piVar14 < piVar12) {
                if (piVar12 == (int *)0x0) {
                  *(undefined4 *)(puVar16 + -4) = 0x5212ab;
                  FUN_00a513f0();
                  piVar12 = local_58;
                }
                if (piVar12 != (int *)0x0) {
                  iVar7 = *(int *)(((int)piVar14 >> 2) * 4);
LAB_005212d3:
                  *piVar12 = iVar7;
                }
              }
              else {
                if (piVar12 == (int *)0x0) {
                  *(undefined4 *)(puVar16 + -4) = 0x5212c7;
                  FUN_00a513f0();
                  piVar12 = local_58;
                }
                if (piVar12 != (int *)0x0) {
                  iVar7 = *piVar14;
                  goto LAB_005212d3;
                }
              }
              piVar12 = piVar12 + 1;
              local_58 = piVar12;
            }
            iVar7 = *piVar8;
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(iVar19 + 0x10) - iVar7 >> 2);
        }
        local_24 = (undefined4 *)((int)local_68 >> 2);
        if (0 < (int)local_24) {
          local_30 = (undefined4 *)((int)piVar12 >> 2);
          do {
            local_28 = local_6c;
            *(undefined4 *)(puVar16 + -4) = 0x521317;
            FUN_004cfd20();
            puVar13 = local_30;
            iVar7 = 0;
            if (0 < (int)local_30) {
              do {
                iVar19 = *local_6c;
                *(undefined4 *)(puVar16 + -4) = *(undefined4 *)(iVar7 * 4);
                *(int *)(puVar16 + -8) = iVar19;
                *(int *)(puVar16 + -0xc) = param_1;
                *(undefined4 *)(puVar16 + -0x10) = 0x521334;
                FUN_00521d80();
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)puVar13);
            }
            if (DAT_0131bb34 == 0) {
              *(undefined4 *)(puVar16 + -4) = 0x188;
              *(undefined4 *)(puVar16 + -8) = 0x52134c;
              iVar7 = FUN_00aae9af();
              local_8 = 5;
              if (iVar7 == 0) {
                iVar7 = 0;
              }
              else {
                *(undefined4 *)(puVar16 + -4) = 0x521361;
                iVar7 = FUN_0041a160();
              }
              iVar19 = DAT_0131bb34;
              _local_8 = CONCAT31(uStack_7,6);
              if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
                *(int *)(puVar16 + -4) = DAT_0131bb34;
                *(undefined4 *)(puVar16 + -8) = 0x521387;
                FUN_0096dd80();
                *(int *)(puVar16 + -4) = iVar19;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar16 + -8) = &UNK_0052138d;
                FUN_00aae91b();
              }
              local_8 = 4;
              DAT_0131bb34 = iVar7;
            }
            iVar7 = *local_6c;
            piVar8 = *(int **)(iVar7 + 0x48);
            piVar12 = (int *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
            while ((*(int **)(iVar7 + 0x48) <= piVar8 && (piVar8 < *(int **)(iVar7 + 0x4c)))) {
              iVar19 = *piVar8;
              piVar8 = piVar8 + 1;
              local_1c = *(undefined1 **)(*(int *)(DAT_012588e8 + 0xacc) + iVar19 * 4);
              if (0 < (int)piVar12) {
                local_20 = 0;
                local_2c = piVar12;
                do {
                  uVar4 = *(uint *)(local_20 + *(int *)(local_1c + 0x194));
                  local_6c = local_28;
                  while (uVar5 = uVar4, local_28 = local_6c, uVar5 != 0) {
                    iVar19 = *(int *)(uVar5 + 0x68);
                    uVar4 = *(uint *)(uVar5 + 0x27c);
                    if (((iVar19 != 0) && (*(char *)(iVar19 + 0x40) != '\0')) &&
                       (*(int *)(uVar5 + 100) != 0)) {
                      if (*(char *)(iVar19 + 0x50) == '\0') {
                        iVar19 = *(int *)(*(int *)(uVar5 + 100) + 0x58);
                        if (DAT_01258728 == (int *)0x0) {
                          *(undefined4 *)(puVar16 + -4) = 0x14;
                          *(undefined4 *)(puVar16 + -8) = 0x521462;
                          DAT_01258728 = (int *)FUN_00aae9af();
                          if (DAT_01258728 == (int *)0x0) {
                            DAT_01258728 = (int *)0x0;
                          }
                          else {
                            *DAT_01258728 = 0;
                            DAT_01258728[1] = 0;
                            DAT_01258728[2] = 0;
                            *(undefined1 *)(DAT_01258728 + 4) = 0;
                          }
                        }
                        iVar19 = iVar19 * 0xb0;
                        local_18[0] = *(undefined4 **)(iVar19 + 0x60 + *DAT_01258728);
                        puVar13 = (undefined4 *)local_18[0][1];
                        iVar19 = iVar19 + 0x58 + *DAT_01258728;
                        cVar1 = *(char *)((int)puVar13 + 0x15);
                        while (cVar1 == '\0') {
                          if ((uint)puVar13[3] < uVar5) {
                            puVar10 = (undefined4 *)puVar13[2];
                            puVar13 = local_18[0];
                          }
                          else {
                            puVar10 = (undefined4 *)*puVar13;
                          }
                          local_18[0] = puVar13;
                          puVar13 = puVar10;
                          cVar1 = *(char *)((int)puVar10 + 0x15);
                        }
                        puVar13 = *(undefined4 **)(iVar19 + 8);
                        if ((local_18[0] == puVar13) || (uVar5 < (uint)local_18[0][3])) {
                          local_34 = puVar13;
                          ppuVar11 = &local_34;
                        }
                        else {
                          ppuVar11 = local_18;
                        }
                        if (*ppuVar11 == *(undefined4 **)(iVar19 + 8)) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = (*ppuVar11)[4];
                        }
                      }
                      else {
                        *(uint *)(puVar16 + -4) = uVar5;
                        *(undefined4 *)(puVar16 + -8) = 0x52144a;
                        uVar9 = FUN_004d3560();
                      }
                      *(undefined4 *)(uVar5 + 0x60) = uVar9;
                      local_6c = local_28;
                    }
                  }
                  local_20 = local_20 + 0x10;
                  local_2c = (int *)((int)local_2c + -1);
                } while (local_2c != (int *)0x0);
              }
            }
            *(int *)(puVar16 + -4) = param_1;
            *(undefined4 *)(puVar16 + -8) = 0x52150e;
            FUN_00520150();
            local_6c = local_6c + 1;
            local_24 = (undefined4 *)((int)local_24 + -1);
          } while (local_24 != (undefined4 *)0x0);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


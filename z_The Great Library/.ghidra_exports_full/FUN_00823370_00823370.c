// FUN_00823370 @ 00823370 body=[[00823370, 008233e6] [008233f0, 0082381c] [00823820, 00823848] [00823855, 0082385c] [00823860, 00823868] [00823872, 00823884]]


void FUN_00823370(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  int *local_48;
  int *local_44;
  int local_40;
  int *local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4aec0;
  local_10 = ExceptionList;
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar11 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                            *(int *)(*(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4) + 0xbe4) * 4) +
                   0x5c);
  iVar14 = 0;
  local_1c = 0;
  if (0 < (*(int *)(iVar11 + 0xcc) - *(int *)(iVar11 + 200)) / 0x24) {
    iVar13 = 0;
    do {
      if (*(int *)(iVar13 + *(int *)(iVar11 + 200)) == 1) {
        local_1c = *(int *)(*(int *)(iVar11 + 200) + 8 + iVar14 * 0x24);
        break;
      }
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + 0x24;
    } while (iVar14 < (*(int *)(iVar11 + 0xcc) - *(int *)(iVar11 + 200)) / 0x24);
  }
  bVar5 = false;
  if (0 < local_1c) {
    iVar11 = *(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4);
    uVar7 = *(uint *)(iVar11 + 0xda8);
    local_20 = (int *)0x0;
    for (; (*(uint *)(iVar11 + 0xda8) <= uVar7 && (uVar7 < *(uint *)(iVar11 + 0xdac)));
        uVar7 = uVar7 + 8) {
      local_20 = (int *)((float)((float10)*(longlong *)
                                           (*(int *)(iVar1 + *(int *)(uVar7 + 4) * 4) + 0x1a0) *
                                (float10)3.0517578125e-05) + (float)local_20);
    }
    if ((float)((float10)*(longlong *)(*(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4) + 0x1a0) *
               (float10)3.0517578125e-05) * 0.75 < (float)local_20) {
      bVar5 = true;
    }
  }
  local_58 = (undefined4 *)0x0;
  local_54 = (undefined4 *)0x0;
  local_50 = 0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = 0;
  local_8 = 1;
  iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4);
  piVar12 = *(int **)(iVar1 + 0x9d8);
  ExceptionList = &local_10;
LAB_00823523:
  do {
    do {
      if ((piVar12 < *(int **)(iVar1 + 0x9d8)) || (*(int **)(iVar1 + 0x9dc) <= piVar12)) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        uVar7 = *(uint *)(iVar1 + 0xda8);
        do {
          do {
            if ((uVar7 < *(uint *)(iVar1 + 0xda8)) || (*(uint *)(iVar1 + 0xdac) <= uVar7)) {
              if (local_58 != (undefined4 *)0x0) {
                puVar9 = local_58;
                do {
                  uVar4 = *puVar9;
                  puVar9 = (undefined4 *)puVar9[2];
                  FUN_00823890(param_1,uVar4,local_50 == 1,100);
                } while (puVar9 != (undefined4 *)0x0);
              }
              if (local_48 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_48);
              }
              if (local_58 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_58);
              }
              ExceptionList = local_10;
              return;
            }
            local_20 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar7 + 4) * 4) +
                                0x7b4);
            uVar7 = uVar7 + 8;
          } while (local_20 == (int *)0x0);
          do {
            piVar12 = (int *)*local_20;
            local_20 = (int *)local_20[2];
            cVar6 = (**(code **)(*piVar12 + 0x3c))();
            puVar9 = local_58;
            puVar10 = local_54;
            if ((cVar6 != '\0') &&
               (((!bVar5 || (*(int *)(piVar12[0x37] + 0x58) == local_1c)) &&
                (*(char *)(*(int *)(piVar12[0x37] + 0x5c) + 0x2a) == '\0')))) {
              iVar11 = *(int *)(piVar12[0x37] + 0x58);
              for (piVar8 = local_48; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
                if (*piVar8 == iVar11) goto LAB_008237f5;
              }
              piVar8 = (int *)FUN_00aae9af(0x10);
              if (piVar8 == (int *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                *piVar8 = iVar11;
                piVar8[1] = (int)local_44;
                piVar8[2] = 0;
                *(undefined1 *)(piVar8 + 3) = 0;
              }
              iVar11 = local_40 + 1;
              piVar2 = piVar8;
              if (local_40 != 0) {
                local_44[2] = (int)piVar8;
                piVar2 = local_48;
              }
              local_48 = piVar2;
              uVar4 = *(undefined4 *)(piVar12[0x37] + 0x58);
              puVar10 = (undefined4 *)FUN_00aae9af(0x10);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                *puVar10 = uVar4;
                puVar10[1] = local_54;
                puVar10[2] = 0;
                *(undefined1 *)(puVar10 + 3) = 0;
              }
              iVar14 = local_50 + 1;
              bVar15 = local_50 != 0;
              puVar9 = puVar10;
              local_50 = iVar14;
              local_44 = piVar8;
              local_40 = iVar11;
              if (bVar15) {
                local_54[2] = puVar10;
                puVar9 = local_58;
              }
            }
LAB_008237f5:
            local_54 = puVar10;
            local_58 = puVar9;
          } while (local_20 != (int *)0x0);
        } while( true );
      }
      iVar11 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar12 * 4);
      piVar12 = piVar12 + 1;
    } while (((*(int *)(iVar11 + 300) == 0) || (iVar11 = *(int *)(iVar11 + 0x158), iVar11 == 0)) ||
            ((iVar11 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar11 + 0x18) * 4), bVar5
             && (*(int *)(iVar11 + 0x58) != local_1c))));
    iVar14 = *(int *)(iVar11 + 0x58);
    for (piVar8 = local_48; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
      if (*piVar8 == iVar14) goto LAB_00823523;
    }
    piVar8 = (int *)FUN_00aae9af(0x10);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      *piVar8 = iVar14;
      piVar8[1] = (int)local_44;
      piVar8[2] = 0;
      *(undefined1 *)(piVar8 + 3) = 0;
    }
    iVar14 = local_40 + 1;
    piVar2 = piVar8;
    if (local_40 != 0) {
      local_44[2] = (int)piVar8;
      piVar2 = local_48;
    }
    local_48 = piVar2;
    piVar2 = *(int **)(iVar11 + 0xec);
    puVar9 = local_54;
    puVar10 = local_58;
    while (local_58 = puVar10, local_54 = puVar9, local_40 = iVar14, local_44 = piVar8,
          piVar2 != (int *)0x0) {
      iVar13 = *piVar2;
      piVar2 = (int *)piVar2[2];
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
      puVar9 = local_54;
      puVar10 = local_58;
      if ((*(int *)(iVar13 + 0xc4) != *(int *)(iVar3 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + *(int *)(iVar13 + 0xc4) * 4) + 0x34) != 0 ||
           ((((*(char *)(iVar13 + 0xc0) == 'R' && (*(char *)(iVar13 + 0xc1) == 'E')) &&
             (*(char *)(iVar13 + 0xc2) == 'B')) ||
            (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
             (*(char *)(iVar3 + 0x1e) == 'B')))))) &&
          ((*(int *)(iVar13 + 0x74) == 0 && (*(char *)(iVar13 + 0x104) == '\0')))))) {
        uVar4 = *(undefined4 *)(iVar11 + 0x58);
        puVar9 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar4;
          puVar9[1] = local_54;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar13 = local_50 + 1;
        bVar15 = local_50 != 0;
        local_50 = iVar13;
        puVar10 = puVar9;
        if (bVar15) {
          local_54[2] = puVar9;
          puVar10 = local_58;
        }
      }
    }
  } while( true );
}


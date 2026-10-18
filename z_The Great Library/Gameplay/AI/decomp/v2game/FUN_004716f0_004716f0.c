// FUN_004716f0 @ 004716f0 body=[[004716f0, 00471b67] [00471b6b, 00471bfc] [00471c00, 00471c48] [00471c4c, 00471c62]]


/* WARNING: Removing unreachable block (ram,0x00471c3f) */

void FUN_004716f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int local_cc;
  int iStack_c8;
  int *piStack_c4;
  int **local_c0;
  int **local_bc;
  int *local_b0;
  int local_ac;
  int iStack_a8;
  int local_a4;
  undefined4 *puStack_a0;
  int *piStack_9c;
  undefined4 *puStack_98;
  undefined1 uStack_94;
  undefined4 *puStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  uint local_78;
  undefined4 local_74;
  int iStack_6c;
  undefined **appuStack_68 [2];
  uint uStack_60;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_00b9fe59;
  local_14 = ExceptionList;
  local_c0 = (int **)0x0;
  local_bc = (int **)0x0;
  local_c = 0;
  local_cc = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  ExceptionList = &local_14;
  if (0 < (int)(*(int *)(param_1 + 0x14) - iVar5 & 0xfffffff8U)) {
    do {
      iVar2 = local_cc * 8;
      local_78 = *(uint *)(iVar2 + iVar5);
      local_74 = *(undefined4 *)(iVar2 + 4 + iVar5);
      iVar5 = DAT_01258a94;
      if (local_78 < 0x1269) {
        iVar5 = DAT_01258a98;
      }
      if (((iVar5 == 0) || (iVar5 = FUN_009c1d40(), iVar5 == 0)) ||
         (piVar1 = (int *)(iVar5 + -8), local_b0 = piVar1, piVar1 == (int *)0x0)) {
        puVar9 = *(undefined4 **)(param_1 + 0x14);
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar2);
        puVar3 = puVar6;
        while (puVar3 = puVar3 + 2, puVar3 != puVar9) {
          *puVar6 = *puVar3;
          puVar6[1] = puVar3[1];
          puVar6 = puVar6 + 2;
        }
LAB_00471c14:
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -8;
        local_cc = local_cc + -1;
      }
      else {
        iVar2 = *(int *)(iVar5 + 0xd4);
        if (*(int *)(iVar2 + 0x58) == *(int *)(param_1 + 8)) {
          if (*(char *)(param_1 + 0xc) != '\0') {
            FUN_004b3c40(iVar2,param_2);
            FUN_00401000(0x3f000000);
            local_ac = FUN_00b31c00();
            for (piVar7 = *(int **)(iVar5 + 0x30); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2])
            {
              local_ac = local_ac + *(int *)(*piVar7 + 0x3c);
            }
            cVar4 = (**(code **)(*piVar1 + 0x3c))();
            if (cVar4 == '\0') {
              iStack_6c = local_a4;
              piVar7 = &iStack_6c;
            }
            else {
              iStack_80 = 0;
              piVar7 = &iStack_80;
            }
            puVar9 = *(undefined4 **)(iVar2 + 0xec);
            iStack_c8 = *piVar7;
            piStack_c4 = (int *)0x0;
            if (puVar9 != (undefined4 *)0x0) {
              do {
                piVar7 = (int *)*puVar9;
                puVar9 = (undefined4 *)puVar9[2];
                puStack_7c = puVar9;
                cVar4 = (**(code **)(*piVar1 + 0x38))();
                if (((((cVar4 != '\0') || (cVar4 = (**(code **)(*piVar1 + 0x40))(), cVar4 != '\0'))
                     && ((cVar4 = (**(code **)(*piVar7 + 0x38))(), cVar4 != '\0' ||
                         (cVar4 = (**(code **)(*piVar7 + 0x40))(), cVar4 != '\0')))) ||
                    ((cVar4 = (**(code **)(*piVar1 + 0x3c))(), cVar4 != '\0' &&
                     (cVar4 = (**(code **)(*piVar7 + 0x3c))(), cVar4 != '\0')))) &&
                   ((piVar7 != piVar1 &&
                    ((0 < piVar7[0x10] && (piVar7[0x33] == *(int *)(param_2 + 4))))))) {
                  ppiVar8 = local_c0;
                  if (local_bc != (int **)0x0) {
                    do {
                      if (*ppiVar8 == piVar7) break;
                      ppiVar8 = ppiVar8 + 1;
                    } while (ppiVar8 != local_bc);
                  }
                  if (local_bc <= ppiVar8) {
                    puStack_90 = (undefined4 *)0x0;
                    piStack_8c = (int *)0x0;
                    uStack_88 = 0;
                    uStack_84 = 0;
                    local_c = CONCAT31(local_c._1_3_,1);
                    puVar9 = (undefined4 *)FUN_00aae9af(0x10);
                    if (puVar9 == (undefined4 *)0x0) {
                      puVar9 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar9 = piVar7;
                      puVar9[1] = 0;
                      puVar9[2] = 0;
                      *(undefined1 *)(puVar9 + 3) = 0;
                    }
                    uStack_88 = 1;
                    puStack_90 = puVar9;
                    piStack_8c = puVar9;
                    piStack_8c = (int *)FUN_00aae9af(0x10);
                    if (piStack_8c == (int *)0x0) {
                      piStack_8c = (int *)0x0;
                    }
                    else {
                      *piStack_8c = (int)piVar1;
                      piStack_8c[1] = (int)puVar9;
                      piStack_8c[2] = 0;
                      *(undefined1 *)(piStack_8c + 3) = 0;
                    }
                    puVar9[2] = piStack_8c;
                    uStack_88 = 2;
                    cVar4 = FUN_00513d50();
                    if (cVar4 != '\0') {
                      FUN_005cd690(piVar7);
                      cVar4 = (**(code **)(*piVar1 + 0x3c))();
                      if ((cVar4 == '\0') ||
                         (cVar4 = (**(code **)(*piVar7 + 0x3c))(), cVar4 == '\0')) {
                        if ((iStack_a8 + local_ac <= local_a4) &&
                           (iVar5 = local_a4 - iStack_a8, local_a4 - iStack_a8 <= iStack_c8))
                        goto LAB_00471a02;
                      }
                      else {
                        iVar5 = iStack_a8;
                        if (iStack_c8 < iStack_a8) {
LAB_00471a02:
                          iStack_c8 = iVar5;
                          piStack_c4 = piVar7;
                        }
                      }
                    }
                    local_c = local_c & 0xffffff00;
                    FUN_009a63f0();
                    puVar9 = puStack_7c;
                  }
                }
              } while (puVar9 != (undefined4 *)0x0);
              if (piStack_c4 != (int *)0x0) {
                uStack_94 = 0;
                local_c._0_1_ = 2;
                puStack_a0 = puVar9;
                piStack_9c = puVar9;
                puStack_98 = puVar9;
                puVar9 = (undefined4 *)FUN_00aae9af(0x10);
                if (puVar9 == (undefined4 *)0x0) {
                  puVar9 = (undefined4 *)0x0;
                }
                else {
                  *puVar9 = piStack_c4;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  *(undefined1 *)(puVar9 + 3) = 0;
                }
                puStack_98 = (undefined4 *)0x1;
                puStack_a0 = puVar9;
                piStack_9c = puVar9;
                piStack_9c = (int *)FUN_00aae9af(0x10);
                if (piStack_9c == (int *)0x0) {
                  piStack_9c = (int *)0x0;
                }
                else {
                  *piStack_9c = (int)piVar1;
                  piStack_9c[1] = (int)puVar9;
                  piStack_9c[2] = 0;
                  *(undefined1 *)(piStack_9c + 3) = 0;
                }
                puVar9[2] = piStack_9c;
                puStack_98 = (undefined4 *)0x2;
                FUN_005e13b0(appuStack_68,&puStack_a0);
                local_c = CONCAT31(local_c._1_3_,3);
                cVar4 = FUN_005e1be0();
                if (cVar4 != '\0') {
                  FUN_005e1590();
                  if (&local_b0 < local_bc) {
                    if (local_bc == (int **)0x0) {
                      FUN_00a513f0();
                    }
                    else {
                      *local_bc = *(int **)(((int)&local_b0 >> 2) * 4);
                    }
                  }
                  else if (local_bc == (int **)0x0) {
                    FUN_00a513f0();
                  }
                  else {
                    *local_bc = piVar1;
                  }
                  local_bc = local_bc + 1;
                }
                FUN_00471cc0(auStack_2c);
                appuStack_68[0] = CCommand::vftable;
                if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(uStack_60);
                }
                uStack_4c = 0xf;
                uStack_50 = 0;
                uStack_60 = uStack_60 & 0xffffff00;
                local_c = local_c & 0xffffff00;
                FUN_009a63f0();
              }
            }
          }
          puVar9 = *(undefined4 **)(param_1 + 0x14);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + local_cc * 8);
          puVar3 = puVar6;
          while (puVar3 = puVar3 + 2, puVar3 != puVar9) {
            *puVar6 = *puVar3;
            puVar6[1] = puVar3[1];
            puVar6 = puVar6 + 2;
          }
          goto LAB_00471c14;
        }
        if ((0 < *(int *)(iVar5 + 0xe4)) && (**(int **)(iVar5 + 0xe0) != *(int *)(param_1 + 8))) {
          puVar9 = *(undefined4 **)(param_1 + 0x14);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x10) + local_cc * 8);
          puVar3 = puVar6;
          while (puVar3 = puVar3 + 2, puVar3 != puVar9) {
            *puVar6 = *puVar3;
            puVar6[1] = puVar3[1];
            puVar6 = puVar6 + 2;
          }
          goto LAB_00471c14;
        }
      }
      iVar5 = *(int *)(param_1 + 0x10);
      local_cc = local_cc + 1;
    } while (local_cc < *(int *)(param_1 + 0x14) - iVar5 >> 3);
  }
  ExceptionList = local_14;
  return;
}


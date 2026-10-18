// FUN_0089a2e0 @ 0089a2e0 body=[[0089a2e0, 0089a3ea] [0089a3f0, 0089a5e7] [0089a5eb, 0089a64a] [0089a650, 0089a79b] [0089a7a0, 0089a857] [0089a860, 0089a87a] [0089a880, 0089a9a3]]


void FUN_0089a2e0(int param_1,int param_2)

{
  void *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int local_cc;
  int local_c8 [4];
  int local_b8;
  int local_b4;
  int *local_b0;
  undefined1 local_a8 [20];
  int local_94;
  undefined1 local_60 [20];
  int local_4c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42565;
  local_14 = ExceptionList;
  _Dst = *(void **)(param_1 + 0x3c);
  puVar10 = (uint *)(param_1 + 0x3c);
  ExceptionList = &local_14;
  if (_Dst != *(void **)(param_1 + 0x40)) {
    ExceptionList = &local_14;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x40),0);
    *(void **)(param_1 + 0x40) = _Dst;
  }
  FUN_008a88d0();
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      if (*(int *)(param_2 + 0xc) != 0) {
        local_c8[3] = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
        piVar9 = *(int **)(local_c8[3] + 0x9d8);
        while ((*(int **)(local_c8[3] + 0x9d8) <= piVar9 &&
               (piVar9 < *(int **)(local_c8[3] + 0x9dc)))) {
          local_b4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
          piVar9 = piVar9 + 1;
          local_b0 = piVar9;
          FUN_008a88d0();
          if (DAT_0131bb34 == 0) {
            local_b8 = FUN_00aae9af(0x188);
            local_c = 3;
            if (local_b8 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_0041a160();
              piVar9 = local_b0;
            }
            local_c = 0xffffffff;
            FUN_00423700(uVar5);
          }
          local_c8[1] = 0;
          iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
          local_b8 = iVar7;
          if (0 < iVar7) {
            local_c8[0] = 0;
            do {
              iVar3 = *(int *)(local_c8[0] + *(int *)(local_b4 + 0x194));
              piVar9 = local_b0;
              while (iVar2 = iVar3, local_b0 = piVar9, iVar2 != 0) {
                local_c8[2] = *(int *)(iVar2 + 0x27c);
                local_4c = iVar2;
                cVar4 = (**(code **)(*(int *)(param_1 + 0x20) + 0x18))(local_60);
                iVar3 = local_c8[2];
                iVar7 = local_b8;
                piVar9 = local_b0;
                if (cVar4 == '\x01') {
                  piVar9 = *(int **)(param_1 + 0x40);
                  local_cc = iVar2;
                  if ((&local_cc < piVar9) && (piVar1 = (int *)*puVar10, piVar1 <= &local_cc)) {
                    if (piVar9 == *(int **)(param_1 + 0x44)) {
                      uVar6 = (int)piVar9 - (int)piVar1 >> 2;
                      if (0x3ffffffe < uVar6) goto LAB_0089a518;
                      uVar6 = uVar6 + 1;
                      uVar8 = (int)*(int **)(param_1 + 0x44) - (int)piVar1 >> 2;
                      if (uVar8 < uVar6) {
                        if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = uVar8 + (uVar8 >> 1);
                        }
                        if (uVar8 < uVar6) {
                          uVar8 = uVar6;
                        }
                        FUN_004bf300(uVar8);
                      }
                    }
                    if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
                      **(undefined4 **)(param_1 + 0x40) =
                           *(undefined4 *)(*puVar10 + ((int)&local_cc - (int)piVar1 >> 2) * 4);
                    }
                  }
                  else {
                    if (piVar9 == *(int **)(param_1 + 0x44)) {
                      uVar6 = (int)((int)piVar9 - *puVar10) >> 2;
                      if (0x3ffffffe < uVar6) goto LAB_0089a518;
                      uVar6 = uVar6 + 1;
                      uVar8 = (int)((int)*(int **)(param_1 + 0x44) - *puVar10) >> 2;
                      if (uVar8 < uVar6) {
                        if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = uVar8 + (uVar8 >> 1);
                        }
                        if (uVar8 < uVar6) {
                          uVar8 = uVar6;
                        }
                        FUN_004bf300(uVar8);
                      }
                    }
                    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                      **(int **)(param_1 + 0x40) = iVar2;
                    }
                  }
                  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
                  iVar3 = local_c8[2];
                  iVar7 = local_b8;
                  piVar9 = local_b0;
                }
              }
              local_c8[0] = local_c8[0] + 0x10;
              local_c8[1] = local_c8[1] + 1;
            } while (local_c8[1] < iVar7);
          }
        }
      }
    }
    else {
      local_b8 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4) +
                         0x188);
      piVar9 = *(int **)(local_b8 + 0x48);
      while ((*(int **)(local_b8 + 0x48) <= piVar9 && (piVar9 < *(int **)(local_b8 + 0x4c)))) {
        local_c8[3] = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
        local_b0 = piVar9 + 1;
        FUN_008a88d0();
        piVar9 = piVar9 + 1;
        if (DAT_0131bb34 == 0) {
          local_b4 = FUN_00aae9af(0x188);
          local_c = 1;
          if (local_b4 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_0041a160();
          }
          iVar3 = DAT_0131bb34;
          local_c = 2;
          local_b4 = 0;
          if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar3);
          }
          local_c = 0xffffffff;
          piVar9 = local_b0;
          DAT_0131bb34 = iVar7;
        }
        local_c8[1] = 0;
        iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        local_b4 = iVar7;
        if (0 < iVar7) {
          local_c8[0] = 0;
          do {
            iVar3 = *(int *)(local_c8[0] + *(int *)(local_c8[3] + 0x194));
            piVar9 = local_b0;
            while (iVar2 = iVar3, local_b0 = piVar9, iVar2 != 0) {
              local_c8[2] = *(int *)(iVar2 + 0x27c);
              local_94 = iVar2;
              cVar4 = (**(code **)(*(int *)(param_1 + 0x20) + 0x18))(local_a8);
              iVar3 = local_c8[2];
              iVar7 = local_b4;
              piVar9 = local_b0;
              if (cVar4 == '\x01') {
                piVar9 = *(int **)(param_1 + 0x40);
                local_cc = iVar2;
                if ((&local_cc < piVar9) && (piVar1 = (int *)*puVar10, piVar1 <= &local_cc)) {
                  if (piVar9 == *(int **)(param_1 + 0x44)) {
                    uVar6 = (int)piVar9 - (int)piVar1 >> 2;
                    if (0x3ffffffe < uVar6) goto LAB_0089a518;
                    uVar6 = uVar6 + 1;
                    uVar8 = (int)*(int **)(param_1 + 0x44) - (int)piVar1 >> 2;
                    if (uVar8 < uVar6) {
                      if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = uVar8 + (uVar8 >> 1);
                      }
                      if (uVar8 < uVar6) {
                        uVar8 = uVar6;
                      }
                      FUN_004bf300(uVar8);
                    }
                  }
                  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
                    **(undefined4 **)(param_1 + 0x40) =
                         *(undefined4 *)(*puVar10 + ((int)&local_cc - (int)piVar1 >> 2) * 4);
                  }
                }
                else {
                  if (piVar9 == *(int **)(param_1 + 0x44)) {
                    uVar6 = (int)((int)piVar9 - *puVar10) >> 2;
                    if (0x3ffffffe < uVar6) goto LAB_0089a518;
                    uVar6 = uVar6 + 1;
                    uVar8 = (int)((int)*(int **)(param_1 + 0x44) - *puVar10) >> 2;
                    if (uVar8 < uVar6) {
                      if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = uVar8 + (uVar8 >> 1);
                      }
                      if (uVar8 < uVar6) {
                        uVar8 = uVar6;
                      }
                      FUN_004bf300(uVar8);
                    }
                  }
                  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    **(int **)(param_1 + 0x40) = iVar2;
                  }
                }
                *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
                iVar3 = local_c8[2];
                iVar7 = local_b4;
                piVar9 = local_b0;
              }
            }
            local_c8[0] = local_c8[0] + 0x10;
            local_c8[1] = local_c8[1] + 1;
          } while (local_c8[1] < iVar7);
        }
      }
    }
  }
  else {
    local_c8[3] = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    FUN_008a88d0();
    if (DAT_0131bb34 == 0) {
      local_b4 = FUN_00aae9af(0x188);
      local_c = 0;
      if (local_b4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0041a160();
      }
      local_c = 0xffffffff;
      FUN_00423700(uVar5);
    }
    local_c8[2] = 0;
    iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    if (0 < iVar7) {
      local_cc = 0;
      local_b8 = iVar7;
      do {
        local_c8[1] = *(int *)(local_cc + *(int *)(local_c8[3] + 0x194));
        while (iVar3 = local_c8[1], iVar3 != 0) {
          local_c8[1] = *(int *)(iVar3 + 0x27c);
          local_94 = iVar3;
          cVar4 = (**(code **)(*(int *)(param_1 + 0x20) + 0x18))(local_a8);
          iVar7 = local_b8;
          if (cVar4 == '\x01') {
            piVar9 = *(int **)(param_1 + 0x40);
            local_c8[0] = iVar3;
            if ((local_c8 < piVar9) && (piVar1 = (int *)*puVar10, piVar1 <= local_c8)) {
              if (piVar9 == *(int **)(param_1 + 0x44)) {
                uVar6 = (int)piVar9 - (int)piVar1 >> 2;
                if (0x3ffffffe < uVar6) goto LAB_0089a518;
                uVar6 = uVar6 + 1;
                uVar8 = (int)*(int **)(param_1 + 0x44) - (int)piVar1 >> 2;
                if (uVar8 < uVar6) {
                  if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = uVar8 + (uVar8 >> 1);
                  }
                  if (uVar8 < uVar6) {
                    uVar8 = uVar6;
                  }
                  FUN_004bf300(uVar8);
                }
              }
              if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
                **(undefined4 **)(param_1 + 0x40) =
                     *(undefined4 *)(*puVar10 + ((int)local_c8 - (int)piVar1 >> 2) * 4);
              }
            }
            else {
              if (piVar9 == *(int **)(param_1 + 0x44)) {
                uVar6 = (int)((int)piVar9 - *puVar10) >> 2;
                if (0x3ffffffe < uVar6) {
LAB_0089a518:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar6 = uVar6 + 1;
                uVar8 = (int)((int)*(int **)(param_1 + 0x44) - *puVar10) >> 2;
                if (uVar8 < uVar6) {
                  if (0x3fffffff - (uVar8 >> 1) < uVar8) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = uVar8 + (uVar8 >> 1);
                  }
                  if (uVar8 < uVar6) {
                    uVar8 = uVar6;
                  }
                  FUN_004bf300(uVar8);
                }
              }
              if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                **(int **)(param_1 + 0x40) = iVar3;
              }
            }
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
            iVar7 = local_b8;
          }
        }
        local_cc = local_cc + 0x10;
        local_c8[2] = local_c8[2] + 1;
      } while (local_c8[2] < iVar7);
    }
  }
  ExceptionList = local_14;
  return;
}


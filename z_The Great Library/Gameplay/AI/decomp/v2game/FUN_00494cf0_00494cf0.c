// FUN_00494cf0 @ 00494cf0 body=[[00494cf0, 00494e88] [00494e90, 004955a5]]


void FUN_00494cf0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void *_Dst;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_30 [11];
  
  local_30[2] = *(int *)(*(int *)(param_1 + 8) + 0x2abc);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x2ac0);
  local_30[8] = 0;
  if (0 < iVar2) {
    do {
      local_30[7] = 0;
      iVar10 = local_30[8];
      if (0 < local_30[2]) {
        do {
          local_30[1] = iVar10;
          iVar10 = *(int *)(*(int *)(param_1 + 8) + 0x2134);
          local_30[0] = local_30[7];
          if (*(char *)(*(int *)(iVar10 + 0xc) * local_30[7] + *(int *)(iVar10 + 0x18) * local_30[8]
                       + *(int *)(iVar10 + 0x20)) == '\0') {
            piVar6 = *(int **)(param_1 + 0x14);
            puVar1 = (uint *)(param_1 + 0x10);
            if ((local_30 < piVar6) && (piVar3 = (int *)*puVar1, piVar3 <= local_30)) {
              if (piVar6 == *(int **)(param_1 + 0x18)) {
                uVar5 = (int)piVar6 - (int)piVar3 >> 3;
                if (0x1ffffffe < uVar5) {
LAB_00494eb1:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar5 = uVar5 + 1;
                uVar7 = (int)*(int **)(param_1 + 0x18) - (int)piVar3 >> 3;
                if (uVar7 < uVar5) {
                  if (0x1fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar5) {
                    uVar7 = uVar5;
                  }
                  FUN_004237e0(uVar7);
                }
              }
              piVar6 = *(int **)(param_1 + 0x14);
              piVar3 = (int *)(*puVar1 + ((int)local_30 - (int)piVar3 >> 3) * 8);
              if (piVar6 != (int *)0x0) {
                *piVar6 = *piVar3;
                iVar10 = piVar3[1];
LAB_00494e24:
                piVar6[1] = iVar10;
              }
            }
            else {
              if (piVar6 == *(int **)(param_1 + 0x18)) {
                uVar5 = (int)((int)piVar6 - *puVar1) >> 3;
                if (0x1ffffffe < uVar5) goto LAB_00494eb1;
                uVar5 = uVar5 + 1;
                uVar7 = (int)((int)*(int **)(param_1 + 0x18) - *puVar1) >> 3;
                if (uVar7 < uVar5) {
                  if (0x1fffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar5) {
                    uVar7 = uVar5;
                  }
                  FUN_004237e0(uVar7);
                }
              }
              piVar6 = *(int **)(param_1 + 0x14);
              if (piVar6 != (int *)0x0) {
                *piVar6 = local_30[7];
                iVar10 = local_30[8];
                goto LAB_00494e24;
              }
            }
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 8;
          }
          local_30[7] = local_30[7] + 1;
          iVar10 = local_30[1];
        } while (local_30[7] < local_30[2]);
      }
      local_30[8] = local_30[8] + 1;
    } while (local_30[8] < iVar2);
  }
  _Dst = (void *)FUN_00aad56b(*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20));
  *(void **)(param_1 + 0xc) = _Dst;
  _memset(_Dst,0,*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20));
  iVar2 = iVar2 + -1;
  iVar10 = 1;
  if (1 < iVar2) {
    do {
      local_30[7] = 1;
      if (1 < local_30[2] + -1) {
        do {
          if (local_30[7] < 0) {
            local_30[8] = 0;
          }
          else if (iVar10 < 0) {
            local_30[8] = 0;
          }
          else {
            iVar11 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
            if (local_30[7] < *(int *)(iVar11 + 4)) {
              if (iVar10 < *(int *)(iVar11 + 8)) {
                local_30[8] = (int)*(ushort *)
                                    (*(int *)(iVar11 + 0xc) * local_30[7] +
                                     *(int *)(iVar11 + 0x18) * iVar10 + *(int *)(iVar11 + 0x20));
              }
              else {
                local_30[8] = 0;
              }
            }
            else {
              local_30[8] = 0;
            }
          }
          iVar11 = local_30[7] + 1;
          iVar8 = local_30[7] + -1;
          if (iVar8 < 0) {
            local_30[3] = 0;
          }
          else if (iVar10 < 0) {
            local_30[3] = 0;
          }
          else {
            iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
            if (iVar8 < *(int *)(iVar12 + 4)) {
              if (iVar10 < *(int *)(iVar12 + 8)) {
                local_30[3] = (int)*(ushort *)
                                    (*(int *)(iVar12 + 0x18) * iVar10 +
                                     *(int *)(iVar12 + 0xc) * iVar8 + *(int *)(iVar12 + 0x20));
              }
              else {
                local_30[3] = 0;
              }
            }
            else {
              local_30[3] = 0;
            }
          }
          if (iVar8 < 0) {
            local_30[4] = 0;
          }
          else {
            iVar12 = iVar10 + -1;
            if (iVar12 < 0) {
              local_30[4] = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar8 < *(int *)(iVar4 + 4)) {
                if (iVar12 < *(int *)(iVar4 + 8)) {
                  local_30[4] = (int)*(ushort *)
                                      (*(int *)(iVar4 + 0x18) * iVar12 +
                                       *(int *)(iVar4 + 0xc) * iVar8 + *(int *)(iVar4 + 0x20));
                }
                else {
                  local_30[4] = 0;
                }
              }
              else {
                local_30[4] = 0;
              }
            }
          }
          if (local_30[7] < 0) {
            uVar5 = 0;
          }
          else {
            iVar8 = iVar10 + -1;
            if (iVar8 < 0) {
              uVar5 = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (local_30[7] < *(int *)(iVar12 + 4)) {
                if (iVar8 < *(int *)(iVar12 + 8)) {
                  uVar5 = (uint)*(ushort *)
                                 (*(int *)(iVar12 + 0x18) * iVar8 +
                                  *(int *)(iVar12 + 0xc) * local_30[7] + *(int *)(iVar12 + 0x20));
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                uVar5 = 0;
              }
            }
          }
          if (iVar11 < 0) {
            local_30[5] = 0;
          }
          else {
            iVar8 = iVar10 + -1;
            if (iVar8 < 0) {
              local_30[5] = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar11 < *(int *)(iVar12 + 4)) {
                if (iVar8 < *(int *)(iVar12 + 8)) {
                  local_30[5] = (int)*(ushort *)
                                      (*(int *)(iVar12 + 0xc) * iVar11 +
                                       *(int *)(iVar12 + 0x18) * iVar8 + *(int *)(iVar12 + 0x20));
                }
                else {
                  local_30[5] = 0;
                }
              }
              else {
                local_30[5] = 0;
              }
            }
          }
          if (iVar11 < 0) {
            uVar7 = 0;
          }
          else if (iVar10 < 0) {
            uVar7 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
            if (iVar11 < *(int *)(iVar8 + 4)) {
              if (iVar10 < *(int *)(iVar8 + 8)) {
                uVar7 = (uint)*(ushort *)
                               (*(int *)(iVar8 + 0xc) * iVar11 + *(int *)(iVar8 + 0x18) * iVar10 +
                               *(int *)(iVar8 + 0x20));
              }
              else {
                uVar7 = 0;
              }
            }
            else {
              uVar7 = 0;
            }
          }
          if (uVar5 != 0) {
            if (((local_30[8] != local_30[3]) && (local_30[3] == local_30[4])) &&
               (local_30[4] == uVar5)) {
              iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x2224);
              if (local_30[8] < 0) {
                bVar13 = false;
              }
              else {
                bVar13 = *(char *)(iVar8 + local_30[8]) != '\0';
              }
              if ((*(char *)(iVar8 + uVar5) != '\0') == bVar13) {
                pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) +
                                 local_30[7]);
                *pbVar9 = *pbVar9 & 0xf0;
                *(undefined1 *)
                 (*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) + local_30[7]) = 2;
                pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) + -1 +
                                 local_30[7]);
                *pbVar9 = *pbVar9 | 0x20;
              }
            }
            if (((local_30[8] != uVar5) && (uVar5 == local_30[5])) && (local_30[5] == uVar7)) {
              iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x2224);
              if (local_30[8] < 0) {
                bVar13 = false;
              }
              else {
                bVar13 = *(char *)(iVar8 + local_30[8]) != '\0';
              }
              if ((*(char *)(iVar8 + uVar5) != '\0') == bVar13) {
                pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) +
                                 local_30[7]);
                *pbVar9 = *pbVar9 & 0xf0;
                pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) +
                                 local_30[7]);
                *pbVar9 = *pbVar9 | 8;
                pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * iVar10 + *(int *)(param_1 + 0xc) + 1 +
                                 local_30[7]);
                *pbVar9 = *pbVar9 | 0x10;
              }
            }
          }
          local_30[7] = iVar11;
        } while (iVar11 < local_30[2] + -1);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar2);
  }
  local_30[8] = 1;
  if (1 < iVar2) {
    iVar10 = local_30[2] + -1;
    do {
      iVar11 = 1;
      if (1 < iVar10) {
        do {
          if (iVar11 < 0) {
            local_30[7] = 0;
          }
          else if (local_30[8] < 0) {
            local_30[7] = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
            if (iVar11 < *(int *)(iVar8 + 4)) {
              if (local_30[8] < *(int *)(iVar8 + 8)) {
                local_30[7] = (int)*(ushort *)
                                    (*(int *)(iVar8 + 0xc) * iVar11 +
                                     *(int *)(iVar8 + 0x18) * local_30[8] + *(int *)(iVar8 + 0x20));
              }
              else {
                local_30[7] = 0;
              }
            }
            else {
              local_30[7] = 0;
            }
          }
          if ((*(char *)(local_30[7] + *(int *)(*(int *)(param_1 + 8) + 0x2224)) == '\0') &&
             (local_30[7] != 0)) {
            iVar8 = iVar11 + -1;
            if (iVar8 < 0) {
              local_30[5] = 0;
            }
            else if (local_30[8] < 0) {
              local_30[5] = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar8 < *(int *)(iVar12 + 4)) {
                if (local_30[8] < *(int *)(iVar12 + 8)) {
                  local_30[5] = (int)*(ushort *)
                                      (*(int *)(iVar12 + 0xc) * iVar8 +
                                       *(int *)(iVar12 + 0x18) * local_30[8] +
                                      *(int *)(iVar12 + 0x20));
                }
                else {
                  local_30[5] = 0;
                }
              }
              else {
                local_30[5] = 0;
              }
            }
            iVar8 = local_30[8] + -1;
            if (iVar11 < 0) {
              local_30[3] = 0;
            }
            else if (iVar8 < 0) {
              local_30[3] = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar11 < *(int *)(iVar12 + 4)) {
                if (iVar8 < *(int *)(iVar12 + 8)) {
                  local_30[3] = (int)*(ushort *)
                                      (*(int *)(iVar12 + 0xc) * iVar11 +
                                       *(int *)(iVar12 + 0x18) * iVar8 + *(int *)(iVar12 + 0x20));
                }
                else {
                  local_30[3] = 0;
                }
              }
              else {
                local_30[3] = 0;
              }
            }
            iVar8 = iVar11 + 1;
            if (iVar8 < 0) {
              local_30[6] = 0;
            }
            else if (local_30[8] < 0) {
              local_30[6] = 0;
            }
            else {
              iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar8 < *(int *)(iVar12 + 4)) {
                if (local_30[8] < *(int *)(iVar12 + 8)) {
                  local_30[6] = (int)*(ushort *)
                                      (*(int *)(iVar12 + 0xc) * iVar8 +
                                       *(int *)(iVar12 + 0x18) * local_30[8] +
                                      *(int *)(iVar12 + 0x20));
                }
                else {
                  local_30[6] = 0;
                }
              }
              else {
                local_30[6] = 0;
              }
            }
            iVar12 = local_30[8] + 1;
            if (iVar8 < 0) {
              local_30[2] = 0;
            }
            else if (iVar12 < 0) {
              local_30[2] = 0;
            }
            else {
              iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
              if (iVar8 < *(int *)(iVar4 + 4)) {
                if (iVar12 < *(int *)(iVar4 + 8)) {
                  local_30[2] = (int)*(ushort *)
                                      (*(int *)(iVar4 + 0x18) * iVar12 +
                                       *(int *)(iVar4 + 0xc) * iVar8 + *(int *)(iVar4 + 0x20));
                }
                else {
                  local_30[2] = 0;
                }
              }
              else {
                local_30[2] = 0;
              }
            }
            if (iVar11 < 0) {
              local_30[4] = 0;
            }
            else {
              iVar8 = local_30[8] + 1;
              if (iVar8 < 0) {
                local_30[4] = 0;
              }
              else {
                iVar12 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
                if (iVar11 < *(int *)(iVar12 + 4)) {
                  if (iVar8 < *(int *)(iVar12 + 8)) {
                    local_30[4] = (int)*(ushort *)
                                        (*(int *)(iVar12 + 0x18) * iVar8 +
                                         *(int *)(iVar12 + 0xc) * iVar11 + *(int *)(iVar12 + 0x20));
                  }
                  else {
                    local_30[4] = 0;
                  }
                }
                else {
                  local_30[4] = 0;
                }
              }
            }
            iVar8 = iVar11 + -1;
            if (iVar8 < 0) {
              uVar5 = 0;
            }
            else {
              iVar12 = local_30[8] + 1;
              if (iVar12 < 0) {
                uVar5 = 0;
              }
              else {
                iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x212c);
                if (iVar8 < *(int *)(iVar4 + 4)) {
                  if (iVar12 < *(int *)(iVar4 + 8)) {
                    uVar5 = (uint)*(ushort *)
                                   (*(int *)(iVar4 + 0x18) * iVar12 + *(int *)(iVar4 + 0xc) * iVar8
                                   + *(int *)(iVar4 + 0x20));
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                }
              }
            }
            pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) +
                             iVar11);
            if (((((((*pbVar9 & 0xf) == 0) && (local_30[7] != local_30[5])) &&
                  (local_30[5] == uVar5)) &&
                 ((uVar5 == local_30[4] &&
                  (*(char *)(local_30[5] + *(int *)(*(int *)(param_1 + 8) + 0x2224)) == '\0')))) &&
                ((local_30[5] != 0 && ((local_30[7] == local_30[3] && (local_30[7] == local_30[6])))
                 ))) && (((*(byte *)(*(int *)(param_1 + 0x20) * (local_30[8] + 1) +
                                     *(int *)(param_1 + 0xc) + iVar11) & 10) == 0 &&
                         ((pbVar9[-1] & 10) == 0)))) {
              *pbVar9 = *pbVar9 & 0xf0;
              pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) +
                               iVar11);
              *pbVar9 = *pbVar9 | 4;
              pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) +
                                -1 + iVar11);
              *pbVar9 = *pbVar9 | 0x20;
            }
            pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) +
                             iVar11);
            if ((((((*pbVar9 & 0xf) == 0) && (local_30[7] != local_30[6])) &&
                 (local_30[6] == local_30[2])) &&
                ((local_30[2] == local_30[4] &&
                 (*(char *)(local_30[6] + *(int *)(*(int *)(param_1 + 8) + 0x2224)) == '\0')))) &&
               ((((local_30[6] != 0 &&
                  ((local_30[7] == local_30[3] && (local_30[7] == local_30[5])))) &&
                 ((*(byte *)(*(int *)(param_1 + 0x20) * (local_30[8] + 1) + *(int *)(param_1 + 0xc)
                            + iVar11) & 10) == 0)) && ((pbVar9[1] & 10) == 0)))) {
              *pbVar9 = *pbVar9 & 0xf0;
              pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) +
                               iVar11);
              *pbVar9 = *pbVar9 | 1;
              pbVar9 = (byte *)(*(int *)(param_1 + 0x20) * local_30[8] + *(int *)(param_1 + 0xc) + 1
                               + iVar11);
              *pbVar9 = *pbVar9 | 0x10;
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar10);
      }
      local_30[8] = local_30[8] + 1;
    } while (local_30[8] < iVar2);
  }
  return;
}


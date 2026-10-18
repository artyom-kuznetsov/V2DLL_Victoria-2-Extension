// FUN_007d4b70 @ 007d4b70 body=[[007d4b70, 007d4f60] [007d4f64, 007d6787] [007d6790, 007d6954] [007d6958, 007d696a]]


/* WARNING: Removing unreachable block (ram,0x007d694c) */
/* WARNING: Removing unreachable block (ram,0x007d5e37) */
/* WARNING: Removing unreachable block (ram,0x007d5e3e) */
/* WARNING: Removing unreachable block (ram,0x007d5e62) */
/* WARNING: Removing unreachable block (ram,0x007d5e89) */
/* WARNING: Removing unreachable block (ram,0x007d4f5b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007d4b70(int param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  byte bVar22;
  int local_38;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ac80;
  local_10 = ExceptionList;
  local_38 = 0;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    local_38 = *(int *)(DAT_012588e8 + 0xb60);
  }
  ExceptionList = &local_10;
  _memset(*(void **)(param_1 + 0x3c),0,*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40) * 4);
  iVar20 = 1;
  if (1 < *(int *)(param_1 + 0x44) + -1) {
    param_1 = 8;
    do {
      pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x40) * iVar20 * 4);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + 4 + *(int *)(iVar6 + 0x40) * iVar20 * 4);
      *pbVar1 = *pbVar1 | 2;
      local_8 = 0;
      FUN_007b94a0();
      puVar21 = (undefined4 *)0x0;
      for (iVar14 = 2; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar21 = 0;
        puVar21 = puVar21 + 1;
      }
      iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x212c);
      local_20 = 0;
      iVar14 = iVar20 + -1;
      if (*(int *)(iVar7 + 4) + -1 < 0) {
        local_20 = *(int *)(iVar7 + 4) + -1;
      }
      if (iVar20 + -1 < 0) {
        iVar14 = 0;
      }
      if (*(int *)(iVar7 + 8) + -1 < iVar14) {
        iVar14 = *(int *)(iVar7 + 8) + -1;
      }
      iVar18 = *(int *)(iVar7 + 0xc) * local_20;
      local_20 = 0;
      iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2aa4) +
                       (uint)*(ushort *)
                              (*(int *)(iVar7 + 0x18) * iVar14 + iVar18 + *(int *)(iVar7 + 0x20)) *
                       4);
      iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x212c);
      if (*(int *)(iVar7 + 4) + -1 < 0) {
        local_20 = *(int *)(iVar7 + 4) + -1;
      }
      iVar18 = iVar20;
      if (iVar20 < 0) {
        iVar18 = 0;
      }
      if (*(int *)(iVar7 + 8) + -1 < iVar18) {
        iVar18 = *(int *)(iVar7 + 8) + -1;
      }
      iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2aa4) +
                      (uint)*(ushort *)
                             (*(int *)(iVar7 + 0xc) * local_20 + *(int *)(iVar7 + 0x18) * iVar18 +
                             *(int *)(iVar7 + 0x20)) * 4);
      if ((((iVar14 != 0) && (iVar7 != 0)) &&
          ((bool)*(char *)(iVar14 + 0x2a) != (*(char *)(iVar7 + 0x2a) == '\0'))) &&
         (iVar14 != iVar7)) {
        iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar14 + 0xb4) * 4);
        if (*(int *)(iVar14 + 0x164) == 0) {
          _DAT_00000000 = 0;
        }
        else {
          _DAT_00000000 = **(int **)(iVar14 + 0x15c);
        }
        iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar7 + 0xb4) * 4);
        if (*(int *)(iVar14 + 0x164) == 0) {
          iRam00000004 = 0;
        }
        else {
          iRam00000004 = **(int **)(iVar14 + 0x15c);
        }
        if (_DAT_00000000 == iRam00000004) {
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 0x60));
          *pbVar1 = *pbVar1 | 8;
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + *(int *)(iVar6 + 0x40) * iVar20);
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)(*(int *)(iVar6 + 100) + *(int *)(iVar6 + 0x40) * iVar20);
          *pbVar1 = *pbVar1 | 0x18;
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 100));
          *pbVar1 = *pbVar1 | 0x14;
        }
      }
      iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x212c);
      iVar18 = *(int *)(iVar6 + 0x40) + -2;
      iVar14 = iVar20 + -1;
      local_20 = iVar18;
      if (*(int *)(iVar7 + 4) + -1 < iVar18) {
        local_20 = *(int *)(iVar7 + 4) + -1;
      }
      if (iVar20 + -1 < 0) {
        iVar14 = 0;
      }
      if (*(int *)(iVar7 + 8) + -1 < iVar14) {
        iVar14 = *(int *)(iVar7 + 8) + -1;
      }
      iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2aa4) +
                       (uint)*(ushort *)
                              (*(int *)(iVar7 + 0x18) * iVar14 + *(int *)(iVar7 + 0xc) * local_20 +
                              *(int *)(iVar7 + 0x20)) * 4);
      iVar7 = *(int *)(*(int *)(iVar6 + 0x38) + 0x212c);
      local_20 = iVar18;
      if (*(int *)(iVar7 + 4) + -1 < iVar18) {
        local_20 = *(int *)(iVar7 + 4) + -1;
      }
      iVar18 = iVar20;
      if (iVar20 < 0) {
        iVar18 = 0;
      }
      if (*(int *)(iVar7 + 8) + -1 < iVar18) {
        iVar18 = *(int *)(iVar7 + 8) + -1;
      }
      iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2aa4) +
                      (uint)*(ushort *)
                             (*(int *)(iVar7 + 0x18) * iVar18 + *(int *)(iVar7 + 0xc) * local_20 +
                             *(int *)(iVar7 + 0x20)) * 4);
      if (((iVar14 != 0) && (iVar7 != 0)) &&
         (((bool)*(char *)(iVar14 + 0x2a) != (*(char *)(iVar7 + 0x2a) == '\0') && (iVar14 != iVar7))
         )) {
        iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar14 + 0xb4) * 4);
        if (*(int *)(iVar14 + 0x164) == 0) {
          _DAT_00000000 = 0;
        }
        else {
          _DAT_00000000 = **(int **)(iVar14 + 0x15c);
        }
        iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar7 + 0xb4) * 4);
        if (*(int *)(iVar14 + 0x164) == 0) {
          iRam00000004 = 0;
        }
        else {
          iRam00000004 = **(int **)(iVar14 + 0x15c);
        }
        if (_DAT_00000000 == iRam00000004) {
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + -8 + *(int *)(iVar6 + 0x40) * iVar20 * 4);
          *pbVar1 = *pbVar1 | 8;
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x40) * param_1 + -8 + *(int *)(iVar6 + 0x3c));
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + -8 + *(int *)(iVar6 + 0x40) * iVar20 * 4);
          *pbVar1 = *pbVar1 | 0x18;
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x40) * param_1 + -8 + *(int *)(iVar6 + 0x3c));
          *pbVar1 = *pbVar1 | 0x14;
        }
      }
      param_1 = param_1 + 4;
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(iVar6 + 0x44) + -1);
  }
  local_8 = 1;
  FUN_007b94a0();
  puVar21 = (undefined4 *)0x0;
  for (iVar20 = 5; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  local_18 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -2) {
    do {
      local_1c = 1;
      if (1 < *(int *)(iVar6 + 0x40) + -2) {
        do {
          iVar20 = *(int *)(iVar6 + 0x38);
          iVar14 = *(int *)(iVar20 + 0x212c);
          iVar7 = *(int *)(iVar14 + 4) + -1;
          param_1 = local_1c;
          if (iVar7 < local_1c) {
            param_1 = iVar7;
          }
          iVar7 = local_18;
          if (local_18 < 0) {
            iVar7 = 0;
          }
          iVar18 = *(int *)(iVar14 + 8) + -1;
          if (iVar18 < iVar7) {
            iVar7 = iVar18;
          }
          iVar18 = *(int *)(iVar20 + 0x212c);
          iVar7 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar14 + 0x18) * iVar7 + *(int *)(iVar14 + 0xc) * param_1
                                 + *(int *)(iVar14 + 0x20)) * 4);
          param_1 = local_18;
          iVar14 = local_1c + 1;
          iVar8 = *(int *)(iVar18 + 4) + -1;
          iVar12 = iVar14;
          if (iVar8 < iVar14) {
            iVar12 = iVar8;
          }
          if (local_18 < 0) {
            param_1 = 0;
          }
          iVar8 = *(int *)(iVar18 + 8) + -1;
          if (iVar8 < param_1) {
            param_1 = iVar8;
          }
          iVar18 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar18 + 0xc) * iVar12 +
                                   *(int *)(iVar18 + 0x18) * param_1 + *(int *)(iVar18 + 0x20)) * 4)
          ;
          iVar12 = *(int *)(iVar20 + 0x212c);
          iVar8 = *(int *)(iVar12 + 4) + -1;
          param_1 = local_1c + -1;
          if (iVar8 < local_1c + -1) {
            param_1 = iVar8;
          }
          iVar8 = local_18;
          if (local_18 < 0) {
            iVar8 = 0;
          }
          iVar9 = *(int *)(iVar12 + 8) + -1;
          if (iVar9 < iVar8) {
            iVar8 = iVar9;
          }
          iVar12 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar12 + 0x18) * iVar8 +
                                   *(int *)(iVar12 + 0xc) * param_1 + *(int *)(iVar12 + 0x20)) * 4);
          iVar8 = *(int *)(iVar20 + 0x212c);
          iVar10 = *(int *)(iVar8 + 4) + -1;
          iVar9 = local_18 + 1;
          param_1 = local_1c;
          if (iVar10 < local_1c) {
            param_1 = iVar10;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          iVar10 = *(int *)(iVar8 + 8) + -1;
          if (iVar10 < iVar9) {
            iVar9 = iVar10;
          }
          iVar8 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar8 + 0x18) * iVar9 + *(int *)(iVar8 + 0xc) * param_1 +
                                 *(int *)(iVar8 + 0x20)) * 4);
          iVar9 = *(int *)(iVar20 + 0x212c);
          param_1 = local_1c;
          iVar11 = *(int *)(iVar9 + 4) + -1;
          iVar10 = local_18 + -1;
          if (iVar11 < local_1c) {
            param_1 = iVar11;
          }
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          iVar11 = *(int *)(iVar9 + 8) + -1;
          if (iVar11 < iVar10) {
            iVar10 = iVar11;
          }
          iVar20 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar9 + 0x18) * iVar10 + *(int *)(iVar9 + 0xc) * param_1
                                  + *(int *)(iVar9 + 0x20)) * 4);
          _DAT_00000000 = 0;
          iRam00000004 = 0;
          _DAT_00000008 = 0;
          iRam0000000c = 0;
          iRam00000010 = 0;
          if (iVar7 != 0) {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar7 + 0xb4) * 4)
            ;
            if (*(int *)(iVar9 + 0x164) == 0) {
              _DAT_00000000 = 0;
            }
            else {
              _DAT_00000000 = **(int **)(iVar9 + 0x15c);
            }
          }
          if (iVar18 != 0) {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar18 + 0xb4) * 4
                            );
            if (*(int *)(iVar9 + 0x164) == 0) {
              iRam00000004 = 0;
            }
            else {
              iRam00000004 = **(int **)(iVar9 + 0x15c);
            }
          }
          if (iVar12 != 0) {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar12 + 0xb4) * 4
                            );
            if (*(int *)(iVar9 + 0x164) == 0) {
              _DAT_00000008 = 0;
            }
            else {
              _DAT_00000008 = **(int **)(iVar9 + 0x15c);
            }
          }
          if (iVar8 != 0) {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar8 + 0xb4) * 4)
            ;
            if (*(int *)(iVar9 + 0x164) == 0) {
              iRam0000000c = 0;
            }
            else {
              iRam0000000c = **(int **)(iVar9 + 0x15c);
            }
          }
          if (iVar20 != 0) {
            iVar9 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar20 + 0xb4) * 4
                            );
            if (*(int *)(iVar9 + 0x164) == 0) {
              iRam00000010 = 0;
            }
            else {
              iRam00000010 = **(int **)(iVar9 + 0x15c);
            }
          }
          *(undefined1 *)
           (*(int *)(iVar6 + 0x3c) + 1 + (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) = 0x40;
          bVar22 = iVar7 == 0;
          if (iVar18 == 0) {
            bVar22 = bVar22 + 1;
          }
          if (iVar12 == 0) {
            bVar22 = bVar22 + 1;
          }
          if (iVar8 == 0) {
            bVar22 = bVar22 + 1;
          }
          if (iVar20 == 0) {
            bVar22 = bVar22 + 1;
          }
          if (bVar22 < 3) {
            *(undefined1 *)
             (*(int *)(iVar6 + 0x3c) + (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) = 0;
            iVar11 = *(int *)(iVar6 + 0x40) * local_18 + local_1c;
            *(undefined1 *)(iVar11 + *(int *)(iVar6 + 100)) = 0;
            *(undefined1 *)(iVar11 + *(int *)(iVar6 + 0x60)) = 0;
            iVar10 = DAT_01258708;
            iVar9 = _DAT_00000000;
            if (iVar7 != 0) {
              iVar19 = *(int *)(iVar7 + 0xb4);
              if ((iVar19 != 0) && (*(char *)(iVar7 + 0x2a) != '\0')) {
                if ((iVar18 != 0) &&
                   (((*(int *)(iVar18 + 0xb4) != 0 && (*(char *)(iVar18 + 0x2a) != '\0')) &&
                    (iVar19 != *(int *)(iVar18 + 0xb4))))) {
                  if (_DAT_00000000 == iRam00000004) {
                    if ((*(byte *)(*(int *)(DAT_01258708 + 0x20) * local_18 +
                                   *(int *)(DAT_01258708 + 0xc) + 1 + local_1c) & 0xe) == 0) {
                      pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                      *pbVar1 = *pbVar1 | 1;
                    }
                  }
                  else if ((*(byte *)(*(int *)(DAT_01258708 + 0x20) * local_18 +
                                      *(int *)(DAT_01258708 + 0xc) + 1 + local_1c) & 0xe) == 0) {
                    pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar11);
                    *pbVar1 = *pbVar1 | 0x11;
                  }
                }
                if (((iVar12 != 0) && (*(int *)(iVar12 + 0xb4) != 0)) &&
                   ((*(char *)(iVar12 + 0x2a) != '\0' && (iVar19 != *(int *)(iVar12 + 0xb4))))) {
                  if (iVar9 == _DAT_00000008) {
                    if ((*(byte *)(*(int *)(iVar10 + 0x20) * local_18 + *(int *)(iVar10 + 0xc) + -1
                                  + local_1c) & 0xb) == 0) {
                      pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                      *pbVar1 = *pbVar1 | 2;
                    }
                  }
                  else if ((*(byte *)(*(int *)(iVar10 + 0x20) * local_18 + *(int *)(iVar10 + 0xc) +
                                      -1 + local_1c) & 0xb) == 0) {
                    pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar11);
                    *pbVar1 = *pbVar1 | 0x12;
                  }
                }
                if (((iVar8 != 0) && (*(int *)(iVar8 + 0xb4) != 0)) &&
                   ((*(char *)(iVar8 + 0x2a) != '\0' && (iVar19 != *(int *)(iVar8 + 0xb4))))) {
                  if (iVar9 == iRam0000000c) {
                    if ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + 1) + *(int *)(iVar10 + 0xc)
                                  + local_1c) & 10) == 0) {
                      pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                      *pbVar1 = *pbVar1 | 4;
                    }
                  }
                  else if ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + 1) +
                                      *(int *)(iVar10 + 0xc) + local_1c) & 10) == 0) {
                    pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar11);
                    *pbVar1 = *pbVar1 | 0x14;
                  }
                }
                if ((((iVar20 != 0) && (*(int *)(iVar20 + 0xb4) != 0)) &&
                    (*(char *)(iVar20 + 0x2a) != '\0')) && (iVar19 != *(int *)(iVar20 + 0xb4))) {
                  if (iVar9 == iRam00000010) {
                    if ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + -1) +
                                   *(int *)(iVar10 + 0xc) + local_1c) & 0xf) == 0) {
                      pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                      *pbVar1 = *pbVar1 | 8;
                    }
                  }
                  else if ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + -1) +
                                      *(int *)(iVar10 + 0xc) + local_1c) & 0xf) == 0) {
                    pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar11);
                    *pbVar1 = *pbVar1 | 0x18;
                  }
                }
              }
              iVar9 = *(int *)(iVar7 + 0xb4);
              if ((iVar9 != 0) && (*(char *)(iVar7 + 0x2a) == '\0')) {
                if ((((iVar18 != 0) &&
                     ((*(int *)(iVar18 + 0xb4) != 0 && (*(char *)(iVar18 + 0x2a) == '\0')))) &&
                    (iVar9 != *(int *)(iVar18 + 0xb4))) &&
                   ((*(byte *)(*(int *)(iVar10 + 0x20) * local_18 + *(int *)(iVar10 + 0xc) + 1 +
                              local_1c) & 0xe) == 0)) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                  *pbVar1 = *pbVar1 | 1;
                }
                if ((((iVar12 != 0) && (*(int *)(iVar12 + 0xb4) != 0)) &&
                    (*(char *)(iVar12 + 0x2a) == '\0')) &&
                   ((iVar9 != *(int *)(iVar12 + 0xb4) &&
                    ((*(byte *)(*(int *)(iVar10 + 0x20) * local_18 + *(int *)(iVar10 + 0xc) + -1 +
                               local_1c) & 0xb) == 0)))) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                  *pbVar1 = *pbVar1 | 2;
                }
                if (((iVar8 != 0) && (*(int *)(iVar8 + 0xb4) != 0)) &&
                   ((*(char *)(iVar8 + 0x2a) == '\0' &&
                    ((iVar9 != *(int *)(iVar8 + 0xb4) &&
                     ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + 1) + *(int *)(iVar10 + 0xc) +
                                local_1c) & 10) == 0)))))) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar11);
                  *pbVar1 = *pbVar1 | 4;
                }
                if ((((iVar20 != 0) && (*(int *)(iVar20 + 0xb4) != 0)) &&
                    (*(char *)(iVar20 + 0x2a) == '\0')) &&
                   ((iVar9 != *(int *)(iVar20 + 0xb4) &&
                    ((*(byte *)(*(int *)(iVar10 + 0x20) * (local_18 + -1) + *(int *)(iVar10 + 0xc) +
                               local_1c) & 0xf) == 0)))) {
                  pbVar1 = (byte *)(iVar11 + *(int *)(iVar6 + 0x60));
                  *pbVar1 = *pbVar1 | 8;
                }
              }
            }
            iVar9 = 0x40;
            if (local_38 != 0) {
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x29) != '\0')) {
                iVar9 = 0x28;
              }
              if ((iVar18 != 0) && (*(char *)(iVar18 + 0x29) != '\0')) {
                iVar9 = iVar9 + -10;
              }
              if ((iVar12 != 0) && (*(char *)(iVar12 + 0x29) != '\0')) {
                iVar9 = iVar9 + -10;
              }
              if ((iVar8 != 0) && (*(char *)(iVar8 + 0x29) != '\0')) {
                iVar9 = iVar9 + -10;
              }
              if ((iVar20 != 0) && (*(char *)(iVar20 + 0x29) != '\0')) {
                iVar9 = iVar9 + -10;
              }
              if (0xff < iVar9) {
                iVar9 = 0xff;
              }
              *(char *)(*(int *)(iVar6 + 0x3c) + 1 +
                       (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) = (char)iVar9;
            }
            *(undefined1 *)
             (*(int *)(iVar6 + 0x3c) + 2 + (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) = 0;
          }
          else {
            *(undefined1 *)
             (*(int *)(iVar6 + 0x3c) + 1 + (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) =
                 0xff;
          }
          local_1c = iVar14;
        } while (iVar14 < *(int *)(iVar6 + 0x40) + -2);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar6 + 0x44) + -2);
  }
  local_18 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -2) {
    do {
      local_1c = 1;
      if (1 < *(int *)(iVar6 + 0x40) + -2) {
        do {
          iVar20 = *(int *)(iVar6 + 0x38);
          param_1 = local_1c;
          iVar14 = *(int *)(iVar20 + 0x212c);
          iVar7 = *(int *)(iVar14 + 4) + -1;
          if (iVar7 < local_1c) {
            param_1 = iVar7;
          }
          iVar7 = local_18;
          if (local_18 < 0) {
            iVar7 = 0;
          }
          iVar18 = *(int *)(iVar14 + 8) + -1;
          if (iVar18 < iVar7) {
            iVar7 = iVar18;
          }
          iVar14 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar14 + 0x18) * iVar7 +
                                   *(int *)(iVar14 + 0xc) * param_1 + *(int *)(iVar14 + 0x20)) * 4);
          iVar7 = *(int *)(iVar20 + 0x212c);
          iVar18 = *(int *)(iVar7 + 4) + -1;
          param_1 = local_1c + 1;
          if (iVar18 < local_1c + 1) {
            param_1 = iVar18;
          }
          iVar18 = local_18;
          if (local_18 < 0) {
            iVar18 = 0;
          }
          iVar12 = *(int *)(iVar7 + 8) + -1;
          if (iVar12 < iVar18) {
            iVar18 = iVar12;
          }
          iVar7 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                          (uint)*(ushort *)
                                 (*(int *)(iVar7 + 0x18) * iVar18 + *(int *)(iVar7 + 0xc) * param_1
                                 + *(int *)(iVar7 + 0x20)) * 4);
          iVar18 = *(int *)(iVar20 + 0x212c);
          param_1 = local_1c;
          iVar8 = *(int *)(iVar18 + 4) + -1;
          iVar12 = local_18 + 1;
          if (iVar8 < local_1c) {
            param_1 = iVar8;
          }
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          iVar8 = *(int *)(iVar18 + 8) + -1;
          if (iVar8 < iVar12) {
            iVar12 = iVar8;
          }
          iVar18 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar18 + 0x18) * iVar12 +
                                   *(int *)(iVar18 + 0xc) * param_1 + *(int *)(iVar18 + 0x20)) * 4);
          iVar12 = *(int *)(iVar20 + 0x212c);
          iVar8 = *(int *)(iVar12 + 4) + -1;
          param_1 = local_1c + -1;
          if (iVar8 < local_1c + -1) {
            param_1 = iVar8;
          }
          iVar8 = local_18;
          if (local_18 < 0) {
            iVar8 = 0;
          }
          iVar9 = *(int *)(iVar12 + 8) + -1;
          if (iVar9 < iVar8) {
            iVar8 = iVar9;
          }
          iVar9 = local_18 + -1;
          iVar12 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar12 + 0x18) * iVar8 +
                                   *(int *)(iVar12 + 0xc) * param_1 + *(int *)(iVar12 + 0x20)) * 4);
          iVar8 = *(int *)(iVar20 + 0x212c);
          param_1 = local_1c;
          iVar10 = *(int *)(iVar8 + 4) + -1;
          if (iVar10 < local_1c) {
            param_1 = iVar10;
          }
          if (iVar9 < 0) {
            iVar9 = 0;
          }
          iVar10 = *(int *)(iVar8 + 8) + -1;
          if (iVar10 < iVar9) {
            iVar9 = iVar10;
          }
          iVar20 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                           (uint)*(ushort *)
                                  (*(int *)(iVar8 + 0x18) * iVar9 + *(int *)(iVar8 + 0xc) * param_1
                                  + *(int *)(iVar8 + 0x20)) * 4);
          _DAT_00000000 = 0;
          iRam00000004 = 0;
          _DAT_00000008 = 0;
          iRam0000000c = 0;
          iRam00000010 = 0;
          if (iVar14 != 0) {
            iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                             *(int *)(iVar14 + 0xb4) * 4);
            if (*(int *)(iVar14 + 0x164) == 0) {
              _DAT_00000000 = 0;
            }
            else {
              _DAT_00000000 = **(int **)(iVar14 + 0x15c);
            }
          }
          if (iVar7 != 0) {
            iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) + *(int *)(iVar7 + 0xb4) * 4
                             );
            if (*(int *)(iVar14 + 0x164) == 0) {
              iRam00000004 = 0;
            }
            else {
              iRam00000004 = **(int **)(iVar14 + 0x15c);
            }
          }
          if (iVar18 != 0) {
            iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                             *(int *)(iVar18 + 0xb4) * 4);
            if (*(int *)(iVar14 + 0x164) == 0) {
              _DAT_00000008 = 0;
            }
            else {
              _DAT_00000008 = **(int **)(iVar14 + 0x15c);
            }
          }
          if (iVar12 != 0) {
            iVar14 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                             *(int *)(iVar12 + 0xb4) * 4);
            if (*(int *)(iVar14 + 0x164) == 0) {
              iRam0000000c = 0;
            }
            else {
              iRam0000000c = **(int **)(iVar14 + 0x15c);
            }
          }
          if ((iVar20 != 0) &&
             (iVar20 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                               *(int *)(iVar20 + 0xb4) * 4), iRam00000010 = 0,
             *(int *)(iVar20 + 0x164) != 0)) {
            iRam00000010 = **(int **)(iVar20 + 0x15c);
          }
          iVar20 = *(int *)(iVar6 + 0x40) * local_18 + local_1c;
          cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
          puVar2 = (undefined1 *)(iVar20 + *(int *)(iVar6 + 0x60));
          if (((cVar13 == '\x01') || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x11')) &&
             ((cVar13 == '\x04' || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x14')))) {
            if (_DAT_00000000 == iRam00000004) {
LAB_007d598d:
              if (_DAT_00000000 != _DAT_00000008) {
                *puVar2 = 7;
                *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
              }
            }
            else if (_DAT_00000000 == _DAT_00000008) {
              *puVar2 = 3;
              *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
            }
            else if (_DAT_00000000 == iRam00000004) goto LAB_007d598d;
          }
          cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
          puVar2 = (undefined1 *)(iVar20 + *(int *)(iVar6 + 0x60));
          if (((cVar13 == '\x02') || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x12')) &&
             ((cVar13 == '\x04' || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x14')))) {
            if (_DAT_00000000 == iRam0000000c) {
LAB_007d59df:
              if (_DAT_00000000 != _DAT_00000008) {
                *puVar2 = 0xb;
                *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
              }
            }
            else if (_DAT_00000000 == _DAT_00000008) {
              *puVar2 = 0xc;
              *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
            }
            else if (_DAT_00000000 == iRam0000000c) goto LAB_007d59df;
          }
          cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
          puVar2 = (undefined1 *)(iVar20 + *(int *)(iVar6 + 0x60));
          if (((cVar13 == '\b') || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x18')) &&
             ((cVar13 == '\x01' || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x11')))) {
            if (_DAT_00000000 == iRam00000010) {
LAB_007d5a31:
              if (_DAT_00000000 != iRam00000004) {
                *puVar2 = 0xe;
                *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
              }
            }
            else if (_DAT_00000000 == iRam00000004) {
              *puVar2 = 0xd;
              *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
            }
            else if (_DAT_00000000 == iRam00000010) goto LAB_007d5a31;
          }
          cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
          puVar2 = (undefined1 *)(iVar20 + *(int *)(iVar6 + 0x60));
          if (((cVar13 == '\b') || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x18')) &&
             ((cVar13 == '\x02' || (*(char *)(iVar20 + *(int *)(iVar6 + 100)) == '\x12')))) {
            if (_DAT_00000000 == iRam0000000c) {
LAB_007d5a83:
              if (_DAT_00000000 != iRam00000010) {
                *puVar2 = 0;
                *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0x13;
              }
            }
            else if (_DAT_00000000 == iRam00000010) {
              *puVar2 = 0xf;
              *(undefined1 *)(iVar20 + *(int *)(iVar6 + 100)) = 0;
            }
            else if (_DAT_00000000 == iRam0000000c) goto LAB_007d5a83;
          }
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(iVar6 + 0x40) + -2);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar6 + 0x44) + -2);
  }
  *(undefined1 *)(*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * local_18 + local_1c) * 4) =
       0;
  iVar20 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -2) {
    do {
      iVar14 = *(int *)(iVar6 + 0x40);
      iVar7 = 1;
      if (1 < iVar14 + -2) {
        do {
          iVar18 = *(int *)(iVar6 + 0x40) * iVar20 + iVar7;
          if (((*(char *)(*(int *)(iVar6 + 0x3c) + iVar18 * 4) != '\0') ||
              (*(char *)(iVar18 + *(int *)(iVar6 + 0x60)) != '\0')) ||
             (*(char *)(iVar18 + *(int *)(iVar6 + 100)) != '\0')) {
            *(undefined1 *)(*(int *)(iVar6 + 0x3c) + 3 + (iVar14 * iVar20 + iVar7) * 4) = 0;
            bVar22 = *(byte *)(*(int *)(DAT_01258708 + 0x20) * iVar20 + *(int *)(DAT_01258708 + 0xc)
                              + iVar7);
            if ((bVar22 & 0xf) != 0) {
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 0x60)) & 5) != 0) && ((bVar22 & 1) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 2;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + 1) + iVar7 +
                              *(int *)(iVar6 + 0x60)) & 8) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + *(int *)(iVar6 + 0x40) * iVar20 + iVar7
                                   );
                  *pbVar1 = *pbVar1 & 0xfb;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + iVar7 + 1 + *(int *)(iVar6 + 0x60))
                    & 2) == 0) {
                  pbVar1 = (byte *)(iVar18 + *(int *)(iVar6 + 0x60));
                  *pbVar1 = *pbVar1 & 0xfe;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 100)) & 5) != 0) && ((bVar22 & 1) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 0x12
                ;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + 1) + *(int *)(iVar6 + 100) + iVar7
                              ) & 8) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfb;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 100) + 1 + iVar7)
                    & 2) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfe;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 0x60)) & 10) != 0) && ((bVar22 & 2) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 2;
                if (((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + *(int *)(iVar6 + 0x60) +
                               iVar7) & 4) == 0) ||
                   (*(char *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + *(int *)(iVar6 + 0x60) +
                             iVar7) == '\r')) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar18);
                  *pbVar1 = *pbVar1 & 0xf7;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + iVar7 + -1 + *(int *)(iVar6 + 0x60)
                              ) & 1) == 0) {
                  pbVar1 = (byte *)(iVar18 + *(int *)(iVar6 + 0x60));
                  *pbVar1 = *pbVar1 & 0xfd;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 100)) & 10) != 0) && ((bVar22 & 2) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 0x12
                ;
                if (((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + *(int *)(iVar6 + 100) +
                               iVar7) & 4) == 0) ||
                   (*(char *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + iVar7 +
                             *(int *)(iVar6 + 0x60)) == '\r')) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xf7;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 100) + -1 + iVar7)
                    & 1) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 0x60)) & 9) != 0) && ((bVar22 & 8) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 1;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + iVar7 +
                              *(int *)(iVar6 + 0x60)) & 4) == 0) {
                  pbVar1 = (byte *)(iVar18 + *(int *)(iVar6 + 0x60));
                  *pbVar1 = *pbVar1 & 0xf7;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + iVar7 + 1 + *(int *)(iVar6 + 0x60))
                    & 2) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfe;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 100)) & 9) != 0) && ((bVar22 & 8) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 0x11
                ;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + -1) + *(int *)(iVar6 + 100) +
                              iVar7) & 4) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xf7;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 100) + 1 + iVar7)
                    & 2) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfe;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 0x60)) & 6) != 0) && ((bVar22 & 4) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 1;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + 1) + iVar7 +
                              *(int *)(iVar6 + 0x60)) & 8) == 0) {
                  pbVar1 = (byte *)(iVar18 + *(int *)(iVar6 + 0x60));
                  *pbVar1 = *pbVar1 & 0xfb;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + iVar7 + -1 + *(int *)(iVar6 + 0x60)
                              ) & 1) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
              }
              if (((*(byte *)(iVar18 + *(int *)(iVar6 + 100)) & 6) != 0) && ((bVar22 & 4) != 0)) {
                *(undefined1 *)
                 (*(int *)(iVar6 + 0x3c) + 3 + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4) = 0x11
                ;
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * (iVar20 + 1) + *(int *)(iVar6 + 100) + iVar7
                              ) & 8) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfb;
                }
                if ((*(byte *)(*(int *)(iVar6 + 0x40) * iVar20 + *(int *)(iVar6 + 100) + -1 + iVar7)
                    & 1) == 0) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar18);
                  *pbVar1 = *pbVar1 & 0xfd;
                }
              }
            }
          }
          if (*(char *)(iVar18 + *(int *)(iVar6 + 100)) == '\x10') {
            *(undefined1 *)(iVar18 + *(int *)(iVar6 + 100)) = 0;
          }
          iVar14 = *(int *)(iVar6 + 0x40);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar14 + -2);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(iVar6 + 0x44) + -2);
  }
  FUN_004bf300(9);
  puVar21 = (undefined4 *)0x14;
  for (iVar20 = 4; iVar20 != 0; iVar20 = iVar20 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  local_18 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -2) {
    do {
      iVar20 = *(int *)(iVar6 + 0x40);
      local_1c = 1;
      if (1 < iVar20 + -2) {
        do {
          iVar7 = *(int *)(iVar6 + 0x40) * local_18 + local_1c;
          iVar14 = *(int *)(iVar6 + 0x3c) + iVar7 * 4;
          if (((*(byte *)(iVar14 + 3) & 0x13) == 0) ||
             (bVar22 = *(byte *)(iVar7 + *(int *)(iVar6 + 100)), bVar22 == 0)) {
            if ((*(byte *)(iVar14 + 3) & 3) == 0) {
              iVar20 = *(int *)(DAT_01258708 + 0x20);
              iVar7 = *(int *)(DAT_01258708 + 0xc);
              iVar18 = iVar20 * local_18 + iVar7;
              bVar22 = *(byte *)(iVar18 + -1 + local_1c);
              bVar3 = *(byte *)(iVar18 + 1 + local_1c);
              bVar4 = *(byte *)(iVar20 * (local_18 + 1) + iVar7 + local_1c);
              bVar5 = *(byte *)((local_18 + -1) * iVar20 + iVar7 + local_1c);
              iVar20 = *(int *)(iVar6 + 0x38);
              iVar7 = *(int *)(iVar20 + 0x212c);
              iVar18 = *(int *)(iVar7 + 4) + -1;
              param_1 = local_1c;
              if (iVar18 < local_1c) {
                param_1 = iVar18;
              }
              iVar18 = local_18;
              if (local_18 < 0) {
                iVar18 = 0;
              }
              iVar12 = *(int *)(iVar7 + 8) + -1;
              if (iVar12 < iVar18) {
                iVar18 = iVar12;
              }
              iVar9 = local_18 + 1;
              iVar18 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar18 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar8 = local_1c + 1;
              iVar12 = *(int *)(iVar7 + 4) + -1;
              param_1 = iVar8;
              if (iVar12 < iVar8) {
                param_1 = iVar12;
              }
              iVar12 = iVar9;
              if (iVar9 < 0) {
                iVar12 = 0;
              }
              iVar10 = *(int *)(iVar7 + 8) + -1;
              if (iVar10 < iVar12) {
                iVar12 = iVar10;
              }
              iVar12 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar12 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar10 = local_18 + -1;
              iVar11 = *(int *)(iVar7 + 4) + -1;
              param_1 = iVar8;
              if (iVar11 < iVar8) {
                param_1 = iVar11;
              }
              iVar8 = iVar10;
              if (iVar10 < 0) {
                iVar8 = 0;
              }
              iVar11 = *(int *)(iVar7 + 8) + -1;
              if (iVar11 < iVar8) {
                iVar8 = iVar11;
              }
              iVar8 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                              (uint)*(ushort *)
                                     (*(int *)(iVar7 + 0x18) * iVar8 +
                                      *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4)
              ;
              iVar19 = local_1c + -1;
              iVar11 = *(int *)(iVar7 + 4) + -1;
              param_1 = iVar19;
              if (iVar11 < iVar19) {
                param_1 = iVar11;
              }
              iVar11 = iVar9;
              if (iVar9 < 0) {
                iVar11 = 0;
              }
              iVar15 = *(int *)(iVar7 + 8) + -1;
              if (iVar15 < iVar11) {
                iVar11 = iVar15;
              }
              iVar11 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar11 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar15 = *(int *)(iVar7 + 4) + -1;
              param_1 = iVar19;
              if (iVar15 < iVar19) {
                param_1 = iVar15;
              }
              iVar15 = iVar10;
              if (iVar10 < 0) {
                iVar15 = 0;
              }
              iVar16 = *(int *)(iVar7 + 8) + -1;
              if (iVar16 < iVar15) {
                iVar15 = iVar16;
              }
              iVar15 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar15 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar16 = *(int *)(iVar7 + 4) + -1;
              param_1 = local_1c + 1;
              if (iVar16 < local_1c + 1) {
                param_1 = iVar16;
              }
              iVar16 = local_18;
              if (local_18 < 0) {
                iVar16 = 0;
              }
              iVar17 = *(int *)(iVar7 + 8) + -1;
              if (iVar17 < iVar16) {
                iVar16 = iVar17;
              }
              iVar16 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar16 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar17 = *(int *)(iVar7 + 4) + -1;
              param_1 = iVar19;
              if (iVar17 < iVar19) {
                param_1 = iVar17;
              }
              iVar19 = local_18;
              if (local_18 < 0) {
                iVar19 = 0;
              }
              iVar17 = *(int *)(iVar7 + 8) + -1;
              if (iVar17 < iVar19) {
                iVar19 = iVar17;
              }
              local_28 = local_1c;
              iVar19 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar7 + 0x18) * iVar19 +
                                       *(int *)(iVar7 + 0xc) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                               );
              iVar17 = *(int *)(iVar7 + 4) + -1;
              if (iVar17 < local_1c) {
                local_28 = iVar17;
              }
              param_1 = iVar9;
              if (iVar9 < 0) {
                param_1 = 0;
              }
              iVar9 = *(int *)(iVar7 + 8) + -1;
              if (iVar9 < param_1) {
                param_1 = iVar9;
              }
              iVar7 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                              (uint)*(ushort *)
                                     (*(int *)(iVar7 + 0xc) * local_28 +
                                      *(int *)(iVar7 + 0x18) * param_1 + *(int *)(iVar7 + 0x20)) * 4
                              );
              param_1 = local_1c;
              iVar9 = *(int *)(iVar20 + 0x212c);
              iVar17 = *(int *)(iVar9 + 4) + -1;
              if (iVar17 < local_1c) {
                param_1 = iVar17;
              }
              if (iVar10 < 0) {
                iVar10 = 0;
              }
              iVar17 = *(int *)(iVar9 + 8) + -1;
              if (iVar17 < iVar10) {
                iVar10 = iVar17;
              }
              iVar20 = *(int *)(*(int *)(iVar20 + 0x2aa4) +
                               (uint)*(ushort *)
                                      (*(int *)(iVar9 + 0x18) * iVar10 +
                                       *(int *)(iVar9 + 0xc) * param_1 + *(int *)(iVar9 + 0x20)) * 4
                               );
              _DAT_00000000 = 0;
              iRam00000004 = 0;
              _DAT_00000008 = 0;
              iRam0000000c = 0;
              iRam00000010 = 0;
              uRam00000014 = 0;
              uRam00000018 = 0;
              uRam0000001c = 0;
              uRam00000020 = 0;
              if (iVar18 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar18 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  _DAT_00000000 = 0;
                }
                else {
                  _DAT_00000000 = **(int **)(iVar18 + 0x15c);
                }
              }
              if (iVar12 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar12 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  iRam00000004 = 0;
                }
                else {
                  iRam00000004 = **(int **)(iVar18 + 0x15c);
                }
              }
              if (iVar8 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar8 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  _DAT_00000008 = 0;
                }
                else {
                  _DAT_00000008 = **(int **)(iVar18 + 0x15c);
                }
              }
              if (iVar11 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar11 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  iRam0000000c = 0;
                }
                else {
                  iRam0000000c = **(int **)(iVar18 + 0x15c);
                }
              }
              if (iVar15 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar15 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  iRam00000010 = 0;
                }
                else {
                  iRam00000010 = **(int **)(iVar18 + 0x15c);
                }
              }
              if (iVar16 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar16 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  uRam00000014 = 0;
                }
                else {
                  uRam00000014 = **(undefined4 **)(iVar18 + 0x15c);
                }
              }
              if (iVar19 != 0) {
                iVar18 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                 *(int *)(iVar19 + 0xb4) * 4);
                if (*(int *)(iVar18 + 0x164) == 0) {
                  uRam00000018 = 0;
                }
                else {
                  uRam00000018 = **(undefined4 **)(iVar18 + 0x15c);
                }
              }
              if (iVar7 != 0) {
                iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                *(int *)(iVar7 + 0xb4) * 4);
                if (*(int *)(iVar7 + 0x164) == 0) {
                  uRam0000001c = 0;
                }
                else {
                  uRam0000001c = **(undefined4 **)(iVar7 + 0x15c);
                }
              }
              if ((iVar20 != 0) &&
                 (iVar20 = *(int *)(*(int *)(*(int *)(iVar6 + 0x38) + 0x2238) +
                                   *(int *)(iVar20 + 0xb4) * 4), uRam00000020 = 0,
                 *(int *)(iVar20 + 0x164) != 0)) {
                uRam00000020 = **(undefined4 **)(iVar20 + 0x15c);
              }
              if ((bVar5 & 3) == 0) {
                if ((bVar5 & 0xc) == 0) {
                  if ((bVar3 & 3) == 0) {
                    if ((bVar3 & 0xc) == 0) {
                      if ((bVar22 & 3) == 0) {
                        if ((bVar22 & 0xc) == 0) {
                          if ((bVar4 & 3) != 0) goto LAB_007d66e2;
                          if ((bVar4 & 0xc) == 0) goto LAB_007d674c;
                        }
                        cVar13 = (-(_DAT_00000000 != iRam0000000c) & 0x10U) + 3;
                      }
                      else {
                        cVar13 = (-(_DAT_00000000 != iRam00000010) & 0x10U) + 4;
                      }
                    }
                    else {
                      cVar13 = (-(_DAT_00000000 != _DAT_00000008) & 0x10U) + 5;
                    }
                  }
                  else {
LAB_007d66e2:
                    cVar13 = (-(_DAT_00000000 != iRam00000004) & 0x10U) + 6;
                  }
                  *(char *)(iVar14 + 3) = cVar13;
                }
                else {
                  *(byte *)(iVar14 + 3) = (-(_DAT_00000000 != _DAT_00000008) & 0x10U) + 5;
                }
              }
              else {
                *(byte *)(iVar14 + 3) = (-(_DAT_00000000 != iRam00000010) & 0x10U) + 4;
                *(byte *)(iVar14 + 3) = (-(_DAT_00000000 != iRam00000010) & 0x10U) + 4;
              }
            }
            else {
              iVar14 = *(int *)(iVar6 + 0x60);
              if ((((((((*(byte *)(iVar14 + iVar7) & 2) != 0) &&
                      (cVar13 = *(char *)(iVar20 * local_18 + iVar14 + local_1c), cVar13 != '\x03'))
                     && (cVar13 != '\a')) && ((cVar13 != '\v' && (cVar13 != '\f')))) &&
                   (cVar13 != '\r')) && ((cVar13 != '\x0e' && (cVar13 != '\x0f')))) &&
                 (cVar13 != '\x13')) {
                pbVar1 = (byte *)(*(int *)(iVar6 + 0x40) * local_18 + local_1c + -1 + iVar14);
                *pbVar1 = *pbVar1 | 1;
              }
              if ((*(byte *)(*(int *)(iVar6 + 0x60) + iVar7) & 1) != 0) {
                iVar20 = *(int *)(iVar6 + 0x40) * local_18 + 1 + local_1c;
                cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
                if ((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                   (((cVar13 != '\f' && (cVar13 != '\r')) &&
                    ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))))) {
                  pbVar1 = (byte *)(*(int *)(iVar6 + 0x60) + iVar20);
                  *pbVar1 = *pbVar1 | 2;
                }
              }
              iVar20 = *(int *)(iVar6 + 0x60);
              if ((*(byte *)(iVar20 + iVar7) & 4) != 0) {
                iVar14 = *(int *)(iVar6 + 0x40) * (local_18 + 1) + local_1c;
                cVar13 = *(char *)(iVar14 + iVar20);
                if ((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                   (((cVar13 != '\f' && (cVar13 != '\r')) &&
                    ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))))) {
                  pbVar1 = (byte *)(iVar14 + iVar20);
                  *pbVar1 = *pbVar1 | 8;
                }
              }
              iVar20 = *(int *)(iVar6 + 0x60);
              if ((*(byte *)(iVar20 + iVar7) & 8) != 0) {
                iVar14 = *(int *)(iVar6 + 0x40) * (local_18 + -1) + local_1c;
                cVar13 = *(char *)(iVar14 + iVar20);
                if (((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                    ((cVar13 != '\f' && (cVar13 != '\r')))) &&
                   ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))) {
                  pbVar1 = (byte *)(iVar14 + iVar20);
                  *pbVar1 = *pbVar1 | 4;
                }
              }
            }
          }
          else {
            if ((bVar22 & 2) != 0) {
              iVar20 = iVar20 * local_18 + -1 + local_1c;
              cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
              if ((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                 (((cVar13 != '\f' && (cVar13 != '\r')) &&
                  ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))))) {
                pbVar1 = (byte *)(iVar20 + *(int *)(iVar6 + 100));
                *pbVar1 = *pbVar1 | 0x11;
              }
            }
            if ((*(byte *)(iVar7 + *(int *)(iVar6 + 100)) & 1) != 0) {
              iVar20 = *(int *)(iVar6 + 0x40) * local_18 + 1 + local_1c;
              cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
              if (((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                  ((cVar13 != '\f' && (cVar13 != '\r')))) &&
                 ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))) {
                pbVar1 = (byte *)(*(int *)(iVar6 + 100) + iVar20);
                *pbVar1 = *pbVar1 | 0x12;
              }
            }
            if ((*(byte *)(iVar7 + *(int *)(iVar6 + 100)) & 4) != 0) {
              iVar20 = *(int *)(iVar6 + 0x40) * (local_18 + 1) + local_1c;
              cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
              if (((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                  ((cVar13 != '\f' && (cVar13 != '\r')))) &&
                 ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))) {
                pbVar1 = (byte *)(iVar20 + *(int *)(iVar6 + 100));
                *pbVar1 = *pbVar1 | 0x18;
              }
            }
            if ((*(byte *)(iVar7 + *(int *)(iVar6 + 100)) & 8) != 0) {
              iVar20 = *(int *)(iVar6 + 0x40) * (local_18 + -1) + local_1c;
              cVar13 = *(char *)(iVar20 + *(int *)(iVar6 + 0x60));
              if ((((cVar13 != '\x03') && (cVar13 != '\a')) && (cVar13 != '\v')) &&
                 (((cVar13 != '\f' && (cVar13 != '\r')) &&
                  ((cVar13 != '\x0e' && ((cVar13 != '\x0f' && (cVar13 != '\x13')))))))) {
                pbVar1 = (byte *)(iVar20 + *(int *)(iVar6 + 100));
                *pbVar1 = *pbVar1 | 0x14;
              }
            }
          }
LAB_007d674c:
          iVar20 = *(int *)(iVar6 + 0x40);
          local_1c = local_1c + 1;
        } while (local_1c < iVar20 + -2);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar6 + 0x44) + -2);
  }
  iVar20 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -2) {
    do {
      iVar14 = *(int *)(iVar6 + 0x40);
      iVar7 = 1;
      if (1 < iVar14 + -2) {
        do {
          iVar14 = iVar14 * iVar20 + iVar7;
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x11') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x04')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 3;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x14') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x01')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 7;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x14') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x02')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 0xb;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x12') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x04')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 0xc;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x18') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x01')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 0xd;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x11') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\b')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 0xe;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x12') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\b')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 0xf;
          }
          if ((*(char *)(*(int *)(iVar6 + 100) + iVar14) == '\x18') &&
             (*(char *)(iVar14 + *(int *)(iVar6 + 0x60)) == '\x02')) {
            *(undefined1 *)(*(int *)(iVar6 + 100) + iVar14) = 0;
            *(undefined1 *)(iVar14 + *(int *)(iVar6 + 0x60)) = 3;
          }
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4);
          *pbVar1 = *pbVar1 | *(byte *)(iVar14 + *(int *)(iVar6 + 0x60));
          pbVar1 = (byte *)(*(int *)(iVar6 + 0x3c) + (*(int *)(iVar6 + 0x40) * iVar20 + iVar7) * 4);
          *pbVar1 = *pbVar1 | *(byte *)(*(int *)(iVar6 + 100) + iVar14);
          iVar14 = *(int *)(iVar6 + 0x40);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar14 + -2);
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(iVar6 + 0x44) + -2);
  }
  iVar20 = 1;
  if (1 < *(int *)(iVar6 + 0x44) + -1) {
    iVar14 = 8;
    do {
      iVar7 = *(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x40) * iVar20 * 4;
      *(undefined1 *)(iVar7 + 1) = *(undefined1 *)(iVar7 + 0xd);
      iVar7 = *(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x40) * iVar20 * 4;
      *(undefined1 *)(iVar7 + 5) = *(undefined1 *)(iVar7 + 0xd);
      iVar7 = *(int *)(iVar6 + 0x40) * iVar14;
      *(undefined1 *)(iVar7 + -7 + *(int *)(iVar6 + 0x3c)) =
           *(undefined1 *)(iVar7 + -0xf + *(int *)(iVar6 + 0x3c));
      iVar7 = *(int *)(iVar6 + 0x40) * iVar14;
      *(undefined1 *)(iVar7 + -0xb + *(int *)(iVar6 + 0x3c)) =
           *(undefined1 *)(iVar7 + -0xf + *(int *)(iVar6 + 0x3c));
      iVar20 = iVar20 + 1;
      iVar14 = iVar14 + 4;
    } while (iVar20 < *(int *)(iVar6 + 0x44) + -1);
  }
  ExceptionList = local_10;
  return;
}


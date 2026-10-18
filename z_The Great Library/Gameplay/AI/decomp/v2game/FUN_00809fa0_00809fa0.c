// FUN_00809fa0 @ 00809fa0 body=[[00809fa0, 0080a0ae] [0080a0b2, 0080a141] [0080a14a, 0080a188] [0080a18c, 0080a1a2] [0080a1a6, 0080a28d] [0080a291, 0080a2ae] [0080a2b2, 0080a2cd] [0080a2d1, 0080a3ca] [0080a3ce, 0080a3dd] [0080a3e1, 0080a41a] [0080a41e, 0080a439] [0080a43d, 0080a453] [0080a457, 0080a5e2] [0080a5e6, 0080a5f5] [0080a5f9, 0080a632] [0080a636, 0080a651] [0080a655, 0080a66b] [0080a66f, 0080a68c] [0080a696, 0080a69f] [0080a6a3, 0080a6dc] [0080a6e0, 0080a6fb] [0080a6ff, 0080a715] [0080a719, 0080a735] [0080a739, 0080a759] [0080a75d, 0080a778] [0080a77c, 0080a798] [0080a79c, 0080a7ae]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00809fa0(void)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  short *psVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  uint *local_108;
  uint *local_104;
  char *******pppppppcStack_100;
  undefined4 local_e8 [3];
  int local_dc;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_cc [5];
  uint local_b8;
  undefined1 *local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined **local_98 [5];
  uint local_84;
  undefined4 local_74;
  uint local_70;
  int local_68;
  char local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_34;
  char *******local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59042;
  local_10 = ExceptionList;
  pppppppcStack_100 = (char *******)0x809fd7;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  pppppppcStack_100 = (char *******)0x809fed;
  FUN_004367c0();
  local_8._0_1_ = 1;
  iVar2 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar2 == 1) {
    pppppppcStack_100 = (char *******)0xffffffff;
    local_104 = (uint *)0x0;
    local_108 = local_50;
    uStack_10c = 0x80a010;
    FUN_00408ed0();
  }
  pppppppcStack_100 = (char *******)0x16;
  local_104 = (uint *)0xe1b510;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
  local_108 = (uint *)0x80a02c;
  FUN_00409350();
  local_8._0_1_ = 2;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 2;
  pppppppcStack_100 = (char *******)local_cc;
  if (iVar2 == 2) {
    local_104 = local_50;
    local_108 = local_e8;
    uStack_10c = 0x80a084;
    local_8._0_1_ = uVar1;
    local_108 = (uint *)FUN_00436de0();
    pppppppcStack_100 = (char *******)0xffffffff;
    local_104 = (uint *)0x0;
    local_8._0_1_ = 4;
    uStack_10c = 0x80a096;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_d4) {
      pppppppcStack_100 = (char *******)local_e8[0];
      goto LAB_0080a0aa;
    }
  }
  else {
    pppppppcStack_100 = (char *******)local_30;
    local_104 = (uint *)0x80a04a;
    local_108 = (uint *)FUN_00988f20();
    pppppppcStack_100 = (char *******)0xffffffff;
    local_104 = (uint *)0x0;
    local_8._0_1_ = 3;
    uStack_10c = 0x80a05a;
    FUN_00408ed0();
    local_8._0_1_ = 2;
    if (0xf < local_d4) {
      pppppppcStack_100 = (char *******)local_e8[0];
LAB_0080a0aa:
      local_8._0_1_ = 2;
                    /* WARNING: Subroutine does not return */
      local_104 = (uint *)&UNK_0080a0af;
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 2;
  if (local_1c < 0x10) {
    pppppppcStack_100 = (char *******)local_30;
LAB_0080a0cd:
    if (*(char *)pppppppcStack_100 == '\0') goto LAB_0080a74f;
    local_104 = (uint *)0x80a0db;
    iVar2 = PHYSFS_exists();
    if (iVar2 == 0) goto LAB_0080a74f;
    local_b0 = local_118;
    local_104 = (uint *)0xf;
    local_108 = (uint *)0x0;
    local_118[0] = 0;
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_98,local_30,0);
    local_8._0_1_ = 5;
    if (local_60 == '\0') {
      pppppppcStack_100 = (char *******)0x4;
      local_104 = (uint *)&local_14;
      local_14 = 0;
      local_108 = (uint *)0x80a166;
      FUN_00992f20();
      if (local_14 == 3) {
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_8._0_1_ = 6;
        pppppppcStack_100 = (char *******)0x80a1e8;
        FUN_0080de50();
        iVar2 = 0;
        if (0 < local_14) {
          iVar5 = local_a8 + 2;
          do {
            pppppppcStack_100 = (char *******)0x1;
            local_104 = (uint *)(iVar5 + 3);
            local_108 = (uint *)0x80a209;
            FUN_00992f20();
            pppppppcStack_100 = (char *******)0x2;
            local_108 = (uint *)0x80a217;
            local_104 = (uint *)iVar5;
            FUN_00992f20();
            pppppppcStack_100 = (char *******)0x2;
            local_104 = (uint *)(iVar5 + -2);
            local_108 = (uint *)0x80a228;
            FUN_00992f20();
            pppppppcStack_100 = (char *******)0x1;
            local_104 = (uint *)(iVar5 + 2);
            local_108 = (uint *)0x80a239;
            FUN_00992f20();
            pppppppcStack_100 = (char *******)0x1;
            local_104 = (uint *)(iVar5 + 4);
            local_108 = (uint *)0x80a24a;
            FUN_00992f20();
            pppppppcStack_100 = (char *******)0x1;
            local_104 = (uint *)(iVar5 + 5);
            local_108 = (uint *)0x80a25b;
            FUN_00992f20();
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 8;
          } while (iVar2 < local_14);
        }
        pppppppcStack_100 = (char *******)0x4;
        local_104 = (uint *)&local_14;
        local_14 = 0;
        local_108 = (uint *)0x80a278;
        FUN_00992f20();
        if (local_14 == 4) {
          local_dc = 0;
          local_d8 = 0;
          local_d4 = 0;
          local_8._0_1_ = 7;
          pppppppcStack_100 = (char *******)0x80a318;
          FUN_0080de50();
          iVar2 = 0;
          if (0 < local_14) {
            iVar5 = local_dc + 2;
            do {
              pppppppcStack_100 = (char *******)0x1;
              local_104 = (uint *)(iVar5 + 3);
              local_108 = (uint *)0x80a339;
              FUN_00992f20();
              pppppppcStack_100 = (char *******)0x2;
              local_108 = (uint *)0x80a347;
              local_104 = (uint *)iVar5;
              FUN_00992f20();
              pppppppcStack_100 = (char *******)0x2;
              local_104 = (uint *)(iVar5 + -2);
              local_108 = (uint *)0x80a358;
              FUN_00992f20();
              pppppppcStack_100 = (char *******)0x1;
              local_104 = (uint *)(iVar5 + 2);
              local_108 = (uint *)0x80a369;
              FUN_00992f20();
              pppppppcStack_100 = (char *******)0x1;
              local_104 = (uint *)(iVar5 + 4);
              local_108 = (uint *)0x80a37a;
              FUN_00992f20();
              pppppppcStack_100 = (char *******)0x1;
              local_104 = (uint *)(iVar5 + 5);
              local_108 = (uint *)0x80a38b;
              FUN_00992f20();
              iVar2 = iVar2 + 1;
              iVar5 = iVar5 + 8;
            } while (iVar2 < local_14);
          }
          pppppppcStack_100 = (char *******)0x4;
          local_104 = (uint *)&local_ac;
          local_ac = 0;
          local_108 = (uint *)0x80a3ae;
          FUN_00992f20();
          if (local_ac == 1) {
            iVar2 = local_a4 - local_a8 >> 3;
            local_34 = 0;
            if (0 < iVar2) {
              local_58 = (int)&DAT_00f09320 - local_a8;
              local_54 = 0xf09321 - local_a8;
              local_5c = (int)&DAT_00f09322 - local_a8;
              pcVar6 = &DAT_00f09324;
              pcVar3 = (char *)(local_a8 + 5);
              do {
                if ((((*pcVar3 != pcVar3[local_58]) ||
                     (*(short *)(pcVar3 + -3) != *(short *)(pcVar6 + -2))) ||
                    (*(short *)(pcVar3 + -5) != *(short *)(pcVar6 + -4))) ||
                   (((pcVar3[-1] != *pcVar6 || (pcVar3[1] != pcVar3[local_54])) ||
                    (pcVar3[2] != pcVar3[local_5c])))) goto LAB_0080a3bb;
                local_34 = local_34 + 1;
                pcVar6 = pcVar6 + 8;
                pcVar3 = pcVar3 + 8;
              } while (local_34 < iVar2);
            }
            local_34 = 0;
            if (0 < iVar2) {
              local_5c = (int)&DAT_00f09338 - local_dc;
              local_54 = 0xf0933a - local_dc;
              local_58 = (int)&DAT_00f0933c - local_dc;
              local_b0 = (undefined1 *)((int)&DAT_00f09338 + (3 - local_dc));
              psVar4 = (short *)(local_dc + 2);
              do {
                if (((*(char *)((int)psVar4 + 3) != local_b0[(int)psVar4]) ||
                    (*psVar4 != *(short *)(local_5c + (int)psVar4))) ||
                   ((psVar4[-1] != *(short *)(&DAT_00f09338 + local_34 * 2) ||
                    ((((char)psVar4[1] != *(char *)(local_54 + (int)psVar4) ||
                      ((char)psVar4[2] != *(char *)(local_58 + (int)psVar4))) ||
                     (*(char *)((int)psVar4 + 5) != *(char *)((0xf0933d - local_dc) + (int)psVar4)))
                    )))) {
                  if (local_dc != 0) {
                    pppppppcStack_100 = (char *******)local_dc;
                    /* WARNING: Subroutine does not return */
                    local_104 = (uint *)&UNK_0080a5e3;
                    FUN_00aae91b();
                  }
                  if (local_a8 != 0) {
                    pppppppcStack_100 = (char *******)local_a8;
                    /* WARNING: Subroutine does not return */
                    local_104 = (uint *)&UNK_0080a5f6;
                    FUN_00aae91b();
                  }
                  local_98[0] = &PTR_FUN_00e37dc0;
                  if (local_68 != 0) {
                    pppppppcStack_100 = (char *******)local_68;
                    local_104 = (uint *)0x80a610;
                    PHYSFS_close();
                    local_68 = 0;
                  }
                  local_98[0] = &PTR_FUN_00e3b540;
                  if (0xf < local_70) {
                    pppppppcStack_100 = (char *******)local_84;
                    /* WARNING: Subroutine does not return */
                    local_104 = (uint *)&UNK_0080a633;
                    FUN_00aae91b();
                  }
                  local_70 = 0xf;
                  local_74 = 0;
                  local_84 = local_84 & 0xffffff00;
                  if (0xf < local_1c) {
                    pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
                    local_104 = (uint *)&UNK_0080a652;
                    FUN_00aae91b();
                  }
                  local_1c = 0xf;
                  local_20 = 0;
                  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
                  if (0xf < local_3c) {
                    pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
                    local_104 = (uint *)&UNK_0080a66c;
                    FUN_00aae91b();
                  }
                  goto LAB_0080a785;
                }
                local_34 = local_34 + 1;
                psVar4 = psVar4 + 4;
              } while (local_34 < iVar2);
            }
            if (local_dc != 0) {
              pppppppcStack_100 = (char *******)local_dc;
                    /* WARNING: Subroutine does not return */
              local_104 = (uint *)&UNK_0080a68d;
              FUN_00aae91b();
            }
            if (local_a8 != 0) {
              pppppppcStack_100 = (char *******)local_a8;
                    /* WARNING: Subroutine does not return */
              local_104 = (uint *)&UNK_0080a6a0;
              FUN_00aae91b();
            }
            local_98[0] = &PTR_FUN_00e37dc0;
            if (local_68 != 0) {
              pppppppcStack_100 = (char *******)local_68;
              local_104 = (uint *)0x80a6ba;
              PHYSFS_close();
              local_68 = 0;
            }
            local_98[0] = &PTR_FUN_00e3b540;
            if (0xf < local_70) {
              pppppppcStack_100 = (char *******)local_84;
                    /* WARNING: Subroutine does not return */
              local_104 = (uint *)&UNK_0080a6dd;
              FUN_00aae91b();
            }
            local_70 = 0xf;
            local_74 = 0;
            local_84 = local_84 & 0xffffff00;
            if (0xf < local_1c) {
              pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
              local_104 = (uint *)&UNK_0080a6fc;
              FUN_00aae91b();
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
            if (local_3c < 0x10) {
              local_3c = 0xf;
              local_40 = 0;
              local_50[0] = local_50[0] & 0xffffff00;
              if (local_b8 < 0x10) {
                ExceptionList = local_10;
                return 1;
              }
              pppppppcStack_100 = (char *******)local_cc[0];
                    /* WARNING: Subroutine does not return */
              local_104 = (uint *)&UNK_0080a736;
              FUN_00aae91b();
            }
            pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a716;
            FUN_00aae91b();
          }
LAB_0080a3bb:
          if (local_dc != 0) {
            pppppppcStack_100 = (char *******)local_dc;
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a3cb;
            FUN_00aae91b();
          }
          if (local_a8 != 0) {
            pppppppcStack_100 = (char *******)local_a8;
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a3de;
            FUN_00aae91b();
          }
          local_98[0] = &PTR_FUN_00e37dc0;
          if (local_68 != 0) {
            pppppppcStack_100 = (char *******)local_68;
            local_104 = (uint *)0x80a3f8;
            PHYSFS_close();
            local_68 = 0;
          }
          local_98[0] = &PTR_FUN_00e3b540;
          if (0xf < local_70) {
            pppppppcStack_100 = (char *******)local_84;
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a41b;
            FUN_00aae91b();
          }
          local_84 = local_84 & 0xffffff00;
          local_74 = 0;
          local_70 = 0xf;
          if (0xf < local_1c) {
            pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a43a;
            FUN_00aae91b();
          }
          local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
          local_20 = 0;
          local_1c = 0xf;
          if (0xf < local_3c) {
            pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a454;
            FUN_00aae91b();
          }
          local_50[0] = local_50[0] & 0xffffff00;
          if (local_b8 < 0x10) {
            ExceptionList = local_10;
            return 0;
          }
          pppppppcStack_100 = (char *******)local_cc[0];
        }
        else {
          if (local_a8 != 0) {
            pppppppcStack_100 = (char *******)local_a8;
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a28e;
            FUN_00aae91b();
          }
          pppppppcStack_100 = (char *******)0x80a29c;
          FUN_00992d60();
          if (0xf < local_1c) {
            pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a2af;
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
          if (0xf < local_3c) {
            pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_104 = (uint *)&UNK_0080a2ce;
            FUN_00aae91b();
          }
          local_50[0] = local_50[0] & 0xffffff00;
          if (local_b8 < 0x10) {
            ExceptionList = local_10;
            return 0;
          }
          pppppppcStack_100 = (char *******)local_cc[0];
        }
      }
      else {
        pppppppcStack_100 = (char *******)0x80a17b;
        FUN_00992d60();
        if (0xf < local_1c) {
          pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
          local_104 = (uint *)&UNK_0080a189;
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
        if (0xf < local_3c) {
          pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
          local_104 = (uint *)&UNK_0080a1a3;
          FUN_00aae91b();
        }
        local_50[0] = local_50[0] & 0xffffff00;
        if (local_b8 < 0x10) {
          ExceptionList = local_10;
          return 0;
        }
        pppppppcStack_100 = (char *******)local_cc[0];
      }
      goto LAB_0080a794;
    }
    pppppppcStack_100 = (char *******)0x80a130;
    FUN_00992d60();
    if (0xf < local_1c) {
      pppppppcStack_100 = local_30[0];
                    /* WARNING: Subroutine does not return */
      local_104 = (uint *)&UNK_0080a142;
      FUN_00aae91b();
    }
  }
  else {
    pppppppcStack_100 = local_30[0];
    if (local_30[0] != (char *******)0x0) goto LAB_0080a0cd;
LAB_0080a74f:
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      local_104 = (uint *)&UNK_0080a75a;
      pppppppcStack_100 = local_30[0];
      FUN_00aae91b();
    }
  }
  local_30[0] = (char *******)((uint)local_30[0] & 0xffffff00);
  local_20 = 0;
  local_1c = 0xf;
  if (0xf < local_3c) {
    pppppppcStack_100 = (char *******)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_104 = (uint *)&UNK_0080a779;
    FUN_00aae91b();
  }
LAB_0080a785:
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_b8 < 0x10) {
    ExceptionList = local_10;
    return 0;
  }
  pppppppcStack_100 = (char *******)local_cc[0];
LAB_0080a794:
  local_1c = 0xf;
  local_20 = 0;
  local_3c = 0xf;
  local_40 = 0;
                    /* WARNING: Subroutine does not return */
  local_104 = (uint *)&UNK_0080a799;
  FUN_00aae91b();
}


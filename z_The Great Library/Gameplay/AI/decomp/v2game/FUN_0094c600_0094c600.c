// FUN_0094c600 @ 0094c600 body=[[0094c600, 0094c6ba] [0094c6be, 0094c6e7] [0094c6eb, 0094c7cc] [0094c7d0, 0094c7fa] [0094c7fe, 0094c820] [0094c824, 0094c83d] [0094c841, 0094c85b] [0094c85f, 0094c93c] [0094c940, 0094c964] [0094c968, 0094c98d] [0094c991, 0094c9b0] [0094c9b4, 0094c9ce] [0094c9d2, 0094ca1c] [0094ca20, 0094cb8e] [0094cb92, 0094cbb6] [0094cbba, 0094cbdf] [0094cbe3, 0094cc02] [0094cc06, 0094cc20] [0094cc24, 0094cd90] [0094cd94, 0094cdab] [0094cdaf, 0094cddc] [0094cde0, 0094ce24] [0094ce28, 0094ce6f] [0094ce73, 0094ce97] [0094ce9b, 0094cec0] [0094cec4, 0094cee3] [0094cee7, 0094cf6a] [0094cf6e, 0094d038] [0094d03c, 0094d05b] [0094d05f, 0094d084] [0094d088, 0094d0a7] [0094d0ab, 0094d0c5] [0094d0c9, 0094d174] [0094d178, 0094d1a0] [0094d1a4, 0094d1cd] [0094d1d1, 0094d1f4] [0094d1f8, 0094d216] [0094d21a, 0094d32b] [0094d32f, 0094d35c] [0094d360, 0094d39a] [0094d39e, 0094d4b1] [0094d4b5, 0094d4e2] [0094d4e6, 0094d517] [0094d51b, 0094d650] [0094d654, 0094d683] [0094d687, 0094d6ac] [0094d6b0, 0094d6d9] [0094d6dd, 0094d7b9] [0094d7bd, 0094d7ec] [0094d7f0, 0094d820] [0094d824, 0094d94b] [0094d94f, 0094d97e] [0094d982, 0094d9a7] [0094d9ab, 0094d9d4] [0094d9d8, 0094daeb] [0094daef, 0094db19] [0094db1d, 0094db46] [0094db4a, 0094db83] [0094db87, 0094dbc7]]


undefined1 * FUN_0094c600(int param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 uStack_27c;
  undefined4 local_268;
  uint local_254;
  undefined4 local_24c;
  uint local_238;
  undefined4 local_230;
  uint local_21c;
  undefined4 local_214;
  uint local_200;
  undefined4 local_1f8;
  uint local_1e4;
  uint local_1dc [4];
  undefined4 local_1cc;
  uint local_1c8;
  uint local_1c0;
  undefined4 local_1b0;
  uint local_1ac;
  uint local_1a4 [4];
  undefined4 local_194;
  uint local_190;
  uint local_188 [4];
  undefined4 local_178;
  uint local_174;
  undefined4 local_16c;
  undefined1 *local_168;
  uint local_164 [4];
  undefined4 local_154;
  uint local_150;
  uint local_148 [4];
  undefined4 local_138;
  uint local_134;
  uint local_12c [4];
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  byte *local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 *local_e4;
  undefined1 local_e0 [4];
  int local_dc;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [2];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  uint local_28;
  char local_1d;
  undefined2 *local_1c;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8373f;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_0094c63f:
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    uStack_27c = 0xded94d;
    *param_2 = 0;
    FUN_00409350();
    ExceptionList = local_10;
    return param_2;
  }
  uStack_27c = CONCAT44(0x94c63b,(undefined4)uStack_27c);
  ExceptionList = &local_10;
  cVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
  if (cVar4 == '\0') goto LAB_0094c63f;
  uStack_27c = 0x600e35b5c;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  uStack_27c = CONCAT44(local_78,0x94c695);
  uVar5 = FUN_00988f20();
  uStack_27c = CONCAT44(uVar5,local_e0);
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  if (0xf < local_118) {
    uStack_27c = CONCAT44(local_12c[0],&UNK_0094c6bb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c[0] = local_12c[0] & 0xffffff00;
  local_8._0_1_ = 5;
  if (0xf < local_64) {
    uStack_27c = CONCAT44(local_78[0],&UNK_0094c6e8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_27c = 0x200df8514;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  uStack_27c = 0x500dfdeac;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 7;
  uStack_27c = CONCAT44(0x94c73a,(undefined4)uStack_27c);
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 8;
  uStack_27c = CONCAT44(uVar5,0x94c74f);
  FUN_00988fa0();
  local_8._0_1_ = 9;
  uStack_27c = CONCAT44(local_58,0x94c767);
  uVar5 = FUN_00988f20();
  local_8._0_1_ = 10;
  uStack_27c = 0x400094c774;
  local_e4 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_e4 == (undefined4 *)0x0) {
    local_1c = (undefined2 *)0x0;
  }
  else {
    uStack_27c = CONCAT44(uVar5,local_e0);
    local_1c = (undefined2 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  uStack_27c = CONCAT44(&local_1c,local_3c);
  FUN_009e6810();
  if (0xf < local_b8) {
    uStack_27c = CONCAT44(local_cc[0],&UNK_0094c7cd);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  if (0xf < local_9c) {
    uStack_27c = CONCAT44(local_b0[0],&UNK_0094c7fb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_80) {
    uStack_27c = CONCAT44(local_94[0],&UNK_0094c821);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_28) {
    uStack_27c = CONCAT44(local_3c[0],&UNK_0094c83e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
    uStack_27c = CONCAT44(local_58[0],&UNK_0094c85c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_27c = 0x200df8514;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  uStack_27c = 0x900dfe8c8;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_e4 = (undefined4 *)(param_1 + 0x20);
  local_8._0_1_ = 0xd;
  uStack_27c = CONCAT44(0x94c8b0,(undefined4)uStack_27c);
  uVar5 = FUN_0055dd40();
  local_8._0_1_ = 0xe;
  uStack_27c = CONCAT44(uVar5,0x94c8c5);
  FUN_00988fa0();
  local_8._0_1_ = 0xf;
  uStack_27c = CONCAT44(local_58,0x94c8dd);
  uVar5 = FUN_00988f20();
  local_8._0_1_ = 0x10;
  uStack_27c = 0x400094c8ea;
  local_5c = FUN_00aae9af();
  local_8._0_1_ = 0x11;
  if (local_5c == 0) {
    local_1c = (undefined2 *)0x0;
  }
  else {
    uStack_27c = CONCAT44(uVar5,local_e0);
    local_1c = (undefined2 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x10;
  uStack_27c = CONCAT44(&local_1c,local_3c);
  FUN_009e6810();
  if (0xf < local_80) {
    uStack_27c = CONCAT44(local_94[0],&UNK_0094c93d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_9c) {
    uStack_27c = CONCAT44(local_b0[0],&UNK_0094c965);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  if (0xf < local_b8) {
    uStack_27c = CONCAT44(local_cc[0],&UNK_0094c98e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  if (0xf < local_28) {
    uStack_27c = CONCAT44(local_3c[0],&UNK_0094c9b1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
    uStack_27c = CONCAT44(local_58[0],&UNK_0094c9cf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_27c = CONCAT44(0x94c9e3,(undefined4)uStack_27c);
  FUN_009a9960();
  local_8._0_1_ = 0x12;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0x12;
  puVar2 = (undefined2 *)((local_f0 - (int)local_f4) / 0x1c);
  local_1d = '\0';
  local_11 = '\0';
  pbVar11 = local_f4;
  if (0 < (int)puVar2) {
    do {
      local_1c = puVar2;
      pbVar12 = pbVar11;
      if (0xf < *(uint *)(pbVar11 + 0x14)) {
        pbVar12 = *(byte **)pbVar11;
      }
      pcVar13 = "THIRD";
      do {
        bVar1 = *pbVar12;
        bVar14 = bVar1 < (byte)*pcVar13;
        if (bVar1 != *pcVar13) {
LAB_0094ca53:
          iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_0094ca58;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar12[1];
        bVar14 = bVar1 < (byte)pcVar13[1];
        if (bVar1 != pcVar13[1]) goto LAB_0094ca53;
        pbVar12 = pbVar12 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0094ca58:
      if (iVar6 == 0) {
        local_11 = '\x01';
      }
      else {
        pbVar12 = pbVar11;
        if (0xf < *(uint *)(pbVar11 + 0x14)) {
          pbVar12 = *(byte **)pbVar11;
        }
        pcVar13 = "STATE";
        do {
          bVar1 = *pbVar12;
          bVar14 = bVar1 < (byte)*pcVar13;
          if (bVar1 != *pcVar13) {
LAB_0094ca92:
            iVar6 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_0094ca97;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar12[1];
          bVar14 = bVar1 < (byte)pcVar13[1];
          if (bVar1 != pcVar13[1]) goto LAB_0094ca92;
          pbVar12 = pbVar12 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0094ca97:
        if (iVar6 == 0) {
          local_1d = '\x01';
        }
      }
      local_1c = (undefined2 *)((int)local_1c + -1);
      pbVar11 = pbVar11 + 0x1c;
      puVar2 = local_1c;
    } while (local_1c != (undefined2 *)0x0);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    if (local_11 != '\0') {
      uStack_27c = 0x1800e35b6c;
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      local_8._0_1_ = uVar3;
      FUN_00409350();
      uStack_27c = CONCAT44(local_78,local_34);
      local_8._0_1_ = 0x19;
      FUN_009a8ee0();
      local_8._0_1_ = 0x1a;
      uStack_27c = CONCAT44(0x94cd44,(undefined4)uStack_27c);
      iVar6 = FUN_00475500();
      uStack_27c = *(undefined8 *)(iVar6 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_18 = 1;
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      uStack_27c = CONCAT44(0x94cd79,(undefined4)uStack_27c);
      FUN_009adb70();
      if (local_30 != 0) {
        uStack_27c = CONCAT44(0x94cd88,(undefined4)uStack_27c);
        FUN_009e6a80();
        uStack_27c = CONCAT44(local_30,&UNK_0094cd91);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      if (0xf < local_64) {
        uStack_27c = CONCAT44(local_78[0],&UNK_0094cdac);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
      if (local_f4 != (byte *)0x0) {
        uStack_27c = CONCAT44(0x94cdd1,(undefined4)uStack_27c);
        FUN_00413860();
        uStack_27c = CONCAT44(local_f4,&UNK_0094cddd);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_f4 = (byte *)0x0;
      local_f0 = 0;
      local_ec = 0;
      local_8 = 0x1c;
      uStack_27c = CONCAT44(0x94ce04,(undefined4)uStack_27c);
      FUN_009adb70();
      if (local_dc == 0) {
        ExceptionList = local_10;
        return param_2;
      }
      uStack_27c = CONCAT44(0x94ce19,(undefined4)uStack_27c);
      FUN_009e6a80();
      uStack_27c = CONCAT44(local_dc,&UNK_0094ce25);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    uStack_27c = 0x200df8514;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    uStack_27c = 0x500e35b64;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x14;
    uStack_27c = CONCAT44(0x94cb02,(undefined4)uStack_27c);
    uVar5 = FUN_0055dd40();
    local_8._0_1_ = 0x15;
    uStack_27c = CONCAT44(uVar5,0x94cb17);
    FUN_00988fa0();
    local_8._0_1_ = 0x16;
    uStack_27c = CONCAT44(local_58,0x94cb2f);
    uVar5 = FUN_00988f20();
    local_8._0_1_ = 0x17;
    uStack_27c = 0x400094cb3c;
    local_5c = FUN_00aae9af();
    local_8._0_1_ = 0x18;
    if (local_5c == 0) {
      local_1c = (undefined2 *)0x0;
    }
    else {
      uStack_27c = CONCAT44(uVar5,local_e0);
      local_1c = (undefined2 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 0x17;
    uStack_27c = CONCAT44(&local_1c,local_3c);
    FUN_009e6810();
    if (0xf < local_80) {
      uStack_27c = CONCAT44(local_94[0],&UNK_0094cb8f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      uStack_27c = CONCAT44(local_b0[0],&UNK_0094cbb7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    if (0xf < local_b8) {
      uStack_27c = CONCAT44(local_cc[0],&UNK_0094cbe0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_28) {
      uStack_27c = CONCAT44(local_3c[0],&UNK_0094cc03);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x12;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_27c = CONCAT44(local_58[0],&UNK_0094cc21);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0x12;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x1dc) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      uStack_27c = 0x200df8514;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = (uint)local_58[0]._1_3_ << 8;
      FUN_00409350();
      local_8._0_1_ = 0x1d;
      uStack_27c = 0x500df9d48;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1e;
      uStack_27c = CONCAT44(local_cc,0x94cca1);
      uVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                              *(int *)(param_1 + 0x28) * 4) + 0x188) + 0x20))();
      local_8._0_1_ = 0x1f;
      uStack_27c = CONCAT44(uVar5,0x94ccb6);
      FUN_00988fa0();
      local_8._0_1_ = 0x20;
      uStack_27c = CONCAT44(local_58,0x94ccce);
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0x21;
      uStack_27c = 0x400094ccdb;
      local_5c = FUN_00aae9af();
      local_8._0_1_ = 0x22;
      if (local_5c == 0) {
        local_1c = (undefined2 *)0x0;
      }
      else {
        uStack_27c = CONCAT44(uVar5,local_e0);
        local_1c = (undefined2 *)FUN_009a9ce0();
      }
      local_8 = CONCAT31(local_8._1_3_,0x21);
      uStack_27c = CONCAT44(&local_1c,local_3c);
      FUN_009e6810();
      if (0xf < local_80) {
        uStack_27c = CONCAT44(local_94[0],&UNK_0094ce70);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      if (0xf < local_9c) {
        uStack_27c = CONCAT44(local_b0[0],&UNK_0094ce98);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (0xf < local_b8) {
        uStack_27c = CONCAT44(local_cc[0],&UNK_0094cec1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b8 = 0xf;
      local_bc = 0;
      local_cc[0] = local_cc[0] & 0xffffff00;
      if (0xf < local_28) {
        uStack_27c = CONCAT44(local_3c[0],&UNK_0094cee4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      goto LAB_0094d0b4;
    }
    if (local_1d != '\0') {
      uStack_27c = CONCAT44(0x94cf0b,(undefined4)uStack_27c);
      FUN_009885d0();
      uStack_27c = CONCAT44(local_58,local_34);
      local_8._0_1_ = 0x23;
      FUN_009a8ee0();
      local_8._0_1_ = 0x24;
      uStack_27c = CONCAT44(0x94cf26,(undefined4)uStack_27c);
      iVar6 = FUN_00475500();
      uStack_27c = *(undefined8 *)(iVar6 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_18 = 1;
      local_8._0_1_ = 0x23;
      uStack_27c = CONCAT44(local_34,0x94cf5c);
      FUN_009a9740();
      if (0xf < local_44) {
        uStack_27c = CONCAT44(local_58[0],&UNK_0094cf6b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      uStack_27c = CONCAT44(0x94cf86,(undefined4)uStack_27c);
      FUN_0040b3c0();
      goto LAB_0094dbab;
    }
  }
  else {
    uStack_27c = 0x200df8514;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = (uint)local_58[0]._1_3_ << 8;
    FUN_00409350();
    local_8._0_1_ = 0x25;
    uStack_27c = 0x500df9d48;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x26;
    uStack_27c = CONCAT44(local_cc,0x94cfe0);
    uVar5 = FUN_00475d50();
    local_8._0_1_ = 0x27;
    uStack_27c = CONCAT44(uVar5,0x94cff8);
    FUN_00988fa0();
    local_8._0_1_ = 0x28;
    uStack_27c = CONCAT44(local_58,0x94d010);
    uVar5 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,0x29);
    uStack_27c = CONCAT44(uVar5,0x94d023);
    FUN_009a9980();
    if (0xf < local_80) {
      uStack_27c = CONCAT44(local_94[0],&UNK_0094d039);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      uStack_27c = CONCAT44(local_b0[0],&UNK_0094d05c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    if (0xf < local_b8) {
      uStack_27c = CONCAT44(local_cc[0],&UNK_0094d085);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_64) {
      uStack_27c = CONCAT44(local_78[0],&UNK_0094d0a8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
LAB_0094d0b4:
    local_80 = 0xf;
    local_84 = 0;
    local_9c = 0xf;
    local_a0 = 0;
    local_b8 = 0xf;
    local_bc = 0;
    local_8._0_1_ = 0x12;
    if (0xf < local_44) {
      uStack_27c = CONCAT44(local_58[0],&UNK_0094d0c6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0x12;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uStack_27c = 0x200dedc20;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x2a;
    uStack_27c = 0x600dfe544;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x2b;
    uStack_27c = CONCAT44(local_cc,0x94d123);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))();
    local_8._0_1_ = 0x2c;
    uStack_27c = CONCAT44(uVar5,0x94d138);
    FUN_00988fa0();
    local_8._0_1_ = 0x2d;
    uStack_27c = CONCAT44(local_58,0x94d150);
    uVar5 = FUN_00988f20();
    local_8._0_1_ = 0x2e;
    uStack_27c = CONCAT44(uVar5,0x94d163);
    FUN_009a9980();
    if (0xf < local_80) {
      uStack_27c = CONCAT44(local_94[0],&UNK_0094d175);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      uStack_27c = CONCAT44(local_b0[0],&UNK_0094d1a1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    if (0xf < local_b8) {
      uStack_27c = CONCAT44(local_cc[0],&UNK_0094d1ce);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_64) {
      uStack_27c = CONCAT44(local_78[0],&UNK_0094d1f5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x12;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_44) {
      uStack_27c = CONCAT44(local_58[0],&UNK_0094d217);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0x12;
  uStack_27c = CONCAT44(0x94d21f,(undefined4)uStack_27c);
  iVar6 = FUN_00475500();
  uStack_27c = *(undefined8 *)(iVar6 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
  local_8._0_1_ = 0x2f;
  piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  local_11 = '\0';
  for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    if (*piVar7 == 0xa2f) {
      uStack_27c = 0x100dee2cc;
      FUN_00448740();
      if (*(char *)(*(int *)(param_1 + 0xc) + 0x1dc) == '\0') {
        uStack_27c = CONCAT44(local_b0,0x94d2d8);
        uVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                                *(int *)(param_1 + 0x28) * 4) + 0x188) + 0x20))();
        local_8 = 0x31;
        local_18 = 4;
      }
      else {
        uStack_27c = CONCAT44(local_cc,0x94d2a2);
        uVar5 = FUN_00475d50();
        local_8 = CONCAT31(local_8._1_3_,0x30);
        local_18 = 2;
      }
      uStack_27c = CONCAT44(uVar5,local_94);
      FUN_0042c180();
      uStack_27c = 0xffffffff00000000;
      local_8 = 0x32;
      FUN_00448aa0();
      if (0xf < local_80) {
        uStack_27c = CONCAT44(local_94[0],&UNK_0094d32c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      if ((local_18 & 4) != 0) {
        local_18 = local_18 & 0xfffffffb;
        if (0xf < local_9c) {
          uStack_27c = CONCAT44(local_b0[0],&UNK_0094d35d);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_9c = 0xf;
        local_a0 = 0;
        local_b0[0] = local_b0[0] & 0xffffff00;
      }
      local_8._0_1_ = 0x2f;
      local_8._1_3_ = 0;
      if ((local_18 & 2) != 0) {
        local_18 = local_18 & 0xfffffffd;
        if (0xf < local_b8) {
          uStack_27c = CONCAT44(local_cc[0],&UNK_0094d39b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b8 = 0xf;
        local_bc = 0;
        local_cc[0] = local_cc[0] & 0xffffff00;
      }
      local_11 = '\x01';
      break;
    }
  }
  local_8._0_1_ = 0x2f;
  piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120);
  if (piVar7 != (int *)0x0) {
LAB_0094d3d0:
    if (*piVar7 != 0xa30) goto code_r0x0094d3d8;
    pcVar13 = ". ";
    if (local_11 == '\0') {
      pcVar13 = "\n";
    }
    pcVar8 = pcVar13;
    do {
      cVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar4 != '\0');
    uStack_27c = CONCAT44((int)pcVar8 - (int)(pcVar13 + 1),pcVar13);
    FUN_00448740();
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x1dc) == '\0') {
      uStack_27c = CONCAT44(local_78,0x94d45f);
      uVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                              *(int *)(param_1 + 0x28) * 4) + 0x188) + 0x20))();
      local_8 = 0x34;
      local_18 = local_18 | 0x10;
    }
    else {
      uStack_27c = CONCAT44(local_1dc,0x94d42a);
      uVar5 = FUN_00475d50();
      local_8 = CONCAT31(local_8._1_3_,0x33);
      local_18 = local_18 | 8;
    }
    uStack_27c = CONCAT44(uVar5,local_12c);
    FUN_0042c180();
    uStack_27c = 0xffffffff00000000;
    local_8 = 0x35;
    FUN_00448aa0();
    if (0xf < local_118) {
      uStack_27c = CONCAT44(local_12c[0],&UNK_0094d4b2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_118 = 0xf;
    local_11c = 0;
    local_12c[0] = local_12c[0] & 0xffffff00;
    if ((local_18 & 0x10) != 0) {
      local_18 = local_18 & 0xffffffef;
      if (0xf < local_64) {
        uStack_27c = CONCAT44(local_78[0],&UNK_0094d4e3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_64 = 0xf;
      local_68 = 0;
      local_78[0] = local_78[0] & 0xffffff00;
    }
    local_8._0_1_ = 0x2f;
    local_8._1_3_ = 0;
    if ((local_18 & 8) != 0) {
      local_18 = local_18 & 0xfffffff7;
      if (0xf < local_1c8) {
        uStack_27c = CONCAT44(local_1dc[0],&UNK_0094d518);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c8 = 0xf;
      local_1cc = 0;
      local_1dc[0] = local_1dc[0] & 0xffffff00;
    }
    local_11 = '\x01';
  }
LAB_0094d535:
  local_8._0_1_ = 0x2f;
  for (piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120); piVar7 != (int *)0x0;
      piVar7 = (int *)piVar7[2]) {
    if (*piVar7 == 0x8a4) {
      local_5c = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x388);
      local_1c = (undefined2 *)&DAT_00e35bb4;
      if (local_11 == '\0') {
        local_1c = &DAT_00dee2cc;
      }
      uStack_27c = CONCAT44(local_1a4,0x94d5a2);
      uVar5 = FUN_009888f0();
      local_168 = (undefined1 *)&uStack_27c;
      uStack_27c._4_4_ = 0;
      local_8._0_1_ = 0x36;
      FUN_00401000();
      iVar6 = FUN_00b31c00();
      uVar9 = __alldiv((longlong)local_5c * (longlong)iVar6,1000,0);
      uStack_27c = CONCAT44(uStack_27c._4_4_,uVar9);
      FUN_00988a50();
      uStack_27c = CONCAT44(uVar5,"YEARS");
      local_8._0_1_ = 0x37;
      uVar5 = FUN_0043ec10();
      local_8._0_1_ = 0x38;
      uStack_27c = CONCAT44(uVar5,0x94d626);
      FUN_00988fa0();
      uStack_27c = 0xffffffff00000000;
      local_8._0_1_ = 0x39;
      FUN_00448aa0();
      if (0xf < local_1e4) {
        uStack_27c = CONCAT44(local_1f8,&UNK_0094d651);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_21c) {
        uStack_27c = CONCAT44(local_230,&UNK_0094d684);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_254) {
        uStack_27c = CONCAT44(local_268,&UNK_0094d6ad);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x2f;
      if (0xf < local_190) {
        uStack_27c = CONCAT44(local_1a4[0],&UNK_0094d6da);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_190 = 0xf;
      local_194 = 0;
      local_1a4[0] = local_1a4[0] & 0xffffff00;
      local_11 = '\x01';
      break;
    }
  }
  local_8._0_1_ = 0x2f;
  for (piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120); piVar7 != (int *)0x0;
      piVar7 = (int *)piVar7[2]) {
    if (*piVar7 == 0x6c2) {
      uStack_27c = 0xe2025c0094d728;
      FUN_004471e0();
      local_8._0_1_ = 0x3a;
      local_1c = (undefined2 *)&DAT_00e35bb4;
      if (local_11 == '\0') {
        local_1c = &DAT_00dee2cc;
      }
      uStack_27c = CONCAT44(local_58,local_34);
      FUN_009a8ee0();
      local_8._0_1_ = 0x3b;
      uStack_27c = CONCAT44(0x94d757,(undefined4)uStack_27c);
      iVar6 = FUN_00475500();
      uStack_27c = *(undefined8 *)(iVar6 + 0x74);
      uVar5 = FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_8._0_1_ = 0x3c;
      uStack_27c = CONCAT44(uVar5,0x94d78f);
      FUN_00988fa0();
      uStack_27c = 0xffffffff00000000;
      local_8._0_1_ = 0x3d;
      FUN_00448aa0();
      if (0xf < local_238) {
        uStack_27c = CONCAT44(local_24c,&UNK_0094d7ba);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_200) {
        uStack_27c = CONCAT44(local_214,&UNK_0094d7ed);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x3a;
      uStack_27c = CONCAT44(local_34,0x94d80f);
      FUN_009a9740();
      local_8._0_1_ = 0x2f;
      if (0xf < local_44) {
        uStack_27c = CONCAT44(local_58[0],&UNK_0094d821);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      local_11 = '\x01';
      break;
    }
  }
  local_8._0_1_ = 0x2f;
  for (piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120); piVar7 != (int *)0x0;
      piVar7 = (int *)piVar7[2]) {
    if (*piVar7 == 0x8a5) {
      local_5c = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x38c);
      local_1c = (undefined2 *)&DAT_00e35bb4;
      if (local_11 == '\0') {
        local_1c = &DAT_00dee2cc;
      }
      uStack_27c = CONCAT44(local_164,0x94d8a1);
      uVar5 = FUN_009888f0();
      local_168 = (undefined1 *)&uStack_27c;
      uStack_27c._4_4_ = 0;
      local_8._0_1_ = 0x3e;
      FUN_00401000();
      iVar6 = FUN_00b31c00();
      uVar9 = __alldiv((longlong)iVar6 * (longlong)local_5c,1000,0);
      uStack_27c = CONCAT44(uStack_27c._4_4_,uVar9);
      FUN_00988a50();
      uStack_27c = CONCAT44(uVar5,"YEARS");
      local_8._0_1_ = 0x3f;
      uVar5 = FUN_0043ec10();
      local_8._0_1_ = 0x40;
      uStack_27c = CONCAT44(uVar5,0x94d921);
      FUN_00988fa0();
      uStack_27c = 0xffffffff00000000;
      local_8._0_1_ = 0x41;
      FUN_00448aa0();
      if (0xf < local_1ac) {
        uStack_27c = CONCAT44(local_1c0,&UNK_0094d94c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1ac = 0xf;
      local_1b0 = 0;
      local_1c0 = local_1c0 & 0xffffff00;
      if (0xf < local_174) {
        uStack_27c = CONCAT44(local_188[0],&UNK_0094d97f);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_174 = 0xf;
      local_178 = 0;
      local_188[0] = local_188[0] & 0xffffff00;
      if (0xf < local_134) {
        uStack_27c = CONCAT44(local_148[0],&UNK_0094d9a8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x2f;
      local_134 = 0xf;
      local_138 = 0;
      local_148[0] = local_148[0] & 0xffffff00;
      if (0xf < local_150) {
        uStack_27c = CONCAT44(local_164[0],&UNK_0094d9d5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = local_164[0] & 0xffffff00;
      local_11 = '\x01';
      break;
    }
  }
  local_8._0_1_ = 0x2f;
  for (piVar7 = *(int **)(*(int *)(param_1 + 0xc) + 0x120); piVar7 != (int *)0x0;
      piVar7 = (int *)piVar7[2]) {
    if (*piVar7 == 0x8a8) {
      iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x390);
      local_16c = *local_e4;
      iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_e4[1] * 4);
      uStack_27c = 1000;
      iVar10 = __alldiv((longlong)
                        (*(int *)(iVar10 + 0xea0) + *(int *)(*(int *)(iVar10 + 0xbcc) + 0x28c)) *
                        (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x394));
      uStack_27c = CONCAT44(iVar10 + iVar6,local_188);
      uVar5 = FUN_00988970();
      uStack_27c = CONCAT44(uVar5,local_148);
      local_8._0_1_ = 0x42;
      FUN_0042c180();
      local_8._0_1_ = 0x43;
      FUN_00988fa0();
      uStack_27c = 0xffffffff00000000;
      local_8._0_1_ = 0x44;
      FUN_00448aa0();
      if (0xf < local_150) {
        uStack_27c = CONCAT44(local_164[0],&UNK_0094daec);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_150 = 0xf;
      local_154 = 0;
      local_164[0] = local_164[0] & 0xffffff00;
      if (0xf < local_134) {
        uStack_27c = CONCAT44(local_148[0],&UNK_0094db1a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x2f;
      local_134 = 0xf;
      local_138 = 0;
      local_148[0] = local_148[0] & 0xffffff00;
      if (0xf < local_174) {
        uStack_27c = CONCAT44(local_188[0],&UNK_0094db47);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      break;
    }
  }
  local_8._0_1_ = 0x2f;
  uStack_27c = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0();
  local_18 = local_18 | 1;
  if (0xf < local_fc) {
    uStack_27c = CONCAT44(local_110,&UNK_0094db84);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110 = local_110 & 0xffffff00;
  uStack_27c = CONCAT44(0x94dba4,(undefined4)uStack_27c);
  FUN_0040b3c0();
LAB_0094dbab:
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_27c = CONCAT44(local_e0,0x94dbb3);
  FUN_009a9740();
  ExceptionList = local_10;
  return param_2;
code_r0x0094d3d8:
  piVar7 = (int *)piVar7[2];
  if (piVar7 == (int *)0x0) goto LAB_0094d535;
  goto LAB_0094d3d0;
}


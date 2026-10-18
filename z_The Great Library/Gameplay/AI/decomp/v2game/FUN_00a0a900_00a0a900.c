// FUN_00a0a900 @ 00a0a900 body=[[00a0a900, 00a0a988] [00a0a98c, 00a0aab8] [00a0aabc, 00a0aae6] [00a0aaea, 00a0ab09] [00a0ab0d, 00a0ab29] [00a0ab2d, 00a0ac3b] [00a0ac3f, 00a0ac69] [00a0ac6d, 00a0ac92] [00a0ac96, 00a0acbb] [00a0acbf, 00a0acde] [00a0ace2, 00a0acf8] [00a0acfc, 00a0ad12] [00a0ad16, 00a0ade4] [00a0ade8, 00a0ae09] [00a0ae0d, 00a0ae2c] [00a0ae30, 00a0ae4c] [00a0ae50, 00a0ae75] [00a0ae79, 00a0aef2] [00a0aef6, 00a0af01]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0a900(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  undefined1 local_2c8 [12];
  undefined4 uStack_2bc;
  int local_2b8;
  char *local_2b4;
  uint *puStack_2b0;
  uint local_158 [4];
  undefined4 local_148;
  uint local_144;
  uint local_138 [4];
  undefined4 local_128;
  uint local_124;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  undefined4 local_bc;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined1 local_7c [8];
  int local_74;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined **local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_44;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined4 local_20;
  int *local_1c;
  undefined1 local_16;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b559ce;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffd54;
  puStack_2b0 = (uint *)0xffffffff;
  local_20 = 0;
  local_2b4 = (char *)0x0;
  local_2b8 = in_ECX + 8;
  local_1c = DAT_01258b64;
  local_144 = 0xf;
  local_148 = 0;
  local_158[0] = local_158[0] & 0xffffff00;
  uStack_2bc = 0xa0a95f;
  ExceptionList = &pvStack_10;
  FUN_00408ed0();
  puStack_2b0 = local_158;
  local_8 = 0;
  local_2b4 = (char *)0xa0a96e;
  local_bc = FUN_009c1bd0();
  if (0xf < local_144) {
    puStack_2b0 = (uint *)local_158[0];
                    /* WARNING: Subroutine does not return */
    local_2b4 = &UNK_00a0a989;
    FUN_00aae91b();
  }
  iVar5 = *(int *)(in_ECX + 0x90);
  local_144 = 0xf;
  local_148 = 0;
  local_158[0] = local_158[0] & 0xffffff00;
  local_16 = iVar5 == 1;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = 0;
  local_8 = 1;
  if (iVar5 == 0) {
    pbVar4 = _DAT_013f0670;
    if (DAT_013f0684 < 0x10) {
      pbVar4 = &DAT_013f0670;
    }
    pcVar7 = "diplomacy";
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00a0aa10:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00a0aa15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00a0aa10;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00a0aa15:
    puStack_2b0 = (uint *)0x2;
    local_2b4 = "\";";
    if (iVar5 != 0) {
      local_a4 = 0xf;
      local_a8 = 0;
      local_b8[0] = (uint)local_b8[0]._1_3_ << 8;
      local_2b8 = 0xa0ab6d;
      FUN_00409350();
      puStack_2b0 = local_40;
      local_8._0_1_ = 7;
      local_2b4 = (char *)0xa0ab80;
      local_44 = FUN_00989330();
      local_8._0_1_ = 8;
      puStack_2b0 = (uint *)0x19;
      local_2b4 = "_users WHERE username = \"";
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      local_2b8 = 0xa0ab9f;
      FUN_00409350();
      local_8._0_1_ = 9;
      puStack_2b0 = (uint *)0xe;
      local_2b4 = "SELECT * FROM ";
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      local_2b8 = 0xa0abbb;
      FUN_00409350();
      puStack_2b0 = (uint *)&DAT_013f0670;
      local_8._0_1_ = 10;
      local_2b4 = (char *)0xa0abd2;
      FUN_00988f20();
      puStack_2b0 = &local_64;
      local_8._0_1_ = 0xb;
      local_2b4 = (char *)0xa0abe7;
      FUN_00988f20();
      puStack_2b0 = (uint *)local_44;
      local_8._0_1_ = 0xc;
      local_2b4 = (char *)0xa0abfc;
      FUN_00988f20();
      puStack_2b0 = local_b8;
      local_8._0_1_ = 0xd;
      local_2b4 = (char *)0xa0ac14;
      local_2b8 = FUN_00988f20();
      puStack_2b0 = (uint *)0xffffffff;
      local_2b4 = (char *)0x0;
      local_8 = CONCAT31(local_8._1_3_,0xe);
      uStack_2bc = 0xa0ac27;
      FUN_00408ed0();
      if (0xf < local_124) {
        puStack_2b0 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0ac3c;
        FUN_00aae91b();
      }
      local_124 = 0xf;
      local_128 = 0;
      local_138[0] = local_138[0] & 0xffffff00;
      if (0xf < local_100) {
        puStack_2b0 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0ac6a;
        FUN_00aae91b();
      }
      local_100 = 0xf;
      local_104 = 0;
      local_114 = local_114 & 0xffffff00;
      if (0xf < local_c8) {
        puStack_2b0 = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0ac93;
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      if (0xf < local_88) {
        puStack_2b0 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0acbc;
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      if (0xf < local_6c) {
        puStack_2b0 = (uint *)local_80;
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0acdf;
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (0xf < local_50) {
        puStack_2b0 = (uint *)local_64;
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0acf9;
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_2c) {
        puStack_2b0 = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
        local_2b4 = &UNK_00a0ad13;
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      puVar3 = puStack_2b0;
      if (local_a4 < 0x10) goto LAB_00a0ae79;
      puStack_2b0 = (uint *)local_b8[0];
      goto LAB_00a0ae71;
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    local_2b8 = 0xa0aa35;
    FUN_00409350();
    puStack_2b0 = local_138;
    local_8._0_1_ = 2;
    local_2b4 = (char *)0xa0aa4b;
    uVar6 = FUN_00989330();
    local_8._0_1_ = 3;
    puStack_2b0 = (uint *)0x26;
    local_2b4 = "SELECT * FROM users WHERE username = \"";
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    local_2b8 = 0xa0aa69;
    FUN_00409350();
    local_8._0_1_ = 4;
    local_2b4 = (char *)0xa0aa7c;
    puStack_2b0 = (uint *)uVar6;
    FUN_00988f20();
    puStack_2b0 = &local_64;
    local_8._0_1_ = 5;
    local_2b4 = (char *)0xa0aa91;
    local_2b8 = FUN_00988f20();
    puStack_2b0 = (uint *)0xffffffff;
    local_2b4 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,6);
    uStack_2bc = 0xa0aaa4;
    FUN_00408ed0();
    if (0xf < local_a4) {
      puStack_2b0 = (uint *)local_b8[0];
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0aab9;
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    if (0xf < local_100) {
      puStack_2b0 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0aae7;
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    if (0xf < local_6c) {
      puStack_2b0 = (uint *)local_80;
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ab0a;
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_124) {
      puStack_2b0 = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ab2a;
      FUN_00aae91b();
    }
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = local_138[0] & 0xffffff00;
    puVar3 = puStack_2b0;
    puStack_2b0 = (uint *)local_64;
    uVar2 = local_50;
  }
  else {
    puVar3 = puStack_2b0;
    if (iVar5 != 1) goto LAB_00a0ae79;
    puStack_2b0 = (uint *)0x2;
    local_2b4 = "\";";
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = (uint)local_b8[0]._1_3_ << 8;
    local_2b8 = 0xa0ad64;
    FUN_00409350();
    puStack_2b0 = local_dc;
    local_8._0_1_ = 0xf;
    local_2b4 = (char *)0xa0ad7a;
    uVar6 = FUN_00989330();
    local_8._0_1_ = 0x10;
    puStack_2b0 = (uint *)0xae;
    local_2b4 = 
    "SELECT *, (SELECT COUNT(score) AS position from diplomacy_ladder WHERE score > x.score ) as rank from users, diplomacy_ladder x WHERE x.user = users.id AND users.username = \""
    ;
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    local_2b8 = 0xa0ad9b;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_2b4 = (char *)0xa0adae;
    puStack_2b0 = (uint *)uVar6;
    FUN_00988f20();
    puStack_2b0 = local_b8;
    local_8._0_1_ = 0x12;
    local_2b4 = (char *)0xa0adc3;
    local_2b8 = FUN_00988f20();
    puStack_2b0 = (uint *)0xffffffff;
    local_2b4 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x13);
    uStack_2bc = 0xa0add6;
    FUN_00408ed0();
    if (0xf < local_2c) {
      puStack_2b0 = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ade5;
      FUN_00aae91b();
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_88) {
      puStack_2b0 = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ae0a;
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_6c) {
      puStack_2b0 = (uint *)local_80;
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ae2d;
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_c8) {
      puStack_2b0 = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
      local_2b4 = &UNK_00a0ae4d;
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    puVar3 = puStack_2b0;
    puStack_2b0 = (uint *)local_b8[0];
    uVar2 = local_a4;
  }
  local_70 = 0;
  local_6c = 0xf;
  if (0xf < uVar2) {
LAB_00a0ae71:
    local_6c = 0xf;
    local_70 = 0;
                    /* WARNING: Subroutine does not return */
    local_2b4 = &UNK_00a0ae76;
    FUN_00aae91b();
  }
LAB_00a0ae79:
  puStack_2b0 = puVar3;
  local_5c = 0x18d;
  local_60 = &PTR_FUN_00e3edcc;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_24 = local_2c8;
  local_8._0_1_ = 0x15;
  local_2b4 = (char *)0xf;
  local_2b8 = 0;
  local_2c8[0] = 0;
  FUN_00408ed0(local_f8,0,0xffffffff);
  iVar5 = (**(code **)(*local_1c + 0x10))(local_7c);
  local_8 = CONCAT31(local_8._1_3_,0x16);
  local_5c = *(undefined4 *)(iVar5 + 4);
  FUN_00a11e60();
  if (local_74 == 0) {
    local_8 = 0x14;
    FUN_00a0af91();
    return;
  }
  FUN_00463b30(local_70,local_24);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_74);
}


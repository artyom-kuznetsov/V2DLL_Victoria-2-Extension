// FUN_00a18af0 @ 00a18af0 body=[[00a18af0, 00a18bdc] [00a18be0, 00a18c04] [00a18c08, 00a18c22] [00a18c26, 00a18d1b] [00a18d1f, 00a18d46] [00a18d4a, 00a18d63] [00a18d67, 00a18d7d] [00a18d81, 00a18d9b] [00a18d9f, 00a18de8] [00a18dec, 00a18e81] [00a18e85, 00a18ea3] [00a18ea7, 00a18ec0] [00a18ec4, 00a18ee0] [00a18ee4, 00a18f07] [00a18f0b, 00a18f54] [00a18f58, 00a18ff3] [00a18ff7, 00a19015] [00a19019, 00a19032] [00a19036, 00a1904c] [00a19050, 00a1909d] [00a190a1, 00a190a9]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a18af0(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  undefined1 auStack_214 [12];
  undefined *puStack_208;
  int iStack_204;
  char *pcStack_200;
  uint *puStack_1fc;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f4 [12];
  undefined *puStack_1e8;
  int iStack_1e4;
  char *pcStack_1e0;
  uint *puStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 local_1d4 [16];
  undefined4 local_1c4;
  char *local_1c0;
  uint *puStack_1bc;
  undefined1 local_e4 [28];
  undefined1 local_c8 [8];
  int local_c0;
  int local_bc;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  undefined1 *local_78;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  int *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined1 local_30 [8];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b54cef;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe48;
  pbVar3 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar3 = &DAT_013f0670;
  }
  pcVar6 = "diplomacy";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00a18b50:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00a18b55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00a18b50;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00a18b55:
  if (iVar4 != 0) {
    return;
  }
  puStack_1bc = (uint *)0x19;
  local_1c0 = "\" AND status = \"created\";";
  local_54 = DAT_01258b64;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_1c4 = 0xa18b82;
  ExceptionList = &pvStack_10;
  FUN_00409350();
  local_8 = 0;
  puStack_1bc = (uint *)0x37;
  local_1c0 = "SELECT * FROM created_diplomacy_games WHERE creator = \"";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_1c4 = 0xa18b9d;
  FUN_00409350();
  local_8._0_1_ = 1;
  puStack_1bc = (uint *)param_1;
  local_1c0 = (char *)0xa18bb3;
  FUN_00988f20();
  puStack_1bc = local_50;
  local_8._0_1_ = 2;
  local_1c0 = (char *)0xa18bc8;
  FUN_00988f20();
  if (0xf < local_9c) {
    puStack_1bc = (uint *)local_b0;
                    /* WARNING: Subroutine does not return */
    local_1c0 = &UNK_00a18bdd;
    FUN_00aae91b();
  }
  local_9c = 0xf;
  local_a0 = 0;
  local_b0 = local_b0 & 0xffffff00;
  if (0xf < local_20) {
    puStack_1bc = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
    local_1c0 = &UNK_00a18c05;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_8._0_1_ = 6;
  if (0xf < local_3c) {
    puStack_1bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_1c0 = &UNK_00a18c23;
    FUN_00aae91b();
  }
  local_58 = local_1d4;
  puStack_1d8 = (undefined1 *)0xffffffff;
  puStack_1dc = (uint *)0x0;
  pcStack_1e0 = local_e4;
  local_1c0 = (char *)0xf;
  local_1c4 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_1d4[0] = 0;
  iStack_1e4 = 0xa18c4e;
  FUN_00408ed0();
  puStack_1d8 = local_c8;
  puStack_1dc = (uint *)0xa18c5f;
  (**(code **)(*local_54 + 0x10))();
  local_8._0_1_ = 7;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 7;
  local_58 = (undefined1 *)0x0;
  if (local_bc - local_c0 >> 4 != 0) {
    do {
      puStack_1dc = (uint *)0x1;
      pcStack_1e0 = ";";
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      iStack_1e4 = 0xa18c98;
      FUN_00409350();
      puStack_1dc = (uint *)0x0;
      local_8._0_1_ = 8;
      pcStack_1e0 = (char *)0xa18cae;
      uVar5 = FUN_00a714a0();
      local_8._0_1_ = 9;
      puStack_1dc = (uint *)0x2f;
      pcStack_1e0 = "DELETE FROM created_diplomacy_games WHERE id = ";
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      iStack_1e4 = 0xa18ccc;
      FUN_00409350();
      local_8._0_1_ = 10;
      pcStack_1e0 = (char *)0xa18cdf;
      puStack_1dc = (uint *)uVar5;
      FUN_00988f20();
      puStack_1dc = &local_34;
      local_8._0_1_ = 0xb;
      pcStack_1e0 = (char *)0xa18cf4;
      iStack_1e4 = FUN_00988f20();
      puStack_1dc = (uint *)0xffffffff;
      pcStack_1e0 = (char *)0x0;
      local_8._0_1_ = 0xc;
      puStack_1e8 = (undefined *)0xa18d07;
      FUN_00408ed0();
      if (0xf < local_9c) {
        puStack_1dc = (uint *)local_b0;
                    /* WARNING: Subroutine does not return */
        pcStack_1e0 = &UNK_00a18d1c;
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = local_b0 & 0xffffff00;
      if (0xf < local_80) {
        puStack_1dc = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
        pcStack_1e0 = &UNK_00a18d47;
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_3c) {
        puStack_1dc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
        pcStack_1e0 = &UNK_00a18d64;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_60) {
        puStack_1dc = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
        pcStack_1e0 = &UNK_00a18d7e;
        FUN_00aae91b();
      }
      local_8._0_1_ = 7;
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      if (0xf < local_20) {
        puStack_1dc = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
        pcStack_1e0 = &UNK_00a18d9c;
        FUN_00aae91b();
      }
      local_78 = auStack_1f4;
      puStack_1f8 = (undefined1 *)0xffffffff;
      puStack_1fc = (uint *)0x0;
      pcStack_200 = local_e4;
      pcStack_1e0 = (char *)0xf;
      iStack_1e4 = 0;
      auStack_1f4[0] = 0;
      iStack_204 = 0xa18dbe;
      FUN_00408ed0();
      puStack_1f8 = local_30;
      puStack_1fc = (uint *)0xa18dcc;
      (**(code **)(*local_54 + 0x10))();
      if (local_28 != 0) {
        puStack_1fc = (uint *)param_1;
        pcStack_200 = (char *)local_24;
        iStack_204 = 0xa18de0;
        FUN_00463b30();
        iStack_204 = local_28;
                    /* WARNING: Subroutine does not return */
        puStack_208 = &UNK_00a18de9;
        FUN_00aae91b();
      }
      puStack_1fc = (uint *)0x1;
      pcStack_200 = ";";
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      iStack_204 = 0xa18e04;
      FUN_00409350();
      puStack_1fc = (uint *)0x0;
      local_8._0_1_ = 0xd;
      pcStack_200 = (char *)0xa18e1d;
      uVar5 = FUN_00a714a0();
      local_8._0_1_ = 0xe;
      puStack_1fc = (uint *)0x2e;
      pcStack_200 = "DELETE FROM diplomacy_stored_games WHERE id = ";
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      iStack_204 = 0xa18e3b;
      FUN_00409350();
      local_8._0_1_ = 0xf;
      pcStack_200 = (char *)0xa18e4e;
      puStack_1fc = (uint *)uVar5;
      FUN_00988f20();
      puStack_1fc = &local_34;
      local_8._0_1_ = 0x10;
      pcStack_200 = (char *)0xa18e60;
      iStack_204 = FUN_00988f20();
      puStack_1fc = (uint *)0xffffffff;
      pcStack_200 = (char *)0x0;
      local_8._0_1_ = 0x11;
      puStack_208 = (undefined *)0xa18e73;
      FUN_00408ed0();
      if (0xf < local_60) {
        puStack_1fc = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
        pcStack_200 = &UNK_00a18e82;
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74 = local_74 & 0xffffff00;
      if (0xf < local_80) {
        puStack_1fc = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
        pcStack_200 = &UNK_00a18ea4;
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94 = local_94 & 0xffffff00;
      if (0xf < local_3c) {
        puStack_1fc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
        pcStack_200 = &UNK_00a18ec1;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (0xf < local_9c) {
        puStack_1fc = (uint *)local_b0;
                    /* WARNING: Subroutine does not return */
        pcStack_200 = &UNK_00a18ee1;
        FUN_00aae91b();
      }
      local_8._0_1_ = 7;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0 = local_b0 & 0xffffff00;
      if (0xf < local_20) {
        puStack_1fc = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
        pcStack_200 = &UNK_00a18f08;
        FUN_00aae91b();
      }
      local_78 = auStack_214;
      pcStack_200 = (char *)0xf;
      iStack_204 = 0;
      auStack_214[0] = 0;
      FUN_00408ed0(local_e4,0,0xffffffff);
      (**(code **)(*local_54 + 0x10))(local_30);
      if (local_28 != 0) {
        puStack_1dc = (uint *)param_1;
        pcStack_1e0 = (char *)local_24;
        iStack_1e4 = 0xa18f4c;
        FUN_00463b30();
        iStack_1e4 = local_28;
                    /* WARNING: Subroutine does not return */
        puStack_1e8 = &UNK_00a18f55;
        FUN_00aae91b();
      }
      local_58 = (undefined1 *)((int)local_58 + 1);
      uVar2 = (undefined1)local_8;
    } while (local_58 < (uint)(local_bc - local_c0 >> 4));
  }
  local_8._0_1_ = uVar2;
  puStack_1dc = (uint *)0x17;
  pcStack_1e0 = "\" AND status=\"RUNNING\";";
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  iStack_1e4 = 0xa18f8e;
  FUN_00409350();
  local_8._0_1_ = 0x12;
  puStack_1dc = (uint *)0x42;
  pcStack_1e0 = "UPDATE created_diplomacy_games set status=\"SAVED\" where creator =\"";
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  iStack_1e4 = 0xa18faa;
  FUN_00409350();
  local_8._0_1_ = 0x13;
  puStack_1dc = (uint *)param_1;
  pcStack_1e0 = (char *)0xa18fc0;
  FUN_00988f20();
  puStack_1dc = &local_34;
  local_8._0_1_ = 0x14;
  pcStack_1e0 = (char *)0xa18fd2;
  iStack_1e4 = FUN_00988f20();
  puStack_1dc = (uint *)0xffffffff;
  pcStack_1e0 = (char *)0x0;
  local_8._0_1_ = 0x15;
  puStack_1e8 = (undefined *)0xa18fe5;
  FUN_00408ed0();
  if (0xf < local_60) {
    puStack_1dc = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
    pcStack_1e0 = &UNK_00a18ff4;
    FUN_00aae91b();
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74 = local_74 & 0xffffff00;
  if (0xf < local_80) {
    puStack_1dc = (uint *)local_94;
                    /* WARNING: Subroutine does not return */
    pcStack_1e0 = &UNK_00a19016;
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94 = local_94 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_1dc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    pcStack_1e0 = &UNK_00a19033;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_20 < 0x10) {
    local_78 = auStack_1f4;
    puStack_1f8 = (undefined1 *)0xffffffff;
    local_8 = CONCAT31(local_8._1_3_,0x16);
    puStack_1fc = (uint *)0x0;
    pcStack_200 = local_e4;
    pcStack_1e0 = (char *)0xf;
    iStack_1e4 = 0;
    auStack_1f4[0] = 0;
    iStack_204 = 0xa19073;
    FUN_00408ed0();
    puStack_1f8 = local_30;
    puStack_1fc = (uint *)0xa19081;
    (**(code **)(*local_54 + 0x10))();
    if (local_28 == 0) {
      local_8 = 7;
      FUN_00a1911e();
      return;
    }
    puStack_1fc = (uint *)param_1;
    pcStack_200 = (char *)local_24;
    iStack_204 = 0xa19095;
    FUN_00463b30();
    iStack_204 = local_28;
                    /* WARNING: Subroutine does not return */
    puStack_208 = &UNK_00a1909e;
    FUN_00aae91b();
  }
  puStack_1dc = (uint *)local_34;
                    /* WARNING: Subroutine does not return */
  pcStack_1e0 = &UNK_00a1904d;
  FUN_00aae91b();
}


// FUN_00a0c090 @ 00a0c090 body=[[00a0c090, 00a0c11a] [00a0c11e, 00a0c222] [00a0c226, 00a0c24a] [00a0c24e, 00a0c264] [00a0c268, 00a0c3a7] [00a0c3ab, 00a0c3d5] [00a0c3d9, 00a0c3fe] [00a0c402, 00a0c427] [00a0c42b, 00a0c44a] [00a0c44e, 00a0c464] [00a0c468, 00a0c533] [00a0c537, 00a0c561] [00a0c565, 00a0c58a] [00a0c58e, 00a0c5b3] [00a0c5b7, 00a0c5d6] [00a0c5da, 00a0c5f0] [00a0c5f4, 00a0c60a] [00a0c60e, 00a0c65b] [00a0c65f, 00a0c6a4]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0c090(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  char *pcVar5;
  bool bVar6;
  undefined1 *puStack_290;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined1 local_284 [12];
  undefined4 uStack_278;
  int local_274;
  char *local_270;
  uint *puStack_26c;
  uint local_14c [4];
  undefined4 local_13c;
  uint local_138;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 *local_60;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  int *local_40;
  uint local_3c;
  undefined1 local_38 [8];
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7800a;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffd98;
  puStack_26c = (uint *)0xffffffff;
  local_1c = 0;
  local_274 = in_ECX + 8;
  local_270 = (char *)0x0;
  local_40 = DAT_01258b64;
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  uStack_278 = 0xa0c0ed;
  ExceptionList = &pvStack_10;
  local_20 = in_ECX;
  FUN_00408ed0();
  puStack_26c = local_14c;
  local_8 = 0;
  local_270 = (char *)0xa0c0fc;
  local_f8 = FUN_009c1bd0();
  if (0xf < local_138) {
    puStack_26c = (uint *)local_14c[0];
                    /* WARNING: Subroutine does not return */
    local_270 = &UNK_00a0c11b;
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c[0] = local_14c[0] & 0xffffff00;
  local_11c = 0xf;
  local_120 = 0;
  local_130[0] = 0;
  local_8 = 1;
  pbVar2 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar2 = &DAT_013f0670;
  }
  pcVar5 = "diplomacy";
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00a0c180:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a0c185;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00a0c180;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a0c185:
  puStack_26c = (uint *)0x2;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_270 = "\";";
  if (iVar3 == 0) {
    if (*(char *)(local_20 + 0x90) == '\0') {
      local_274 = 0xa0c288;
      FUN_00409350();
      local_8._0_1_ = 6;
      puStack_26c = (uint *)0x35;
      local_270 = "UPDATE users SET status = \"normal\" WHERE username = \"";
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      local_274 = 0xa0c2a4;
      FUN_00409350();
      puStack_26c = (uint *)(local_20 + 0x74);
      local_8._0_1_ = 7;
      local_270 = (char *)0xa0c2ba;
      FUN_00988f20();
      puStack_26c = local_7c;
      local_8._0_1_ = 8;
      local_270 = (char *)0xa0c2cf;
      local_274 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,9);
    }
    else {
      local_274 = 0xa0c1b4;
      FUN_00409350();
      local_8._0_1_ = 2;
      puStack_26c = (uint *)0x32;
      local_270 = "UPDATE users SET status = \"ban\" WHERE username = \"";
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      local_274 = 0xa0c1d0;
      FUN_00409350();
      puStack_26c = (uint *)(local_20 + 0x74);
      local_8._0_1_ = 3;
      local_270 = (char *)0xa0c1e6;
      FUN_00988f20();
      puStack_26c = local_7c;
      local_8._0_1_ = 4;
      local_270 = (char *)0xa0c1fb;
      local_274 = FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,5);
    }
    puStack_26c = (uint *)0xffffffff;
    local_270 = (char *)0x0;
    uStack_278 = 0xa0c20e;
    FUN_00408ed0();
    if (0xf < local_88) {
      puStack_26c = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c223;
      FUN_00aae91b();
    }
    local_9c = local_9c & 0xffffff00;
    local_8c = 0;
    local_88 = 0xf;
    if (0xf < local_28) {
      puStack_26c = (uint *)local_3c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c24b;
      FUN_00aae91b();
    }
    local_3c = local_3c & 0xffffff00;
    local_2c = (undefined1 *)0x0;
    local_28 = 0xf;
    if (0xf < local_48) {
      puStack_26c = (uint *)local_5c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c265;
      FUN_00aae91b();
    }
    local_5c = local_5c & 0xffffff00;
  }
  else if (*(char *)(local_20 + 0x90) == '\0') {
    local_274 = 0xa0c47b;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    puStack_26c = (uint *)0x2f;
    local_270 = "_users SET status = \"normal\" WHERE username = \"";
    local_28 = 0xf;
    local_2c = (undefined1 *)0x0;
    local_3c = local_3c & 0xffffff00;
    local_274 = 0xa0c497;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    puStack_26c = (uint *)0x7;
    local_270 = "UPDATE ";
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    local_274 = 0xa0c4b3;
    FUN_00409350();
    puStack_26c = (uint *)&DAT_013f0670;
    local_8._0_1_ = 0x13;
    local_270 = (char *)0xa0c4ca;
    FUN_00988f20();
    puStack_26c = &local_3c;
    local_8._0_1_ = 0x14;
    local_270 = (char *)0xa0c4df;
    FUN_00988f20();
    puStack_26c = (uint *)(local_20 + 0x74);
    local_8._0_1_ = 0x15;
    local_270 = (char *)0xa0c4f7;
    FUN_00988f20();
    puStack_26c = local_7c;
    local_8._0_1_ = 0x16;
    local_270 = (char *)0xa0c50c;
    local_274 = FUN_00988f20();
    puStack_26c = (uint *)0xffffffff;
    local_270 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x17);
    uStack_278 = 0xa0c51f;
    FUN_00408ed0();
    if (0xf < local_c4) {
      puStack_26c = (uint *)local_d8;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c534;
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_e0) {
      puStack_26c = (uint *)local_f4;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c562;
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    if (0xf < local_100) {
      puStack_26c = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c58b;
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    if (0xf < local_88) {
      puStack_26c = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c5b4;
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_48) {
      puStack_26c = (uint *)local_5c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c5d7;
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_28) {
      puStack_26c = (uint *)local_3c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c5f1;
      FUN_00aae91b();
    }
    local_3c = local_3c & 0xffffff00;
  }
  else {
    local_274 = 0xa0c2ef;
    FUN_00409350();
    local_8._0_1_ = 10;
    puStack_26c = (uint *)0x2c;
    local_270 = "_users SET status = \"ban\" WHERE username = \"";
    local_28 = 0xf;
    local_2c = (undefined1 *)0x0;
    local_3c = local_3c & 0xffffff00;
    local_274 = 0xa0c30b;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    puStack_26c = (uint *)0x7;
    local_270 = "UPDATE ";
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    local_274 = 0xa0c327;
    FUN_00409350();
    puStack_26c = (uint *)&DAT_013f0670;
    local_8._0_1_ = 0xc;
    local_270 = (char *)0xa0c33e;
    FUN_00988f20();
    puStack_26c = &local_3c;
    local_8._0_1_ = 0xd;
    local_270 = (char *)0xa0c353;
    FUN_00988f20();
    puStack_26c = (uint *)(local_20 + 0x74);
    local_8._0_1_ = 0xe;
    local_270 = (char *)0xa0c36b;
    FUN_00988f20();
    puStack_26c = local_7c;
    local_8._0_1_ = 0xf;
    local_270 = (char *)0xa0c380;
    local_274 = FUN_00988f20();
    puStack_26c = (uint *)0xffffffff;
    local_270 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x10);
    uStack_278 = 0xa0c393;
    FUN_00408ed0();
    if (0xf < local_88) {
      puStack_26c = (uint *)local_9c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c3a8;
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_100) {
      puStack_26c = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c3d6;
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    if (0xf < local_e0) {
      puStack_26c = (uint *)local_f4;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c3ff;
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4 = local_f4 & 0xffffff00;
    if (0xf < local_c4) {
      puStack_26c = (uint *)local_d8;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c428;
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8 = local_d8 & 0xffffff00;
    if (0xf < local_48) {
      puStack_26c = (uint *)local_5c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c44b;
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_28) {
      puStack_26c = (uint *)local_3c;
                    /* WARNING: Subroutine does not return */
      local_270 = &UNK_00a0c465;
      FUN_00aae91b();
    }
    local_3c = local_3c & 0xffffff00;
  }
  if (0xf < local_68) {
    local_28 = 0xf;
    local_2c = (undefined1 *)0x0;
    local_48 = 0xf;
    local_4c = 0;
    local_88 = 0xf;
    local_8c = 0;
                    /* WARNING: Subroutine does not return */
    local_270 = &UNK_00a0c60b;
    puStack_26c = (uint *)local_7c[0];
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = (undefined1 *)0x0;
  local_48 = 0xf;
  local_4c = 0;
  local_88 = 0xf;
  local_8c = 0;
  local_60 = local_284;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  puStack_288 = (undefined1 *)0xffffffff;
  puStack_28c = (undefined1 *)0x0;
  puStack_290 = local_130;
  local_270 = (char *)0xf;
  local_274 = 0;
  local_284[0] = 0;
  FUN_00408ed0();
  puStack_288 = local_38;
  puStack_28c = (undefined1 *)0xa0c63f;
  (**(code **)(*local_40 + 0x10))();
  if (local_30 == 0) {
    local_60 = (undefined1 *)&puStack_290;
    puStack_290 = DAT_00f0d838;
    puStack_28c = (undefined1 *)DAT_00f0d83c;
    puVar4 = (undefined1 *)FUN_009c16d0();
    puStack_28c = (undefined1 *)(local_20 + 0x3c);
    puStack_290 = (undefined1 *)0xa0c691;
    iVar3 = FUN_00a727a0();
    if (iVar3 != 0) {
      puStack_290 = puVar4;
      puStack_28c = (undefined1 *)iVar3;
      FUN_00a71ae0();
    }
    local_8 = 1;
    FUN_00a0c71f();
    return;
  }
  puStack_28c = local_60;
  puStack_290 = local_2c;
  FUN_00463b30();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30);
}


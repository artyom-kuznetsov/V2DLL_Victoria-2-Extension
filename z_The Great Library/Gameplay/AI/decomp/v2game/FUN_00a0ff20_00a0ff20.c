// FUN_00a0ff20 @ 00a0ff20 body=[[00a0ff20, 00a0ffea] [00a0ffee, 00a10013] [00a10017, 00a1003c] [00a10040, 00a101f3] [00a101f7, 00a1021c] [00a10220, 00a10245] [00a10249, 00a1026e] [00a10272, 00a10294] [00a10298, 00a102b4] [00a102b8, 00a102ce] [00a102d2, 00a102e8] [00a102ec, 00a1030c] [00a10310, 00a10384] [00a10388, 00a106c9] [00a106cd, 00a106e9] [00a106ed, 00a10712] [00a10716, 00a1073b] [00a1073f, 00a1075e] [00a10762, 00a10778] [00a1077c, 00a10798] [00a1079c, 00a107c5] [00a107c9, 00a1081e] [00a10822, 00a10847] [00a1084b, 00a10863] [00a10986, 00a10996]]


void FUN_00a0ff20(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  undefined1 auStack_2d4 [12];
  undefined *puStack_2c8;
  undefined1 local_2b4 [16];
  undefined4 local_2a4;
  char *local_2a0;
  uint *puStack_29c;
  char local_1cc [32];
  uint local_1ac;
  undefined4 local_19c;
  uint local_198;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174 [4];
  undefined4 local_164;
  uint local_160;
  uint local_158;
  undefined4 local_148;
  uint local_144;
  undefined1 local_13c [20];
  uint local_128;
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  uint local_98;
  undefined1 local_94 [8];
  int local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  char local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5539a;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd68;
  local_18 = (undefined1 *)0x0;
  puStack_29c = (uint *)0x2;
  local_2a0 = "\";";
  local_160 = 0xf;
  local_164 = 0;
  local_174[0] = local_174[0] & 0xffffff00;
  local_2a4 = 0xa0ff77;
  ExceptionList = &local_10;
  local_24 = in_ECX;
  FUN_00409350();
  local_8 = 0;
  puStack_29c = (uint *)0x62;
  local_2a0 = 
  "SELECT * from users, diplomacy_cd_keys where users.id = diplomacy_cd_keys.regtoId AND username = \""
  ;
  local_17c = 0xf;
  local_180 = 0;
  local_190 = local_190 & 0xffffff00;
  local_2a4 = 0xa0ff9e;
  FUN_00409350();
  puStack_29c = (uint *)(in_ECX + 0x74);
  local_8._0_1_ = 1;
  local_2a0 = (char *)0xa0ffba;
  local_20 = (undefined1 *)puStack_29c;
  FUN_00988f20();
  puStack_29c = local_174;
  local_8._0_1_ = 2;
  local_2a0 = (char *)0xa0ffd2;
  FUN_00988f20();
  piVar1 = DAT_01258b64;
  if (0xf < local_198) {
    puStack_29c = (uint *)local_1ac;
                    /* WARNING: Subroutine does not return */
    local_2a0 = &UNK_00a0ffeb;
    FUN_00aae91b();
  }
  local_198 = 0xf;
  local_19c = 0;
  local_1ac = local_1ac & 0xffffff00;
  if (0xf < local_17c) {
    puStack_29c = (uint *)local_190;
                    /* WARNING: Subroutine does not return */
    local_2a0 = &UNK_00a10014;
    FUN_00aae91b();
  }
  local_17c = 0xf;
  local_180 = 0;
  local_190 = local_190 & 0xffffff00;
  if (0xf < local_160) {
    puStack_29c = (uint *)local_174[0];
                    /* WARNING: Subroutine does not return */
    local_2a0 = &UNK_00a1003d;
    FUN_00aae91b();
  }
  local_18 = local_2b4;
  local_8._0_1_ = 7;
  local_2a0 = (char *)0xf;
  local_2a4 = 0;
  local_160 = 0xf;
  local_164 = 0;
  local_174[0] = local_174[0] & 0xffffff00;
  local_28 = DAT_01258b64;
  local_2b4[0] = 0;
  FUN_00408ed0();
  (**(code **)(*piVar1 + 0x10))();
  local_8._0_1_ = 8;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 8;
  if ((local_a4 - local_a8 & 0xfffffff0U) == 0) goto LAB_00a10822;
  local_10c = 0xf;
  local_110 = 0;
  local_120 = local_120 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  local_18 = (undefined1 *)FUN_00a714a0();
  local_8._0_1_ = 10;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_00409350();
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  local_8._0_1_ = 0xc;
  puStack_2c8 = (undefined *)0xa1012b;
  pcVar4 = __itoa(*(int *)(local_24 + 0xac),local_1cc,10);
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0xd;
  local_84 = 0xf;
  local_88 = 0;
  local_98 = local_98 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  FUN_00988f20();
  local_8._0_1_ = 0x10;
  FUN_00988f20();
  local_8._0_1_ = 0x11;
  FUN_00988f20();
  local_8._0_1_ = 0x12;
  puStack_2c8 = (undefined *)0xa101db;
  FUN_00408ed0();
  if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_144 = 0xf;
  local_148 = 0;
  local_158 = local_158 & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0xf;
  local_f4 = 0;
  local_104 = local_104 & 0xffffff00;
  if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8 = local_e8 & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98 = local_98 & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = auStack_2d4;
  auStack_2d4[0] = 0;
  FUN_00408ed0(local_13c,0,0xffffffff);
  iVar5 = (**(code **)(*local_28 + 0x10))(local_94);
  local_8._0_1_ = 0x13;
  local_ac = *(undefined4 *)(iVar5 + 4);
  FUN_00a11e60();
  local_8._0_1_ = 8;
  if (local_8c != 0) {
    FUN_00463b30();
                    /* WARNING: Subroutine does not return */
    puStack_2c8 = &UNK_00a10385;
    FUN_00aae91b();
  }
  local_18 = &stack0xfffffd40;
  FUN_009c16d0();
  iVar5 = FUN_00a727a0();
  if ((((local_a4 - local_a8 & 0xfffffff0U) == 0) && (*(int *)(iVar5 + 0x60) != 1)) &&
     (*(int *)(iVar5 + 0x60) != 2)) {
    FUN_009885d0();
    local_8._0_1_ = 0x14;
    FUN_009885d0();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    FUN_00988f20();
    local_8._0_1_ = 0x17;
    puStack_2c8 = (undefined *)0xa10442;
    FUN_00408ed0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 8;
    FUN_00408ad0();
    local_18 = auStack_2d4;
    FUN_00401320();
    iVar5 = (**(code **)(*local_28 + 0x10))(local_94);
    local_8._0_1_ = 0x18;
    local_ac = *(undefined4 *)(iVar5 + 4);
    FUN_00a11e60();
    local_8._0_1_ = 8;
    FUN_009fc110();
    uVar2 = (undefined1)local_8;
    if ((local_a4 - local_a8 & 0xfffffff0U) == 0) goto LAB_00a10822;
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x19);
    local_18 = (undefined1 *)0x1;
    FUN_00a714a0();
    local_8 = 0x1a;
    local_18 = (undefined1 *)0x3;
    cVar3 = FUN_00416db0();
    if (cVar3 == '\0') {
      FUN_009885d0();
      local_8 = 0x1b;
      local_18 = (undefined1 *)0x7;
      FUN_00a714a0();
      local_8 = 0x1c;
      local_18 = (undefined1 *)0xf;
      cVar3 = FUN_00416db0();
      local_19 = '\0';
      if (cVar3 != '\0') goto LAB_00a10571;
    }
    else {
LAB_00a10571:
      local_19 = '\x01';
    }
    if (((uint)local_18 & 8) != 0) {
      local_18 = (undefined1 *)((uint)local_18 & 0xfffffff7);
      FUN_00408ad0();
    }
    if (((uint)local_18 & 4) != 0) {
      local_18 = (undefined1 *)((uint)local_18 & 0xfffffffb);
      FUN_00408ad0();
    }
    if (((uint)local_18 & 2) != 0) {
      local_18 = (undefined1 *)((uint)local_18 & 0xfffffffd);
      FUN_00408ad0();
    }
    local_8._0_1_ = 8;
    local_8._1_3_ = 0;
    if (((uint)local_18 & 1) != 0) {
      FUN_00408ad0();
    }
    uVar2 = (undefined1)local_8;
    if (local_19 == '\0') goto LAB_00a10822;
  }
  local_10c = 0xf;
  local_110 = 0;
  local_120 = local_120 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1d;
  local_18 = (undefined1 *)FUN_009888f0();
  local_8._0_1_ = 0x1e;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x20;
  FUN_00988f20();
  local_8._0_1_ = 0x21;
  FUN_00988f20();
  local_8._0_1_ = 0x22;
  FUN_00988f20();
  local_8._0_1_ = 0x23;
  FUN_00988f20();
  local_8._0_1_ = 0x24;
  puStack_2c8 = (undefined *)0xa106b7;
  FUN_00408ed0();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = local_44 & 0xffffff00;
  if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8 = local_e8 & 0xffffff00;
  if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f0 = 0xf;
  local_f4 = 0;
  local_104 = local_104 & 0xffffff00;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_144 = 0xf;
  local_148 = 0;
  local_158 = local_158 & 0xffffff00;
  if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = auStack_2d4;
  auStack_2d4[0] = 0;
  FUN_00408ed0(local_13c,0,0xffffffff);
  (**(code **)(*local_28 + 0x10))(local_94);
  uVar2 = (undefined1)local_8;
  if (local_8c != 0) {
    FUN_00463b30();
                    /* WARNING: Subroutine does not return */
    puStack_2c8 = &UNK_00a1081f;
    FUN_00aae91b();
  }
LAB_00a10822:
  local_8._0_1_ = uVar2;
  if (local_a8 != 0) {
    FUN_00463b30();
                    /* WARNING: Subroutine does not return */
    puStack_2c8 = &UNK_00a10848;
    FUN_00aae91b();
  }
  if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


// FUN_009fca80 @ 009fca80 body=[[009fca80, 009fcb94] [009fcb98, 009fcbb7] [009fcbbb, 009fcc8e] [009fcc92, 009fccbc] [009fccc0, 009fcce0] [009fcce4, 009fcd01] [009fcd05, 009fcd25] [009fcd29, 009fcd40] [009fcd44, 009fcdc1] [009fcdc5, 009fcecc] [009fced0, 009fcf65] [009fcf69, 009fcf96] [009fcf9a, 009fcfe4] [009fcfe8, 009fd06f] [009fd075, 009fd0a1] [009fd0a7, 009fd139] [009fd13d, 009fd151] [009fd155, 009fd1fe] [009fd202, 009fd2a0] [009fd2a4, 009fd2d2] [009fd2d6, 009fd79c] [009fd87b, 009fdd16] [009fddb6, 009fdebf] [009fdec3, 009fdef0] [009fdef4, 009fdf21] [009fdf25, 009fdf39] [009fdf3d, 009fdf4f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_009fca80(undefined4 param_1,uint *param_2,undefined4 *param_3,undefined4 param_4,
                 uint *param_5)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_3ec [12];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  uint *puStack_3d4;
  undefined1 *puStack_3d0;
  undefined1 *puStack_3cc;
  undefined4 uStack_3c8;
  uint *puStack_3c4;
  undefined *puStack_3c0;
  uint *puStack_3bc;
  uint *puStack_3b8;
  undefined4 ****ppppuStack_3b4;
  undefined1 *puStack_3b0;
  undefined1 local_3ac [12];
  undefined4 uStack_3a0;
  undefined4 local_39c;
  char *local_398;
  undefined4 ****ppppuStack_394;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_178;
  uint local_120 [4];
  undefined4 local_110;
  uint local_10c;
  uint local_104 [4];
  undefined4 local_f4;
  uint local_f0;
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [3];
  int local_c0 [4];
  int *local_b0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 ****local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined4 ****local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58;
  undefined **local_54;
  undefined4 local_50;
  int local_4c;
  uint *local_48;
  uint local_44;
  uint local_3c;
  undefined1 local_38 [8];
  int local_30;
  uint *local_2c;
  uint local_28;
  undefined1 *local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6159d;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffc70;
  local_1c = 0;
  ppppuStack_394 = (undefined4 ****)0x0;
  local_398 = "";
  local_b0 = DAT_01258b64;
  local_d4 = 0xf;
  local_d8 = 0;
  local_e8[0] = local_e8[0] & 0xffffff00;
  local_39c = 0x9fcadf;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  pbVar3 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar3 = &DAT_013f0670;
  }
  pcVar7 = "diplomacy";
  do {
    bVar1 = *pbVar3;
    bVar12 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_009fcb20:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_009fcb25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar12 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_009fcb20;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_009fcb25:
  if (iVar4 == 0) {
    ppppuStack_394 = (undefined4 ****)0x1;
    local_398 = "\"";
    local_44 = 0xf;
    local_48 = (uint *)0x0;
    local_58 = local_58 & 0xffffff00;
    local_39c = 0x9fcb46;
    FUN_00409350();
    ppppuStack_394 = (undefined4 ****)param_1;
    local_8._0_1_ = 1;
    local_398 = (char *)0x9fcb58;
    FUN_00988fa0();
    ppppuStack_394 = (undefined4 ****)&local_58;
    local_8._0_1_ = 2;
    local_398 = (char *)0x9fcb70;
    local_39c = FUN_00988f20();
    ppppuStack_394 = (undefined4 ****)0xffffffff;
    local_398 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,3);
    uStack_3a0 = 0x9fcb83;
    FUN_00408ed0();
    if (0xf < local_7c) {
      ppppuStack_394 = local_90[0];
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcb95;
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 ****)((uint)local_90[0] & 0xffffff00);
    if (0xf < local_28) {
      ppppuStack_394 = (undefined4 ****)local_3c;
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcbb8;
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = (uint *)0x0;
    local_3c = local_3c & 0xffffff00;
    if (0xf < local_44) {
      ppppuStack_394 = (undefined4 ****)local_58;
LAB_009fcd3c:
      local_7c = 0xf;
      local_80 = 0;
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcd41;
      FUN_00aae91b();
    }
  }
  else {
    ppppuStack_394 = (undefined4 ****)0x2;
    local_398 = "\";";
    local_28 = 0xf;
    local_2c = (uint *)0x0;
    local_3c = local_3c & 0xffffff00;
    local_39c = 0x9fcbf4;
    FUN_00409350();
    ppppuStack_394 = (undefined4 ****)param_1;
    local_8._0_1_ = 4;
    local_398 = (char *)0x9fcc06;
    FUN_00988fa0();
    ppppuStack_394 = (undefined4 ****)&local_3c;
    local_8._0_1_ = 5;
    local_398 = (char *)0x9fcc1e;
    uVar6 = FUN_00988f20();
    local_8._0_1_ = 6;
    ppppuStack_394 = (undefined4 ****)0xe;
    local_398 = "SELECT * FROM ";
    local_44 = 0xf;
    local_48 = (uint *)0x0;
    local_58 = local_58 & 0xffffff00;
    local_39c = 0x9fcc41;
    FUN_00409350();
    ppppuStack_394 = (undefined4 ****)&DAT_013f0670;
    local_8._0_1_ = 7;
    local_398 = (char *)0x9fcc58;
    FUN_00988f20();
    local_8._0_1_ = 8;
    local_398 = (char *)0x9fcc6a;
    ppppuStack_394 = (undefined4 ****)uVar6;
    local_39c = FUN_00988f20();
    ppppuStack_394 = (undefined4 ****)0xffffffff;
    local_398 = (char *)0x0;
    local_8 = CONCAT31(local_8._1_3_,9);
    uStack_3a0 = 0x9fcc7d;
    FUN_00408ed0();
    if (0xf < local_7c) {
      ppppuStack_394 = local_90[0];
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcc8f;
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = (undefined4 ****)((uint)local_90[0] & 0xffffff00);
    if (0xf < (uint)local_c0[2]) {
      ppppuStack_394 = (undefined4 ****)local_cc[0];
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fccbd;
      FUN_00aae91b();
    }
    local_c0[2] = 0xf;
    local_c0[1] = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    if (0xf < local_44) {
      ppppuStack_394 = (undefined4 ****)local_58;
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcce1;
      FUN_00aae91b();
    }
    local_44 = 0xf;
    local_48 = (uint *)0x0;
    local_58 = local_58 & 0xffffff00;
    if (0xf < local_98) {
      ppppuStack_394 = (undefined4 ****)local_ac[0];
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcd02;
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_60) {
      ppppuStack_394 = local_74[0];
                    /* WARNING: Subroutine does not return */
      local_398 = &UNK_009fcd26;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (undefined4 ****)((uint)local_74[0] & 0xffffff00);
    if (0xf < local_28) {
      ppppuStack_394 = (undefined4 ****)local_3c;
      goto LAB_009fcd3c;
    }
  }
  local_7c = 0xf;
  local_80 = 0;
  local_50 = 0x18d;
  local_54 = &PTR_FUN_00e3edcc;
  local_4c = 0;
  local_48 = (uint *)0x0;
  local_44 = 0;
  local_20 = local_3ac;
  local_8._0_1_ = 0xb;
  puStack_3b0 = (undefined1 *)0xffffffff;
  ppppuStack_3b4 = (undefined4 ****)0x0;
  puStack_3b8 = local_e8;
  local_398 = (char *)0xf;
  local_39c = 0;
  local_3ac[0] = 0;
  puStack_3bc = (uint *)0x9fcd7f;
  FUN_00408ed0();
  puStack_3b0 = local_38;
  ppppuStack_3b4 = (undefined4 ****)0x9fcd90;
  iVar4 = (**(code **)(*local_b0 + 0x10))();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  local_50 = *(undefined4 *)(iVar4 + 4);
  ppppuStack_3b4 = (undefined4 ****)0x9fcda5;
  FUN_00a11e60();
  if (local_30 != 0) {
    ppppuStack_3b4 = (undefined4 ****)local_20;
    puStack_3b8 = local_2c;
    puStack_3bc = (uint *)0x9fcdb9;
    FUN_00463b30();
    puStack_3bc = (uint *)local_30;
                    /* WARNING: Subroutine does not return */
    puStack_3c0 = &UNK_009fcdc2;
    FUN_00aae91b();
  }
  local_8 = 10;
  ppppuStack_3b4 = (undefined4 ****)0xffffffff;
  puStack_3b8 = (uint *)0x0;
  *param_3 = 0;
  puStack_3bc = param_2;
  local_178 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_1e0 = 0x67452301;
  local_1dc = 0xefcdab89;
  local_1d8 = 0x98badcfe;
  local_1d4 = 0x10325476;
  local_10c = 0xf;
  local_110 = 0;
  local_120[0] = local_120[0] & 0xffffff00;
  puStack_3c0 = (undefined *)0x9fce38;
  FUN_00408ed0();
  local_8._0_1_ = 0x14;
  ppppuStack_3b4 = (undefined4 ****)0x0;
  puStack_3b8 = (uint *)&DAT_00ded94d;
  local_f0 = 0xf;
  local_f4 = 0;
  local_104[0] = local_104[0] & 0xffffff00;
  puStack_3bc = (uint *)0x9fce69;
  FUN_00409350();
  local_8._0_1_ = 0x15;
  uVar9 = (undefined1)local_8;
  local_8._0_1_ = 0x15;
  local_23c = 0;
  local_238 = 0;
  local_1e4 = 0;
  local_24c = 0x67452301;
  local_248 = 0xefcdab89;
  local_244 = 0x98badcfe;
  local_240 = 0x10325476;
  if (((int)local_48 - local_4c & 0xfffffff0U) != 0) {
    pbVar3 = _DAT_013f0670;
    if (DAT_013f0684 < 0x10) {
      pbVar3 = &DAT_013f0670;
    }
    pcVar7 = "diplomacy";
    do {
      bVar1 = *pbVar3;
      bVar12 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_009fcef2:
        iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_009fcef9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar12 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_009fcef2;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_009fcef9:
    ppppuStack_3b4 = (undefined4 ****)&local_30;
    if (iVar4 == 0) {
      puStack_3b8 = (uint *)0x9fcf0d;
      FUN_00a71420();
      ppppuStack_3b4 = (undefined4 ****)local_c0;
      local_8._0_1_ = 0x16;
      puStack_3b8 = (uint *)0x9fcf22;
      piVar5 = (int *)FUN_00a71420();
      local_8._0_1_ = 0x17;
      ppppuStack_3b4 = (undefined4 ****)(*piVar5 + 0x38);
      if (0xf < *(uint *)(*piVar5 + 0x4c)) {
        ppppuStack_3b4 = (undefined4 ****)*ppppuStack_3b4;
      }
      puStack_3b8 = (uint *)0x9fcf45;
      FUN_00a1d420();
      if (local_c0[0] != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fcf5a;
        FUN_00413860();
        ppppuStack_3b4 = (undefined4 ****)local_c0[0];
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fcf66;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_c0[2] = 0;
      if (local_30 != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fcf8e;
        FUN_00413860();
        ppppuStack_3b4 = (undefined4 ****)local_30;
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fcf97;
        FUN_00aae91b();
      }
      ppppuStack_3b4 = (undefined4 ****)0x9fcfa5;
      FUN_00a1d6f0();
      uVar9 = (undefined1)local_8;
    }
    else {
      puStack_3b8 = (uint *)0x9fcfaf;
      local_8._0_1_ = uVar9;
      piVar5 = (int *)FUN_00a71420();
      local_8._0_1_ = 0x18;
      ppppuStack_3b4 = (undefined4 ****)0xffffffff;
      puStack_3bc = (uint *)(*piVar5 + 0x118);
      puStack_3b8 = (uint *)0x0;
      puStack_3c0 = (undefined *)0x9fcfc9;
      FUN_00408ed0();
      local_8._0_1_ = 0x15;
      if (local_30 != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fcfdc;
        FUN_00413860();
        ppppuStack_3b4 = (undefined4 ****)local_30;
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fcfe5;
        FUN_00aae91b();
      }
      ppppuStack_3b4 = (undefined4 ****)local_104;
      puStack_3b8 = (uint *)0x9fcffd;
      FUN_00988f20();
      ppppuStack_3b4 = (undefined4 ****)&local_30;
      local_8._0_1_ = 0x19;
      puStack_3b8 = (uint *)0x9fd00e;
      FUN_00a71420();
      ppppuStack_3b4 = (undefined4 ****)local_c0;
      local_8._0_1_ = 0x1a;
      puStack_3b8 = (uint *)0x9fd023;
      piVar5 = (int *)FUN_00a71420();
      local_8._0_1_ = 0x1b;
      ppppuStack_3b4 = (undefined4 ****)(*piVar5 + 0xa8);
      if (0xf < *(uint *)(*piVar5 + 0xbc)) {
        ppppuStack_3b4 = (undefined4 ****)*ppppuStack_3b4;
      }
      puStack_3b8 = (uint *)0x9fd04d;
      FUN_00a1d420();
      if (local_c0[0] != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fd064;
        FUN_00413860();
        ppppuStack_3b4 = (undefined4 ****)local_c0[0];
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fd070;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x19;
      local_c0[0] = 0;
      local_c0[1] = 0;
      local_c0[2] = 0;
      if (local_30 != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fd099;
        FUN_00413860();
        ppppuStack_3b4 = (undefined4 ****)local_30;
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fd0a2;
        FUN_00aae91b();
      }
      ppppuStack_3b4 = (undefined4 ****)0x9fd0b2;
      FUN_00a1d6f0();
      ppppuStack_3b4 = local_90[0];
      if (local_7c < 0x10) {
        ppppuStack_3b4 = local_90;
      }
      puStack_3b8 = (uint *)0x9fd0d7;
      FUN_00a1d420();
      ppppuStack_3b4 = (undefined4 ****)0x9fd0e2;
      FUN_00a1d6f0();
      puStack_3b8 = (uint *)0x9fd0f0;
      ppppuStack_3b4 = (undefined4 ****)&local_1e0;
      puStack_3b8 = (uint *)FUN_00a1d7c0();
      local_28 = 0xf;
      local_2c = (uint *)0x0;
      local_3c = local_3c & 0xffffff00;
      puVar8 = puStack_3b8;
      do {
        uVar10 = *puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
      } while ((char)uVar10 != '\0');
      ppppuStack_3b4 = (undefined4 ****)((int)puVar8 - (int)((int)puStack_3b8 + 1));
      puStack_3bc = (uint *)0x9fd116;
      FUN_00409350();
      ppppuStack_3b4 = (undefined4 ****)0xffffffff;
      puStack_3b8 = (uint *)0x0;
      puStack_3bc = &local_3c;
      local_8._0_1_ = 0x1c;
      puStack_3c0 = (undefined *)0x9fd12c;
      FUN_00408ed0();
      if (0xf < local_28) {
        ppppuStack_3b4 = (undefined4 ****)local_3c;
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fd13a;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x15;
      uVar9 = (undefined1)local_8;
      if (0xf < local_7c) {
        ppppuStack_3b4 = local_90[0];
                    /* WARNING: Subroutine does not return */
        puStack_3b8 = (uint *)&UNK_009fd152;
        FUN_00aae91b();
      }
    }
  }
  local_8._0_1_ = uVar9;
  if (((int)local_48 - local_4c & 0xfffffff0U) == 0) {
    cVar2 = '\x03';
    goto LAB_009fdeab;
  }
  pbVar3 = _DAT_013f0670;
  if (DAT_013f0684 < 0x10) {
    pbVar3 = &DAT_013f0670;
  }
  pcVar7 = "diplomacy";
  do {
    bVar1 = *pbVar3;
    bVar12 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_009fd1a5:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_009fd1aa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar12 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_009fd1a5;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_009fd1aa:
  uVar10 = local_1c;
  if (iVar4 == 0) {
    ppppuStack_3b4 = (undefined4 ****)0x1;
    puStack_3b8 = (uint *)0x9fd1bb;
    FUN_00a714a0();
    local_8 = CONCAT31(local_8._1_3_,0x1d);
    uVar10 = 1;
    local_1c = 1;
    ppppuStack_3b4 = (undefined4 ****)0x9fd1d1;
    cVar2 = FUN_00416db0();
    if (cVar2 != '\0') goto LAB_009fd1dd;
    local_15 = '\x01';
  }
  else {
LAB_009fd1dd:
    local_15 = '\0';
  }
  local_8._0_1_ = 0x15;
  local_8._1_3_ = 0;
  if (((uVar10 & 1) != 0) && (uVar10 = uVar10 & 0xfffffffe, 0xf < local_60)) {
    ppppuStack_3b4 = local_74[0];
                    /* WARNING: Subroutine does not return */
    puStack_3b8 = (uint *)&UNK_009fd1ff;
    FUN_00aae91b();
  }
  if (local_15 != '\0') {
    cVar2 = '\x03';
    goto LAB_009fdeab;
  }
  ppppuStack_3b4 = (undefined4 ****)0x9;
  puStack_3b8 = (uint *)0xdf4840;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = (undefined4 ****)((uint)local_90[0] & 0xffffff00);
  puStack_3bc = (uint *)0x9fd23a;
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  uVar11 = uVar10 | 2;
  ppppuStack_3b4 = (undefined4 ****)0x9fd254;
  local_1c = uVar11;
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    ppppuStack_3b4 = (undefined4 ****)0x5;
    puStack_3b8 = (uint *)0x9fd267;
    FUN_00a714a0();
    local_8 = 0x1f;
    uVar11 = uVar10 | 6;
    ppppuStack_3b4 = (undefined4 ****)0x9fd27e;
    local_1c = uVar11;
    cVar2 = FUN_00416db0();
    local_15 = '\x01';
    if (cVar2 != '\0') goto LAB_009fd286;
  }
  else {
LAB_009fd286:
    local_15 = '\0';
  }
  if ((uVar11 & 4) != 0) {
    uVar11 = uVar11 & 0xfffffffb;
    if (0xf < local_60) {
      ppppuStack_3b4 = local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_3b8 = (uint *)&UNK_009fd2a1;
      FUN_00aae91b();
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = (undefined4 ****)((uint)local_74[0] & 0xffffff00);
  }
  local_8._0_1_ = 0x15;
  local_8._1_3_ = 0;
  if (((uVar11 & 2) != 0) && (uVar11 = uVar11 & 0xfffffffd, 0xf < local_7c)) {
    ppppuStack_3b4 = local_90[0];
                    /* WARNING: Subroutine does not return */
    puStack_3b8 = (uint *)&UNK_009fd2d3;
    FUN_00aae91b();
  }
  if (local_15 != '\0') {
    cVar2 = '\x03';
    goto LAB_009fdeab;
  }
  ppppuStack_3b4 = (undefined4 ****)0x9fd2f5;
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
LAB_009fd342:
    local_15 = '\0';
  }
  else {
    ppppuStack_3b4 = (undefined4 ****)0x9fd309;
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x20);
    local_1c = uVar11 | 8;
    ppppuStack_3b4 = (undefined4 ****)0x3;
    puStack_3b8 = (uint *)0x9fd324;
    FUN_00a714a0();
    local_8._0_1_ = 0x21;
    local_8._1_3_ = 0;
    uVar11 = uVar11 | 0x18;
    ppppuStack_3b4 = (undefined4 ****)0x9fd33a;
    local_1c = uVar11;
    cVar2 = FUN_00416db0();
    local_15 = '\x01';
    if (cVar2 == '\0') goto LAB_009fd342;
  }
  if ((uVar11 & 0x10) != 0) {
    uVar11 = uVar11 & 0xffffffef;
    ppppuStack_3b4 = (undefined4 ****)0x9fd356;
    FUN_00408ad0();
  }
  local_8._0_1_ = 0x15;
  local_8._1_3_ = 0;
  if ((uVar11 & 8) != 0) {
    uVar11 = uVar11 & 0xfffffff7;
    ppppuStack_3b4 = (undefined4 ****)0x9fd370;
    FUN_00408ad0();
  }
  if (local_15 != '\0') {
    cVar2 = '\x06';
    goto LAB_009fdeab;
  }
  ppppuStack_3b4 = (undefined4 ****)0x9fd38d;
  FUN_009885d0();
  local_8 = CONCAT31(local_8._1_3_,0x22);
  uVar10 = uVar11 | 0x20;
  ppppuStack_3b4 = (undefined4 ****)0x9fd3a3;
  local_1c = uVar10;
  cVar2 = FUN_00416db0();
  if (cVar2 == '\0') {
    ppppuStack_3b4 = (undefined4 ****)0x9fd3b7;
    FUN_009885d0();
    local_8 = 0x23;
    local_1c = uVar11 | 0x60;
    ppppuStack_3b4 = (undefined4 ****)0x9;
    puStack_3b8 = (uint *)0x9fd3d8;
    FUN_00a714a0();
    local_8 = 0x24;
    uVar10 = uVar11 | 0xe0;
    ppppuStack_3b4 = (undefined4 ****)0x9fd3f1;
    local_1c = uVar10;
    cVar2 = FUN_00416db0();
    local_15 = '\x01';
    if (cVar2 == '\0') goto LAB_009fd3f9;
  }
  else {
LAB_009fd3f9:
    local_15 = '\0';
  }
  if ((char)uVar10 < '\0') {
    uVar10 = uVar10 & 0xffffff7f;
    ppppuStack_3b4 = (undefined4 ****)0x9fd412;
    FUN_00408ad0();
  }
  if ((uVar10 & 0x40) != 0) {
    uVar10 = uVar10 & 0xffffffbf;
    ppppuStack_3b4 = (undefined4 ****)0x9fd425;
    FUN_00408ad0();
  }
  local_8._0_1_ = 0x15;
  local_8._1_3_ = 0;
  if ((uVar10 & 0x20) != 0) {
    uVar10 = uVar10 & 0xffffffdf;
    ppppuStack_3b4 = (undefined4 ****)0x9fd43c;
    FUN_00408ad0();
  }
  if (local_15 != '\0') {
    cVar2 = '\x06';
    goto LAB_009fdeab;
  }
  ppppuStack_3b4 = (undefined4 ****)0x9fd45b;
  cVar2 = FUN_0040b360();
  if (cVar2 == '\0') {
LAB_009fd523:
    local_15 = '\0';
  }
  else {
    ppppuStack_3b4 = (undefined4 ****)&local_1e0;
    puStack_3b8 = (uint *)0x9fd475;
    FUN_00a1d7c0();
    ppppuStack_3b4 = (undefined4 ****)0x9fd482;
    FUN_009885d0();
    local_8._0_1_ = 0x25;
    ppppuStack_3b4 = (undefined4 ****)0x9fd49b;
    local_1c = uVar10 | 0x100;
    cVar2 = FUN_00416db0();
    uVar11 = uVar10 | 0x100;
    if (cVar2 == '\0') {
      ppppuStack_3b4 = (undefined4 ****)local_c0;
      puStack_3b8 = (uint *)0x9fd4ae;
      FUN_00a71420();
      local_8._0_1_ = 0x26;
      local_8._1_3_ = 0;
      uVar10 = uVar10 | 0x300;
      ppppuStack_3b4 = (undefined4 ****)0x9fd4ca;
      local_1c = uVar10;
      cVar2 = FUN_00416db0();
      uVar11 = uVar10;
      if (cVar2 == '\0') goto LAB_009fd523;
    }
    ppppuStack_3b4 = (undefined4 ****)0x9fd4db;
    FUN_009885d0();
    ppppuStack_3b4 = (undefined4 ****)&local_30;
    local_8 = 0x27;
    local_1c = uVar11 | 0x400;
    puStack_3b8 = (uint *)0x9fd4f7;
    FUN_00a71420();
    local_8._0_1_ = 0x28;
    local_8._1_3_ = 0;
    uVar10 = uVar11 | 0xc00;
    ppppuStack_3b4 = (undefined4 ****)0x9fd516;
    local_1c = uVar10;
    cVar2 = FUN_00416db0();
    if (cVar2 != '\0') goto LAB_009fd523;
    local_15 = '\x01';
  }
  if ((uVar10 & 0x800) != 0) {
    uVar10 = uVar10 & 0xfffff7ff;
    ppppuStack_3b4 = (undefined4 ****)0x9fd53d;
    FUN_0040b3c0();
  }
  if ((uVar10 & 0x400) != 0) {
    uVar10 = uVar10 & 0xfffffbff;
    ppppuStack_3b4 = (undefined4 ****)0x9fd553;
    FUN_00408ad0();
  }
  if ((uVar10 & 0x200) != 0) {
    uVar10 = uVar10 & 0xfffffdff;
    ppppuStack_3b4 = (undefined4 ****)0x9fd56c;
    FUN_0040b3c0();
  }
  local_8 = 0x15;
  if ((uVar10 & 0x100) != 0) {
    uVar10 = uVar10 & 0xfffffeff;
    ppppuStack_3b4 = (undefined4 ****)0x9fd58c;
    FUN_00408ad0();
  }
  if (local_15 == '\0') {
    ppppuStack_3b4 = (undefined4 ****)0x9fd885;
    FUN_009885d0();
    local_8 = CONCAT31(local_8._1_3_,0x39);
    uVar11 = uVar10 | 0x1000;
    ppppuStack_3b4 = (undefined4 ****)0x9fd8a2;
    local_1c = uVar11;
    cVar2 = FUN_00416db0();
    if (cVar2 == '\0') {
      ppppuStack_3b4 = (undefined4 ****)local_c0;
      puStack_3b8 = (uint *)0x9fd8b9;
      FUN_00a71420();
      local_8 = 0x3a;
      uVar11 = uVar10 | 0x3000;
      ppppuStack_3b4 = (undefined4 ****)0x9fd8db;
      local_1c = uVar11;
      cVar2 = FUN_00416db0();
      if (cVar2 == '\0') {
        ppppuStack_3b4 = (undefined4 ****)&local_24c;
        puStack_3b8 = (uint *)0x9fd8f1;
        FUN_00a1d7c0();
        ppppuStack_3b4 = (undefined4 ****)0x9fd8fe;
        FUN_009885d0();
        local_8 = 0x3b;
        uVar11 = uVar10 | 0x7000;
        ppppuStack_3b4 = (undefined4 ****)0x9fd917;
        local_1c = uVar11;
        cVar2 = FUN_00416db0();
        if (cVar2 == '\0') goto LAB_009fd96b;
      }
      ppppuStack_3b4 = (undefined4 ****)0x9fd928;
      FUN_009885d0();
      ppppuStack_3b4 = (undefined4 ****)&local_30;
      local_8 = 0x3c;
      local_1c = uVar11 | 0x8000;
      puStack_3b8 = (uint *)0x9fd944;
      FUN_00a71420();
      local_8 = 0x3d;
      uVar11 = uVar11 | 0x18000;
      ppppuStack_3b4 = (undefined4 ****)0x9fd963;
      local_1c = uVar11;
      cVar2 = FUN_00416db0();
      local_15 = '\x01';
      if (cVar2 != '\0') goto LAB_009fd96b;
    }
    else {
LAB_009fd96b:
      local_15 = '\0';
    }
    if ((uVar11 & 0x10000) != 0) {
      uVar11 = uVar11 & 0xfffeffff;
      ppppuStack_3b4 = (undefined4 ****)0x9fd985;
      FUN_0040b3c0();
    }
    if ((uVar11 & 0x8000) != 0) {
      uVar11 = uVar11 & 0xffff7fff;
      ppppuStack_3b4 = (undefined4 ****)0x9fd99b;
      FUN_00408ad0();
    }
    if ((uVar11 & 0x4000) != 0) {
      uVar11 = uVar11 & 0xffffbfff;
      ppppuStack_3b4 = (undefined4 ****)0x9fd9b4;
      FUN_00408ad0();
    }
    if ((uVar11 & 0x2000) != 0) {
      uVar11 = uVar11 & 0xffffdfff;
      ppppuStack_3b4 = (undefined4 ****)0x9fd9cd;
      FUN_0040b3c0();
    }
    local_8._0_1_ = 0x15;
    local_8._1_3_ = 0;
    if ((uVar11 & 0x1000) != 0) {
      uVar11 = uVar11 & 0xffffefff;
      ppppuStack_3b4 = (undefined4 ****)0x9fd9ed;
      FUN_00408ad0();
    }
    if (local_15 == '\0') {
      ppppuStack_3b4 = (undefined4 ****)0x9fddc5;
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
LAB_009fddf4:
        local_15 = '\0';
      }
      else {
        ppppuStack_3b4 = (undefined4 ****)&local_30;
        puStack_3b8 = (uint *)0x9fddd5;
        FUN_00a71420();
        uVar11 = uVar11 | 0x20000;
        ppppuStack_3b4 = (undefined4 ****)0x9fddec;
        cVar2 = FUN_0040b360();
        local_15 = '\x01';
        if (cVar2 == '\0') goto LAB_009fddf4;
      }
      if ((uVar11 & 0x20000) != 0) {
        uVar11 = uVar11 & 0xfffdffff;
        ppppuStack_3b4 = (undefined4 ****)0x9fde0e;
        FUN_0040b3c0();
      }
      if (local_15 != '\0') {
        cVar2 = '\x05';
        goto LAB_009fdeab;
      }
      ppppuStack_3b4 = (undefined4 ****)0x9fde2b;
      FUN_009885d0();
      local_8._0_1_ = 0x54;
      uVar10 = uVar11 | 0x40000;
      ppppuStack_3b4 = (undefined4 ****)0x9fde44;
      local_1c = uVar10;
      cVar2 = FUN_00416db0();
      if (cVar2 == '\0') {
        ppppuStack_3b4 = (undefined4 ****)&local_30;
        puStack_3b8 = (uint *)0x9fde54;
        FUN_00a71420();
        uVar10 = uVar11 | 0xc0000;
        ppppuStack_3b4 = (undefined4 ****)0x9fde6b;
        cVar2 = FUN_0040b360();
        local_15 = '\x01';
        if (cVar2 == '\0') goto LAB_009fde73;
      }
      else {
LAB_009fde73:
        local_15 = '\0';
      }
      if ((uVar10 & 0x80000) != 0) {
        uVar10 = uVar10 & 0xfff7ffff;
        ppppuStack_3b4 = (undefined4 ****)0x9fde8d;
        FUN_0040b3c0();
      }
      if ((uVar10 & 0x40000) != 0) {
        ppppuStack_3b4 = (undefined4 ****)0x9fde9d;
        FUN_00408ad0();
      }
      cVar2 = (-(local_15 != '\0') & 3U) + 2;
      goto LAB_009fdeab;
    }
    ppppuStack_3b4 = (undefined4 ****)0x9fda0c;
    FUN_009885d0();
    local_8._0_1_ = 0x3e;
    ppppuStack_3b4 = (undefined4 ****)0x9fda20;
    FUN_009885d0();
    ppppuStack_3b4 = (undefined4 ****)&DAT_013f0670;
    local_8._0_1_ = 0x3f;
    puStack_3b8 = (uint *)0x9fda39;
    FUN_00988fa0();
    local_8._0_1_ = 0x40;
    puStack_3b8 = (uint *)0x9fda50;
    ppppuStack_3b4 = (undefined4 ****)local_ac;
    FUN_00988f20();
    ppppuStack_3b4 = (undefined4 ****)param_1;
    local_8._0_1_ = 0x41;
    puStack_3b8 = (uint *)0x9fda65;
    FUN_00988f20();
    ppppuStack_3b4 = local_90;
    local_8._0_1_ = 0x42;
    puStack_3b8 = (uint *)0x9fda7a;
    puStack_3bc = (uint *)FUN_00988f20();
    ppppuStack_3b4 = (undefined4 ****)0xffffffff;
    puStack_3b8 = (uint *)0x0;
    local_8._0_1_ = 0x43;
    puStack_3c0 = (undefined *)0x9fda8e;
    FUN_00408ed0();
    ppppuStack_3b4 = (undefined4 ****)0x9fda95;
    FUN_00408ad0();
    ppppuStack_3b4 = (undefined4 ****)0x9fdaa0;
    FUN_00408ad0();
    ppppuStack_3b4 = (undefined4 ****)0x9fdaab;
    FUN_00408ad0();
    ppppuStack_3b4 = (undefined4 ****)0x9fdab6;
    FUN_00408ad0();
    ppppuStack_3b4 = (undefined4 ****)0x9fdac1;
    FUN_00408ad0();
    local_8._0_1_ = 0x15;
    ppppuStack_3b4 = (undefined4 ****)0x9fdad0;
    FUN_00408ad0();
    local_20 = (undefined1 *)&puStack_3cc;
    puStack_3d0 = (undefined1 *)0x9fdae3;
    FUN_00401320();
    piVar5 = local_b0;
    puStack_3d0 = local_38;
    puStack_3d4 = (uint *)0x9fdaf6;
    (**(code **)(*local_b0 + 0x10))();
    puStack_3d4 = (uint *)0x9fdafe;
    FUN_009fc110();
    puStack_3d4 = (uint *)0x9fdb0e;
    FUN_009885d0();
    local_8._0_1_ = 0x44;
    puStack_3d4 = (uint *)0x9fdb22;
    FUN_009885d0();
    local_8._0_1_ = 0x45;
    puStack_3d4 = (uint *)&DAT_013f0670;
    uStack_3d8 = 0x9fdb3b;
    FUN_00988fa0();
    local_8._0_1_ = 0x46;
    uStack_3d8 = 0x9fdb52;
    puStack_3d4 = local_ac;
    FUN_00988f20();
    puStack_3d4 = (uint *)param_1;
    local_8._0_1_ = 0x47;
    uStack_3d8 = 0x9fdb67;
    FUN_00988f20();
    puStack_3d4 = local_cc;
    local_8._0_1_ = 0x48;
    uStack_3d8 = 0x9fdb7f;
    uStack_3dc = FUN_00988f20();
    puStack_3d4 = (uint *)0xffffffff;
    uStack_3d8 = 0;
    local_8._0_1_ = 0x49;
    uStack_3e0 = 0x9fdb93;
    FUN_00408ed0();
    puStack_3d4 = (uint *)0x9fdb9a;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fdba5;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fdbb0;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fdbbb;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fdbc6;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fdbd1;
    FUN_00408ad0();
    local_20 = auStack_3ec;
    local_8 = CONCAT31(local_8._1_3_,0x4a);
    FUN_00401320();
    (**(code **)(*piVar5 + 0x10))(local_38);
    ppppuStack_3b4 = (undefined4 ****)0x9fdbfd;
    FUN_009fc110();
    ppppuStack_3b4 = (undefined4 ****)0x0;
    local_8 = 0x15;
    puStack_3b8 = (uint *)0x9fdc13;
    FUN_00a714a0();
    local_8._0_1_ = 0x50;
    ppppuStack_3b4 = local_74[0];
    if (local_60 < 0x10) {
      ppppuStack_3b4 = local_74;
    }
    puStack_3b8 = (uint *)0x9fdc28;
    uVar6 = FUN_00aaf0c5();
    *param_3 = uVar6;
    local_20 = (undefined1 *)&puStack_3b8;
    puStack_3b8 = DAT_00f0d838;
    ppppuStack_3b4 = (undefined4 ****)DAT_00f0d83c;
    puStack_3bc = (uint *)0x9fdc49;
    FUN_009c16d0();
    puStack_3bc = (uint *)0x80;
    puStack_3c0 = (undefined *)0x9fdc55;
    local_20 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x51;
    if (local_20 != (undefined1 *)0x0) {
      ppppuStack_3b4 = (undefined4 ****)local_104;
      puStack_3b8 = param_5;
      puStack_3c0 = (undefined *)*param_3;
      puStack_3bc = (uint *)param_4;
      puStack_3c4 = param_2;
      uStack_3c8 = param_1;
      puStack_3d0 = (undefined1 *)0x9fdc83;
      puStack_3cc = local_20;
      FUN_00a18100();
    }
    local_8._0_1_ = 0x50;
    ppppuStack_3b4 = (undefined4 ****)0x9fdc94;
    FUN_00a71a10();
    ppppuStack_3b4 = (undefined4 ****)0x9fdca4;
    FUN_009885d0();
    ppppuStack_3b4 = (undefined4 ****)0x4;
    puStack_3b8 = (uint *)0x1a7;
    uVar9 = 0x52;
    local_8._0_1_ = 0x52;
    puStack_3c0 = (undefined *)0x9fdcbe;
    puStack_3bc = local_ac;
    FUN_004015b0();
    local_8._0_1_ = 0x53;
  }
  else {
    ppppuStack_3b4 = (undefined4 ****)0x9fd5ab;
    FUN_009885d0();
    ppppuStack_3b4 = (undefined4 ****)param_1;
    local_8._0_1_ = 0x29;
    puStack_3b8 = (uint *)0x9fd5c0;
    FUN_00988fa0();
    local_8._0_1_ = 0x2a;
    puStack_3b8 = (uint *)0x9fd5d7;
    ppppuStack_3b4 = (undefined4 ****)local_ac;
    puStack_3bc = (uint *)FUN_00988f20();
    ppppuStack_3b4 = (undefined4 ****)0xffffffff;
    puStack_3b8 = (uint *)0x0;
    local_8._0_1_ = 0x2b;
    puStack_3c0 = (undefined *)0x9fd5eb;
    FUN_00408ed0();
    ppppuStack_3b4 = (undefined4 ****)0x9fd5f2;
    FUN_00408ad0();
    ppppuStack_3b4 = (undefined4 ****)0x9fd5fa;
    FUN_00408ad0();
    local_8._0_1_ = 0x15;
    ppppuStack_3b4 = (undefined4 ****)0x9fd609;
    FUN_00408ad0();
    local_20 = (undefined1 *)&puStack_3cc;
    puStack_3d0 = (undefined1 *)0x9fd61c;
    FUN_00401320();
    piVar5 = local_b0;
    puStack_3d0 = local_38;
    puStack_3d4 = (uint *)0x9fd62f;
    (**(code **)(*local_b0 + 0x10))();
    puStack_3d4 = (uint *)0x9fd637;
    FUN_009fc110();
    puStack_3d4 = (uint *)0x9fd647;
    FUN_009885d0();
    puStack_3d4 = (uint *)param_1;
    local_8._0_1_ = 0x2c;
    uStack_3d8 = 0x9fd65c;
    FUN_00988fa0();
    local_8._0_1_ = 0x2d;
    uStack_3d8 = 0x9fd673;
    puStack_3d4 = local_ac;
    uStack_3dc = FUN_00988f20();
    puStack_3d4 = (uint *)0xffffffff;
    uStack_3d8 = 0;
    local_8._0_1_ = 0x2e;
    uStack_3e0 = 0x9fd687;
    FUN_00408ed0();
    puStack_3d4 = (uint *)0x9fd68e;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fd696;
    FUN_00408ad0();
    puStack_3d4 = (uint *)0x9fd6a1;
    FUN_00408ad0();
    local_20 = auStack_3ec;
    local_8 = CONCAT31(local_8._1_3_,0x2f);
    FUN_00401320();
    (**(code **)(*piVar5 + 0x10))(local_38);
    ppppuStack_3b4 = (undefined4 ****)0x9fd6cd;
    FUN_009fc110();
    ppppuStack_3b4 = (undefined4 ****)0x0;
    local_8 = 0x15;
    puStack_3b8 = (uint *)0x9fd6e3;
    FUN_00a714a0();
    local_8._0_1_ = 0x35;
    ppppuStack_3b4 = local_74[0];
    if (local_60 < 0x10) {
      ppppuStack_3b4 = local_74;
    }
    puStack_3b8 = (uint *)0x9fd6f8;
    uVar6 = FUN_00aaf0c5();
    *param_3 = uVar6;
    local_20 = (undefined1 *)&puStack_3b8;
    puStack_3b8 = DAT_00f0d838;
    ppppuStack_3b4 = (undefined4 ****)DAT_00f0d83c;
    puStack_3bc = (uint *)0x9fd719;
    FUN_009c16d0();
    puStack_3bc = (uint *)0x80;
    puStack_3c0 = (undefined *)0x9fd725;
    local_20 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x36;
    if (local_20 != (undefined1 *)0x0) {
      ppppuStack_3b4 = (undefined4 ****)local_104;
      puStack_3b8 = param_5;
      puStack_3c0 = (undefined *)*param_3;
      puStack_3bc = (uint *)param_4;
      puStack_3c4 = local_120;
      uStack_3c8 = param_1;
      puStack_3d0 = (undefined1 *)0x9fd756;
      puStack_3cc = local_20;
      FUN_00a18100();
    }
    local_8._0_1_ = 0x35;
    ppppuStack_3b4 = (undefined4 ****)0x9fd767;
    FUN_00a71a10();
    ppppuStack_3b4 = (undefined4 ****)0x9fd777;
    FUN_009885d0();
    ppppuStack_3b4 = (undefined4 ****)0x4;
    puStack_3b8 = (uint *)0x186;
    uVar9 = 0x37;
    local_8._0_1_ = 0x37;
    puStack_3c0 = (undefined *)0x9fd791;
    puStack_3bc = local_ac;
    FUN_004015b0();
    local_8._0_1_ = 0x38;
  }
  cVar2 = '\x01';
  ppppuStack_3b4 = (undefined4 ****)0xe3d830;
  puStack_3b8 = (uint *)0x9fdcd6;
  puStack_3b8 = (uint *)FUN_00987d20();
  puStack_3bc = (uint *)0x9fdcdf;
  puStack_3b8 = (uint *)FUN_00989050();
  puStack_3bc = (uint *)0x9fdce8;
  puStack_3bc = (uint *)FUN_00418e30();
  puStack_3c0 = (undefined *)0x9fdcee;
  FUN_00401280();
  ppppuStack_3b4 = (undefined4 ****)0x9fdcff;
  local_8._0_1_ = uVar9;
  FUN_00401650();
  ppppuStack_3b4 = (undefined4 ****)0x9fdd0a;
  FUN_00408ad0();
  ppppuStack_3b4 = (undefined4 ****)0x9fdd12;
  FUN_00408ad0();
LAB_009fdeab:
  iVar4 = local_4c;
  if (0xf < local_f0) {
    ppppuStack_3b4 = (undefined4 ****)local_104[0];
                    /* WARNING: Subroutine does not return */
    puStack_3b8 = (uint *)&UNK_009fdec0;
    FUN_00aae91b();
  }
  local_f0 = 0xf;
  local_f4 = 0;
  local_104[0] = local_104[0] & 0xffffff00;
  if (0xf < local_10c) {
    ppppuStack_3b4 = (undefined4 ****)local_120[0];
                    /* WARNING: Subroutine does not return */
    puStack_3b8 = (uint *)&UNK_009fdef1;
    FUN_00aae91b();
  }
  local_10c = 0xf;
  local_110 = 0;
  local_120[0] = local_120[0] & 0xffffff00;
  if (local_4c != 0) {
    ppppuStack_3b4 = (undefined4 ****)local_20;
    puStack_3b8 = local_48;
    puStack_3bc = (uint *)0x9fdf1c;
    FUN_00463b30();
    puStack_3bc = (uint *)iVar4;
                    /* WARNING: Subroutine does not return */
    puStack_3c0 = &UNK_009fdf22;
    FUN_00aae91b();
  }
  if (local_d4 < 0x10) {
    ExceptionList = local_10;
    return cVar2;
  }
  ppppuStack_3b4 = (undefined4 ****)local_e8[0];
                    /* WARNING: Subroutine does not return */
  puStack_3b8 = (uint *)&UNK_009fdf3a;
  FUN_00aae91b();
}


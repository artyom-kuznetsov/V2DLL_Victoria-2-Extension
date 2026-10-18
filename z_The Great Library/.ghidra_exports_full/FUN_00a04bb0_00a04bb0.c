// FUN_00a04bb0 @ 00a04bb0 body=[[00a04bb0, 00a04c59] [00a04c5d, 00a05108] [00a0510c, 00a0513f] [00a05143, 00a05171] [00a05175, 00a051a3] [00a051a7, 00a051d5] [00a051d9, 00a05207] [00a0520b, 00a05239] [00a0523d, 00a0526b] [00a0526f, 00a0529d] [00a052a1, 00a052cf] [00a052d3, 00a052fb] [00a052ff, 00a0531e] [00a05322, 00a05344] [00a05348, 00a05373] [00a05377, 00a053a5] [00a053a9, 00a053d7] [00a053db, 00a05409] [00a0540d, 00a0543b] [00a0543f, 00a0546d] [00a05471, 00a0549f] [00a054a3, 00a054d1] [00a054d5, 00a05503] [00a05507, 00a05535] [00a05539, 00a05567] [00a0556b, 00a055a1] [00a055a5, 00a05624] [00a0562d, 00a05a74] [00a05a78, 00a05aab] [00a05aaf, 00a05add] [00a05ae1, 00a05b0c] [00a05b10, 00a05b35] [00a05b39, 00a05b60] [00a05b64, 00a05c00] [00a05c04, 00a05c37] [00a05c3b, 00a05e0e] [00a05e12, 00a05e26]]


void FUN_00a04bb0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_ECX;
  int *piVar4;
  undefined1 auStack_49c [4];
  undefined4 uStack_498;
  uint *puStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 *puStack_488;
  undefined1 *puStack_484;
  uint *puStack_480;
  undefined1 local_47c [4];
  undefined4 uStack_478;
  undefined4 uStack_474;
  uint uStack_470;
  char *local_46c;
  char *local_468;
  int *local_450;
  undefined4 local_448;
  uint local_444;
  ushort local_440;
  ushort local_43e;
  undefined4 local_434;
  int *local_430;
  undefined1 *local_42c;
  uint local_428;
  uint local_424;
  undefined4 uStack_418;
  uint local_414;
  uint local_410;
  uint uStack_40c;
  uint local_408;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint local_3f4;
  uint uStack_3f0;
  uint local_3ec;
  undefined4 uStack_3e0;
  uint local_3dc;
  uint local_3d8;
  uint uStack_3d4;
  uint local_3d0;
  undefined4 uStack_3c4;
  uint local_3c0;
  uint local_3bc;
  uint uStack_3b8;
  uint local_3b4;
  undefined4 uStack_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_398;
  undefined4 local_388;
  uint local_384;
  uint local_37c;
  uint uStack_378;
  uint local_374;
  uint uStack_370;
  undefined4 uStack_36c;
  uint uStack_368;
  uint local_360;
  undefined4 local_350;
  uint local_34c;
  uint local_344;
  undefined4 local_334;
  uint local_330;
  uint local_328;
  undefined4 local_318;
  uint local_314;
  uint local_304;
  undefined4 local_2f4;
  uint local_2f0;
  uint local_2e8;
  undefined4 local_2d8;
  uint local_2d4;
  uint local_2cc;
  undefined4 local_2bc;
  uint local_2b8;
  uint local_2b0;
  undefined4 local_2a0;
  uint local_29c;
  uint local_294;
  undefined4 local_284;
  uint local_280;
  uint local_278;
  undefined4 local_268;
  uint local_264;
  undefined4 uStack_260;
  uint local_25c;
  uint local_24c;
  uint local_248;
  undefined1 local_240 [20];
  uint uStack_22c;
  uint local_224;
  undefined4 local_214;
  uint local_210;
  uint local_208;
  undefined4 local_1f8;
  uint local_1f4;
  uint local_1ec;
  undefined4 local_1dc;
  uint local_1d8;
  uint local_1d0;
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4;
  undefined4 local_1a4;
  uint local_1a0;
  uint local_198;
  undefined4 local_188;
  uint local_184;
  uint local_17c;
  undefined4 local_16c;
  uint local_168;
  uint local_160;
  undefined4 local_150;
  uint local_14c;
  uint local_144;
  undefined4 local_134;
  uint local_130;
  undefined1 auStack_12c [4];
  uint local_128;
  undefined4 local_118;
  uint local_114 [13];
  uint uStack_e0;
  undefined **ppuStack_60;
  undefined4 uStack_2c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5d686;
  pvStack_14 = ExceptionList;
  local_468 = (char *)0xa04be0;
  ExceptionList = &pvStack_14;
  local_428 = in_ECX;
  cVar1 = FUN_009fabb0();
  if (cVar1 != '\0') {
    local_468 = (char *)0x0;
    local_46c = (char *)(in_ECX + 8);
    local_430 = DAT_01258b64;
    local_314 = 0xf;
    local_318 = 0;
    local_328 = local_328 & 0xffffff00;
    uStack_470 = 0xa04c20;
    FUN_00408ed0();
    local_c = 0;
    local_468 = (char *)0xa04c34;
    local_42c = (undefined1 *)FUN_009c1bd0();
    local_c = 0xffffffff;
    if (0xf < local_314) {
                    /* WARNING: Subroutine does not return */
      local_468 = &UNK_00a04c5a;
      FUN_00aae91b();
    }
    local_444 = DAT_00f0d83c;
    local_314 = 0xf;
    local_318 = 0;
    local_328 = local_328 & 0xffffff00;
    local_448 = DAT_00f0d838;
    iVar3 = DAT_01258a94;
    if (DAT_00f0d838 < (undefined1 *)0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 == 0) {
      local_450 = (int *)0x0;
    }
    else {
      local_450 = (int *)FUN_009c1d40();
    }
    if (*(char *)(in_ECX + 0x78) != '\0') {
      local_468 = (char *)0xa04cd8;
      GetSystemTime((LPSYSTEMTIME)&local_448);
      local_37c = (uint)local_448 & 0xffff;
      uStack_370 = (uint)local_440;
      uStack_378 = (uint)local_448._2_2_;
      local_374 = local_444 >> 0x10;
      iVar3 = *(int *)(in_ECX + 0x74);
      *(ulonglong *)(iVar3 + 0x8c) =
           (ulonglong)(CONCAT24(local_448._2_2_,local_448) & 0xffff0000ffff);
      *(ulonglong *)(iVar3 + 0x94) = (ulonglong)CONCAT24(local_440,local_374);
      *(uint *)(iVar3 + 0x9c) = (uint)local_43e;
      cVar1 = FUN_0040b360();
      local_468 = "\");";
      if (cVar1 == '\0') {
        local_330 = 0xf;
        local_334 = 0;
        local_344 = local_344 & 0xffffff00;
        local_46c = (char *)0xa05652;
        FUN_00409350();
        local_c = 0x34;
        local_448 = (undefined1 *)FUN_00a16a20();
        local_c._0_1_ = 0x35;
        local_468 = "\",\"";
        local_410 = 0xf;
        local_414 = 0;
        local_424 = local_424 & 0xffffff00;
        local_46c = (char *)0xa05699;
        FUN_00409350();
        local_c._0_1_ = 0x36;
        local_46c = (char *)(*(int *)(in_ECX + 0x74) + 0x70);
        local_468 = (char *)0x0;
        local_3f4 = 0xf;
        local_3f8 = 0;
        local_408 = local_408 & 0xffffff00;
        uStack_470 = 0xa056c0;
        FUN_00408ed0();
        local_c._0_1_ = 0x37;
        local_468 = "\",\"created\",\"";
        local_3d8 = 0xf;
        local_3dc = 0;
        local_3ec = local_3ec & 0xffffff00;
        local_46c = (char *)0xa056ea;
        FUN_00409350();
        local_c._0_1_ = 0x38;
        local_468 = "\",\"";
        local_3a0 = 0xf;
        local_3a4 = 0;
        local_3b4 = local_3b4 & 0xffffff00;
        local_46c = (char *)0xa0571a;
        FUN_00409350();
        local_c._0_1_ = 0x39;
        local_468 = "_games values (0,\"";
        local_384 = 0xf;
        local_388 = 0;
        local_398 = local_398 & 0xffffff00;
        local_46c = (char *)0xa0574a;
        FUN_00409350();
        local_c._0_1_ = 0x3a;
        local_468 = "INSERT INTO created_";
        local_3bc = 0xf;
        local_3c0 = 0;
        local_3d0 = local_3d0 & 0xffffff00;
        local_46c = (char *)0xa0577a;
        FUN_00409350();
        local_c._0_1_ = 0x3b;
        local_468 = (char *)0xa0579a;
        FUN_00988f20();
        local_c._0_1_ = 0x3c;
        local_468 = (char *)0xa057b8;
        FUN_00988f20();
        local_c._0_1_ = 0x3d;
        local_468 = (char *)0xa057d5;
        FUN_00988f20();
        local_c._0_1_ = 0x3e;
        local_468 = (char *)0xa057f3;
        FUN_00988f20();
        local_c._0_1_ = 0x3f;
        local_468 = (char *)0xa05810;
        FUN_00988f20();
        local_c._0_1_ = 0x40;
        local_468 = (char *)0xa0582b;
        FUN_00988f20();
        local_c._0_1_ = 0x41;
        local_468 = (char *)0xa05846;
        FUN_00988f20();
        local_c._0_1_ = 0x42;
        local_468 = (char *)0xa05861;
        FUN_00988f20();
        local_c._0_1_ = 0x43;
        local_468 = (char *)0xa0587c;
        FUN_00988f20();
        local_c._0_1_ = 0x44;
        local_468 = (char *)0xa0589a;
        FUN_00988f20();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x56);
        FUN_00408ad0();
        local_448 = local_47c;
        puStack_480 = (uint *)0xa05975;
        FUN_00401320();
        puStack_480 = &local_37c;
        puStack_484 = (undefined1 *)0xa05988;
        (**(code **)(*local_430 + 0x10))();
        puStack_484 = (undefined1 *)0xa05994;
        FUN_009fc110();
        uStack_2c = 0xffffffff;
        puStack_484 = (undefined1 *)0xa059ab;
        FUN_00408ad0();
      }
      else {
        local_34c = 0xf;
        local_350 = 0;
        local_360 = local_360 & 0xffffff00;
        local_46c = (char *)0xa04d7b;
        FUN_00409350();
        local_c = 1;
        local_468 = (char *)0xa04d95;
        local_448 = (undefined1 *)FUN_00a16c30();
        local_c._0_1_ = 2;
        local_468 = "\",\"";
        local_2d4 = 0xf;
        local_2d8 = 0;
        local_2e8 = local_2e8 & 0xffffff00;
        local_46c = (char *)0xa04dd0;
        FUN_00409350();
        local_c._0_1_ = 3;
        local_434 = FUN_00a16a20();
        local_c._0_1_ = 4;
        local_468 = "\",\"";
        local_29c = 0xf;
        local_2a0 = 0;
        local_2b0 = local_2b0 & 0xffffff00;
        local_46c = (char *)0xa04e20;
        FUN_00409350();
        local_c._0_1_ = 5;
        local_46c = (char *)(*(int *)(in_ECX + 0x74) + 0x70);
        local_468 = (char *)0x0;
        local_264 = 0xf;
        local_268 = 0;
        local_278 = local_278 & 0xffffff00;
        uStack_470 = 0xa04e53;
        FUN_00408ed0();
        local_c._0_1_ = 6;
        local_468 = ",\"";
        local_210 = 0xf;
        local_214 = 0;
        local_224 = local_224 & 0xffffff00;
        local_46c = (char *)0xa04e83;
        FUN_00409350();
        local_c._0_1_ = 7;
        local_468 = (char *)0xa04e9c;
        FUN_009888f0();
        local_c._0_1_ = 8;
        local_468 = "\",\"created\",";
        local_248 = 0xf;
        local_24c = 0;
        local_25c = local_25c & 0xffffff00;
        local_46c = (char *)0xa04ed0;
        FUN_00409350();
        local_c._0_1_ = 9;
        local_280 = 0xf;
        local_284 = 0;
        local_294 = local_294 & 0xffffff00;
        local_468 = "\",\"";
        local_46c = (char *)0xa04f00;
        FUN_00409350();
        local_c._0_1_ = 10;
        local_468 = "_games values (0,\"";
        local_2b8 = 0xf;
        local_2bc = 0;
        local_2cc = local_2cc & 0xffffff00;
        local_46c = (char *)0xa04f30;
        FUN_00409350();
        local_c._0_1_ = 0xb;
        local_468 = "INSERT INTO created_";
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304 = local_304 & 0xffffff00;
        local_46c = (char *)0xa04f60;
        FUN_00409350();
        local_c._0_1_ = 0xc;
        local_468 = (char *)0xa04f7d;
        FUN_00988f20();
        local_c._0_1_ = 0xd;
        local_468 = (char *)0xa04f98;
        FUN_00988f20();
        local_c._0_1_ = 0xe;
        local_468 = (char *)0xa04fb2;
        FUN_00988f20();
        local_c._0_1_ = 0xf;
        local_468 = (char *)0xa04fd0;
        FUN_00988f20();
        local_c._0_1_ = 0x10;
        local_468 = (char *)0xa04fed;
        FUN_00988f20();
        local_c._0_1_ = 0x11;
        local_468 = (char *)0xa0500b;
        FUN_00988f20();
        local_c._0_1_ = 0x12;
        local_468 = (char *)0xa05026;
        FUN_00988f20();
        local_c._0_1_ = 0x13;
        local_468 = (char *)0xa05044;
        FUN_00988f20();
        local_c._0_1_ = 0x14;
        local_468 = (char *)0xa05062;
        FUN_00988f20();
        local_c._0_1_ = 0x15;
        local_468 = (char *)0xa05080;
        FUN_00988f20();
        local_c._0_1_ = 0x16;
        local_468 = (char *)0xa0509b;
        FUN_00988f20();
        local_c._0_1_ = 0x17;
        local_468 = (char *)0xa050b9;
        FUN_00988f20();
        local_c._0_1_ = 0x18;
        local_468 = (char *)0xa050d4;
        FUN_00988f20();
        local_c._0_1_ = 0x19;
        local_468 = (char *)0xa050f2;
        FUN_00988f20();
        if (0xf < local_114[0]) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05109;
          FUN_00aae91b();
        }
        local_114[0] = 0xf;
        local_118 = 0;
        local_128 = local_128 & 0xffffff00;
        if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05140;
          FUN_00aae91b();
        }
        local_184 = 0xf;
        local_188 = 0;
        local_198 = local_198 & 0xffffff00;
        if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05172;
          FUN_00aae91b();
        }
        local_130 = 0xf;
        local_134 = 0;
        local_144 = local_144 & 0xffffff00;
        if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a051a4;
          FUN_00aae91b();
        }
        local_14c = 0xf;
        local_150 = 0;
        local_160 = local_160 & 0xffffff00;
        if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a051d6;
          FUN_00aae91b();
        }
        local_1d8 = 0xf;
        local_1dc = 0;
        local_1ec = local_1ec & 0xffffff00;
        if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05208;
          FUN_00aae91b();
        }
        local_1a0 = 0xf;
        local_1a4 = 0;
        local_1b4 = local_1b4 & 0xffffff00;
        if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0523a;
          FUN_00aae91b();
        }
        local_168 = 0xf;
        local_16c = 0;
        local_17c = local_17c & 0xffffff00;
        if (0xf < local_1f4) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0526c;
          FUN_00aae91b();
        }
        local_1f4 = 0xf;
        local_1f8 = 0;
        local_208 = local_208 & 0xffffff00;
        if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0529e;
          FUN_00aae91b();
        }
        local_1bc = 0xf;
        local_1c0 = 0;
        local_1d0 = local_1d0 & 0xffffff00;
        if (0xf < local_330) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a052d0;
          FUN_00aae91b();
        }
        local_330 = 0xf;
        local_334 = 0;
        local_344 = local_344 & 0xffffff00;
        if (0xf < local_410) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a052fc;
          FUN_00aae91b();
        }
        local_410 = 0xf;
        local_414 = 0;
        local_424 = local_424 & 0xffffff00;
        if (0xf < local_3f4) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0531f;
          FUN_00aae91b();
        }
        local_3f4 = 0xf;
        local_3f8 = 0;
        local_408 = local_408 & 0xffffff00;
        if (0xf < local_3d8) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05345;
          FUN_00aae91b();
        }
        local_3d8 = 0xf;
        local_3dc = 0;
        local_3ec = local_3ec & 0xffffff00;
        if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05374;
          FUN_00aae91b();
        }
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304 = local_304 & 0xffffff00;
        if (0xf < local_2b8) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a053a6;
          FUN_00aae91b();
        }
        local_2b8 = 0xf;
        local_2bc = 0;
        local_2cc = local_2cc & 0xffffff00;
        if (0xf < local_280) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a053d8;
          FUN_00aae91b();
        }
        local_280 = 0xf;
        local_284 = 0;
        local_294 = local_294 & 0xffffff00;
        if (0xf < local_248) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0540a;
          FUN_00aae91b();
        }
        local_248 = 0xf;
        local_24c = 0;
        local_25c = local_25c & 0xffffff00;
        if (0xf < local_3a0) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0543c;
          FUN_00aae91b();
        }
        local_3a0 = 0xf;
        local_3a4 = 0;
        local_3b4 = local_3b4 & 0xffffff00;
        if (0xf < local_210) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a0546e;
          FUN_00aae91b();
        }
        local_210 = 0xf;
        local_214 = 0;
        local_224 = local_224 & 0xffffff00;
        if (0xf < local_264) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a054a0;
          FUN_00aae91b();
        }
        local_264 = 0xf;
        local_268 = 0;
        local_278 = local_278 & 0xffffff00;
        if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a054d2;
          FUN_00aae91b();
        }
        local_29c = 0xf;
        local_2a0 = 0;
        local_2b0 = local_2b0 & 0xffffff00;
        if (0xf < local_384) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05504;
          FUN_00aae91b();
        }
        local_384 = 0xf;
        local_388 = 0;
        local_398 = local_398 & 0xffffff00;
        if (0xf < local_2d4) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05536;
          FUN_00aae91b();
        }
        local_2d4 = 0xf;
        local_2d8 = 0;
        local_2e8 = local_2e8 & 0xffffff00;
        if (0xf < local_3bc) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a05568;
          FUN_00aae91b();
        }
        local_3bc = 0xf;
        local_3c0 = 0;
        local_3d0 = local_3d0 & 0xffffff00;
        local_c = CONCAT31(local_c._1_3_,0x33);
        if (0xf < local_34c) {
                    /* WARNING: Subroutine does not return */
          local_468 = &UNK_00a055a2;
          FUN_00aae91b();
        }
        local_448 = local_47c;
        puStack_480 = (uint *)0xffffffff;
        puStack_484 = (undefined1 *)0x0;
        puStack_488 = local_240;
        local_468 = (char *)0xf;
        local_46c = (char *)0x0;
        local_34c = 0xf;
        local_350 = 0;
        local_360 = local_360 & 0xffffff00;
        local_47c[0] = 0;
        uStack_48c = 0xa055e0;
        FUN_00408ed0();
        puStack_480 = &local_37c;
        puStack_484 = (undefined1 *)0xa055f3;
        (**(code **)(*local_430 + 0x10))();
        puStack_484 = (undefined1 *)0xa055ff;
        FUN_009fc110();
        uStack_2c = 0xffffffff;
        if (0xf < local_24c) {
          puStack_484 = (undefined1 *)uStack_260;
                    /* WARNING: Subroutine does not return */
          puStack_488 = &UNK_00a05625;
          FUN_00aae91b();
        }
      }
      puStack_484 = (undefined1 *)0xa059b9;
      uVar2 = FUN_009885d0();
      uStack_2c = 0x57;
      puStack_484 = (undefined1 *)0xa059d6;
      local_468 = (char *)FUN_009885d0();
      uStack_2c._0_1_ = 0x58;
      puStack_484 = (undefined1 *)0xa059f0;
      FUN_009885d0();
      puStack_484 = &DAT_013f0670;
      uStack_2c._0_1_ = 0x59;
      puStack_488 = (undefined1 *)0xa05a0b;
      FUN_00988f20();
      uStack_2c._0_1_ = 0x5a;
      puStack_484 = local_468;
      puStack_488 = (undefined1 *)0xa05a26;
      FUN_00988f20();
      uStack_2c._0_1_ = 0x5b;
      puStack_484 = (undefined1 *)(*(int *)(in_ECX + 0x74) + 0x48);
      puStack_488 = (undefined1 *)0xa05a43;
      FUN_00988f20();
      uStack_2c._0_1_ = 0x5c;
      puStack_488 = (undefined1 *)0xa05a5e;
      puStack_484 = (undefined1 *)uVar2;
      FUN_00988f20();
      if (0xf < local_3dc) {
        puStack_484 = (undefined1 *)uStack_3f0;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05a75;
        FUN_00aae91b();
      }
      local_3dc = 0xf;
      uStack_3e0 = 0;
      uStack_3f0 = uStack_3f0 & 0xffffff00;
      if (0xf < local_3a4) {
        puStack_484 = (undefined1 *)uStack_3b8;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05aac;
        FUN_00aae91b();
      }
      local_3a4 = 0xf;
      uStack_3a8 = 0;
      uStack_3b8 = uStack_3b8 & 0xffffff00;
      if (0xf < local_3c0) {
        puStack_484 = (undefined1 *)uStack_3d4;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05ade;
        FUN_00aae91b();
      }
      local_3c0 = 0xf;
      uStack_3c4 = 0;
      uStack_3d4 = uStack_3d4 & 0xffffff00;
      if (0xf < local_3f8) {
        puStack_484 = (undefined1 *)uStack_40c;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05b0d;
        FUN_00aae91b();
      }
      local_3f8 = 0xf;
      uStack_3fc = 0;
      uStack_40c = uStack_40c & 0xffffff00;
      if (0xf < local_414) {
        puStack_484 = (undefined1 *)local_428;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05b36;
        FUN_00aae91b();
      }
      local_414 = 0xf;
      uStack_418 = 0;
      local_428 = local_428 & 0xffffff00;
      uStack_2c = CONCAT31(uStack_2c._1_3_,99);
      if ((int *)0xf < local_430) {
        puStack_484 = (undefined1 *)local_444;
                    /* WARNING: Subroutine does not return */
        puStack_488 = &UNK_00a05b61;
        FUN_00aae91b();
      }
      local_468 = auStack_49c;
      puStack_488 = (undefined1 *)0xf;
      local_430 = (int *)0xf;
      uStack_48c = 0;
      local_434 = 0;
      local_444 = local_444 & 0xffffff00;
      auStack_49c[0] = 0;
      FUN_00408ed0(local_114,0,0xffffffff);
      (**(code **)(*local_450 + 0x10))(auStack_12c);
      local_c = CONCAT31(local_c._1_3_,100);
      local_468 = (char *)0xa05bd7;
      FUN_00a714a0();
      local_468 = (char *)0xa05be5;
      uVar2 = FUN_00aaf0c5();
      if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
        local_468 = &UNK_00a05c01;
        FUN_00aae91b();
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x68) = uVar2;
      FUN_009fc110();
      local_c = 0xffffffff;
      if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        local_468 = &UNK_00a05c38;
        FUN_00aae91b();
      }
    }
    local_468 = (char *)0xa05c4e;
    iVar3 = FUN_00a727a0();
    *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x24) = *(undefined4 *)(in_ECX + 0x24);
    *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0x28) = 0x666;
    local_468 = (char *)0xa05c70;
    FUN_00a72160();
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0x78) != 0) {
        local_46c = (char *)0xa05c85;
        local_468 = (char *)*(int *)(iVar3 + 0x78);
        FUN_00a174f0();
      }
      *(undefined4 *)(iVar3 + 0x78) = 0;
      FUN_00a840b0();
      in_ECX = local_428;
    }
    if (*(char *)(in_ECX + 0x78) != '\0') {
      local_468 = (char *)0xa05ca2;
      local_428 = FUN_00aae9af();
      local_c = 0x65;
      if (local_428 != 0) {
        local_468 = *(char **)(in_ECX + 0x24);
        local_46c = *(char **)(in_ECX + 0x74);
        uStack_474 = 0xa05ccb;
        uStack_470 = local_428;
        FUN_00a06120();
      }
      local_c = 0xffffffff;
      local_468 = (char *)0xa05ce9;
      (**(code **)(**(int **)((int)local_42c + 0x38) + 0x18))();
    }
    local_468 = "metaservercommands.cpp";
    uStack_368 = 0xf;
    uStack_36c = 0;
    local_37c = local_37c & 0xffffff00;
    local_46c = (char *)0xa05d15;
    FUN_00409350();
    local_c = 0x66;
    iVar3 = *(int *)(in_ECX + 0x74);
    local_468 = " with id ";
    local_46c = " creates game ";
    local_42c = (undefined1 *)&puStack_488;
    uStack_48c = 0xffffffff;
    puStack_494 = (uint *)(iVar3 + 0x48);
    uStack_490 = 0;
    uStack_474 = 0xf;
    uStack_478 = 0;
    piVar4 = (int *)(iVar3 + 0x2c);
    puStack_488 = (undefined1 *)((uint)puStack_488 & 0xffffff00);
    uStack_498 = 0xa05d55;
    FUN_00408ed0();
    uStack_48c = 4;
    puStack_494 = &local_37c;
    uStack_490 = 0x60b;
    local_c._0_1_ = 0x67;
    uStack_498 = 0xa05d78;
    uStack_48c = FUN_004015b0();
    local_c._0_1_ = 0x69;
    uStack_490 = 0xa05d91;
    uStack_470 = FUN_004238b0();
    uStack_474 = 0xa05d9a;
    uStack_474 = FUN_00418e30();
    if (0xf < *(uint *)(iVar3 + 0x40)) {
      piVar4 = (int *)*piVar4;
    }
    uStack_478 = 0xa05dad;
    uStack_470 = (uint)piVar4;
    local_46c = (char *)FUN_00418e30();
    uStack_470 = 0xa05db6;
    local_468 = (char *)FUN_00418e30();
    local_46c = (char *)0xa05dbf;
    FUN_00455470();
    local_468 = (char *)0xa05dc5;
    FUN_00401280();
    local_c = CONCAT31(local_c._1_3_,0x66);
    local_468 = (char *)0xa05ddd;
    FUN_00987ac0();
    ppuStack_60 = std::ios_base::vftable;
    local_468 = (char *)0xa05df5;
    FUN_00aad52d();
    if (0xf < uStack_368) {
                    /* WARNING: Subroutine does not return */
      local_468 = &UNK_00a05e0f;
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return;
}


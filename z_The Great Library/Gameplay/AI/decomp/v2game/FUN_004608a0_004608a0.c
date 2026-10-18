// FUN_004608a0 @ 004608a0 body=[[004608a0, 00460961] [00460965, 0046098f] [00460993, 004609bf] [004609c3, 00460b7a] [00460b7e, 00460cad] [00460cb1, 00460d0f] [00460d13, 00460d37] [00460d3b, 00460d5c] [00460d60, 00460d73] [00460d77, 00460d8d]]


void FUN_004608a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_554 [12];
  undefined4 uStack_548;
  uint *local_544;
  char *local_540;
  undefined ***pppuStack_53c;
  uint local_528 [4];
  undefined4 local_518;
  uint local_514;
  uint local_50c [4];
  undefined4 local_4fc;
  uint local_4f8;
  undefined4 **local_4f0 [4];
  undefined4 local_4e0;
  uint local_4dc;
  char **local_4cc [5];
  uint local_4b8;
  undefined1 *local_4b0;
  undefined4 *local_4ac;
  uint local_4a8 [4];
  undefined4 local_498;
  uint local_494;
  uint local_48c;
  undefined4 local_47c;
  uint local_478;
  uint local_470;
  undefined4 local_460;
  uint local_45c;
  uint local_454;
  undefined4 local_444;
  uint local_440;
  undefined **local_3c0 [18];
  undefined **local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined1 local_368;
  undefined1 local_364;
  undefined4 *local_35c;
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5bd1b;
  pvStack_14 = ExceptionList;
  pppuStack_53c = (undefined ***)0xffffffff;
  local_540 = (char *)0x0;
  local_544 = (uint *)param_2;
  uStack_548 = 0x4608db;
  ExceptionList = &pvStack_14;
  FUN_00408ed0();
  pppuStack_53c = (undefined ***)0x1;
  local_540 = "/";
  local_4f8 = 0xf;
  local_4fc = 0;
  local_50c[0] = local_50c[0] & 0xffffff00;
  local_544 = (uint *)0x4608fc;
  FUN_00409350();
  local_c = 0;
  pppuStack_53c = (undefined ***)0x46090f;
  uVar1 = FUN_004603d0();
  pppuStack_53c = (undefined ***)local_50c;
  local_c._0_1_ = 1;
  local_540 = (char *)0x46092f;
  FUN_00988f20();
  local_c._0_1_ = 2;
  local_540 = (char *)0x460947;
  pppuStack_53c = (undefined ***)uVar1;
  FUN_00988f20();
  if (0xf < local_478) {
    pppuStack_53c = (undefined ***)local_48c;
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460962;
    FUN_00aae91b();
  }
  local_478 = 0xf;
  local_47c = 0;
  local_48c = local_48c & 0xffffff00;
  if (0xf < local_440) {
    pppuStack_53c = (undefined ***)local_454;
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460990;
    FUN_00aae91b();
  }
  local_440 = 0xf;
  local_444 = 0;
  local_454 = local_454 & 0xffffff00;
  local_c._0_1_ = 6;
  if (0xf < local_4f8) {
    pppuStack_53c = (undefined ***)local_50c[0];
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_004609c0;
    FUN_00aae91b();
  }
  local_4f8 = 0xf;
  local_4fc = 0;
  local_50c[0] = local_50c[0] & 0xffffff00;
  if (local_4b8 < 0x10) {
    pppuStack_53c = local_4cc;
LAB_004609e8:
    if (*(char *)pppuStack_53c != '\0') {
      local_540 = (char *)0x4609f6;
      iVar2 = PHYSFS_exists();
      if (iVar2 != 0) {
        pppuStack_53c = (undefined ***)0xf;
        local_540 = "UNNAMED_SESSION";
        local_514 = 0xf;
        local_518 = 0;
        local_528[0] = local_528[0] & 0xffffff00;
        local_544 = (uint *)0x460a1c;
        FUN_00409350();
        pppuStack_53c = (undefined ***)0x114;
        local_c._0_1_ = 7;
        local_540 = (char *)0x460a2e;
        puVar3 = (undefined4 *)FUN_00aae9af();
        local_c._0_1_ = 8;
        local_4ac = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          local_35c = (undefined4 *)0x0;
        }
        else {
          pppuStack_53c = (undefined ***)0x3c;
          local_540 = (char *)0x460a51;
          iVar2 = FUN_00aae9af();
          local_c._0_1_ = 9;
          if (iVar2 == 0) {
            uVar1 = 0;
          }
          else {
            local_4b0 = local_554;
            local_540 = (char *)0xf;
            local_544 = (uint *)0x0;
            local_554[0] = 0;
            FUN_00409350(&DAT_00ded94d,0);
            uVar1 = FUN_00992740(iVar2,local_4cc,0);
          }
          local_c._0_1_ = 8;
          *puVar3 = &PTR_FUN_00e37c30;
          puVar3[1] = uVar1;
          *(undefined2 *)(puVar3 + 0x44) = 0x100;
          pppuStack_53c = (undefined ***)0x460ac9;
          FUN_00990100();
          *puVar3 = &PTR_FUN_00e37c3c;
          local_35c = puVar3;
        }
        local_378 = &PTR_FUN_00e38524;
        local_374 = 0;
        local_370 = 0;
        local_36c = 0;
        local_368 = 0;
        pppuStack_53c = (undefined ***)0xffffffff;
        local_c._0_1_ = 10;
        local_540 = (char *)0x0;
        local_544 = local_528;
        local_364 = 0;
        local_38 = 0xf;
        local_3c = 0;
        local_4c = 0;
        uStack_548 = 0x460b3e;
        FUN_00408ed0();
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_20 = 1;
        local_1c = 0;
        local_c._0_1_ = 0xc;
        if (0xf < local_514) {
          pppuStack_53c = (undefined ***)local_528[0];
                    /* WARNING: Subroutine does not return */
          local_540 = &UNK_00460b7b;
          FUN_00aae91b();
        }
        pppuStack_53c = &local_378;
        local_514 = 0xf;
        local_518 = 0;
        local_528[0] = local_528[0] & 0xffffff00;
        local_540 = (char *)0x460ba6;
        (**(code **)(*(int *)(param_1 + 0x1d8) + 0xc))();
        local_c = CONCAT31(local_c._1_3_,6);
        pppuStack_53c = (undefined ***)0x460bba;
        FUN_009a0dc0();
        goto LAB_00460d60;
      }
    }
  }
  else {
    pppuStack_53c = (undefined ***)local_4cc[0];
    if ((char ***)local_4cc[0] != (char ***)0x0) goto LAB_004609e8;
  }
  pppuStack_53c = (undefined ***)0xb;
  local_540 = " not found.";
  local_494 = 0xf;
  local_498 = 0;
  local_4a8[0] = local_4a8[0] & 0xffffff00;
  local_544 = (uint *)0x460be7;
  FUN_00409350();
  local_c._0_1_ = 0xd;
  pppuStack_53c = (undefined ***)0x11;
  local_540 = "news_database.cpp";
  local_514 = 0xf;
  local_518 = 0;
  local_528[0] = local_528[0] & 0xffffff00;
  local_544 = (uint *)0x460c0b;
  FUN_00409350();
  pppuStack_53c = local_4cc;
  local_c._0_1_ = 0xe;
  local_540 = (char *)0x460c29;
  FUN_00988fa0();
  pppuStack_53c = (undefined ***)local_4a8;
  local_c._0_1_ = 0xf;
  local_540 = "h\x04";
  FUN_00988f20();
  pppuStack_53c = (undefined ***)0x10004;
  local_544 = local_528;
  local_540 = (char *)0x30f;
  local_c._0_1_ = 0x10;
  uStack_548 = 0x460c6a;
  local_540 = (char *)FUN_004015b0();
  local_c._0_1_ = 0x13;
  pppuStack_53c = (undefined ***)local_4f0[0];
  if (local_4dc < 0x10) {
    pppuStack_53c = (undefined ***)local_4f0;
  }
  local_544 = (uint *)0x460c8f;
  pppuStack_53c = (undefined ***)FUN_00418e30();
  local_c._0_1_ = 0x12;
  if (0xf < local_4dc) {
    pppuStack_53c = (undefined ***)local_4f0[0];
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460cae;
    FUN_00aae91b();
  }
  local_4dc = 0xf;
  local_4e0 = 0;
  local_4f0[0] = (undefined4 **)((uint)local_4f0[0] & 0xffffff00);
  local_540 = (char *)0x460cc7;
  FUN_00401280();
  pppuStack_53c = local_3c0;
  local_c = CONCAT31(local_c._1_3_,0xf);
  local_540 = (char *)0x460cdf;
  FUN_00987ac0();
  pppuStack_53c = local_3c0;
  local_3c0[0] = std::ios_base::vftable;
  local_540 = (char *)0x460cf7;
  FUN_00aad52d();
  if (0xf < local_45c) {
    pppuStack_53c = (undefined ***)local_470;
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460d10;
    FUN_00aae91b();
  }
  local_45c = 0xf;
  local_460 = 0;
  local_470 = local_470 & 0xffffff00;
  if (0xf < local_514) {
    pppuStack_53c = (undefined ***)local_528[0];
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460d38;
    FUN_00aae91b();
  }
  local_514 = 0xf;
  local_518 = 0;
  local_528[0] = local_528[0] & 0xffffff00;
  if (0xf < local_494) {
    pppuStack_53c = (undefined ***)local_4a8[0];
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460d5d;
    FUN_00aae91b();
  }
LAB_00460d60:
  if (0xf < local_4b8) {
    pppuStack_53c = (undefined ***)local_4cc[0];
                    /* WARNING: Subroutine does not return */
    local_540 = &UNK_00460d74;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return;
}


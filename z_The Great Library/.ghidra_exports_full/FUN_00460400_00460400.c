// FUN_00460400 @ 00460400 body=[[00460400, 004604c1] [004604c5, 004604ef] [004604f3, 0046051f] [00460523, 00460690] [00460694, 004607bc] [004607c0, 0046081f] [00460823, 00460847] [0046084b, 0046086c] [00460870, 00460880] [00460884, 0046089a]]


void FUN_00460400(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_54c [12];
  undefined4 uStack_540;
  uint *local_53c;
  char *local_538;
  undefined ***pppuStack_534;
  uint local_520 [4];
  undefined4 local_510;
  uint local_50c;
  uint local_504 [4];
  undefined4 local_4f4;
  uint local_4f0;
  undefined4 **local_4e8 [4];
  undefined4 local_4d8;
  uint local_4d4;
  char **local_4c8 [5];
  uint local_4b4;
  undefined1 *local_4ac;
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
  undefined4 local_35c;
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
  puStack_10 = &LAB_00b5bdcd;
  pvStack_14 = ExceptionList;
  pppuStack_534 = (undefined ***)0xffffffff;
  local_538 = (char *)0x0;
  local_53c = (uint *)param_2;
  uStack_540 = 0x46043b;
  ExceptionList = &pvStack_14;
  FUN_00408ed0();
  pppuStack_534 = (undefined ***)0x1;
  local_538 = "/";
  local_4f0 = 0xf;
  local_4f4 = 0;
  local_504[0] = local_504[0] & 0xffffff00;
  local_53c = (uint *)0x46045c;
  FUN_00409350();
  local_c = 0;
  pppuStack_534 = (undefined ***)0x46046f;
  uVar1 = FUN_004603a0();
  pppuStack_534 = (undefined ***)local_504;
  local_c._0_1_ = 1;
  local_538 = (char *)0x46048f;
  FUN_00988f20();
  local_c._0_1_ = 2;
  local_538 = (char *)0x4604a7;
  pppuStack_534 = (undefined ***)uVar1;
  FUN_00988f20();
  if (0xf < local_440) {
    pppuStack_534 = (undefined ***)local_454;
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_004604c2;
    FUN_00aae91b();
  }
  local_440 = 0xf;
  local_444 = 0;
  local_454 = local_454 & 0xffffff00;
  if (0xf < local_478) {
    pppuStack_534 = (undefined ***)local_48c;
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_004604f0;
    FUN_00aae91b();
  }
  local_478 = 0xf;
  local_47c = 0;
  local_48c = local_48c & 0xffffff00;
  local_c._0_1_ = 6;
  if (0xf < local_4f0) {
    pppuStack_534 = (undefined ***)local_504[0];
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_00460520;
    FUN_00aae91b();
  }
  local_4f0 = 0xf;
  local_4f4 = 0;
  local_504[0] = local_504[0] & 0xffffff00;
  if (local_4b4 < 0x10) {
    pppuStack_534 = local_4c8;
LAB_00460545:
    if (*(char *)pppuStack_534 != '\0') {
      local_538 = (char *)0x460553;
      iVar2 = PHYSFS_exists();
      if (iVar2 != 0) {
        pppuStack_534 = (undefined ***)0xf;
        local_538 = "UNNAMED_SESSION";
        local_50c = 0xf;
        local_510 = 0;
        local_520[0] = local_520[0] & 0xffffff00;
        local_53c = (uint *)0x460579;
        FUN_00409350();
        pppuStack_534 = (undefined ***)0x3c;
        local_c._0_1_ = 7;
        local_538 = (char *)0x460588;
        iVar2 = FUN_00aae9af();
        local_c._0_1_ = 8;
        if (iVar2 == 0) {
          pppuStack_534 = (undefined ***)0x0;
        }
        else {
          local_4ac = local_54c;
          local_538 = (char *)0xf;
          local_53c = (uint *)0x0;
          local_54c[0] = 0;
          FUN_00409350(&DAT_00ded94d,0);
          pppuStack_534 = (undefined ***)FUN_00992740(iVar2,local_4c8,0);
        }
        local_c._0_1_ = 7;
        local_538 = (char *)0x4605eb;
        local_35c = FUN_0046fbf0();
        local_378 = &PTR_FUN_00e38524;
        local_374 = 0;
        local_370 = 0;
        local_36c = 0;
        local_368 = 0;
        pppuStack_534 = (undefined ***)0xffffffff;
        local_c._0_1_ = 9;
        local_538 = (char *)0x0;
        local_53c = local_520;
        local_364 = 0;
        local_38 = 0xf;
        local_3c = 0;
        local_4c = 0;
        uStack_540 = 0x460654;
        FUN_00408ed0();
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_20 = 1;
        local_1c = 0;
        local_c._0_1_ = 0xb;
        if (0xf < local_50c) {
          pppuStack_534 = (undefined ***)local_520[0];
                    /* WARNING: Subroutine does not return */
          local_538 = &UNK_00460691;
          FUN_00aae91b();
        }
        pppuStack_534 = &local_378;
        local_50c = 0xf;
        local_510 = 0;
        local_520[0] = local_520[0] & 0xffffff00;
        local_538 = (char *)0x4606bc;
        (**(code **)(*(int *)(param_1 + 0x15c) + 0xc))();
        local_c = CONCAT31(local_c._1_3_,6);
        pppuStack_534 = (undefined ***)0x4606d0;
        FUN_009a0dc0();
        goto LAB_00460870;
      }
    }
  }
  else {
    pppuStack_534 = (undefined ***)local_4c8[0];
    if ((char ***)local_4c8[0] != (char ***)0x0) goto LAB_00460545;
  }
  pppuStack_534 = (undefined ***)0xb;
  local_538 = " not found.";
  local_494 = 0xf;
  local_498 = 0;
  local_4a8[0] = local_4a8[0] & 0xffffff00;
  local_53c = (uint *)0x4606fd;
  FUN_00409350();
  local_c._0_1_ = 0xc;
  pppuStack_534 = (undefined ***)0x11;
  local_538 = "news_database.cpp";
  local_50c = 0xf;
  local_510 = 0;
  local_520[0] = local_520[0] & 0xffffff00;
  local_53c = (uint *)0x460721;
  FUN_00409350();
  pppuStack_534 = local_4c8;
  local_c._0_1_ = 0xd;
  local_538 = (char *)0x46073f;
  FUN_00988fa0();
  pppuStack_534 = (undefined ***)local_4a8;
  local_c._0_1_ = 0xe;
  local_538 = "h\x04";
  FUN_00988f20();
  pppuStack_534 = (undefined ***)0x10004;
  local_53c = local_520;
  local_538 = (char *)0x2ff;
  local_c._0_1_ = 0xf;
  uStack_540 = 0x460780;
  local_538 = (char *)FUN_004015b0();
  local_c._0_1_ = 0x12;
  pppuStack_534 = (undefined ***)local_4e8[0];
  if (local_4d4 < 0x10) {
    pppuStack_534 = (undefined ***)local_4e8;
  }
  local_53c = (uint *)0x46079f;
  pppuStack_534 = (undefined ***)FUN_00418e30();
  local_c._0_1_ = 0x11;
  if (0xf < local_4d4) {
    pppuStack_534 = (undefined ***)local_4e8[0];
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_004607bd;
    FUN_00aae91b();
  }
  local_4d4 = 0xf;
  local_4d8 = 0;
  local_4e8[0] = (undefined4 **)((uint)local_4e8[0] & 0xffffff00);
  local_538 = (char *)0x4607d2;
  FUN_00401280();
  pppuStack_534 = local_3c0;
  local_c = CONCAT31(local_c._1_3_,0xe);
  local_538 = (char *)0x4607ea;
  FUN_00987ac0();
  pppuStack_534 = local_3c0;
  local_3c0[0] = std::ios_base::vftable;
  local_538 = (char *)0x460802;
  FUN_00aad52d();
  if (0xf < local_45c) {
    pppuStack_534 = (undefined ***)local_470;
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_00460820;
    FUN_00aae91b();
  }
  local_45c = 0xf;
  local_460 = 0;
  local_470 = local_470 & 0xffffff00;
  if (0xf < local_50c) {
    pppuStack_534 = (undefined ***)local_520[0];
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_00460848;
    FUN_00aae91b();
  }
  local_50c = 0xf;
  local_510 = 0;
  local_520[0] = local_520[0] & 0xffffff00;
  if (0xf < local_494) {
    pppuStack_534 = (undefined ***)local_4a8[0];
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_0046086d;
    FUN_00aae91b();
  }
LAB_00460870:
  if (0xf < local_4b4) {
    pppuStack_534 = (undefined ***)local_4c8[0];
                    /* WARNING: Subroutine does not return */
    local_538 = &UNK_00460881;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return;
}


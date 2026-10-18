// FUN_00460f60 @ 00460f60 body=[[00460f60, 00460fe8] [00460fec, 00461022] [00461026, 0046115a] [0046115e, 0046125a] [0046125e, 004612b0] [004612b4, 004612d8] [004612dc, 004612f5] [004612f9, 0046130b]]


void FUN_00460f60(int *param_1)

{
  char cVar1;
  int iVar2;
  char *in_ECX;
  undefined1 local_51c [12];
  undefined4 uStack_510;
  uint *local_50c;
  char *local_508;
  undefined4 ***pppuStack_504;
  undefined **local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined1 local_4e0;
  undefined1 local_4dc;
  undefined4 local_4d4;
  undefined1 local_1c4;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined **local_118 [18];
  undefined4 local_d0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined1 *local_7c;
  undefined4 ***local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  uint local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5bc27;
  local_10 = ExceptionList;
  local_1c = 0;
  pppuStack_504 = (undefined4 ***)0x460f93;
  ExceptionList = &local_10;
  FUN_004603a0();
  local_8 = 0;
  local_1c = 1;
  pppuStack_504 = (undefined4 ***)0x460fa4;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    pppuStack_504 = (undefined4 ***)0x460fb0;
    FUN_004603d0();
    local_8 = 1;
    local_1c = 3;
    pppuStack_504 = (undefined4 ***)0x460fc5;
    cVar1 = FUN_00416db0();
    local_15 = '\x01';
    if (cVar1 == '\0') goto LAB_00460fd0;
  }
  local_15 = '\0';
LAB_00460fd0:
  if ((local_1c & 2) != 0) {
    local_1c = local_1c & 0xfffffffd;
    if (0xf < local_24) {
      pppuStack_504 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
      local_508 = &UNK_00460fe9;
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (((local_1c & 1) != 0) && (0xf < local_bc)) {
    pppuStack_504 = (undefined4 ***)local_d0;
                    /* WARNING: Subroutine does not return */
    local_508 = &UNK_00461023;
    FUN_00aae91b();
  }
  if (local_15 != '\0') {
    pppuStack_504 = (undefined4 ***)in_ECX;
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      pppuStack_504 = (undefined4 ***)*(char **)in_ECX;
    }
    if ((pppuStack_504 != (undefined4 ***)0x0) && (*(char *)pppuStack_504 != '\0')) {
      local_508 = (char *)0x461051;
      iVar2 = PHYSFS_exists();
      if (iVar2 != 0) {
        pppuStack_504 = (undefined4 ***)0xf;
        local_508 = "UNNAMED_SESSION";
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_50c = (uint *)0x461073;
        FUN_00409350();
        pppuStack_504 = (undefined4 ***)0x3c;
        local_8 = 2;
        local_508 = (char *)0x461081;
        iVar2 = FUN_00aae9af();
        local_8._0_1_ = 3;
        local_1c = iVar2;
        if (iVar2 == 0) {
          pppuStack_504 = (undefined4 ***)0x0;
        }
        else {
          local_7c = local_51c;
          local_508 = (char *)0xf;
          local_50c = (uint *)0x0;
          local_51c[0] = 0;
          FUN_00409350(&DAT_00ded94d,0);
          pppuStack_504 = (undefined4 ***)FUN_00992740(iVar2,in_ECX,0);
        }
        local_8._0_1_ = 2;
        local_508 = (char *)0x4610cb;
        local_4d4 = FUN_0046fbf0();
        local_4f0 = &PTR_FUN_00e38524;
        local_4ec = 0;
        local_4e8 = 0;
        local_4e4 = 0;
        local_4e0 = 0;
        pppuStack_504 = (undefined4 ***)0xffffffff;
        local_8._0_1_ = 4;
        local_508 = (char *)0x0;
        local_50c = local_38;
        local_4dc = 0;
        local_1b0 = 0xf;
        local_1b4 = 0;
        local_1c4 = 0;
        uStack_510 = 0x461129;
        FUN_00408ed0();
        local_1a8 = 0;
        local_1a4 = 0;
        local_1a0 = 0;
        local_198 = 1;
        local_194 = 0;
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_24 < 0x10) {
          pppuStack_504 = (undefined4 ***)&local_4f0;
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          local_508 = (char *)0x461178;
          (**(code **)(*param_1 + 0xc))();
          local_8 = 0xffffffff;
          local_508 = (char *)0x46118a;
          FUN_009a0dc0();
          ExceptionList = local_10;
          return;
        }
        pppuStack_504 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
        local_508 = &UNK_0046115b;
        FUN_00aae91b();
      }
    }
    pppuStack_504 = (undefined4 ***)0xb;
    local_508 = " not found.";
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    local_50c = (uint *)0x4611be;
    FUN_00409350();
    local_8 = 7;
    pppuStack_504 = (undefined4 ***)0x11;
    local_508 = "news_database.cpp";
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_50c = (uint *)0x4611dd;
    FUN_00409350();
    local_8._0_1_ = 8;
    local_508 = (char *)0x4611f2;
    FUN_00988fa0();
    pppuStack_504 = (undefined4 ***)local_98;
    local_8._0_1_ = 9;
    local_508 = "h\x04";
    FUN_00988f20();
    pppuStack_504 = (undefined4 ***)0x10004;
    local_50c = local_54;
    local_508 = (char *)0x329;
    local_8._0_1_ = 10;
    uStack_510 = 0x461227;
    local_508 = (char *)FUN_004015b0();
    local_8._0_1_ = 0xd;
    pppuStack_504 = local_78[0];
    if (local_64 < 0x10) {
      pppuStack_504 = local_78;
    }
    local_50c = (uint *)0x461244;
    pppuStack_504 = (undefined4 ***)FUN_00418e30();
    local_8._0_1_ = 0xc;
    if (0xf < local_64) {
      pppuStack_504 = local_78[0];
                    /* WARNING: Subroutine does not return */
      local_508 = &UNK_0046125b;
      FUN_00aae91b();
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = (undefined4 ***)((uint)local_78[0] & 0xffffff00);
    local_508 = (char *)0x461271;
    FUN_00401280();
    pppuStack_504 = (undefined4 ***)local_118;
    local_8 = CONCAT31(local_8._1_3_,9);
    local_508 = (char *)0x461284;
    FUN_00987ac0();
    pppuStack_504 = (undefined4 ***)local_118;
    local_118[0] = std::ios_base::vftable;
    local_508 = (char *)0x46129a;
    FUN_00aad52d();
    if (0xf < local_a0) {
      pppuStack_504 = (undefined4 ***)local_b4;
                    /* WARNING: Subroutine does not return */
      local_508 = &UNK_004612b1;
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_40) {
      pppuStack_504 = (undefined4 ***)local_54[0];
                    /* WARNING: Subroutine does not return */
      local_508 = &UNK_004612d9;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_84) {
      pppuStack_504 = (undefined4 ***)local_98[0];
                    /* WARNING: Subroutine does not return */
      local_508 = &UNK_004612f6;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}


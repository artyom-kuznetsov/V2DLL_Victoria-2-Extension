// FUN_009bc490 @ 009bc490 body=[[009bc490, 009bc603] [009bc607, 009bc630] [009bc634, 009bc718] [009bc71c, 009bc737] [009bc73b, 009bc918] [009bc91c, 009bc9e1] [009bc9e5, 009bca0c] [009bca10, 009bca2c] [009bca30, 009bcb1b] [009bcb1f, 009bcbdc]]


undefined4
FUN_009bc490(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  uint *local_1ec;
  char *pcStack_1e8;
  undefined4 ***pppuStack_1e4;
  undefined4 uStack_1e0;
  char ***local_1dc;
  char ***local_1d8;
  char ***pppcStack_1d4;
  uint uStack_1c4;
  uint uStack_1c0;
  undefined1 local_1b9;
  undefined4 ***local_1b8;
  char **local_1b4;
  uint uStack_1b0;
  undefined4 ***pppuStack_1a8;
  uint local_1a4;
  uint local_1a0;
  char ***local_198;
  uint uStack_194;
  undefined4 local_188;
  uint local_184;
  undefined4 local_17c;
  char ***local_178 [4];
  undefined4 local_168;
  uint local_164;
  undefined4 ***local_15c [4];
  undefined4 local_14c;
  uint local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_11c [48];
  int local_ec;
  undefined **appuStack_88 [4];
  undefined **appuStack_78 [4];
  undefined **appuStack_68 [13];
  undefined1 uStack_34;
  undefined1 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b5dccf;
  local_1c = ExceptionList;
  pppcStack_1d4 = (char ***)0xffffffff;
  local_1d8 = (char ***)0x0;
  local_1dc = (char ***)param_2;
  local_140 = (undefined1  [16])0x0;
  local_130 = 0;
  local_128 = 0;
  local_17c = 0;
  local_164 = 0xf;
  local_168 = 0;
  local_178[0] = (char ***)((uint)local_178[0] & 0xffffff00);
  uStack_1e0 = 0x9bc4f8;
  ExceptionList = &local_1c;
  FUN_00408ed0();
  pppcStack_1d4 = (char ***)0xffffffff;
  local_14 = 0;
  local_1d8 = (char ***)0x0;
  local_1dc = (char ***)param_2;
  local_184 = 0xf;
  local_188 = 0;
  local_198 = (char ***)((uint)local_198 & 0xffffff00);
  uStack_1e0 = 0x9bc518;
  FUN_00408ed0();
  pppcStack_1d4 = (char ***)&DAT_00dedc68;
  local_1d8 = (char ***)local_178;
  local_14._0_1_ = 1;
  local_1dc = (char ***)0x9bc534;
  FUN_00989720();
  pppcStack_1d4 = (char ***)&DAT_00dedc68;
  local_1d8 = (char ***)&local_198;
  local_1dc = (char ***)0x9bc543;
  FUN_00989720();
  pppcStack_1d4 = (char ***)0x4;
  local_1d8 = (char ***)&DAT_00df2c9c;
  local_1a0 = 0xf;
  local_1a4 = 0;
  local_1b4 = (char **)((uint)local_1b4 & 0xffffff00);
  local_1dc = (char ***)0x9bc55f;
  FUN_00409350();
  local_14._0_1_ = 2;
  pppcStack_1d4 = (char ***)0x4;
  local_1d8 = (char ***)&DAT_00e17f6c;
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = (undefined4 ***)((uint)local_15c[0] & 0xffffff00);
  local_1dc = (char ***)0x9bc589;
  FUN_00409350();
  local_14 = CONCAT31(local_14._1_3_,3);
  local_1d8 = (char ***)local_15c[0];
  if (local_148 < 0x10) {
    local_1d8 = (char ***)local_15c;
  }
  pppcStack_1d4 = (char ***)local_14c;
  local_1dc = (char ***)local_178;
  uStack_1e0 = 0x9bc5bc;
  iVar1 = FUN_005484e0();
  local_1b9 = iVar1 != -1;
  if ((bool)local_1b9) {
    pppcStack_1d4 = (char ***)0xffffffff;
    local_1d8 = (char ***)0x0;
    local_1dc = &local_1b4;
    uStack_1e0 = local_14c;
    pppuStack_1e4 = (undefined4 ***)0x9bc5e2;
    FUN_00989c00();
  }
  if (0xf < local_148) {
    pppcStack_1d4 = (char ***)local_15c[0];
                    /* WARNING: Subroutine does not return */
    local_1d8 = (char ***)&UNK_009bc604;
    FUN_00aae91b();
  }
  local_14._0_1_ = 1;
  local_148 = 0xf;
  local_14c = 0;
  local_15c[0] = (undefined4 ***)((uint)local_15c[0] & 0xffffff00);
  if (0xf < local_1a0) {
    pppcStack_1d4 = (char ***)local_1b4;
                    /* WARNING: Subroutine does not return */
    local_1d8 = (char ***)&UNK_009bc631;
    FUN_00aae91b();
  }
  if ((bool)local_1b9) {
    if (local_164 < 0x10) {
      pppcStack_1d4 = (char ***)local_178;
    }
    else {
      pppcStack_1d4 = local_178[0];
      if ((char ****)local_178[0] == (char ****)0x0) goto LAB_009bc670;
    }
    if (*(char *)pppcStack_1d4 != '\0') {
      local_1d8 = (char ***)0x9bc658;
      iVar1 = PHYSFS_exists();
      if (iVar1 != 0) {
        pppcStack_1d4 = (char ***)0xffffffff;
        local_1d8 = (char ***)0x0;
        local_1dc = (char ***)local_178;
        uStack_1e0 = 0x9bc670;
        FUN_00408ed0();
      }
    }
  }
LAB_009bc670:
  if (local_184 < 0x10) {
    pppcStack_1d4 = (char ***)&local_198;
LAB_009bc688:
    if (*(char *)pppcStack_1d4 != '\0') {
      local_1d8 = (char ***)0x9bc696;
      iVar1 = PHYSFS_exists();
      if (iVar1 != 0) {
        local_1b8 = (undefined4 ***)&local_1ec;
        local_1d8 = (char ***)0xf;
        local_1dc = (char ***)0x0;
        local_1ec = (uint *)((uint)local_1ec & 0xffffff00);
        FUN_00409350(&DAT_00ded94d,0);
        FUN_00992740(local_11c,&local_198,0);
        local_14 = CONCAT31(local_14._1_3_,4);
        if (local_ec == 0) {
          iVar1 = 0;
        }
        else {
          pppcStack_1d4 = (char ***)local_ec;
          local_1d8 = (char ***)0x9bc6eb;
          iVar1 = PHYSFS_fileLength();
          if (0xffffff < iVar1) {
            pppcStack_1d4 = (char ***)0x9bc704;
            FUN_00992d60();
            if (0xf < local_184) {
              pppcStack_1d4 = local_198;
                    /* WARNING: Subroutine does not return */
              local_1d8 = (char ***)&UNK_009bc719;
              FUN_00aae91b();
            }
            local_184 = 0xf;
            local_188 = 0;
            local_198 = (char ***)((uint)local_198 & 0xffffff00);
            if (local_164 < 0x10) {
              ExceptionList = local_1c;
              return 0;
            }
            pppcStack_1d4 = local_178[0];
                    /* WARNING: Subroutine does not return */
            local_1d8 = (char ***)&UNK_009bc738;
            FUN_00aae91b();
          }
        }
        local_1d8 = *(char ****)(param_1 + 0x6b6e0);
        local_1dc = (char ***)0x9bc76d;
        pppcStack_1d4 = (char ***)iVar1;
        FUN_00992f20();
        pppcStack_1d4 = (char ***)0x7;
        local_1d8 = (char ***)0xe3a168;
        local_1dc = (char ***)param_2;
        uStack_1e0 = 0x9bc77f;
        iVar2 = FUN_005484e0();
        if (iVar2 == -1) {
          pppcStack_1d4 = (char ***)&local_17c;
          local_1d8 = (char ***)0x0;
          local_1dc = (char ***)local_140;
          uStack_1e0 = 0;
          pppuStack_1e4 = (undefined4 ***)0xffffffff;
          pcStack_1e8 = (char *)0x1;
          local_1ec = (uint *)0x1;
          local_1b8 = (undefined4 ***)
                      D3DXCreateTextureFromFileInMemoryEx
                                (*(undefined4 *)(param_1 + 0x6b6d4),
                                 *(undefined4 *)(param_1 + 0x6b6e0),iVar1,0xffffffff,0xffffffff,
                                 0xfffffffd,0,0);
        }
        else {
          pppcStack_1d4 = (char ***)&local_17c;
          local_1d8 = (char ***)0x0;
          local_1dc = (char ***)local_140;
          uStack_1e0 = 0;
          pppuStack_1e4 = (undefined4 ***)0xffffffff;
          pcStack_1e8 = (char *)0x1;
          local_1ec = (uint *)0x1;
          local_1b8 = (undefined4 ***)
                      D3DXCreateVolumeTextureFromFileInMemoryEx
                                (*(undefined4 *)(param_1 + 0x6b6d4),
                                 *(undefined4 *)(param_1 + 0x6b6e0),iVar1,0xffffffff,0xffffffff,
                                 0xffffffff,0xffffffff,0,0);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = local_140._0_4_;
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_140._4_4_;
        }
        local_14._0_1_ = 1;
        pppcStack_1d4 = (char ***)0x9bc824;
        FUN_00992d60();
        if ((int)local_1b8 < 0) {
          pppcStack_1d4 = (char ***)0x12;
          local_1d8 = (char ***)0xe3a170;
          local_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4 = (char **)((uint)local_1b4 & 0xffffff00);
          local_1dc = (char ***)0x9bc84e;
          FUN_00409350();
          pppcStack_1d4 = (char ***)0x1000;
          local_1dc = &local_1b4;
          local_1d8 = (char ***)0xc5;
          local_14._0_1_ = 9;
          uStack_1e0 = 0x9bc871;
          uVar3 = FUN_004015b0();
          pppcStack_1d4 = (char ***)0x0;
          local_1d8 = (char ***)0x2d;
          local_1dc = (char ***)0xe3a1cc;
          local_14._0_1_ = 10;
          pppuStack_1e4 = (undefined4 ***)0x9bc88c;
          uStack_1e0 = uVar3;
          FUN_00987d50();
          if (uStack_194 < 0x10) {
            pppuStack_1a8 = &pppuStack_1a8;
          }
          local_1ec = (uint *)0x9bc8a2;
          pcStack_1e8 = (char *)uVar3;
          pppuStack_1e4 = pppuStack_1a8;
          uVar3 = FUN_00418e30();
          pcStack_1e8 = (char *)0x9bc8b1;
          pppuStack_1e4 = (undefined4 ***)FUN_00aa5068();
          local_1ec = (uint *)0xe3a1bc;
          pcStack_1e8 = (char *)FUN_00418e30(uVar3);
          local_1ec = (uint *)0x9bc8c7;
          local_1ec = (uint *)FUN_00418e30();
          FUN_00401280();
          pppuStack_1e4 = (undefined4 ***)appuStack_78;
          uStack_24 = 9;
          pcStack_1e8 = (char *)0x9bc8e5;
          FUN_00987ac0();
          pppuStack_1e4 = (undefined4 ***)appuStack_78;
          appuStack_78[0] = std::ios_base::vftable;
          pcStack_1e8 = (char *)0x9bc8fd;
          FUN_00aad52d();
          uStack_24 = 1;
          if (0xf < uStack_1b0) {
            pppuStack_1e4 = (undefined4 ***)uStack_1c4;
                    /* WARNING: Subroutine does not return */
            pcStack_1e8 = &UNK_009bc919;
            FUN_00aae91b();
          }
          pppuStack_1e4 = (undefined4 ***)0x12;
          pcStack_1e8 = "texturehandler.cpp";
          uStack_1b0 = 0xf;
          local_1b4 = (char **)0x0;
          uStack_1c4 = uStack_1c4 & 0xffffff00;
          local_1ec = (uint *)0x9bc93c;
          FUN_00409350();
          pppuStack_1e4 = (undefined4 ***)0x302;
          local_1ec = &uStack_1c4;
          pcStack_1e8 = (char *)0xc6;
          uStack_24 = 0xb;
          uVar3 = FUN_004015b0();
          pppuStack_1e4 = (undefined4 ***)0x0;
          pcStack_1e8 = (char *)0x18;
          local_1ec = (uint *)0xe3a1fc;
          uStack_24 = 0xc;
          FUN_00987d50(uVar3);
          ppppuVar4 = (undefined4 ****)local_1b8;
          if (local_1a4 < 0x10) {
            ppppuVar4 = &local_1b8;
          }
          uVar3 = FUN_00418e30(uVar3,ppppuVar4);
          FUN_00401280(uVar3);
          uStack_34 = 0xb;
          FUN_00987ac0(appuStack_88);
          appuStack_88[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_88);
          uStack_34 = 1;
          if (0xf < uStack_1c0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(pppcStack_1d4);
          }
          (**(code **)(**(int **)(param_1 + 0x6b6d4) + 0xc))(*(int **)(param_1 + 0x6b6d4));
        }
        goto LAB_009bc9f8;
      }
    }
  }
  else {
    pppcStack_1d4 = local_198;
    if ((char ****)local_198 != (char ****)0x0) goto LAB_009bc688;
  }
  if (param_5 != '\0') {
    pppcStack_1d4 = (char ***)0x12;
    local_1d8 = (char ***)0xe3a170;
    local_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4 = (char **)((uint)local_1b4 & 0xffffff00);
    local_1dc = (char ***)0x9bca6a;
    FUN_00409350();
    pppcStack_1d4 = (char ***)0x1000;
    local_1dc = &local_1b4;
    local_1d8 = (char ***)0xbe;
    local_14._0_1_ = 5;
    uStack_1e0 = 0x9bca8d;
    uVar3 = FUN_004015b0();
    pppcStack_1d4 = (char ***)0x0;
    local_1d8 = (char ***)0x1c;
    local_1dc = (char ***)0xe3a184;
    local_14._0_1_ = 6;
    pppuStack_1e4 = (undefined4 ***)0x9bcaa8;
    uStack_1e0 = uVar3;
    FUN_00987d50();
    if (uStack_194 < 0x10) {
      pppuStack_1a8 = &pppuStack_1a8;
    }
    local_1ec = (uint *)0x9bcabe;
    pcStack_1e8 = (char *)uVar3;
    pppuStack_1e4 = pppuStack_1a8;
    uVar3 = FUN_00418e30();
    local_1ec = (uint *)&DAT_00df8140;
    uVar3 = FUN_00418e30(uVar3);
    FUN_00401280(uVar3);
    pppuStack_1e4 = (undefined4 ***)appuStack_78;
    uStack_24 = 5;
    pcStack_1e8 = (char *)0x9bcae7;
    FUN_00987ac0();
    pppuStack_1e4 = (undefined4 ***)appuStack_78;
    appuStack_78[0] = std::ios_base::vftable;
    pcStack_1e8 = (char *)0x9bcb00;
    FUN_00aad52d();
    uStack_24 = 1;
    if (0xf < uStack_1b0) {
      pppuStack_1e4 = (undefined4 ***)uStack_1c4;
                    /* WARNING: Subroutine does not return */
      pcStack_1e8 = &UNK_009bcb1c;
      FUN_00aae91b();
    }
    pppuStack_1e4 = (undefined4 ***)0x12;
    pcStack_1e8 = "texturehandler.cpp";
    uStack_1b0 = 0xf;
    local_1b4 = (char **)0x0;
    uStack_1c4 = uStack_1c4 & 0xffffff00;
    local_1ec = (uint *)0x9bcb3f;
    FUN_00409350();
    pppuStack_1e4 = (undefined4 ***)0x302;
    local_1ec = &uStack_1c4;
    pcStack_1e8 = (char *)0xbf;
    uStack_24 = 7;
    uVar3 = FUN_004015b0();
    pppuStack_1e4 = (undefined4 ***)0x0;
    pcStack_1e8 = (char *)0x17;
    local_1ec = (uint *)0xe3a1a4;
    uStack_24 = 8;
    FUN_00987d50(uVar3);
    pppcStack_1d4 = local_198;
    if (local_184 < 0x10) {
      pppcStack_1d4 = (char ***)&local_198;
    }
    local_1dc = (char ***)0x9bcb93;
    local_1d8 = (char ***)uVar3;
    local_1dc = (char ***)FUN_00418e30();
    uStack_1e0 = 0x9bcb99;
    FUN_00401280();
    pppcStack_1d4 = appuStack_68;
    local_14._0_1_ = 7;
    local_1d8 = (char ***)0x9bcbb1;
    FUN_00987ac0();
    pppcStack_1d4 = appuStack_68;
    appuStack_68[0] = std::ios_base::vftable;
    local_1d8 = (char ***)0x9bcbc5;
    FUN_00aad52d();
    if (0xf < local_1a0) {
      pppcStack_1d4 = (char ***)local_1b4;
                    /* WARNING: Subroutine does not return */
      local_1d8 = (char ***)&UNK_009bcbdd;
      FUN_00aae91b();
    }
  }
LAB_009bc9f8:
  if (0xf < local_184) {
    pppcStack_1d4 = local_198;
                    /* WARNING: Subroutine does not return */
    local_1d8 = (char ***)&UNK_009bca0d;
    FUN_00aae91b();
  }
  local_184 = 0xf;
  local_188 = 0;
  local_198 = (char ***)((uint)local_198 & 0xffffff00);
  if (local_164 < 0x10) {
    ExceptionList = local_1c;
    return local_17c;
  }
  pppcStack_1d4 = local_178[0];
                    /* WARNING: Subroutine does not return */
  local_1d8 = (char ***)&UNK_009bca2d;
  FUN_00aae91b();
}


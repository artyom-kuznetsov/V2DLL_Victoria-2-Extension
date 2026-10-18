// FUN_009bd030 @ 009bd030 body=[[009bd030, 009bd155] [009bd159, 009bd179] [009bd17d, 009bd275] [009bd279, 009bd28f] [009bd293, 009bd2a9] [009bd2ad, 009bd32e] [009bd332, 009bd348] [009bd34c, 009bd366] [009bd37f, 009bd396] [009bd39a, 009bd3b0] [009bd3b4, 009bd3ca] [009bd3ce, 009bd3e2]]


undefined4 FUN_009bd030(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_dc [48];
  int local_ac;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined4 *local_68;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dc36;
  local_10 = ExceptionList;
  iVar2 = param_2 * 0x2c + param_1;
  if (0 < *(int *)(iVar2 + 0x2c)) {
    local_68 = (undefined4 *)(iVar2 + 4);
    ExceptionList = &local_10;
    (**(code **)(*(int *)*local_68 + 8))();
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    FUN_00408ed0();
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 1;
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = FUN_005484e0();
    if (iVar2 != -1) {
      FUN_00989c00();
    }
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (iVar2 != -1) {
      if (DAT_00f20c18 == (int *)0x0) {
        DAT_00f20c18 = (int *)FUN_00aae9af();
        if (DAT_00f20c18 == (int *)0x0) {
          DAT_00f20c18 = (int *)0x0;
        }
        else {
          *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
        }
      }
      cVar1 = (**(code **)(*DAT_00f20c18 + 0x24))();
      if (cVar1 != '\0') {
        FUN_00408ed0();
      }
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 4;
    FUN_00989720();
    FUN_00409350(&DAT_00ded94d,0);
    FUN_00992740(local_dc,local_48,0);
    local_8 = CONCAT31(local_8._1_3_,5);
    if (local_ac == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = PHYSFS_fileLength();
      if (0xffffff < iVar2) {
        FUN_00992d60();
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        if (local_18 < 0x10) {
          local_18 = 0xf;
          local_1c = 0;
          local_2c = local_2c & 0xffffff00;
          if (local_70 < 0x10) {
            ExceptionList = local_10;
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    FUN_00992f20();
    iVar2 = D3DXCreateTextureFromFileInMemoryEx
                      (*(undefined4 *)(param_1 + 0x6b6d4),*(undefined4 *)(param_1 + 0x6b6e0),iVar2,
                       0xffffffff,0xffffffff,0xfffffffd,0,0);
    if (-1 < iVar2) {
      FUN_00992d60();
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      if (local_18 < 0x10) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c = local_2c & 0xffffff00;
        if (local_70 < 0x10) {
          ExceptionList = local_10;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00992d60();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return 0;
}


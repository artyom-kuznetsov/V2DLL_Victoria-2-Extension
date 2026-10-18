// FUN_009ab610 @ 009ab610 body=[[009ab610, 009ab69e] [009ab6a2, 009ab6bc] [009ab6c0, 009ab6e9] [009ab6f0, 009ab76a] [009ab76e, 009ab78d] [009ab791, 009ab7d0] [009ab7d4, 009ab820] [009ab826, 009ab896] [009ab89a, 009ab8de] [009ab8e2, 009ab8f4]]


void FUN_009ab610(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  int in_ECX;
  int iVar4;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  int local_60;
  uint local_5c [3];
  ulonglong local_50;
  ulonglong local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int local_24;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5de6b;
  local_10 = ExceptionList;
  if (0 < *(int *)(in_ECX + 0x10)) {
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e38d78,2);
    local_8 = 0;
    local_48._0_4_ = 0xf;
    local_50 = (ulonglong)(uint)local_50;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e38d78,2);
    local_8._0_1_ = 1;
    FUN_009891b0(in_ECX,&local_20,local_5c,local_40);
    if (0xf < (uint)local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = CONCAT44(local_48._4_4_,0xf);
    local_50 = local_50 & 0xffffffff;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_8._0_1_ = 4;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
    local_24 = 0;
    if (0 < (local_1c - local_20) / 0x1c) {
      iVar4 = 0;
      do {
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        local_8._0_1_ = 5;
        local_68 = 0xf;
        local_6c = 0;
        local_7c[0] = local_7c[0] & 0xffffff00;
        FUN_00409350(&DAT_00e38d78,2);
        local_8._0_1_ = 6;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_00409350(&DAT_00e38d78,2);
        local_60 = FUN_009890c0(iVar4 + local_20,0xffffffbd,local_40,local_7c);
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_8._0_1_ = 5;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 5;
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_7c[0]);
        }
        if (local_60 == -1) {
          local_8._0_1_ = uVar1;
          FUN_00408ed0(iVar4 + local_20,0,0xffffffff);
          local_8c = 0;
          uStack_88 = 0;
          local_84 = 0;
          uStack_80 = 0;
          local_50 = 0;
          local_48 = 0;
        }
        else {
          uVar2 = FUN_009895f0(local_60);
          local_8._0_1_ = 7;
          FUN_00408ed0(uVar2,0,0xffffffff);
          local_8._0_1_ = 5;
          if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_7c[0]);
          }
          FUN_009895f0(*(undefined4 *)(iVar4 + local_20 + 0x10));
          local_8._0_1_ = 8;
          puVar3 = (ulonglong *)FUN_009a9070();
          local_50 = *puVar3;
          local_48 = puVar3[1];
          local_8._0_1_ = 5;
          if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_7c[0]);
          }
        }
        local_50 = CONCAT44(local_50._4_4_,param_2);
        FUN_009ab900(param_1,local_a8,&local_50);
        local_8._0_1_ = 4;
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a8[0]);
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (local_24 < (local_1c - local_20) / 0x1c);
    }
    local_8._0_1_ = 4;
    if (local_20 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
  }
  ExceptionList = local_10;
  return;
}


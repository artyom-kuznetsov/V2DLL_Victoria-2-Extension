// FUN_008f8ee0 @ 008f8ee0 body=[[008f8ee0, 008f8ff2] [008f8ff6, 008f903b] [008f903f, 008f9066] [008f906a, 008f912d] [008f9131, 008f91f1] [008f91f5, 008f9225] [008f9229, 008f9244] [008f9248, 008f92f0] [008f92f4, 008f9324] [008f9328, 008f9343] [008f9347, 008f9361] [008f9365, 008f9379]]


/* WARNING: Removing unreachable block (ram,0x008f908c) */

undefined4 FUN_008f8ee0(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint local_d0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined1 local_90 [4];
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  int local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b65960;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(**(int **)(param_2 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    local_50 = 0;
    local_60 = (uint)local_60._1_3_ << 8;
    local_4c = 0xf;
    if (param_3 == *(char *)(in_ECX + 0x1c)) {
      FUN_00409350(&DAT_00dfc7b4,3);
      local_8 = 0xb;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      FUN_00409350("IS_NOT_ACCEPTED_CULTURE",0x17);
      local_8._0_1_ = 0xc;
      FUN_009a8ee0(local_28,local_44);
      local_8._0_1_ = 0xd;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0xe;
      FUN_00988f20();
      local_14 = 1;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_009adb70();
      if (local_24 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      goto joined_r0x008f9258;
    }
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0x10;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("IS_ACCEPTED_CULTURE",0x13);
    local_8._0_1_ = 0x11;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 0x12;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x14);
  }
  else {
    if (param_3 == *(char *)(in_ECX + 0x1c)) {
      FUN_00409350(&DAT_00df8514,2);
      local_8 = 1;
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      FUN_00409350("IS_NOT_ACCEPTED_CULTURE_POP",0x1b);
      local_8._0_1_ = 2;
      FUN_009a8ee0(local_90,local_ac);
      local_8._0_1_ = 3;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 4;
      FUN_00988f20();
      local_14 = 1;
      if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_009adb70();
      if (local_8c == 0) {
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        if (local_98 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (uint)local_60._1_3_ << 8;
    FUN_00409350(&DAT_00df8514,2);
    local_8 = 6;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("IS_ACCEPTED_CULTURE_POP",0x17);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 8;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_14 = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
  }
  local_14 = 1;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x008f9258:
  if (local_4c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


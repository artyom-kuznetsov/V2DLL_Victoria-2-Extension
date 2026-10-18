// FUN_00924c20 @ 00924c20 body=[[00924c20, 00924e21] [00924e25, 00924e69] [00924e6d, 00924e88] [00924e8c, 00924ec7] [00924ecb, 00924ee9] [00924eed, 00924f12] [00924f16, 00925092] [00925096, 009250bb] [009250bf, 00925116] [0092511a, 00925132]]


undefined1 * FUN_00924c20(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_80;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [4];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b651f0;
  local_14 = ExceptionList;
  iVar5 = *(int *)(DAT_012587e4 + 4);
  if (*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) == *(int *)(in_ECX + 0xc)) {
    if (0 < *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3c8)) {
      ExceptionList = &local_14;
      FUN_00988970(local_34);
      local_c = 10;
      uVar6 = FUN_00988970(local_b0);
      local_c = CONCAT31(local_c._1_3_,0xb);
      FUN_0043ec10(param_1,"PRESTIGE",uVar6,"INFAMY");
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (local_20 < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = &local_14;
    FUN_00988970(local_b0);
    local_c = 0xc;
    FUN_0042c180(param_1);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                    *(int *)(in_ECX + 0x14) * 4);
    if ((*(char *)(*(int *)(iVar5 + *(int *)(iVar2 + 0xc) * 4) + 0x31) != '\0') ||
       (*(int *)(iVar2 + 0x40) < 4)) {
      local_6c = 0xf;
      local_70 = 0;
      local_80 = (uint)local_80._1_3_ << 8;
      pcVar3 = PTR_s_REL_FRIENDLY_00f09168;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350(PTR_s_REL_FRIENDLY_00f09168);
      local_c = 0;
      pcVar4 = (char *)FUN_00931230();
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      pcVar3 = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4);
      local_c._0_1_ = 1;
      FUN_009a8ee0(local_94);
      local_c._0_1_ = 2;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 3;
      FUN_009a8ee0(local_64);
      local_c._0_1_ = 4;
      iVar5 = FUN_00475500();
      uVar6 = FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 5;
      FUN_0043ec10(param_1,"CURRENT",uVar6,"NEEDED");
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_c._0_1_ = 6;
      FUN_009adb70();
      if (local_60 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      if (local_9c < 0x10) {
        local_9c = 0xf;
        local_a0 = 0;
        local_b0[0] = local_b0[0] & 0xffffff00;
        local_c = CONCAT31(local_c._1_3_,7);
        FUN_009adb70();
        if (local_90 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0;
        local_8c = 0;
        local_88 = 0;
        if (local_3c < 0x10) {
          local_3c = 0xf;
          local_40 = 0;
          local_50 = local_50 & 0xffffff00;
          if (local_6c < 0x10) {
            ExceptionList = local_14;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x14) * 4) + 0x142c) != 0) {
      ExceptionList = &local_14;
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d);
      ExceptionList = local_14;
      return param_1;
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = (uint)local_80._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("IN_NO_SPHERE");
    local_c = 8;
    FUN_009a8ee0(local_94);
    local_c._0_1_ = 9;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_c = CONCAT31(local_c._1_3_,8);
    FUN_009a9740();
    local_9c = local_6c;
  }
  if (local_9c < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


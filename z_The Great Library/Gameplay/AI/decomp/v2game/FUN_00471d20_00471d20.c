// FUN_00471d20 @ 00471d20 body=[[00471d20, 00471e00] [00471e04, 00471e24] [00471e28, 00471e47] [00471e4b, 00471fb6] [00471fba, 00472011] [00472015, 0047215e] [0047217b, 004721bc] [004721c0, 004721e5] [004721e9, 00472201]]


undefined4 FUN_00471d20(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  int local_a4 [4];
  int local_94;
  uint local_90;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_74 [4];
  int local_64;
  uint local_60;
  uint local_58;
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8292c;
  local_14 = ExceptionList;
  local_3c = 0;
  if (*(int *)(in_ECX + 8) != 1) {
    pcVar1 = (char *)(in_ECX + 0x10);
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4) +
                             0xe64) + 0x50);
    local_3c = *(undefined4 *)(iVar5 + 0x1c);
    if (*(int *)(iVar5 + 0x20) == *(int *)(in_ECX + 0x14)) {
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = (uint)local_a4[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350("NATIONALIST_UNION_MOVEMENT_",0x1b);
      local_c = 4;
      pcVar6 = param_2;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00448740(param_2,(int)pcVar6 - (int)(param_2 + 1));
      FUN_00448740(&DAT_00defd44,1);
      pcVar6 = pcVar1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00448740(pcVar1,(int)pcVar6 - (in_ECX + 0x11));
      if ((-1 < *(int *)(in_ECX + 0x24)) &&
         ((0 < *(int *)(in_ECX + 0x24) || (0x230000 < *(uint *)(in_ECX + 0x20))))) {
        FUN_00448740(&DAT_00dfb070,4);
      }
      FUN_009ad510();
      if ((local_94 != 0) && (iVar5 = FUN_00a727a0(), iVar5 != 0)) {
        FUN_009a8ee0(local_88,local_a4);
        local_c._0_1_ = 5;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c = CONCAT31(local_c._1_3_,4);
        FUN_009a9740();
        if (local_90 < 0x10) {
          ExceptionList = local_14;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar4 = FUN_0055dd70();
      local_c = CONCAT31(local_c._1_3_,6);
      FUN_0042c180(param_1,uVar4);
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0xf;
      local_48 = 0;
      local_58 = local_58 & 0xffffff00;
      uVar3 = local_90;
    }
    else {
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      ExceptionList = &local_14;
      FUN_00409350("NATIONALIST_LIBERATION_MOVEMENT_",0x20);
      local_c = 7;
      pcVar6 = param_2;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00448740(param_2,(int)pcVar6 - (int)(param_2 + 1));
      FUN_00448740(&DAT_00defd44,1);
      pcVar6 = pcVar1;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00448740(pcVar1,(int)pcVar6 - (in_ECX + 0x11));
      if ((-1 < *(int *)(in_ECX + 0x24)) &&
         ((0 < *(int *)(in_ECX + 0x24) || (0x230000 < *(uint *)(in_ECX + 0x20))))) {
        FUN_00448740(&DAT_00dfb070,4);
      }
      FUN_009ad510();
      if ((local_64 != 0) && (iVar5 = FUN_00a727a0(), iVar5 != 0)) {
        FUN_009a8ee0(local_88,local_74);
        local_c._0_1_ = 8;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c = CONCAT31(local_c._1_3_,7);
        FUN_009a9740();
        if (local_60 < 0x10) {
          ExceptionList = local_14;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar4 = FUN_0055dd70();
      local_c = CONCAT31(local_c._1_3_,9);
      FUN_0042c180(param_1,uVar4);
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      uVar3 = local_60;
    }
    if (uVar3 < 0x10) {
      ExceptionList = local_14;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = (uint)local_a4[0]._1_3_ << 8;
  ExceptionList = &local_14;
  FUN_00409350("movement_",9);
  local_c = 0;
  uVar4 = FUN_00988f20();
  local_c._0_1_ = 1;
  FUN_009a8ee0(local_88,uVar4);
  local_c._0_1_ = 2;
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_009adb70();
  if (local_84 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (local_44 < 0x10) {
    local_44 = 0xf;
    local_48 = 0;
    local_58 = local_58 & 0xffffff00;
    if (local_90 < 0x10) {
      ExceptionList = local_14;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


// FUN_00a158a0 @ 00a158a0 body=[[00a158a0, 00a1597c] [00a15980, 00a159ae] [00a159b2, 00a15a1b] [00a15a1f, 00a15a3c] [00a15a40, 00a15ae4] [00a15ae8, 00a15b04] [00a15b08, 00a15b1f] [00a15b23, 00a15b3d] [00a15b41, 00a15b98] [00a15b9c, 00a15bb9] [00a15bbd, 00a15c64] [00a15c68, 00a15c84] [00a15c88, 00a15c9f] [00a15ca3, 00a15cbd] [00a15cc1, 00a15d18] [00a15d1c, 00a15d39] [00a15d3d, 00a15de4] [00a15de8, 00a15e04] [00a15e08, 00a15e1f] [00a15e23, 00a15e3d] [00a15e41, 00a15e98] [00a15e9c, 00a15eb6] [00a15eba, 00a15f39] [00a15f3d, 00a15f57] [00a15f5b, 00a15f6f]]


undefined4 FUN_00a158a0(int *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_e0 [32];
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  char local_4c [4];
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b49080;
  local_10 = ExceptionList;
  local_8 = 0;
  local_88 = 0;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfe280,1);
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar2 = __itoa(*param_1,local_4c,10);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_8._0_1_ = 3;
  FUN_00988f20(local_a4);
  local_88 = 1;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (param_1[1] < 10) {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8144,1);
    local_8 = 4;
    uVar3 = FUN_00988f20(local_68);
    local_8._0_1_ = 5;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfe280,1);
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  pcVar2 = __itoa(param_1[1],local_e0,10);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_8._0_1_ = 8;
  FUN_00988f20(local_68);
  local_8._0_1_ = 9;
  uVar3 = FUN_00988f20(local_2c);
  local_8._0_1_ = 10;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (param_1[2] < 10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8144,1);
    local_8 = 0xb;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_34 = 0xf;
  local_38 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0xe;
  local_8._1_3_ = 0;
  pcVar2 = __itoa(param_1[2],local_e0,10);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_8._0_1_ = 0xf;
  FUN_00988f20(local_68);
  local_8._0_1_ = 0x10;
  uVar3 = FUN_00988f20(local_2c);
  local_8._0_1_ = 0x11;
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (local_54 < 0x10) {
    local_8 = (uint)local_8._1_3_ << 8;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    if (param_1[3] < 10) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8144,1);
      local_8 = 0x12;
      uVar3 = FUN_00988f20(local_2c);
      local_8._0_1_ = 0x13;
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
    local_34 = 0xf;
    local_38 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e004e4,1);
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = 0x15;
    local_8._1_3_ = 0;
    pcVar2 = __itoa(param_1[3],local_e0,10);
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    local_8._0_1_ = 0x16;
    FUN_00988f20(local_68);
    local_8._0_1_ = 0x17;
    uVar3 = FUN_00988f20(local_2c);
    local_8._0_1_ = 0x18;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (local_54 < 0x10) {
      local_8 = (uint)local_8._1_3_ << 8;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      if (param_1[4] < 10) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8144,1);
        local_8 = 0x19;
        uVar3 = FUN_00988f20(local_2c);
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        FUN_00408ed0(uVar3,0,0xffffffff);
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48);
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48 = local_48 & 0xffffff00;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
      }
      local_34 = 0xf;
      local_38 = 0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      local_8 = 0x1b;
      pcVar2 = __itoa(param_1[4],local_e0,10);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      local_8 = 0x1c;
      uVar3 = FUN_00988f20(local_2c);
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      FUN_00408ed0(uVar3,0,0xffffffff);
      if (local_34 < 0x10) {
        local_34 = 0xf;
        local_38 = 0;
        local_48 = local_48 & 0xffffff00;
        if (local_18 < 0x10) {
          ExceptionList = local_10;
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_68[0]);
}


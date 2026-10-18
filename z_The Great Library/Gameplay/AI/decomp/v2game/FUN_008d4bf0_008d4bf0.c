// FUN_008d4bf0 @ 008d4bf0 body=[[008d4bf0, 008d503e] [008d5042, 008d5135] [008d5139, 008d515d] [008d5161, 008d5177] [008d517b, 008d5191] [008d5195, 008d51af] [008d51b3, 008d527f] [008d5283, 008d529e] [008d52a2, 008d52be] [008d52c2, 008d52e1] [008d52e5, 008d52ff] [008d5303, 008d5371] [008d5375, 008d538c] [008d5390, 008d53cf] [008d53d8, 008d542b] [008d542f, 008d5527] [008d552b, 008d5546] [008d554a, 008d5566] [008d556a, 008d558f] [008d5593, 008d55b6] [008d55ba, 008d5692] [008d5696, 008d56b1] [008d56b5, 008d56d1] [008d56d5, 008d56fa] [008d56fe, 008d5721] [008d5725, 008d5790] [008d5794, 008d57ab] [008d57af, 008d57d8]]


undefined4 FUN_008d4bf0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_11c [28];
  undefined1 local_100 [28];
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [3];
  int local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_84;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
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
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8638d;
  local_10 = ExceptionList;
  local_84 = 0;
  if ((*(char *)(in_ECX + 0x18) == '\0') && (*(char *)(in_ECX + 0x19) == '\0')) {
    if ((char)param_3 == '\0') {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0x32;
      FUN_009a8ee0();
      local_8._0_1_ = 0x34;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x35;
      FUN_009885d0();
      local_8._0_1_ = 0x36;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c)
      )(local_11c);
      local_8._0_1_ = 0x37;
      FUN_00988fa0();
      local_8._0_1_ = 0x38;
      FUN_00988f20();
      local_8._0_1_ = 0x39;
      FUN_009a9980();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x34;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x3a;
      FUN_009885d0();
      local_8._0_1_ = 0x3b;
      FUN_009888f0();
      local_8._0_1_ = 0x3c;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0x3d;
      FUN_00988f20();
      local_8._0_1_ = 0x3e;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x3f);
      FUN_00988f20();
      local_84 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    else {
      ExceptionList = &local_10;
      FUN_009885d0();
      local_8 = 0x24;
      FUN_009a8ee0();
      local_8._0_1_ = 0x26;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x27;
      FUN_009885d0();
      local_8._0_1_ = 0x28;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c)
      )(local_100);
      local_8._0_1_ = 0x29;
      FUN_00988fa0();
      local_8._0_1_ = 0x2a;
      FUN_00988f20();
      local_8._0_1_ = 0x2b;
      FUN_009a9980();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x26;
      FUN_00408ad0();
      FUN_009885d0();
      local_8._0_1_ = 0x2c;
      FUN_009885d0();
      local_8._0_1_ = 0x2d;
      FUN_009888f0();
      local_8._0_1_ = 0x2e;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0x2f;
      FUN_00988f20();
      local_8._0_1_ = 0x30;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x31);
      FUN_00988f20();
      local_84 = 1;
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
  }
  else {
    ExceptionList = &local_10;
    local_e4 = in_ECX;
    FUN_008a8dc0();
    if (*(char *)(local_e4 + 0x19) != '\0') {
      local_e0 = *(undefined4 *)(param_2 + 0x2c);
      local_dc = *(undefined4 *)(param_2 + 0x30);
    }
    if ((char)param_3 != '\0') {
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 1;
      FUN_009a8ee0();
      local_8._0_1_ = 3;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_d8[0]);
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 4;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 5;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c)
      )(local_64);
      local_8._0_1_ = 6;
      FUN_00988fa0();
      local_8._0_1_ = 7;
      FUN_00988f20();
      local_8._0_1_ = 8;
      param_3 = FUN_00aae9af();
      local_8._0_1_ = 9;
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_009a9ce0();
      }
      local_8._0_1_ = 8;
      FUN_009e6810(local_48,&param_3);
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc = local_bc & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
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
      FUN_00409350(&DAT_00df8514,2);
      local_8._0_1_ = 10;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("COUNTRY",7);
      local_8._0_1_ = 0xb;
      FUN_0055dd40();
      local_8._0_1_ = 0xc;
      FUN_00988fa0();
      local_8._0_1_ = 0xd;
      FUN_00988f20();
      local_8._0_1_ = 0xe;
      param_3 = FUN_00aae9af();
      local_8._0_1_ = 0xf;
      if (param_3 == 0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_009a9ce0();
      }
      local_8._0_1_ = 0xe;
      FUN_009e6810(local_48,&param_3);
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (local_a8 < 0x10) {
        local_a8 = 0xf;
        local_ac = 0;
        local_bc = local_bc & 0xffffff00;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 3;
        local_34 = 0xf;
        local_38 = 0;
        uVar1 = local_48[0] >> 8;
        local_48[0] = uVar1 << 8;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = uVar1 << 8;
        FUN_00409350(&DAT_00dfc7b4,3);
        local_8._0_1_ = 0x10;
        iVar2 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
        local_8 = CONCAT31(local_8._1_3_,0x11);
        FUN_00988f20();
        local_84 = 1;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        if (local_34 < 0x10) {
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          local_8 = 0x12;
          FUN_009adb70();
          if (local_94 == 0) {
            ExceptionList = local_10;
            return param_1;
          }
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    FUN_00409350();
    local_8 = 0x13;
    FUN_009a8ee0();
    local_8._0_1_ = 0x15;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
              (local_d8);
    local_8._0_1_ = 0x18;
    FUN_00988fa0();
    local_8._0_1_ = 0x19;
    FUN_00988f20();
    local_8._0_1_ = 0x1a;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x1b;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x1a;
    FUN_009e6810(local_a0,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x15;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 0x1c;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 0x1d;
    FUN_0055dd40();
    local_8._0_1_ = 0x1e;
    FUN_00988fa0();
    local_8._0_1_ = 0x1f;
    FUN_00988f20();
    local_8._0_1_ = 0x20;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x21;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x20;
    FUN_009e6810(local_a0,&param_3);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x15;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8._0_1_ = 0x22;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x23);
    FUN_00988f20();
    local_84 = 1;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_009a9740();
  ExceptionList = local_10;
  return param_1;
}


// FUN_008606c0 @ 008606c0 body=[[008606c0, 0086078d] [00860791, 008607ad] [008607b1, 0086086b] [0086086f, 00860896] [0086089a, 0086097b] [0086097f, 00860aa4] [00860aa8, 00860ad2] [00860ad6, 00860b00] [00860b04, 00860b28] [00860b2c, 00860b4d] [00860b51, 00860b75] [00860b79, 00860ba2] [00860ba6, 00860bf0] [00860bf4, 00860c0c]]


undefined1 * FUN_008606c0(int param_1,undefined1 *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_158;
  int local_140;
  undefined1 local_13c [4];
  int local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_128;
  undefined1 *local_124;
  uint local_120;
  uint local_11c;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a8;
  uint local_94;
  undefined1 *local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b796bd;
  local_14 = ExceptionList;
  local_128 = 0;
  local_158 = CONCAT44(param_1,0x8606f3);
  ExceptionList = &local_14;
  cVar2 = FUN_008605d0();
  if (cVar2 != '\0') {
    local_158 = 0x1600dfe1dc;
    local_104 = 0xf;
    local_108 = 0;
    local_118[0] = local_118[0] & 0xffffff00;
    FUN_00409350();
    local_158 = CONCAT44(local_118,local_13c);
    local_c = 0;
    FUN_009a8ee0();
    local_c._0_1_ = 1;
    local_158 = CONCAT44(0x860740,(undefined4)local_158);
    iVar3 = FUN_00475500();
    local_158 = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c = CONCAT31(local_c._1_3_,2);
    local_158 = CONCAT44(0x860773,(undefined4)local_158);
    FUN_009adb70();
    if (local_138 != 0) {
      local_158 = CONCAT44(0x860784,(undefined4)local_158);
      FUN_009e6a80();
      local_158 = CONCAT44(local_138,&UNK_0086078e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    if (local_104 < 0x10) {
      ExceptionList = local_14;
      return param_2;
    }
    local_158 = CONCAT44(local_118[0],&UNK_008607ae);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_158 = 0x1800e288e0;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffff00;
  FUN_00409350();
  local_158 = CONCAT44(local_e0,local_13c);
  local_c = 3;
  FUN_009a8ee0();
  local_c._0_1_ = 4;
  local_158 = CONCAT44(0x86081a,(undefined4)local_158);
  iVar3 = FUN_00475500();
  local_158 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_c._0_1_ = 7;
  local_158 = CONCAT44(0x860851,(undefined4)local_158);
  FUN_009adb70();
  if (local_138 != 0) {
    local_158 = CONCAT44(0x860862,(undefined4)local_158);
    FUN_009e6a80();
    local_158 = CONCAT44(local_138,&UNK_0086086c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_c._0_1_ = 8;
  if (0xf < local_cc) {
    local_158 = CONCAT44(local_e0[0],&UNK_00860897);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_128 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_140 = 0;
  if (0 < local_128) {
    do {
      local_c._0_1_ = 8;
      puVar1 = (uint *)(*(int *)(param_1 + 0xa8) + (uint)*(byte *)(param_1 + 0x68 + local_140) * 8);
      local_120 = *puVar1;
      local_11c = puVar1[1];
      uVar5 = (uint)*(byte *)(param_1 + 0x10 + local_140);
      iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 4 + uVar5 * 8);
      uVar5 = *(uint *)(*(int *)(param_1 + 0x50) + uVar5 * 8);
      if ((-1 < (int)local_11c) && ((0 < (int)local_11c || (local_120 != 0)))) {
        local_158 = 0x100dee2cc;
        FUN_00448740();
        local_158 = CONCAT44(local_c4,*(undefined4 *)(*(int *)(DAT_012587f0 + 0xc) + local_140 * 4))
        ;
        FUN_005659c0();
        local_158 = 0xffffffff00000000;
        local_c._0_1_ = 9;
        FUN_00448aa0();
        local_c._0_1_ = 8;
        if (0xf < local_b0) {
          local_158 = CONCAT44(local_c4[0],&UNK_0086097c);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_124 = (undefined1 *)&local_158;
        local_158 = CONCAT44(iVar3,uVar5);
        local_124 = (undefined1 *)FUN_00988bb0(local_34,2);
        local_c._0_1_ = 10;
        local_158 = 0x100dedc68;
        local_104 = 0xf;
        local_108 = 0;
        local_118[0] = local_118[0] & 0xffffff00;
        FUN_00409350();
        local_8c = (undefined1 *)&local_158;
        local_c._0_1_ = 0xb;
        local_158 = CONCAT44((iVar3 - local_11c) - (uint)(uVar5 < local_120),uVar5 - local_120);
        uVar4 = FUN_00988bb0(local_c4,2);
        local_c._0_1_ = 0xc;
        local_158 = 0x300dfcafc;
        local_e8 = 0xf;
        local_ec = 0;
        local_fc = local_fc & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0xd;
        local_158 = CONCAT44(uVar4,0x860a3c);
        FUN_00988f20();
        local_c._0_1_ = 0xe;
        local_158 = CONCAT44(local_118,0x860a57);
        FUN_00988f20();
        local_c._0_1_ = 0xf;
        local_158 = CONCAT44(local_124,0x860a72);
        FUN_00988f20();
        local_158 = 0xffffffff00000000;
        local_c._0_1_ = 0x10;
        FUN_00448aa0();
        if (0xf < local_74) {
          local_158 = CONCAT44(local_88,&UNK_00860aa5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        if (0xf < local_58) {
          local_158 = CONCAT44(local_6c,&UNK_00860ad3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
        if (0xf < local_3c) {
          local_158 = CONCAT44(local_50,&UNK_00860b01);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        if (0xf < local_e8) {
          local_158 = CONCAT44(local_fc,&UNK_00860b29);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc = local_fc & 0xffffff00;
        if (0xf < local_b0) {
          local_158 = CONCAT44(local_c4[0],&UNK_00860b4e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        if (0xf < local_104) {
          local_158 = CONCAT44(local_118[0],&UNK_00860b76);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 8;
        local_104 = 0xf;
        local_108 = 0;
        local_118[0] = local_118[0] & 0xffffff00;
        if (0xf < local_20) {
          local_158 = CONCAT44(local_34[0],&UNK_00860ba3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_140 = local_140 + 1;
    } while (local_140 < local_128);
  }
  local_c._0_1_ = 8;
  local_158 = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0();
  if (local_94 < 0x10) {
    ExceptionList = local_14;
    return param_2;
  }
  local_158 = CONCAT44(local_a8,&UNK_00860bf1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


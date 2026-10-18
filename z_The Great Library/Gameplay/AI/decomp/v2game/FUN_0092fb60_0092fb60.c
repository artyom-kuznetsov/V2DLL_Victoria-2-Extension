// FUN_0092fb60 @ 0092fb60 body=[[0092fb60, 0092fd07] [0092fd0b, 0092fd3a] [0092fd3e, 0092fd63] [0092fd67, 0092fda8] [0092fdac, 0092fdd6] [0092fdda, 0092fdff] [0092fe03, 0092fe2b] [0092fe2f, 0092ffc4] [0092ffc8, 0092fff7] [0092fffb, 00930020] [00930024, 00930059] [0093005d, 0093007e] [00930082, 009300a7] [009300ab, 009300d3] [009300d7, 0093028c] [00930290, 009302ba] [009302be, 009302e3] [009302e7, 0093031e] [00930322, 00930343] [00930347, 0093036c] [00930370, 00930398] [0093039c, 009304f8] [009304fc, 00930526] [0093052a, 0093054f] [00930553, 00930596] [0093059a, 009305c4] [009305c8, 009305e7] [009305eb, 00930604] [00930608, 00930766] [0093076a, 00930794] [00930798, 009307ba] [009307be, 009307dd] [009307e1, 00930806] [0093080a, 0093083f] [00930843, 009309f8] [009309fc, 00930a26] [00930a2a, 00930a4f] [00930a53, 00930a85] [00930a89, 00930aa2] [00930aa6, 00930abf] [00930ac3, 009310f1] [009310f5, 0093111f] [00931123, 00931148] [0093114c, 0093117e] [00931182, 0093119b] [0093119f, 009311b5] [009311b9, 009311ce]]


/* WARNING: Removing unreachable block (ram,0x0093009c) */
/* WARNING: Removing unreachable block (ram,0x00930361) */
/* WARNING: Removing unreachable block (ram,0x0092fe20) */
/* WARNING: Removing unreachable block (ram,0x0093038d) */
/* WARNING: Removing unreachable block (ram,0x009300c8) */
/* WARNING: Removing unreachable block (ram,0x0092fdf4) */
/* WARNING: Removing unreachable block (ram,0x00930b79) */

undefined1 * FUN_0092fb60(int param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_EDX;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_344;
  uint local_328;
  uint local_30c;
  uint local_2f0;
  uint local_2d4;
  uint local_2b8;
  uint local_29c;
  uint local_280;
  uint local_264;
  uint local_248;
  int local_1cc;
  int local_1b8;
  uint local_194;
  uint local_178;
  uint local_15c;
  uint local_140;
  uint local_d4;
  uint local_b8;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  undefined8 local_2c;
  int local_20;
  undefined8 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b8444a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_1c._4_4_ = (int)((ulonglong)local_1c >> 0x20);
  local_2c._4_4_ = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_3 + 4) * 4);
  local_1c._0_4_ = *param_4;
  local_20 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4[1] * 4);
  if (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(param_1 + 0x90)) {
    FUN_00409350();
    local_8 = 1;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_1c._4_4_ = FUN_009c8c30();
    local_8._0_1_ = 3;
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    FUN_00988f20();
    local_8._0_1_ = 7;
    FUN_00448aa0();
    if (0xf < local_328) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_248) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_1b8 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_264) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
  }
  iVar3 = *(int *)(local_2c._4_4_ + 0xd88);
  if (iVar3 == *(int *)(local_2c._4_4_ + 0xd8c)) {
LAB_009300ee:
    puVar2 = *(undefined4 **)(local_20 + 0xd88);
    do {
      puVar4 = puVar2;
      if ((puVar4 < *(undefined4 **)(local_20 + 0xd88)) ||
         (*(undefined4 **)(local_20 + 0xd8c) <= puVar4)) goto LAB_009303ae;
      local_1c._0_4_ = *puVar4;
      puVar2 = puVar4 + 2;
    } while ((*(char *)(puVar4[1] + *(int *)(local_20 + 0xd28)) == '\0') ||
            (iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar4[1] * 4),
            local_1c._0_4_ = *(undefined4 *)(iVar3 + 0x1428),
            *(int *)(iVar3 + 0x142c) != *(int *)(param_3 + 4)));
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    FUN_00409350();
    local_8 = 0x11;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    FUN_009c8c30();
    local_8._0_1_ = 0x13;
    FUN_009a8ee0();
    local_8._0_1_ = 0x14;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x15;
    FUN_00988f20();
    local_8._0_1_ = 0x16;
    FUN_00988f20();
    local_8._0_1_ = 0x17;
    FUN_00448aa0();
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x18;
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
  }
  else {
    do {
      if (*(int *)(iVar3 + 4) == param_4[1]) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(local_2c._4_4_ + 0xd8c));
    if ((iVar3 == *(int *)(local_2c._4_4_ + 0xd8c)) ||
       (local_1c._0_4_ = *param_4, *(char *)(param_4[1] + *(int *)(local_2c._4_4_ + 0xd28)) == '\0')
       ) goto LAB_009300ee;
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    FUN_00409350();
    local_8 = 9;
    FUN_00409350();
    local_8._0_1_ = 10;
    local_1c._4_4_ = FUN_009c8c30();
    local_8._0_1_ = 0xb;
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    local_8._0_1_ = 0xe;
    FUN_00988f20();
    local_8._0_1_ = 0xf;
    FUN_00448aa0();
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    FUN_009adb70();
    if (local_74 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
  }
LAB_009303ae:
  if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_2c._4_4_ + 0xbe4) * 4) +
              0x16c) !=
      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_20 + 0xbe4) * 4) + 0x16c)) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x19;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1a;
    FUN_009c8c30();
    local_8._0_1_ = 0x1b;
    FUN_009a8ee0();
    local_8._0_1_ = 0x1c;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x1d;
    FUN_00988f20();
    local_8._0_1_ = 0x1e;
    FUN_00988f20();
    local_8._0_1_ = 0x1f;
    FUN_00448aa0();
    if (0xf < local_2d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_30c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_344) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x20;
    FUN_009adb70();
    if (local_1cc != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_280) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
  }
  local_1c._0_4_ = *(int *)(local_20 + 0xcf8);
  if ((*(int *)(local_20 + 0xcfc) == *(int *)(param_3 + 4)) && (*(char *)(local_20 + 0xcf4) == '\0')
     ) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    FUN_009885d0();
    local_8 = 0x21;
    FUN_009885d0();
    local_8._0_1_ = 0x22;
    FUN_009c8c30();
    local_8._0_1_ = 0x23;
    FUN_009a8ee0();
    local_8._0_1_ = 0x24;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x25;
    FUN_0055dd40();
    local_8._0_1_ = 0x26;
    FUN_00988f20();
    local_8._0_1_ = 0x27;
    FUN_00988f20();
    local_8._0_1_ = 0x28;
    FUN_00988f20();
    local_8._0_1_ = 0x29;
    FUN_00448aa0();
    if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_2b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_8._0_1_ = 0x23;
    FUN_009a9740();
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
  }
  lVar6 = __alldiv();
  if (lVar6 != 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    __alldiv();
    __alldiv();
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x2a;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x2b;
    FUN_009c7de0(local_94);
    local_8._0_1_ = 0x2c;
    FUN_009a8ee0();
    local_8._0_1_ = 0x2d;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x2e;
    FUN_00988f20();
    local_8._0_1_ = 0x2f;
    FUN_00988f20();
    local_8._0_1_ = 0x30;
    FUN_00448aa0();
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_9c = 0xf;
    local_8._0_1_ = 0x2c;
    FUN_009a9740();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  FUN_005404a0();
  if ((-1 < local_1c._4_4_) && ((0 < local_1c._4_4_ || ((int)local_1c != 0)))) {
    __alldiv();
    __alldiv();
    lVar6 = __allmul();
    local_1c._0_4_ = (int)(lVar6 >> 0xf);
    lVar7 = FUN_00b31c36();
    if (lVar7 < lVar6 >> 0xf) {
      if (*(int *)(param_2 + 0x10) != 0) {
        FUN_00448740();
      }
      FUN_009885d0();
      local_8 = 0x31;
      FUN_009885d0();
      local_8._0_1_ = 0x32;
      FUN_009c7de0(local_94);
      local_8._0_1_ = 0x33;
      FUN_009a8ee0();
      local_8._0_1_ = 0x34;
      FUN_00475500();
      FUN_009a9880();
      local_8._0_1_ = 0x35;
      FUN_00988f20();
      local_8._0_1_ = 0x36;
      FUN_00988f20();
      local_8._0_1_ = 0x37;
      FUN_00448aa0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x33;
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
    }
  }
  iVar3 = *(int *)(DAT_012586dc + 0x50);
  uVar5 = *(uint *)(iVar3 + 0x1d0) >> 0xf | *(int *)(iVar3 + 0x1d4) << 0x11;
  if ((uVar5 < *(uint *)(local_20 + 0x12e8)) &&
     (0 < (int)(*(uint *)(local_20 + 0x12e8) - uVar5) /
          (int)(*(uint *)(iVar3 + 0x1d8) >> 0xf | *(int *)(iVar3 + 0x1dc) << 0x11))) {
    FUN_00401000();
    FUN_00b31c00();
    __alldiv();
    __alldiv();
    local_1c._4_4_ = extraout_EDX;
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    FUN_009885d0();
    local_8 = 0x38;
    FUN_009885d0();
    local_8._0_1_ = 0x39;
    FUN_009c7de0(local_94);
    local_8._0_1_ = 0x3a;
    FUN_009a8ee0();
    local_8._0_1_ = 0x3b;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x3c;
    FUN_00988f20();
    local_8._0_1_ = 0x3d;
    FUN_00988f20();
    local_8._0_1_ = 0x3e;
    FUN_00448aa0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 0x3a;
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
  }
  iVar3 = local_2c._4_4_;
  lVar6 = __alldiv();
  iVar1 = local_20;
  local_1c = lVar6 + CONCAT44(*(int *)(iVar3 + 0x1a4) + *(int *)(iVar3 + 0x19c) +
                              (uint)CARRY4(*(uint *)(iVar3 + 0x1a0),*(uint *)(iVar3 + 0x198)),
                              *(uint *)(iVar3 + 0x1a0) + *(uint *)(iVar3 + 0x198));
  uVar8 = __alldiv();
  local_2c = CONCAT44(*(int *)(iVar1 + 0x19c),(undefined4)local_2c);
  iVar3 = *(int *)(iVar1 + 0x1a4) + *(int *)(iVar1 + 0x19c) +
          (uint)CARRY4(*(uint *)(iVar1 + 0x1a0),*(uint *)(iVar1 + 0x198)) +
          (int)((ulonglong)uVar8 >> 0x20) +
          (uint)CARRY4(*(uint *)(iVar1 + 0x1a0) + *(uint *)(iVar1 + 0x198),(uint)uVar8);
  if ((iVar3 < 1) && (iVar3 < 0)) {
    local_2c = 0;
  }
  lVar6 = __alldiv();
  if (-1 < lVar6) {
    if ((0xffffffff < lVar6) || (0x10000 < (uint)lVar6)) {
      lVar6 = 0x10000;
      goto LAB_00930fc6;
    }
    if ((0xffffffff < lVar6) || (-1 < lVar6)) goto LAB_00930fc6;
  }
  local_1c = 0;
  lVar6 = local_1c;
LAB_00930fc6:
  if ((uint)lVar6 != 0x8000 || -(uint)(0x8000 < (uint)lVar6) != (int)((ulonglong)lVar6 >> 0x20)) {
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_00448740();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x3f;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x40;
    FUN_009c7de0(local_94);
    local_8._0_1_ = 0x41;
    FUN_009a8ee0();
    local_8._0_1_ = 0x42;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0x43;
    FUN_00988f20();
    local_8._0_1_ = 0x44;
    FUN_00988f20();
    local_8._0_1_ = 0x45;
    FUN_00448aa0();
    if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x41);
    FUN_009a9740();
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}


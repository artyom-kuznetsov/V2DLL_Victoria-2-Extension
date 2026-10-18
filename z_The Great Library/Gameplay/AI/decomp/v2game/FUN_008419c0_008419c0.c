// FUN_008419c0 @ 008419c0  (requested 008419C0, first bytes: 55 8B EC 6A FF 68 C9 99)


int FUN_008419c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_1f0;
  uint local_1d4;
  uint local_1b8;
  uint local_19c;
  uint local_180;
  uint local_164;
  uint local_148;
  uint local_12c;
  undefined4 local_110;
  uint local_10c;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b799c9;
  local_10 = ExceptionList;
  local_1c = *(undefined4 *)(param_1 + 8);
  local_24 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4);
  iVar6 = 0;
  local_14 = 0;
  if (param_4 == *(int *)(param_1 + 0xc)) {
    if (*(char *)(local_24 + 0x67c) != '\0') {
      piVar2 = *(int **)(local_24 + 0x430);
      if (piVar2 != (int *)0x0) {
        do {
          iVar6 = *piVar2;
          piVar2 = (int *)piVar2[2];
          if (*(int *)(iVar6 + 0xc) == *(int *)(param_1 + 0x14)) {
            return 100;
          }
        } while (piVar2 != (int *)0x0);
        return 0;
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    local_110 = *(undefined4 *)(param_1 + 8);
    local_10c = *(uint *)(param_1 + 0xc);
    ExceptionList = &local_10;
    local_18 = iVar1;
    local_14 = FUN_00834150(&param_3,&local_110,param_2);
    local_20 = 0;
    local_28 = 0;
    if (*(char *)(iVar1 + 0x67c) != '\0') {
      local_10c = *(uint *)(iVar1 + 0xda8);
      uVar5 = local_10c;
      while ((uVar4 = uVar5, local_10c <= uVar4 && (uVar4 < *(uint *)(local_18 + 0xdac)))) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4);
        iVar3 = *(int *)(iVar1 + 0xd5c);
        iVar1 = *(int *)(iVar1 + 0xd58);
        uVar5 = uVar4 + 8;
        if (iVar1 != iVar3) {
          do {
            if (*(int *)(iVar1 + 4) == *(int *)(uVar4 + 4)) break;
            iVar1 = iVar1 + 8;
          } while (iVar1 != iVar3);
          if (iVar1 != iVar3) {
            if (param_2 != 0) {
              FUN_009885d0();
              local_8 = 0;
              FUN_009885d0();
              local_8._0_1_ = 1;
              FUN_009885d0();
              local_8._0_1_ = 2;
              FUN_009888f0();
              local_8._0_1_ = 3;
              FUN_009a8ee0();
              local_8._0_1_ = 4;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
              local_8._0_1_ = 5;
              FUN_00988f20();
              local_8._0_1_ = 6;
              FUN_00988f20();
              local_8._0_1_ = 7;
              FUN_00988f20();
              local_8._0_1_ = 8;
              FUN_00448aa0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,3);
              FUN_009a9740();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
            }
            ExceptionList = local_10;
            return -1000;
          }
        }
        piVar2 = *(int **)(local_24 + 0x3dc);
        if (piVar2 != (int *)0x0) {
          do {
            iVar1 = *piVar2;
            piVar2 = (int *)piVar2[2];
            if (*(int *)(iVar1 + 0xc) == *(int *)(uVar4 + 4)) {
              local_20 = local_20 + 0x32;
              goto LAB_00841b9f;
            }
          } while (piVar2 != (int *)0x0);
        }
        piVar2 = *(int **)(local_24 + 0x3a4);
        if (piVar2 != (int *)0x0) {
          do {
            iVar1 = *piVar2;
            piVar2 = (int *)piVar2[2];
            if (*(int *)(iVar1 + 0xc) == *(int *)(uVar4 + 4)) {
              local_20 = local_20 + 0x19;
              goto LAB_00841b9f;
            }
          } while (piVar2 != (int *)0x0);
        }
        piVar2 = *(int **)(local_24 + 0x3f8);
        if (piVar2 != (int *)0x0) {
          do {
            iVar1 = *piVar2;
            piVar2 = (int *)piVar2[2];
            if (*(int *)(iVar1 + 0xc) == *(int *)(uVar4 + 4)) {
              iVar6 = iVar6 + -0x32;
              break;
            }
          } while (piVar2 != (int *)0x0);
        }
LAB_00841b9f:
        iVar1 = *(int *)(local_24 + 0xdac);
        iVar3 = *(int *)(local_24 + 0xda8);
        if (iVar3 != iVar1) {
          do {
            if (*(int *)(iVar3 + 4) == *(int *)(uVar4 + 4)) break;
            iVar3 = iVar3 + 8;
          } while (iVar3 != iVar1);
          if (iVar3 != iVar1) {
            local_28 = local_28 + 200;
          }
        }
      }
    }
    local_14 = local_14 + iVar6;
    if (param_2 != 0) {
      if (iVar6 < 1) {
        if (iVar6 < 0) {
          FUN_009885d0();
          local_8 = 0x12;
          FUN_009885d0();
          local_8._0_1_ = 0x13;
          FUN_009885d0();
          local_8._0_1_ = 0x14;
          FUN_009888f0();
          local_8._0_1_ = 0x15;
          local_18 = FUN_009a8ee0();
          local_8._0_1_ = 0x16;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0x17;
          FUN_00988f20();
          local_8._0_1_ = 0x18;
          FUN_00988f20();
          local_8._0_1_ = 0x19;
          FUN_00988f20();
          local_8._0_1_ = 0x1a;
          FUN_00448aa0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x15);
          FUN_009a9740();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = 0xffffffff;
          FUN_00408ad0();
        }
      }
      else {
        FUN_009885d0();
        local_8 = 9;
        FUN_009885d0();
        local_8._0_1_ = 10;
        FUN_009885d0();
        local_8._0_1_ = 0xb;
        FUN_009888f0();
        local_8._0_1_ = 0xc;
        local_18 = FUN_009a8ee0();
        local_8._0_1_ = 0xd;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
        local_8._0_1_ = 0xe;
        FUN_00988f20();
        local_8._0_1_ = 0xf;
        FUN_00988f20();
        local_8._0_1_ = 0x10;
        FUN_00988f20();
        local_8._0_1_ = 0x11;
        FUN_00448aa0();
        if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_d8 = 0xf;
        local_dc = 0;
        local_ec = local_ec & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_bc = 0xf;
        local_c0 = 0;
        local_d0 = local_d0 & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60 = local_60 & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FUN_009a9740();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44 = local_44 & 0xffffff00;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    local_14 = local_14 + local_20;
    if (param_2 != 0) {
      if (local_20 < 1) {
        if (local_20 < 0) {
          FUN_009885d0();
          local_8 = 0x24;
          FUN_009885d0();
          local_8._0_1_ = 0x25;
          FUN_009885d0();
          local_8._0_1_ = 0x26;
          FUN_009888f0();
          local_8._0_1_ = 0x27;
          local_18 = FUN_009a8ee0();
          local_8._0_1_ = 0x28;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0x29;
          FUN_00988f20();
          local_8._0_1_ = 0x2a;
          FUN_00988f20();
          local_8._0_1_ = 0x2b;
          FUN_00988f20();
          local_8._0_1_ = 0x2c;
          FUN_00448aa0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x27);
          FUN_009a9740();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = 0xffffffff;
          FUN_00408ad0();
        }
      }
      else {
        FUN_009885d0();
        local_8 = 0x1b;
        FUN_009885d0();
        local_8._0_1_ = 0x1c;
        FUN_009885d0();
        local_8._0_1_ = 0x1d;
        FUN_009888f0();
        local_8._0_1_ = 0x1e;
        local_18 = FUN_009a8ee0();
        local_8._0_1_ = 0x1f;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
        local_8._0_1_ = 0x20;
        FUN_00988f20();
        local_8._0_1_ = 0x21;
        FUN_00988f20();
        local_8._0_1_ = 0x22;
        FUN_00988f20();
        local_8._0_1_ = 0x23;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44 = local_44 & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60 = local_60 & 0xffffff00;
        if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_bc = 0xf;
        local_c0 = 0;
        local_d0 = local_d0 & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        FUN_009a9740();
        if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_d8 = 0xf;
        local_dc = 0;
        local_ec = local_ec & 0xffffff00;
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    local_14 = local_14 + local_28;
    if (param_2 != 0) {
      if (local_28 < 1) {
        if (local_28 < 0) {
          FUN_009885d0();
          local_8 = 0x36;
          FUN_009885d0();
          local_8._0_1_ = 0x37;
          FUN_009885d0();
          local_8._0_1_ = 0x38;
          FUN_009888f0();
          local_8._0_1_ = 0x39;
          local_18 = FUN_009a8ee0();
          local_8._0_1_ = 0x3a;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0x3b;
          FUN_00988f20();
          local_8._0_1_ = 0x3c;
          FUN_00988f20();
          local_8._0_1_ = 0x3d;
          FUN_00988f20();
          local_8._0_1_ = 0x3e;
          FUN_00448aa0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x39);
          FUN_009a9740();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8 = 0xffffffff;
          FUN_00408ad0();
        }
      }
      else {
        FUN_009885d0();
        local_8 = 0x2d;
        FUN_009885d0();
        local_8._0_1_ = 0x2e;
        FUN_009885d0();
        local_8._0_1_ = 0x2f;
        FUN_009888f0();
        local_8._0_1_ = 0x30;
        local_18 = FUN_009a8ee0();
        local_8._0_1_ = 0x31;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
        local_8._0_1_ = 0x32;
        FUN_00988f20();
        local_8._0_1_ = 0x33;
        FUN_00988f20();
        local_8._0_1_ = 0x34;
        FUN_00988f20();
        local_8._0_1_ = 0x35;
        FUN_00448aa0();
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44 = local_44 & 0xffffff00;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60 = local_60 & 0xffffff00;
        if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_bc = 0xf;
        local_c0 = 0;
        local_d0 = local_d0 & 0xffffff00;
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x30);
        FUN_009a9740();
        if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_d8 = 0xf;
        local_dc = 0;
        local_ec = local_ec & 0xffffff00;
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    local_1c = *(undefined4 *)(param_1 + 8);
    iVar6 = *(int *)(local_24 + 0xd5c);
    iVar1 = *(int *)(local_24 + 0xd58);
    if (iVar1 != iVar6) {
      do {
        if (*(int *)(iVar1 + 4) == *(int *)(param_1 + 0xc)) break;
        iVar1 = iVar1 + 8;
      } while (iVar1 != iVar6);
      if ((iVar1 != iVar6) && (local_14 = local_14 + 100, param_2 != 0)) {
        FUN_009885d0();
        local_8 = 0x3f;
        FUN_009885d0();
        local_8._0_1_ = 0x40;
        FUN_009885d0();
        local_8._0_1_ = 0x41;
        FUN_009888f0();
        local_8._0_1_ = 0x42;
        FUN_009a8ee0();
        local_8._0_1_ = 0x43;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
        local_8._0_1_ = 0x44;
        FUN_00988f20();
        local_8._0_1_ = 0x45;
        FUN_00988f20();
        local_8._0_1_ = 0x46;
        FUN_00988f20();
        local_8._0_1_ = 0x47;
        FUN_00448aa0();
        if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x42);
        FUN_009a9740();
        if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_14;
}


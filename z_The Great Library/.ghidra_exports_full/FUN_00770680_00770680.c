// FUN_00770680 @ 00770680 body=[[00770680, 0077097d] [00770981, 007709c7] [007709cb, 007709fd] [00770a01, 00770a4a] [00770a4e, 00770a7b] [00770a7f, 00770aab] [00770aaf, 00770aef] [00770af3, 00770b2b] [00770b2f, 00770b59] [00770b7a, 00770c36] [00770c3a, 00770c5e] [00770c62, 00770ca6] [00770caa, 007710c9]]


/* WARNING: Removing unreachable block (ram,0x00770d20) */

void FUN_00770680(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int in_ECX;
  int local_158;
  int local_150;
  int iStack_14c;
  undefined1 local_148 [4];
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  undefined1 auStack_11c [4];
  undefined **local_118;
  uint local_110;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 auStack_f8 [4];
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [4];
  uint local_d0 [3];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint local_98 [4];
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_7c;
  int iStack_74;
  undefined1 auStack_70 [4];
  undefined4 local_6c [5];
  uint uStack_58;
  int iStack_50;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b97851;
  local_14 = ExceptionList;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_158 = 0;
  if (param_1 != 0) {
    local_150 = in_ECX;
    if (param_1 == 5) {
      ExceptionList = &local_14;
      uVar8 = (**(code **)(**(int **)(in_ECX + -4) + 0x44))();
      FUN_009b1040(uVar8);
      local_c._1_3_ = 0;
      if ((iStack_74 != 0) && (iStack_14c = iStack_7c, iStack_7c != 0)) {
        do {
          local_c._0_1_ = 0;
          FUN_0068b500(DAT_012588e8);
          FUN_0064a460();
          local_c._0_1_ = 1;
          if (iStack_50 != -1) {
            iVar9 = FUN_00aae9af(0x60);
            local_c._0_1_ = 2;
            if (iVar9 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_0072ba30(iVar9,local_6c,iStack_50,0);
            }
            iVar11 = local_150;
            local_c = CONCAT31(local_c._1_3_,1);
            iVar10 = (**(code **)(**(int **)(local_150 + -4) + 0x44))();
            (**(code **)(**(int **)(iVar10 + 0x38) + 0x18))(uVar8);
            iVar10 = FUN_00aae9af(0x68);
            puStack_10._0_1_ = 3;
            if (iVar10 == 0) {
              uVar8 = 0;
            }
            else {
              uStack_c0 = 0xf;
              uStack_c4 = 0;
              auStack_d4[0] = 0;
              FUN_00409350(&DAT_00ded94d,0);
              puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
              iStack_dc = FUN_00aae9af(0x24);
              puStack_10 = (undefined1 *)0x5;
              if (iStack_dc == 0) {
                uVar8 = 0;
              }
              else {
                FUN_009885d0();
                puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
                uVar8 = FUN_009885d0();
                puStack_10 = (undefined1 *)0x7;
                uStack_d8 = FUN_009a8ee0(&iStack_14c,auStack_f8);
                puStack_10 = (undefined1 *)0x8;
                iVar11 = FUN_00475500();
                FUN_009a9880((int)*(undefined8 *)(iVar11 + 0x6c),
                             (int)((ulonglong)*(undefined8 *)(iVar11 + 0x6c) >> 0x20),
                             (int)*(undefined8 *)(iVar11 + 0x74),
                             (int)((ulonglong)*(undefined8 *)(iVar11 + 0x74) >> 0x20));
                puStack_10 = (undefined1 *)0x9;
                FUN_00988f20(uVar8);
                puStack_10 = (undefined1 *)0xa;
                FUN_00988f20(auStack_70);
                puStack_10 = (undefined1 *)0xb;
                bVar7 = true;
                bVar6 = true;
                bVar5 = true;
                bVar4 = true;
                bVar3 = true;
                bVar2 = true;
                uVar8 = FUN_009f23c0();
                iVar11 = iVar9;
              }
              bVar1 = true;
              puStack_10 = (undefined1 *)0x11;
              uVar8 = FUN_009f4240(iVar10,uVar8,*(undefined4 *)(iVar11 + 0x274),auStack_d4);
            }
            puStack_10 = (undefined1 *)0x18;
            iVar9 = (**(code **)(**(int **)(iVar11 + -4) + 0x44))();
            (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))(uVar8);
            if (bVar2) {
              bVar2 = false;
              if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(uStack_b4);
              }
              uStack_a0 = 0xf;
              uStack_a4 = 0;
              uStack_b4 = uStack_b4 & 0xffffff00;
            }
            if (bVar3) {
              bVar3 = false;
              if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_98[0]);
              }
              uStack_84 = 0xf;
              uStack_88 = 0;
              local_98[0] = local_98[0] & 0xffffff00;
            }
            if (bVar4) {
              bVar4 = false;
              if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_118);
              }
              uStack_104 = 0xf;
              uStack_108 = 0;
              local_118 = (undefined **)((uint)local_118 & 0xffffff00);
            }
            if (bVar5) {
              bVar5 = false;
              local_c = 0x19;
              FUN_009adb70();
              if (iStack_144 != 0) {
                FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(iStack_144);
              }
              iStack_144 = 0;
              uStack_140 = 0;
              uStack_13c = 0;
            }
            if (bVar6) {
              bVar6 = false;
              if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_134[0]);
              }
              local_120 = 0xf;
              local_124 = 0;
              local_134[0] = local_134[0] & 0xffffff00;
            }
            if (bVar7) {
              bVar7 = false;
              if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_f4[0]);
              }
              local_e0 = 0xf;
              local_e4 = 0;
              local_f4[0] = local_f4[0] & 0xffffff00;
            }
            local_c._0_1_ = 1;
            local_c._1_3_ = 0;
            if (bVar1) {
              bVar1 = false;
              if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_d0[0]);
              }
              uStack_bc = 0xf;
              uStack_c0 = 0;
              local_d0[0] = local_d0[0] & 0xffffff00;
            }
          }
          local_c._0_1_ = 0;
          if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c[0]);
          }
          iStack_14c = *(int *)(iStack_14c + 8);
        } while (iStack_14c != 0);
        iStack_14c = 0;
      }
      local_c._0_1_ = 0;
      if (iStack_7c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iStack_7c);
      }
    }
    else {
      if (param_1 == 9) {
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        ExceptionList = &local_14;
        FUN_00409350("YOUKICKED",9);
        local_c = 0x1a;
        FUN_009a8ee0(local_148,local_f4);
        local_c._0_1_ = 0x1b;
        iVar9 = FUN_00475500();
        FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                     (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
                     (int)*(undefined8 *)(iVar9 + 0x74),
                     (int)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20));
        local_c._0_1_ = 0x1c;
        uVar8 = FUN_009f23c0();
        iVar9 = local_150;
        local_c._0_1_ = 0x1d;
        FUN_00771510(uVar8);
        local_118 = &PTR_FUN_00e3cffc;
        if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_110);
        }
        local_fc = 0xf;
        local_100 = 0;
        local_110 = local_110 & 0xffffff00;
        if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_134[0]);
        }
        local_120 = 0xf;
        local_124 = 0;
        local_134[0] = local_134[0] & 0xffffff00;
        local_c = CONCAT31(local_c._1_3_,0x1a);
        FUN_009a9740(local_148);
        local_c = 0xffffffff;
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f4[0]);
        }
        *(undefined4 *)(iVar9 + 0x178) = 0;
        iVar11 = FUN_00aae9af(0x68);
        local_c = 0x1e;
        if (iVar11 == 0) {
          piVar12 = (int *)0x0;
        }
        else {
          FUN_009885d0();
          local_c = CONCAT31(local_c._1_3_,0x1f);
          local_158 = 0x80;
          piVar12 = (int *)FUN_00640680(iVar11,local_134);
          iVar9 = local_150;
        }
        local_c = 0xffffffff;
        (**(code **)(*piVar12 + 0x3c))(&DAT_00f0ebb0);
        iVar9 = (**(code **)(*(int *)(iVar9 + 0x34) + 0x28))();
        if (*(int *)(iVar9 + 0x2c) == 9) {
          FUN_009885d0();
          puStack_10 = (undefined1 *)0x24;
          FUN_009a8ee0(&iStack_14c,auStack_11c);
          puStack_10._0_1_ = 0x25;
          iVar9 = FUN_00475500();
          uVar8 = FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
                               (int)*(undefined8 *)(iVar9 + 0x74),
                               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20));
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x26);
          (**(code **)(*piVar12 + 0x40))(uVar8);
          FUN_00408ad0();
          local_14 = (void *)CONCAT31(local_14._1_3_,0x24);
        }
        else {
          FUN_009885d0();
          puStack_10 = (undefined1 *)0x21;
          FUN_009a8ee0(&iStack_14c,auStack_11c);
          puStack_10._0_1_ = 0x22;
          iVar9 = FUN_00475500();
          uVar8 = FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
                               (int)*(undefined8 *)(iVar9 + 0x74),
                               (int)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20));
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x23);
          (**(code **)(*piVar12 + 0x40))(uVar8);
          FUN_00408ad0();
          local_14 = (void *)CONCAT31(local_14._1_3_,0x21);
        }
        FUN_009a9740(&local_150);
        local_14 = (void *)0xffffffff;
        FUN_00408ad0();
        iVar9 = FUN_00640a80(piVar12);
        (**(code **)(*(int *)(iVar9 + 0x54) + 4))(local_158 + 0x180);
        FUN_006480e0(piVar12);
        if (*(int *)(local_158 + 0x5b8) == 0) {
          ExceptionList = local_14;
          return;
        }
        iVar9 = FUN_00aae9af(0xb0);
        local_c = 0x27;
        if (iVar9 == 0) {
          uVar8 = 0;
        }
        else {
          iVar10 = (**(code **)(**(int **)(local_158 + -4) + 0x100))();
          iVar11 = *(int *)(*(int *)(local_158 + 0x5b8) + 0x1b8);
          iVar13 = (**(code **)(**(int **)(local_158 + -4) + 0x100))();
          uVar8 = FUN_00a069a0(iVar9,*(int *)(*(int *)(local_158 + 0x5b8) + 0x1b8) + 0x2c,
                               iVar13 + 0x134,0,iVar11 + 0x70,iVar10 + 0x150);
        }
        piVar12 = *(int **)(*(int *)(local_158 + 0x5b8) + 0x38);
      }
      else {
        if (param_1 != 3) {
          return;
        }
        if (*(int *)(in_ECX + 0x178) != 1) {
          return;
        }
        ExceptionList = &local_14;
        FUN_009885d0();
        local_c = 0x28;
        FUN_009a8ee0(local_d0,local_98);
        local_c._0_1_ = 0x29;
        iVar9 = FUN_00475500();
        FUN_009a9880((int)*(undefined8 *)(iVar9 + 0x6c),
                     (int)((ulonglong)*(undefined8 *)(iVar9 + 0x6c) >> 0x20),
                     (int)*(undefined8 *)(iVar9 + 0x74),
                     (int)((ulonglong)*(undefined8 *)(iVar9 + 0x74) >> 0x20));
        local_c._0_1_ = 0x2a;
        uVar8 = FUN_009f23c0();
        local_c._0_1_ = 0x2b;
        FUN_00771510(uVar8);
        FUN_0076bf20();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x28);
        FUN_009a9740(local_d0);
        local_c = 0xffffffff;
        FUN_00408ad0();
        *(undefined4 *)(local_150 + 0x178) = 0;
        if (*(int *)(local_150 + 0x5b8) == 0) {
          ExceptionList = local_14;
          return;
        }
        iVar9 = FUN_00aae9af(0xb0);
        local_c = 0x2c;
        if (iVar9 == 0) {
          uVar8 = 0;
        }
        else {
          iVar10 = (**(code **)(**(int **)(local_150 + -4) + 0x100))();
          iVar11 = *(int *)(*(int *)(local_150 + 0x5b8) + 0x1b8);
          iVar13 = (**(code **)(**(int **)(local_150 + -4) + 0x100))();
          uVar8 = FUN_00a069a0(iVar9,*(int *)(*(int *)(local_150 + 0x5b8) + 0x1b8) + 0x2c,
                               iVar13 + 0x134,0,iVar11 + 0x70,iVar10 + 0x150);
        }
        piVar12 = *(int **)(*(int *)(local_150 + 0x5b8) + 0x38);
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar12 + 0x18))(uVar8);
    }
  }
  ExceptionList = local_14;
  return;
}


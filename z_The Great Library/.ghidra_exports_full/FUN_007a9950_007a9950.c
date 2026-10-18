// FUN_007a9950 @ 007a9950 body=[[007a9950, 007a9ad0] [007a9ad4, 007a9af9] [007a9afd, 007a9b14] [007a9b18, 007a9b32] [007a9b36, 007a9b6c] [007a9b70, 007a9c60] [007a9c64, 007a9c8e] [007a9c92, 007a9cd3] [007a9cd7, 007a9d01] [007a9d05, 007a9d32] [007a9d36, 007a9d49] [007a9d50, 007a9e24] [007a9e28, 007a9e48] [007a9e4c, 007a9e72] [007a9e76, 007a9eb1] [007a9eb5, 007aa08f] [007aa093, 007aa0b9] [007aa0bd, 007aa0e3] [007aa0e7, 007aa1f9]]


undefined1 * FUN_007a9950(int param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  undefined1 local_114 [4];
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  uint local_34;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b91324;
  local_10 = ExceptionList;
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = local_100 & 0xffffff00;
  local_d0 = 0xf;
  local_d4 = 0;
  local_e4 = local_e4 & 0xffffff00;
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  local_ac = 0;
  local_a8 = 1;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_1c = *(int *)(DAT_012588e8 + 0xb60);
  local_2c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  local_18 = 0;
  ExceptionList = &local_10;
  ppvVar5 = &local_10;
  if (0 < local_2c) {
    do {
      iVar7 = local_18;
      cVar6 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + local_18 * 4) + 0x18) + 0x94))
                        ();
      if ((((cVar6 != '\0') && (iVar7 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2))
          && (*(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4) != 0)) &&
         (cVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar7 * 4) + 0x20))(),
         cVar6 != '\0')) {
        piVar9 = *(int **)(*(int *)(param_1 + 0x14) + iVar7 * 4);
        local_34 = 0xf;
        local_38 = 0;
        local_48 = local_48 & 0xffffff00;
        local_28 = piVar9;
        FUN_00409350(&DAT_00dfc7b4,3);
        local_8._0_1_ = 1;
        (**(code **)(*piVar9 + 0x18))();
        local_8._0_1_ = 2;
        FUN_00988fa0();
        local_8._0_1_ = 3;
        FUN_00988f20();
        local_8._0_1_ = 4;
        FUN_00408ed0();
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_88 = 0xf;
        local_8c = 0;
        local_9c = local_9c & 0xffffff00;
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
        local_8._0_1_ = 0;
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_0056aef0(piVar9,local_64,local_20,local_1c);
        local_8._0_1_ = 5;
        FUN_00448aa0();
        local_8._0_1_ = 0;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = (int *)piVar9[0x32];
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        if (local_24 != (int *)0x0) {
          local_138 = 0xf;
          local_13c = 0;
          local_14c = local_14c & 0xffffff00;
          FUN_00409350(&DAT_00dee2cc,1);
          local_8._0_1_ = 6;
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          FUN_00409350("TECH_INVENTIONS_TOOLTIP",0x17);
          local_8._0_1_ = 7;
          FUN_009a8ee0(local_114,local_130);
          local_8._0_1_ = 8;
          iVar7 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
          local_8._0_1_ = 9;
          FUN_00988f20();
          local_8._0_1_ = 10;
          FUN_00448aa0();
          if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18c = 0xf;
          local_190 = 0;
          local_1a0[0] = local_1a0[0] & 0xffffff00;
          if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_170 = 0xf;
          local_174 = 0;
          local_184[0] = local_184[0] & 0xffffff00;
          local_8._0_1_ = 0xb;
          FUN_009adb70();
          if (local_110 != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_110 = 0;
          local_10c = 0;
          local_108 = 0;
          if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          local_11c = 0xf;
          local_120 = 0;
          local_130[0] = local_130[0] & 0xffffff00;
          if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_138 = 0xf;
          local_13c = 0;
          local_14c = local_14c & 0xffffff00;
          do {
            local_8._0_1_ = 0;
            piVar9 = (int *)*local_24;
            iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_1c * 4);
            for (piVar2 = *(int **)(iVar7 + 0x4f8); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2])
            {
              if ((int *)*piVar2 == piVar9) {
                uVar10 = 0x200df8518;
                goto LAB_007a9db6;
              }
            }
            for (piVar2 = *(int **)(iVar7 + 0x508); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2])
            {
              if ((int *)*piVar2 == piVar9) {
                uVar10 = 0x200df963c;
                goto LAB_007a9db6;
              }
            }
            uVar10 = 0x200e0f2c0;
LAB_007a9db6:
            local_24 = (int *)local_24[2];
            FUN_00448740(uVar10);
            local_34 = 0xf;
            local_38 = 0;
            local_48 = local_48 & 0xffffff00;
            FUN_00409350(&DAT_00dfc7b4,3);
            local_8._0_1_ = 0xc;
            (**(code **)(*piVar9 + 0x18))();
            local_8._0_1_ = 0xd;
            FUN_00988f20();
            local_8._0_1_ = 0xe;
            FUN_00448aa0();
            if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_6c = 0xf;
            local_70 = 0;
            local_80 = local_80 & 0xffffff00;
            if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8._0_1_ = 0;
            local_88 = 0xf;
            local_8c = 0;
            local_9c = local_9c & 0xffffff00;
            if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            FUN_00562570(piVar9,local_168,&local_20,0);
            local_8._0_1_ = 0xf;
            FUN_00448aa0();
            local_8._0_1_ = 0;
            if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_154 = 0xf;
            local_158 = 0;
            local_168[0] = local_168[0] & 0xffffff00;
            piVar9 = local_28;
          } while (local_24 != (int *)0x0);
        }
        local_8._0_1_ = 0;
        iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_1c * 4);
        iVar4 = *(int *)(iVar3 + 0x4c4);
        do {
          iVar7 = local_18;
          if (iVar4 == 0) {
            if (*(int *)(*(int *)(*(int *)(iVar3 + 0xbcc) + 0x2b8) + piVar9[0xb9] * 4) == 0) {
              if (*(char *)(iVar3 + 0x12d0) == '\0') {
                FUN_009885d0();
                local_8._0_1_ = 0x10;
                FUN_009a8ee0(local_40,local_64);
                local_8._0_1_ = 0x11;
                iVar7 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                local_8._0_1_ = 0x12;
                FUN_00988fa0();
                local_8._0_1_ = 0x13;
                FUN_00448aa0();
                FUN_00408ad0();
                FUN_00408ad0();
                local_8._0_1_ = 0x10;
                FUN_009a9740();
                local_8._0_1_ = 0;
                FUN_00408ad0();
                iVar7 = local_18;
              }
              else {
                cVar6 = FUN_00569920();
                piVar9 = local_28;
                iVar7 = local_18;
                if (cVar6 == '\0') {
                  puVar11 = local_1a0;
                  uVar8 = (**(code **)(*local_28 + 0x18))();
                  uVar10 = CONCAT44(puVar11,uVar8);
                  puVar11 = local_184;
                  local_8._0_1_ = 0x14;
                  uVar8 = FUN_0042c180();
                  local_8._0_1_ = 0x15;
                  uVar8 = FUN_00988fa0(uVar8,puVar11,uVar10);
                  local_8._0_1_ = 0x16;
                  FUN_00448aa0(uVar8,0,0xffffffff);
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  FUN_00408ad0();
                  FUN_00448740();
                  uVar8 = FUN_005699b0(*(undefined4 *)
                                        (*(int *)(*(int *)(DAT_012587e4 + 4) + local_1c * 4) + 0xbcc
                                        ),local_168,piVar9);
                  local_8._0_1_ = 0x17;
                  FUN_00448aa0(uVar8,0,0xffffffff);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_00408ad0();
                  FUN_0040c830(param_2);
                  FUN_00459820();
                  ExceptionList = local_10;
                  return param_2;
                }
              }
            }
            break;
          }
          puVar1 = (undefined4 *)(iVar4 + 0x24);
          iVar4 = *(int *)(iVar4 + 0x2c);
        } while ((int *)*puVar1 != piVar9);
      }
      local_18 = iVar7 + 1;
      ppvVar5 = ExceptionList;
    } while (local_18 < local_2c);
  }
  ExceptionList = ppvVar5;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0();
  local_8._0_1_ = 0x18;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  FUN_00408ed0();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  FUN_00408ed0();
  *(undefined4 *)(param_2 + 0x54) = local_ac;
  param_2[0x58] = local_a8;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b4 = 0xf;
  local_b8 = 0;
  local_c8 = local_c8 & 0xffffff00;
  if (local_d0 < 0x10) {
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (local_ec < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


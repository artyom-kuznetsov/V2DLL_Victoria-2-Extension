// FUN_004e2d40 @ 004e2d40 body=[[004e2d40, 004e2d9a] [004e2d9e, 004e2daa] [004e2db0, 004e2f9e] [004e2fa2, 004e316f] [004e3173, 004e3249] [004e324d, 004e327c] [004e3280, 004e32a6] [004e32b0, 004e335f] [004e3363, 004e35b0] [004e35b4, 004e35c0] [004e35c7, 004e36a7] [004e36ab, 004e36db] [004e36df, 004e3834] [004e3838, 004e384d]]


undefined4 * FUN_004e2d40(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  void *pvVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint in_stack_00000024;
  uint *in_stack_0000002c;
  int *in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  uint uStack_d0;
  undefined1 *puStack_cc;
  int *piStack_c8;
  int iStack_c4;
  undefined1 local_a8 [20];
  uint local_94;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b9fd55;
  local_8 = 0;
  local_30 = *(int *)(param_1 + 0x54);
  local_2c = *(int *)(param_1 + 0x58);
  if (DAT_0125d50c == 0) {
    ExceptionList = &local_10;
    iVar6 = FUN_00aae9af();
    if (iVar6 != DAT_0125d50c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    DAT_0125d50c = iVar6;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = &local_10;
  *param_2 = 0x26;
  param_2[1] = DAT_00f0971c;
  DAT_00f0971c = DAT_00f0971c + 1;
  for (piVar7 = *(int **)(param_3 + 0xec); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
    local_50 = *(undefined4 *)(*piVar7 + 0x10);
    local_4c = *(undefined4 *)(*piVar7 + 0x14);
    FUN_004e9470();
    if (local_20 != 0) {
      local_18[1] = (int *)*piVar7;
      if (local_18[1] != (int *)0x0) goto LAB_004e2fb3;
      break;
    }
  }
  piVar7 = (int *)FUN_00aae9af();
  local_8._0_1_ = 1;
  local_34 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    FUN_005c5e00();
    *piVar7 = (int)CArmy::vftable;
    piVar7[2] = (int)CArmy::vftable;
    piVar7[0x6d] = 0;
    piVar7[0x6a] = 0;
    piVar7[0x69] = 0;
    piVar7[0x6c] = 0;
    *(undefined1 *)(piVar7 + 0x6b) = 0;
  }
  local_8._0_1_ = 0;
  local_18[1] = piVar7;
  (**(code **)(piVar7[2] + 0x18))();
  iStack_c4 = 0x4e2e85;
  FUN_004e42f0();
  local_8 = CONCAT31(local_8._1_3_,4);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  FUN_005cdc70();
  FUN_00513c80();
  iStack_c4 = 0x4e2ebd;
  FUN_005c93b0();
  (**(code **)(*piVar7 + 0x6c))();
  FUN_005cb2c0();
  if (in_stack_00000038 == 0) {
    if ((*(int *)(param_1 + 0x48) == 0) &&
       (((iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 0xfc), iVar6 == 0 || (iVar6 == 3)) ||
        (iVar6 == 4)))) {
      iStack_c4 = 0x4e2f23;
      piVar15 = (int *)FUN_004e4d40();
      piVar7[0x34] = *piVar15;
      piVar7[0x35] = piVar15[1];
    }
  }
  else {
    piVar7[0x34] = in_stack_00000034;
    piVar7[0x35] = in_stack_00000038;
  }
  iVar6 = *(int *)(param_1 + 0x84);
  puVar8 = (undefined4 *)FUN_00aae9af();
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = *param_2;
    puVar8[1] = param_2[1];
    puVar8[2] = iVar6;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 0;
  }
  iVar13 = *(int *)(param_1 + 0x88);
  *(undefined4 **)(param_1 + 0x84) = puVar8;
  *(int *)(param_1 + 0x88) = iVar13 + 1;
  if (iVar13 == 0) {
    *(undefined4 **)(param_1 + 0x80) = puVar8;
  }
  else {
    *(undefined4 **)(iVar6 + 0xc) = puVar8;
  }
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
LAB_004e2fb3:
  if ((*(int *)((int)in_stack_0000002c + 0x40) - *(int *)((int)in_stack_0000002c + 0x3c) &
      0xfffffffcU) != 0) {
    iVar6 = *(int *)((int)in_stack_0000002c + 0x3c);
    iVar13 = 0;
    if (0 < (int)(*(int *)((int)in_stack_0000002c + 0x40) - iVar6 & 0xfffffffcU)) {
      do {
        iVar9 = *(int *)(iVar6 + iVar13 * 4);
        uVar1 = *(undefined4 *)(iVar9 + 0x60);
        local_38 = *(int *)(iVar9 + 100);
        if (((((char)uVar1 != 'R') || ((char)((uint)uVar1 >> 8) != 'E')) ||
            ((char)((uint)uVar1 >> 0x10) != 'B')) &&
           (iVar9 = *(int *)(iVar6 + iVar13 * 4), local_3c = *(undefined4 *)(iVar9 + 0x60),
           *(int *)(iVar9 + 100) != *(int *)(param_1 + 0x3c))) {
          iVar6 = *(int *)(iVar6 + iVar13 * 4);
          FUN_005cb230();
          piVar7 = local_18[1];
          *(undefined4 *)(iVar6 + 0x60) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(param_1 + 0x58);
          local_20 = iVar6;
          FUN_005dadd0();
          *(int *)(iVar6 + 0x60) = piVar7[0x30];
          *(int *)(iVar6 + 100) = piVar7[0x31];
          *(int **)(iVar6 + 0x74) = piVar7;
          iVar9 = FUN_005cabe0();
          iVar6 = piVar7[0x68];
          piVar7[0x68] = iVar9;
          if ((iVar9 != iVar6) || ((char)piVar7[0x2f] != '\0')) {
            FUN_005cae80();
            *(undefined1 *)(piVar7 + 0x2f) = 0;
          }
        }
        iVar6 = *(int *)((int)in_stack_0000002c + 0x3c);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)((int)in_stack_0000002c + 0x40) - iVar6 >> 2);
    }
  }
  local_34 = (int *)*in_stack_00000030;
  local_20 = 0;
  puVar14 = (undefined1 *)in_stack_0000002c;
  piVar7 = local_18[1];
  if (0 < (int)local_34) {
    do {
      FUN_009b7ac0();
      piVar15 = (int *)(*(int *)(*(int *)(puVar14 + 0x68) + 0x3e0) -
                        *(int *)(*(int *)(puVar14 + 0x68) + 0x3dc) >> 2);
      if (DAT_0125fdd8 == (int *)0x0) {
        piVar10 = (int *)FUN_00aae9af();
        local_8._0_1_ = 5;
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10[1] = 0x1ff;
          *piVar10 = 0;
          local_1c = piVar10;
          pvVar11 = (void *)FUN_00aad56b();
          piVar10[2] = (int)pvVar11;
          iStack_c4 = 0x4e313a;
          _memset(pvVar11,0,piVar10[1] * 4);
          piVar10[3] = 0;
          piVar10[4] = 0;
          piVar10[5] = 0;
        }
        local_8 = CONCAT31(local_8._1_3_,6);
        local_1c = (int *)0x0;
        if ((piVar10 != DAT_0125fdd8) && (local_24 = DAT_0125fdd8, DAT_0125fdd8 != (int *)0x0)) {
          FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        puVar14 = (undefined1 *)in_stack_0000002c;
        piVar7 = local_18[1];
        DAT_0125fdd8 = piVar10;
      }
      local_18[0] = (int *)(DAT_0125fdd8[4] - DAT_0125fdd8[3] >> 2);
      if ((int)piVar15 <= (int)local_18[0]) {
        local_18[0] = piVar15;
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 7;
      piVar15 = DAT_0125fdd8;
      if (DAT_0125fdd8 == (int *)0x0) {
        piVar15 = (int *)FUN_00aae9af();
        local_8._0_1_ = 8;
        if (piVar15 == (int *)0x0) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15[1] = 0x1ff;
          *piVar15 = 0;
          local_1c = piVar15;
          pvVar11 = (void *)FUN_00aad56b();
          piVar15[2] = (int)pvVar11;
          iStack_c4 = 0x4e3218;
          _memset(pvVar11,0,piVar15[1] * 4);
          piVar15[3] = 0;
          piVar15[4] = 0;
          piVar15[5] = 0;
        }
        local_8 = CONCAT31(local_8._1_3_,9);
        local_1c = (int *)0x0;
        puVar14 = (undefined1 *)in_stack_0000002c;
        piVar7 = local_18[1];
        if ((piVar15 != DAT_0125fdd8) && (DAT_0125fdd8 != (int *)0x0)) {
          FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      DAT_0125fdd8 = piVar15;
      local_8._0_1_ = 7;
      local_24 = (int *)FUN_005c2ad0();
      local_8._0_1_ = 0;
      uVar4 = (undefined1)local_8;
      local_8._0_1_ = 0;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      local_28 = 3;
      piVar15 = local_24;
      if (3 < (int)local_18[0]) {
        do {
          iVar6 = local_28 * 4;
          iVar13 = local_28;
          if (local_48 <=
              *(int *)(*(int *)(*(int *)((int)in_stack_0000002c + 0x68) + 0x3dc) + local_28 * 4)) {
            if (DAT_0125fdd8 == (int *)0x0) {
              piVar7 = (int *)FUN_00aae9af();
              local_8._0_1_ = 10;
              local_1c = piVar7;
              if (piVar7 == (int *)0x0) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7[1] = 0x1ff;
                *piVar7 = 0;
                pvVar11 = (void *)FUN_00aad56b();
                piVar7[2] = (int)pvVar11;
                iStack_c4 = 0x4e332a;
                _memset(pvVar11,0,piVar7[1] * 4);
                piVar7[3] = 0;
                piVar7[4] = 0;
                piVar7[5] = 0;
              }
              local_8 = CONCAT31(local_8._1_3_,0xb);
              local_40 = (int *)0x0;
              if ((piVar7 != DAT_0125fdd8) && (local_1c = DAT_0125fdd8, DAT_0125fdd8 != (int *)0x0))
              {
                FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_8._0_1_ = 0;
              DAT_0125fdd8 = piVar7;
            }
            iVar13 = local_28;
            piVar15 = *(int **)(iVar6 + DAT_0125fdd8[3]);
            if ((*(char *)((int)piVar15 + 0x39) != '\0') &&
               (cVar5 = (**(code **)(*piVar15 + 0x24))(), cVar5 != '\0')) {
              local_44 = *(int *)(param_1 + 0x38);
              if ((2 < piVar15[9]) &&
                 (puVar14 = (undefined1 *)in_stack_0000002c, piVar7 = local_18[1],
                 uVar4 = (undefined1)local_8,
                 *(char *)(piVar15[9] +
                          *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                    *(int *)(param_1 + 0x3c) * 4) + 0xbcc) + 0x2dc))
                 != '\0')) break;
            }
          }
          local_28 = iVar13 + 1;
          puVar14 = (undefined1 *)in_stack_0000002c;
          piVar7 = local_18[1];
          piVar15 = local_24;
          uVar4 = (undefined1)local_8;
        } while (local_28 < (int)local_18[0]);
      }
      local_8._0_1_ = uVar4;
      local_24 = piVar15;
      local_44 = *(int *)(param_1 + 0x38);
      uStack_d0 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x3c) * 4);
      iStack_c4 = param_3;
      piStack_c8 = local_24;
      puStack_cc = local_a8;
      local_18[0] = (int *)0x0;
      FUN_004fa8b0();
      local_8._0_1_ = 0xc;
      piVar15 = (int *)FUN_00aae9af();
      local_8._0_1_ = 0xd;
      local_40 = piVar15;
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        FUN_005be1a0();
        *piVar15 = (int)CRegiment::vftable;
      }
      local_8 = CONCAT31(local_8._1_3_,0xc);
      cVar5 = (**(code **)(*piVar15 + 0x28))();
      if (cVar5 != '\0') {
        local_44 = piVar15[0x18];
        FUN_004f9be0();
      }
      iStack_c4 = 0x4e3487;
      FUN_00408ed0();
      *(undefined2 *)(piVar15 + 0x22) = local_18[0]._0_2_;
      piVar15[0x18] = local_30;
      piVar15[0x19] = local_2c;
      ppiVar2 = *(int ***)(puVar14 + 0x40);
      local_18[0] = piVar15;
      if ((local_18 < ppiVar2) && (ppiVar3 = *(int ***)(puVar14 + 0x3c), ppiVar3 <= local_18)) {
        if (ppiVar2 == *(int ***)((int)in_stack_0000002c + 0x44)) {
          uVar12 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar12) {
LAB_004e36bd:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)*(int ***)((int)in_stack_0000002c + 0x44) - (int)ppiVar3 >> 2) <
              uVar12 + 1) {
            FUN_004bf300();
            piVar7 = local_18[1];
          }
        }
        if (*(undefined4 **)((int)in_stack_0000002c + 0x40) != (undefined4 *)0x0) {
          **(undefined4 **)((int)in_stack_0000002c + 0x40) =
               *(undefined4 *)
                (*(int *)((int)in_stack_0000002c + 0x3c) + ((int)local_18 - (int)ppiVar3 >> 2) * 4);
        }
        *(int *)((int)in_stack_0000002c + 0x40) = *(int *)((int)in_stack_0000002c + 0x40) + 4;
        puVar14 = (undefined1 *)in_stack_0000002c;
      }
      else {
        if (ppiVar2 == *(int ***)(puVar14 + 0x44)) {
          uVar12 = (int)ppiVar2 - *(int *)(puVar14 + 0x3c) >> 2;
          if (0x3ffffffe < uVar12) goto LAB_004e36bd;
          if ((uint)((int)*(int ***)(puVar14 + 0x44) - *(int *)(puVar14 + 0x3c) >> 2) < uVar12 + 1)
          {
            FUN_004bf300();
            puVar14 = (undefined1 *)in_stack_0000002c;
            piVar7 = local_18[1];
          }
        }
        if (*(undefined4 **)(puVar14 + 0x40) != (undefined4 *)0x0) {
          **(undefined4 **)(puVar14 + 0x40) = piVar15;
        }
        *(int *)(puVar14 + 0x40) = *(int *)(puVar14 + 0x40) + 4;
      }
      piVar15[0xc] = (int)puVar14;
      FUN_005c03c0();
      if (DAT_0125d50c == 0) {
        iVar6 = FUN_00aae9af();
        if (iVar6 != DAT_0125d50c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        DAT_0125d50c = iVar6;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = DAT_00f0971c;
      local_3c = 0x26;
      DAT_00f0971c = DAT_00f0971c + 1;
      (**(code **)(*piVar15 + 0x18))();
      iStack_c4 = 0x4e35fd;
      piVar10 = (int *)(**(code **)(*piVar15 + 0x30))();
      if (*piVar10 < piVar15[0xf]) {
        piVar10 = (int *)(**(code **)(*piVar15 + 0x30))();
        piVar15[0xf] = *piVar10;
      }
      if ((*(int *)(piVar15[0xe] + 0xb4) < piVar15[0x10]) && (DAT_00f09547 != '\0')) {
        piVar15[0x10] = *(int *)(piVar15[0xe] + 0xb4);
      }
      local_1c = piVar15;
      FUN_005dadd0();
      piVar15[0x18] = piVar7[0x30];
      piVar15[0x19] = piVar7[0x31];
      piVar15[0x1d] = (int)piVar7;
      iVar13 = FUN_005cabe0();
      iVar6 = piVar7[0x68];
      piVar7[0x68] = iVar13;
      if ((iVar13 != iVar6) || ((char)piVar7[0x2f] != '\0')) {
        FUN_005cae80();
        *(undefined1 *)(piVar7 + 0x2f) = 0;
      }
      *in_stack_00000030 = *in_stack_00000030 + -1;
      local_8 = local_8 & 0xffffff00;
      if (*in_stack_00000030 < 1) {
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        break;
      }
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = local_20 + 1;
    } while (local_20 < (int)local_34);
  }
  FUN_005cb2c0();
  FUN_005c68c0();
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x120) != '\0') {
    in_stack_0000002c = &uStack_d0;
    uStack_d0 = uStack_d0 & 0xffffff00;
    FUN_00408ed0(&param_4,0,0xffffffff);
    piVar15 = (int *)FUN_004e38d0(param_1,param_3);
    if (((piVar15 != (int *)0x0) && (cVar5 = (**(code **)(*piVar15 + 0x20))(), cVar5 != '\0')) &&
       (piVar15[0x22] == 0)) {
      FUN_005cbcc0();
    }
  }
  cVar5 = (**(code **)(*piVar7 + 0x38))();
  if ((((cVar5 == '\0') || (iVar6 = (**(code **)(*piVar7 + 0x2c))(), *(int *)(iVar6 + 0x1b4) == 0))
      || (iVar6 = (**(code **)(*piVar7 + 0x2c))(), *(int *)(*(int *)(iVar6 + 0x1b4) + 0xec) < 1)) &&
     ((param_3 != 0 && (*(int *)(param_3 + 0x58) != 0)))) {
    if (((piVar7[0x1d] == 0) || (*(int *)(piVar7[0x1d] + 0x18) != param_3)) && (piVar7[0x22] < 1)) {
      piVar15 = *(int **)(param_3 + 0x10c);
      if ((piVar15 == (int *)0x0) || (cVar5 = (**(code **)(*piVar15 + 0x44))(), cVar5 == '\0')) {
        piVar15 = *(int **)(param_3 + 0x110);
        if ((piVar15 != (int *)0x0) && (cVar5 = (**(code **)(*piVar15 + 0x44))(), cVar5 != '\0')) {
          (**(code **)(*piVar15 + 0x24))();
        }
      }
      else {
        (**(code **)(*piVar15 + 0x24))();
      }
    }
    if ((piVar7[0x1d] == 0) || (*(int *)(piVar7[0x1d] + 0x18) != param_3)) {
      iStack_c4 = 0x4e3826;
      FUN_005b5620();
    }
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}


// FUN_007b9520 @ 007b9520 body=[[007b9520, 007b95a3] [007b95a7, 007b96b1] [007b96b5, 007b96d8] [007b96e1, 007b9708] [007b9710, 007b9777] [007b977b, 007b97fc] [007b9800, 007b9897] [007b989b, 007b98ba] [007b98be, 007b995b] [007b995f, 007b9979] [007b997d, 007b99ce] [007b99d2, 007b9a0e] [007b9a12, 007b9a45] [007b9a49, 007b9a96] [007b9a9a, 007b9ac0] [007b9ac4, 007b9b3f] [007b9b43, 007b9b66] [007b9b6f, 007b9bce] [007b9bd2, 007b9bf5] [007b9bfe, 007b9e48] [007b9e4c, 007b9e6a] [007b9e6e, 007b9ec3] [007b9ec7, 007b9edc]]


undefined1 * FUN_007b9520(int param_1,undefined1 *param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_b0 [4];
  int local_ac;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined1 local_7c [4];
  int local_78;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b91001;
  local_10 = ExceptionList;
  local_80 = 0;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PV_SLICE_DESC",0xd);
  local_8 = 1;
  FUN_009a8ee0(local_7c,local_9c);
  local_8._0_1_ = 3;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = *(int *)(param_1 + 0x20);
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (iVar5 == 0) {
    if (DAT_0131bb34 == 0) {
      param_3 = FUN_00aae9af();
      local_8._0_1_ = 4;
      if (param_3 != 0) {
        FUN_0041a160();
      }
      local_8._0_1_ = 3;
      FUN_00423700();
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <= iVar7) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      param_3 = 0;
      if (0 < (int)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) & 0xfffffff8U)) {
        do {
          local_8._0_1_ = 8;
          iVar7 = *(int *)(param_1 + 0x54);
          iVar5 = param_3 * 8;
          iVar4 = DAT_0131bb34;
          if (DAT_0131bb34 == 0) {
            local_14 = FUN_00aae9af();
            local_8._0_1_ = 9;
            if (local_14 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_0041a160();
            }
            local_8 = CONCAT31(local_8._1_3_,10);
            if ((iVar4 != DAT_0131bb34) && (local_14 = DAT_0131bb34, DAT_0131bb34 != 0)) {
              FUN_0096dd80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          DAT_0131bb34 = iVar4;
          local_8._0_1_ = 8;
          iVar7 = *(int *)(iVar7 + iVar5);
          if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar7) {
            uVar3 = FUN_0096bb70();
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar7 * 4);
          }
          local_88 = 0xf;
          local_8c = 0;
          local_9c[0] = local_9c[0] & 0xffffff00;
          FUN_00409350("PV_SLICE_DESC",0xd);
          local_8._0_1_ = 0xb;
          FUN_009a8ee0(local_b0,local_9c);
          local_8._0_1_ = 0xd;
          if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_88 = 0xf;
          local_8c = 0;
          local_9c[0] = local_9c[0] & 0xffffff00;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          FUN_00409350(&DAT_00df7e80,4);
          local_8._0_1_ = 0xe;
          FUN_0096d650(uVar3,local_4c);
          local_8._0_1_ = 0xf;
          iVar7 = FUN_00aae9af();
          local_8._0_1_ = 0x10;
          if (iVar7 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = FUN_009a9ce0();
          }
          local_8._0_1_ = 0xf;
          FUN_009e6810(local_68,&local_14);
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0xd;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          FUN_00409350(&DAT_00df7e90,3);
          local_8._0_1_ = 0x11;
          FUN_00988d00(local_4c,2);
          local_8._0_1_ = 0x12;
          iVar7 = FUN_00aae9af();
          local_8._0_1_ = 0x13;
          if (iVar7 == 0) {
            local_14 = 0;
          }
          else {
            local_14 = FUN_009a9ce0();
          }
          local_8._0_1_ = 0x12;
          FUN_009e6810(local_68,&local_14);
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0xd;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iVar7 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
          local_8._0_1_ = 0x14;
          FUN_00448aa0();
          local_8._0_1_ = 0xd;
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          FUN_00409350(&DAT_00dee2cc,1);
          local_8._0_1_ = 0x15;
          FUN_00448aa0();
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x16;
          FUN_009adb70();
          local_8._0_1_ = 8;
          if (local_ac != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          param_3 = param_3 + 1;
        } while (param_3 < *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 3);
      }
      local_8._0_1_ = 8;
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0();
      local_80 = 1;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0x17;
      FUN_009adb70();
      if (local_78 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return param_2;
    }
    if (DAT_0131bb34 == 0) {
      param_3 = FUN_00aae9af();
      local_8._0_1_ = 5;
      if (param_3 != 0) {
        FUN_0041a160();
      }
      local_8._0_1_ = 3;
      FUN_00423700();
    }
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar7) {
      uVar3 = FUN_0096bb70();
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar7 * 4);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    local_8._0_1_ = 6;
    FUN_0096d650(uVar3,local_68);
    local_8._0_1_ = 7;
    FUN_009a9980();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_007b9db9;
  }
  if (iVar5 == 1) {
    iVar5 = FUN_005662c0();
    if (*(int *)(*(int *)(iVar5 + 0x1c) + iVar7 * 4) == 0) {
      FUN_005676d0();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    local_8._0_1_ = 0x18;
    FUN_00567250();
    local_8._0_1_ = 0x19;
    FUN_009a9980();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_007b9db9;
  }
  if (iVar5 == 2) {
    piVar6 = *(int **)(*(int *)(DAT_01258a3c + 0xc) + iVar7 * 4);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    local_8._0_1_ = 0x1a;
    (**(code **)(*piVar6 + 0x18))();
    local_8._0_1_ = 0x1b;
    FUN_009a9980();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_007b9db9;
  }
  if (iVar5 == 3) {
    if (iVar7 < *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2) {
      piVar6 = *(int **)(*(int *)(DAT_012587e8 + 0xc) + param_3 * 4);
    }
    else {
      piVar6 = (int *)FUN_00561180();
    }
    cVar2 = (**(code **)(*piVar6 + 0x18))();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x1c;
      FUN_00974c50();
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      goto LAB_007b9d97;
    }
    FUN_009885d0();
    local_8._0_1_ = 0x1e;
    FUN_009885d0();
    local_8._0_1_ = 0x1f;
    FUN_009a8ee0(local_b0,local_30);
    local_8._0_1_ = 0x20;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 0x21;
    FUN_009a9980();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    FUN_009a9740();
    FUN_00408ad0();
  }
  else {
    if (iVar5 == 4) {
      piVar6 = *(int **)(*(int *)(DAT_01258a48 + 0x18) + param_3 * 4);
      FUN_009885d0();
      local_8._0_1_ = 0x22;
      (**(code **)(*piVar6 + 0x2c))();
      local_8 = CONCAT31(local_8._1_3_,0x23);
    }
    else {
      if ((iVar5 != 8) ||
         (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
         *(int *)(iVar5 + 0x844) < 1)) goto LAB_007b9db9;
      puVar1 = *(undefined4 **)(iVar5 + 0x83c);
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar1 = (undefined4 *)puVar1[2];
      }
      uVar3 = *puVar1;
      FUN_009885d0();
      local_8._0_1_ = 0x24;
      FUN_009790b0(uVar3,local_30);
      local_8 = CONCAT31(local_8._1_3_,0x25);
    }
LAB_007b9d97:
    FUN_009a9980();
    FUN_00408ad0();
  }
  local_8._0_1_ = 3;
  FUN_00408ad0();
LAB_007b9db9:
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e90,3);
  local_8._0_1_ = 0x26;
  FUN_00988d00(local_4c,2);
  local_8._0_1_ = 0x27;
  param_3 = FUN_00aae9af();
  local_8._0_1_ = 0x28;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x27;
  FUN_009e6810(local_30,&param_3);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
  local_80 = 1;
  local_8 = 0x29;
  FUN_009adb70();
  if (local_78 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}


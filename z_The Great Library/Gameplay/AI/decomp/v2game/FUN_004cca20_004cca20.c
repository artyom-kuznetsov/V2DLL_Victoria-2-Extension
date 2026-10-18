// FUN_004cca20 @ 004cca20 body=[[004cca20, 004ccbd6] [004ccbda, 004ccbf5] [004ccbf9, 004ccc15] [004ccc19, 004ccc3b] [004ccc3f, 004cccda] [004cccde, 004ccd02] [004ccd06, 004ccd1c] [004ccd20, 004ccd39] [004ccd3d, 004ccfd2] [004ccfd6, 004ccff5] [004ccff9, 004cd00f] [004cd013, 004cd02c] [004cd030, 004cd0c3] [004cd0c7, 004cd0e6] [004cd0ea, 004cd100] [004cd104, 004cd11d] [004cd121, 004cd151] [004cd157, 004cd187]]


/* WARNING: Removing unreachable block (ram,0x004cd146) */

undefined4 ** FUN_004cca20(int param_1,undefined4 **param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 **local_d8;
  uint *local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint *local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint *local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  uint *local_28;
  uint *local_20;
  undefined4 local_1c;
  int *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b824a7;
  local_10 = ExceptionList;
  local_18 = (int *)0x0;
  if (*(int *)(param_1 + 0x80) != 2) {
    local_d8 = (undefined4 **)0x0;
    ExceptionList = &local_10;
    param_2[5] = (undefined4 *)0xf;
    param_2[4] = (undefined4 *)0x0;
    *(undefined1 *)param_2 = 0;
    FUN_00409350(&DAT_00ded94d);
    ExceptionList = local_10;
    return param_2;
  }
  local_8 = 0;
  local_30 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if ((local_30 != 0) && (*(int *)(local_30 + 0xc) == param_1)) {
    local_d8 = param_2;
    ExceptionList = &local_10;
    FUN_00475d50();
    ExceptionList = local_10;
    return param_2;
  }
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x148);
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x98) != 0) && (0 < *(int *)(param_1 + 0x9c))) {
    iVar2 = *(int *)(param_1 + 0x9c);
  }
  if ((*(int *)(param_1 + 0xb4) != 0) && (iVar2 < *(int *)(param_1 + 0xb8))) {
    iVar2 = *(int *)(param_1 + 0xb8);
  }
  if ((*(int *)(param_1 + 0xd0) != 0) && (iVar2 < *(int *)(param_1 + 0xd4))) {
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  if ((*(int *)(param_1 + 0xec) != 0) && (iVar2 < *(int *)(param_1 + 0xf0))) {
    iVar2 = *(int *)(param_1 + 0xf0);
  }
  iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x14c);
  local_d8 = (undefined4 **)(((float)iVar2 + 0.0005) * 1000.0);
  ExceptionList = &local_10;
  FUN_00401000();
  local_d8 = (undefined4 **)0x4ccb3f;
  iVar2 = FUN_00b31c00();
  local_d8 = (undefined4 **)0x0;
  iVar2 = __alldiv((longlong)iVar2 * (longlong)iVar4,1000);
  local_d8 = (undefined4 **)0x1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (uint *)((uint)local_4c[0] & 0xffffff00);
  FUN_00409350(&DAT_00dee2cc);
  local_18 = (int *)&local_d8;
  local_8._0_1_ = 1;
  local_d8 = (undefined4 **)(iVar3 + iVar2);
  local_d8 = (undefined4 **)FUN_00988970(local_a0);
  local_8._0_1_ = 2;
  FUN_0042c180(local_84);
  local_d8 = local_4c;
  local_8._0_1_ = 3;
  FUN_00988f20();
  local_d8 = (undefined4 **)0xffffffff;
  local_8._0_1_ = 4;
  FUN_00448aa0();
  if (0xf < local_54) {
    local_d8 = (undefined4 **)local_68[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = (uint *)((uint)local_68[0] & 0xffffff00);
  if (0xf < local_70) {
    local_d8 = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = (uint *)((uint)local_84[0] & 0xffffff00);
  if (0xf < local_8c) {
    local_d8 = (undefined4 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = (uint *)((uint)local_a0[0] & 0xffffff00);
  if (0xf < local_38) {
    local_d8 = (undefined4 **)local_4c[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_30 != 0) {
    local_d8 = (undefined4 **)0x1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (uint *)((uint)local_4c[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 5;
    local_d8 = *(undefined4 ***)(*(int *)(DAT_012586dc + 0x30) + 0x4cc);
    local_18 = (int *)&local_d8;
    local_d8 = (undefined4 **)FUN_00988970(local_68);
    local_8._0_1_ = 6;
    FUN_0042c180(local_84);
    local_d8 = local_4c;
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_d8 = (undefined4 **)0xffffffff;
    local_8._0_1_ = 8;
    FUN_00448aa0();
    if (0xf < local_8c) {
      local_d8 = (undefined4 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = (uint *)((uint)local_a0[0] & 0xffffff00);
    if (0xf < local_70) {
      local_d8 = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = (uint *)((uint)local_84[0] & 0xffffff00);
    if (0xf < local_54) {
      local_d8 = (undefined4 **)local_68[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (uint *)((uint)local_68[0] & 0xffffff00);
    if (0xf < local_38) {
      local_d8 = (undefined4 **)local_4c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_70 = 0xf;
  local_74 = 0;
  local_8c = 0xf;
  local_90 = 0;
  local_1c = 0x2d2d2d;
  local_14 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_30 = 0;
  local_2c = 0x2d2d2d;
  local_28 = (uint *)0x0;
  local_d8 = (undefined4 **)0x4ccd81;
  FUN_004cd2a0();
  piVar5 = *(int **)(DAT_012588e8 + 0xbe0);
  param_1 = *(int *)(DAT_012588e8 + 0xbe4) - (int)piVar5 >> 2;
  if (0 < param_1) {
    local_18 = *(int **)(DAT_012587e4 + 4);
    iVar3 = *(int *)(DAT_012588e8 + 0xacc);
    do {
      iVar2 = *(int *)(iVar3 + *(int *)(*piVar5 + 0xbe4) * 4);
      if ((*(int *)(iVar2 + 0x16c) ==
           *(int *)(*(int *)(iVar3 + *(int *)(*local_18 + 0xbe4) * 4) + 0x16c)) ||
         (*(int *)(iVar2 + 0x16c) ==
          *(int *)(*(int *)(iVar3 + *(int *)(local_18[(int)local_28] + 0xbe4) * 4) + 0x16c))) {
        local_30 = local_30 + 1;
        if (*(char *)(*piVar5 + 0x67c) == '\0') {
          if (*(char *)(*piVar5 + 3000) != '\0') {
            local_20 = (uint *)((int)local_20 + 1000);
          }
        }
        else {
          local_14 = (uint *)((int)local_14 + 1000);
        }
      }
      piVar5 = piVar5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if (0 < local_30) {
      iVar4 = local_30 * 1000;
      iVar3 = *(int *)(DAT_012586dc + 0x30);
      local_d8 = (undefined4 **)0x0;
      iVar2 = __alldiv((longlong)*(int *)(iVar3 + 0x544) * (longlong)(int)local_14,1000);
      if (iVar4 == 0) {
        local_14 = (uint *)0xffffffff;
      }
      else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
        local_d8 = (undefined4 **)0x0;
        local_2c = iVar4;
        local_28 = (uint *)(iVar4 >> 0x1f);
        uVar6 = __allmul(iVar2,iVar2 >> 0x1f,1000);
        local_d8 = (undefined4 **)local_28;
        local_14 = (uint *)__alldiv(uVar6,local_2c);
        local_28 = (uint *)((int)local_14 >> 0x1f);
      }
      else {
        local_14 = (uint *)((iVar2 * 1000) / iVar4);
      }
      local_d8 = (undefined4 **)0x0;
      iVar3 = __alldiv((longlong)*(int *)(iVar3 + 0x544) * (longlong)(int)local_20,1000);
      if (iVar4 == 0) {
        local_20 = (uint *)0xffffffff;
      }
      else if ((iVar3 < -0x189373) || (0x20c49a < iVar3)) {
        local_d8 = (undefined4 **)0x0;
        local_28 = (uint *)(iVar4 >> 0x1f);
        uVar6 = __allmul(iVar3,iVar3 >> 0x1f,1000);
        local_d8 = (undefined4 **)local_28;
        local_20 = (uint *)__alldiv(uVar6,iVar4);
        local_28 = (uint *)((int)local_20 >> 0x1f);
      }
      else {
        local_20 = (uint *)((iVar3 * 1000) / iVar4);
      }
      goto LAB_004ccf39;
    }
  }
  local_14 = (uint *)0x0;
  local_20 = (uint *)0x0;
LAB_004ccf39:
  if ((undefined4 **)local_14 != (undefined4 **)0x0) {
    local_d8 = (undefined4 **)0x1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (uint *)((uint)local_4c[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 9;
    local_d8 = (undefined4 **)local_14;
    local_d8 = (undefined4 **)FUN_00988970(local_68);
    local_8._0_1_ = 10;
    FUN_0042c180(local_84);
    local_d8 = local_4c;
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_d8 = (undefined4 **)0xffffffff;
    local_8._0_1_ = 0xc;
    FUN_00448aa0();
    if (0xf < local_8c) {
      local_d8 = (undefined4 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = (uint *)((uint)local_a0[0] & 0xffffff00);
    if (0xf < local_70) {
      local_d8 = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = (uint *)((uint)local_84[0] & 0xffffff00);
    if (0xf < local_54) {
      local_d8 = (undefined4 **)local_68[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (uint *)((uint)local_68[0] & 0xffffff00);
    if (0xf < local_38) {
      local_d8 = (undefined4 **)local_4c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puVar1 = local_20;
  if ((undefined4 **)local_20 != (undefined4 **)0x0) {
    local_d8 = (undefined4 **)0x1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (uint *)((uint)local_4c[0] & 0xffffff00);
    FUN_00409350(&DAT_00dee2cc);
    local_8._0_1_ = 0xd;
    local_d8 = (undefined4 **)puVar1;
    local_d8 = (undefined4 **)FUN_00988970(local_68);
    local_8._0_1_ = 0xe;
    FUN_0042c180(local_84);
    local_d8 = local_4c;
    local_8._0_1_ = 0xf;
    FUN_00988f20();
    local_d8 = (undefined4 **)0xffffffff;
    local_8._0_1_ = 0x10;
    FUN_00448aa0();
    if (0xf < local_8c) {
      local_d8 = (undefined4 **)local_a0[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = (uint *)((uint)local_a0[0] & 0xffffff00);
    if (0xf < local_70) {
      local_d8 = (undefined4 **)local_84[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = (uint *)((uint)local_84[0] & 0xffffff00);
    if (0xf < local_54) {
      local_d8 = (undefined4 **)local_68[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (uint *)((uint)local_68[0] & 0xffffff00);
    if (0xf < local_38) {
      local_d8 = (undefined4 **)local_4c[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_d8 = (undefined4 **)0xffffffff;
  param_2[5] = (undefined4 *)0xf;
  param_2[4] = (undefined4 *)0x0;
  *(undefined1 *)param_2 = 0;
  FUN_00408ed0();
  ExceptionList = local_10;
  return param_2;
}


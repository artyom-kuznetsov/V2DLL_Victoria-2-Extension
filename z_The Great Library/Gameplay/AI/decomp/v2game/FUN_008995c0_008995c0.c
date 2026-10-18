// FUN_008995c0 @ 008995c0 body=[[008995c0, 008996f6] [008996fa, 0089975b] [0089975f, 0089981c] [00899820, 008998b3] [008998ba, 008998eb] [008998f2, 00899990] [00899994, 008999c4] [008999c8, 008999e3] [008999e7, 00899a60] [00899a64, 00899af5] [00899af9, 00899b34] [00899b38, 00899b58] [00899b5c, 00899b85] [00899b89, 00899bac] [00899bb0, 00899bc4]]


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_008995c0(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  LPSTR ******pppppppCVar4;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e8;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  LPSTR ******local_9c [4];
  undefined4 local_8c;
  uint local_88;
  LPSTR ******local_80 [4];
  undefined4 local_70;
  uint local_6c;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_50;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8772a;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_14 = 1;
  FUN_008a88d0();
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  local_8._0_1_ = 2;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_2 + 0x18) != 0) {
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x18) * 4
                                      ) + 0x188) + 0x20))();
      local_8._0_1_ = 4;
      FUN_00408ed0();
      goto joined_r0x008996ec;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_0055dd40();
      local_8._0_1_ = 5;
      FUN_00408ed0();
      goto joined_r0x008996ec;
    }
  }
  else {
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4) + 0x1c))
              ();
    local_8._0_1_ = 3;
    FUN_00408ed0();
joined_r0x008996ec:
    if (0xf < local_1c) {
      local_8._0_1_ = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar2 = local_34;
  local_8._0_1_ = 2;
  if ((*(int *)(local_34 + 0x2c) - *(int *)(local_34 + 0x28) & 0xfffffffcU) == 0) {
    FUN_0042c180();
    local_8._0_1_ = 6;
  }
  else {
    FUN_0042c180();
    local_8._0_1_ = 7;
  }
  FUN_00448aa0();
  local_8._0_1_ = 2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0x2d2d2d;
  local_f8 = 0x2d2d2d;
  local_e8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0087a6c0(local_9c,local_100,param_3 + 1);
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (LPSTR ******)((uint)local_80[0] & 0xffffff00);
  local_8._0_1_ = 9;
  if ((*(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 0x28) & 0xfffffffcU) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x20) + 0x2c))();
    local_8._0_1_ = 10;
    FUN_00408ed0();
    local_8._0_1_ = 9;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 9;
  piVar3 = (int *)FUN_00989510();
  local_8 = CONCAT31(local_8._1_3_,0xb);
  local_14 = 3;
  if (1 < (piVar3[1] - *piVar3) / 0x1c) {
    piVar3 = (int *)FUN_00989510();
    local_14 = 7;
    bVar1 = true;
    if (1 < (piVar3[1] - *piVar3) / 0x1c) goto LAB_00899892;
  }
  bVar1 = false;
LAB_00899892:
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (local_44 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
  }
  local_8 = 9;
  if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, local_60 != 0)) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (bVar1) {
    FUN_00448740();
    FUN_00448aa0();
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_009a8ee0();
    local_8._0_1_ = 0xd;
    FUN_00475500();
    FUN_009a9880();
    local_8._0_1_ = 0xe;
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8._0_1_ = 0xf;
    FUN_009adb70();
    if (local_60 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448aa0();
  }
  else {
    if ((*(int *)(local_34 + 0x2c) - *(int *)(local_34 + 0x28) & 0xfffffffcU) != 0) {
      FUN_00448740();
      (**(code **)(*(int *)(local_34 + 0x20) + 0x2c))();
      local_8._0_1_ = 0x10;
      FUN_00408ed0();
      local_8 = CONCAT31(local_8._1_3_,9);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pppppppCVar4 = local_80[0];
      if (local_6c < 0x10) {
        pppppppCVar4 = (LPSTR ******)local_80;
      }
      CharLowerBuffA((LPSTR)pppppppCVar4,1);
      FUN_00448aa0();
    }
    FUN_00448740();
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0087a6c0(local_30,local_100,0);
    local_8._0_1_ = 0x11;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,9);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pppppppCVar4 = local_9c[0];
    if (local_88 < 0x10) {
      pppppppCVar4 = (LPSTR ******)local_9c;
    }
    CharLowerBuffA((LPSTR)pppppppCVar4,1);
    FUN_00448aa0();
  }
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = (LPSTR ******)((uint)local_80[0] & 0xffffff00);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = (LPSTR ******)((uint)local_9c[0] & 0xffffff00);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}


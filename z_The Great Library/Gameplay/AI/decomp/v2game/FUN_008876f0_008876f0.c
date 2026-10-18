// FUN_008876f0 @ 008876f0 body=[[008876f0, 008877e3] [008877e7, 00887899] [0088789d, 00887966] [0088796a, 0088798b] [0088798f, 008879b9] [008879bd, 008879e2] [008879e6, 00887a08] [00887a0c, 00887a29] [00887a2d, 00887bd2] [00887bd6, 00887c2a] [00887c2e, 00887cf1] [00887cf5, 00887d16] [00887d1a, 00887d44] [00887d48, 00887d6d] [00887d71, 00887d90] [00887d94, 00887dae] [00887db2, 00887e66] [00887e6a, 00887e8b] [00887e8f, 00887eb9] [00887ebd, 00887ee2] [00887ee6, 00887f05] [00887f09, 00887f23] [00887f27, 00887f72] [00887f76, 00887f91]]


/* WARNING: Removing unreachable block (ram,0x008879fd) */
/* WARNING: Removing unreachable block (ram,0x00887f1b) */
/* WARNING: Removing unreachable block (ram,0x00887ed7) */
/* WARNING: Removing unreachable block (ram,0x00887e80) */
/* WARNING: Removing unreachable block (ram,0x00887da6) */
/* WARNING: Removing unreachable block (ram,0x00887d88) */
/* WARNING: Removing unreachable block (ram,0x00887e56) */
/* WARNING: Removing unreachable block (ram,0x00887eae) */
/* WARNING: Removing unreachable block (ram,0x00887efd) */
/* WARNING: Removing unreachable block (ram,0x00887891) */
/* WARNING: Removing unreachable block (ram,0x00887a21) */
/* WARNING: Removing unreachable block (ram,0x00887c1f) */

undefined1 * FUN_008876f0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint in_stack_00000020;
  uint local_d4;
  uint local_b8;
  uint local_9c;
  int local_3c;
  int local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87ec7;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      local_14 = *(int *)(in_ECX + 0x24);
      local_18 = *(undefined4 *)(in_ECX + 0x20);
      ExceptionList = &local_10;
    }
    else {
      local_14 = *(int *)(param_2 + 0x30);
      local_18 = *(undefined4 *)(param_2 + 0x2c);
      ExceptionList = &local_10;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8dc0();
  }
  iVar4 = DAT_012588e8;
  if ((((char)local_18 == 'R') && ((char)((uint)local_18 >> 8) == 'E')) &&
     ((char)((uint)local_18 >> 0x10) == 'B')) {
    iVar3 = FUN_009c16d0();
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350();
      goto joined_r0x00887f83;
    }
    iVar3 = FUN_004e4d40();
    local_14 = *(int *)(iVar3 + 4);
    if (local_14 != 0) goto LAB_00887824;
  }
  else {
LAB_00887824:
    piVar1 = *(int **)(*(int *)(iVar4 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
    if (piVar1[0x4b] != local_14) {
      iVar4 = FUN_008a8dc0();
      if (local_14 == *(int *)(iVar4 + 4)) {
        FUN_00409350();
        local_8._0_1_ = 1;
        FUN_009a8ee0();
        local_8._0_1_ = 3;
        FUN_00409350();
        local_8._0_1_ = 4;
        FUN_00409350();
        local_8._0_1_ = 5;
        (**(code **)(*piVar1 + 0x1c))();
        local_8._0_1_ = 6;
        FUN_00988fa0();
        local_8._0_1_ = 7;
        FUN_00988f20();
        local_8._0_1_ = 8;
        FUN_009a8ee0();
        local_8._0_1_ = 9;
        FUN_009a9a90();
        local_8._0_1_ = 10;
        FUN_009adb70();
        if (local_28 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 3;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 3;
        if (piVar1[0x4b] == 0) {
          local_8._0_1_ = uVar2;
          FUN_009885d0();
          local_8._0_1_ = 0x11;
          FUN_009885d0();
          local_8._0_1_ = 0x12;
          FUN_0055dd40();
          local_8._0_1_ = 0x13;
          FUN_00988fa0();
          local_8._0_1_ = 0x14;
          FUN_00988f20();
          local_8._0_1_ = 0x15;
          FUN_009a8ee0();
          local_8._0_1_ = 0x16;
          FUN_009a9a90();
          local_8._0_1_ = 0x15;
        }
        else {
          FUN_009885d0();
          local_8._0_1_ = 0xb;
          FUN_009885d0();
          local_8._0_1_ = 0xc;
          FUN_0055dd40();
          local_8._0_1_ = 0xd;
          FUN_00988fa0();
          local_8._0_1_ = 0xe;
          FUN_00988f20();
          local_8._0_1_ = 0xf;
          FUN_009a8ee0();
          local_8._0_1_ = 0x10;
          FUN_009a9a90();
          local_8._0_1_ = 0xf;
        }
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8._0_1_ = 3;
        FUN_00408ad0();
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8 = CONCAT31(local_8._1_3_,0x17);
        FUN_009adb70();
        if (local_3c != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else {
        FUN_00409350();
        local_8._0_1_ = 0x18;
        FUN_009a8ee0();
        local_8._0_1_ = 0x1a;
        FUN_00409350();
        local_8._0_1_ = 0x1b;
        FUN_00409350();
        local_8._0_1_ = 0x1c;
        (**(code **)(*piVar1 + 0x1c))();
        local_8._0_1_ = 0x1d;
        FUN_00988fa0();
        local_8._0_1_ = 0x1e;
        FUN_00988f20();
        local_8._0_1_ = 0x1f;
        FUN_009a8ee0();
        local_8._0_1_ = 0x20;
        FUN_009a9a90();
        local_8._0_1_ = 0x21;
        FUN_009adb70();
        if (local_28 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x1a;
        FUN_00409350();
        local_8._0_1_ = 0x22;
        FUN_00409350();
        local_8._0_1_ = 0x23;
        FUN_0055dd40();
        local_8._0_1_ = 0x24;
        FUN_00988fa0();
        local_8._0_1_ = 0x25;
        FUN_00988f20();
        local_8._0_1_ = 0x26;
        FUN_009a8ee0();
        local_8._0_1_ = 0x27;
        FUN_009a9a90();
        local_8._0_1_ = 0x28;
        FUN_009adb70();
        local_8._0_1_ = 0x1a;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8 = CONCAT31(local_8._1_3_,0x29);
        FUN_009adb70();
        if (local_3c != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      goto joined_r0x00887f83;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350();
joined_r0x00887f83:
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


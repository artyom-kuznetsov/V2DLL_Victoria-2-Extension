// FUN_007b7390 @ 007b7390 body=[[007b7390, 007b747b] [007b747f, 007b74aa] [007b74ae, 007b74d1] [007b74d5, 007b7599] [007b759d, 007b75cd] [007b75d1, 007b75ec] [007b75f0, 007b760d] [007b7611, 007b773a] [007b773e, 007b7768] [007b776c, 007b77a1] [007b77a5, 007b77c0] [007b77c4, 007b77df] [007b77e3, 007b77fc] [007b7800, 007b7905] [007b7909, 007b7933] [007b7937, 007b796c] [007b7970, 007b798b] [007b798f, 007b79aa] [007b79ae, 007b79c7] [007b79cb, 007b79f7]]


void FUN_007b7390(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint in_stack_0000001c;
  int in_stack_00000024;
  uint local_f0;
  uint local_d4;
  char local_c8 [4];
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  char *local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 **local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b88f2d;
  local_10 = ExceptionList;
  local_48 = (char *)0x0;
  local_84 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  pcVar3 = __itoa(in_stack_00000024,local_c8,10);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  local_8._0_1_ = 2;
  iVar4 = FUN_007b4ff0();
  local_8._0_1_ = 3;
  if (local_1c < 0x10) {
    local_14 = local_30;
  }
  else {
    local_14 = local_30[0];
  }
  puVar8 = param_2;
  if (in_stack_0000001c < 0x10) {
    puVar8 = &param_2;
  }
  piVar7 = (int *)(iVar4 + 0x1c);
  if (0xf < *(uint *)(iVar4 + 0x30)) {
    piVar7 = (int *)*piVar7;
  }
  local_14 = (undefined4 **)
             (**(code **)(param_1[2] + 0x1ac))(piVar7,puVar8,local_14,&local_48,&local_84);
  if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_14 == (undefined4 **)0x0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
    FUN_00409350("ME_PURCHASE_SUCCESSFUL",0x16);
    local_8._0_1_ = 4;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("status_label",0xc);
    local_8._0_1_ = 5;
    piVar7 = *(int **)(param_1[2] + 0x20);
    local_14 = (undefined4 **)FUN_009a8ee0(local_44,local_30);
    local_8._0_1_ = 6;
    iVar4 = FUN_00475500();
    uVar5 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8._0_1_ = 7;
    (**(code **)(*piVar7 + 0x3c))();
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    FUN_007b37f0(param_1[2]);
    (**(code **)*param_1)();
  }
  else {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    if (local_14 == (undefined4 **)0x2) {
      FUN_00409350("ME_ERROR",8);
      local_8._0_1_ = 9;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
      FUN_00409350("status_label",0xc);
      local_8._0_1_ = 10;
      piVar7 = *(int **)(param_1[2] + 0x20);
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      pcVar6 = local_48;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(local_48,(int)pcVar6 - (int)(local_48 + 1));
      local_8._0_1_ = 0xb;
      local_14 = (undefined4 **)FUN_009a8ee0(local_44,local_80);
      local_8._0_1_ = 0xc;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0xd;
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0xe;
      (**(code **)(*piVar7 + 0x3c))();
      FUN_00408ed0(uVar5,0,0xffffffff);
      FUN_00a5ecc0();
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8);
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4);
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      local_8._0_1_ = 0xf;
      FUN_009adb70();
      if (local_40 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      (**(code **)(param_1[2] + 0x1bc))(local_48);
    }
    else {
      FUN_00409350("ME_ERROR",8);
      local_8._0_1_ = 0x10;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
      FUN_00409350("status_label",0xc);
      local_8._0_1_ = 0x11;
      piVar7 = *(int **)(param_1[2] + 0x20);
      local_8c = FUN_007b1800(local_64,local_14);
      local_8._0_1_ = 0x12;
      local_88 = FUN_009a8ee0(local_44,local_80);
      local_8._0_1_ = 0x13;
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x14;
      uVar5 = FUN_00988f20();
      local_8._0_1_ = 0x15;
      (**(code **)(*piVar7 + 0x3c))();
      FUN_00408ed0(uVar5,0,0xffffffff);
      FUN_00a5ecc0();
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4);
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4 = local_c4 & 0xffffff00;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8);
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = local_a8 & 0xffffff00;
      local_8._0_1_ = 0x16;
      FUN_009adb70();
      if (local_40 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 **)((uint)local_30[0] & 0xffffff00);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      if (local_14 == (undefined4 **)0x5) {
        FUN_007b3680(0);
      }
    }
  }
  FUN_007b46e0();
  ExceptionList = local_10;
  return;
}


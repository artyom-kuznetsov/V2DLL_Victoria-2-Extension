// FUN_00891d30 @ 00891d30 body=[[00891d30, 00891ddf] [00891de3, 00891e6c] [00891e70, 00891e8a] [00891e8e, 00891f0e] [00891f12, 00891f2c] [00891f30, 00891fb9] [00891fbd, 00891fd7] [00891fdb, 0089203b] [0089203f, 00892094] [00892098, 008920b6] [008920ba, 00892106] [0089210a, 0089212a] [0089212e, 00892180] [00892184, 008921a2] [008921a6, 008921f1] [008921f5, 0089220c] [00892210, 00892224]]


undefined4 FUN_00891d30(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b6908d;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  if (*(char *)(*(int *)(in_ECX + 0x24) + 0x131) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[0x46] + *(int *)(*(int *)(in_ECX + 0x24) + 0x134) * 4);
  }
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_34 = 0xf;
  if (*(int *)(in_ECX + 0x20) < *(int *)(iVar2 + 0x24)) {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    FUN_009a8ee0();
    local_8._0_1_ = 0x10;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))();
    local_8._0_1_ = 0x12;
    FUN_009a9980();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 0x14;
    FUN_009a9980();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("VALUE");
    local_8._0_1_ = 0x15;
    FUN_00988970(local_80);
    local_8._0_1_ = 0x16;
    FUN_009a9980();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x10;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x17);
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8._0_1_ = 1;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 4;
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x18))();
    local_8._0_1_ = 5;
    local_14 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_009a9ce0(local_14);
    }
    local_8._0_1_ = 5;
    FUN_009e6810();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    (**(code **)(*piVar1 + 0x1c))();
    local_8._0_1_ = 8;
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 9;
    if (iVar2 != 0) {
      FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    FUN_009e6810(local_64);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("VALUE");
    local_8._0_1_ = 10;
    FUN_00988970(local_80);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 0xc;
    if (iVar2 != 0) {
      FUN_009a9ce0();
    }
    local_8._0_1_ = 0xb;
    FUN_009e6810(local_64);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xd);
  }
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}


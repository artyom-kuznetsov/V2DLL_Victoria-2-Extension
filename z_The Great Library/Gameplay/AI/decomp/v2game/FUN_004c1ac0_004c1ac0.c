// FUN_004c1ac0 @ 004c1ac0 body=[[004c1ac0, 004c1c27] [004c1c2b, 004c1c5b] [004c1c5f, 004c1c75] [004c1c79, 004c1ced] [004c1cf1, 004c1d47] [004c1d4b, 004c1dac] [004c1db0, 004c1df1] [004c1df5, 004c1e3e] [004c1e42, 004c1e98] [004c1e9c, 004c1efd] [004c1f01, 004c1f42] [004c1f46, 004c1f8f] [004c1f93, 004c1fd4] [004c1fd8, 004c2070] [004c2074, 004c20a7] [004c20ab, 004c20c4] [004c20c8, 004c210c] [004c2110, 004c2156] [004c215a, 004c219b] [004c219f, 004c226c] [004c2270, 004c22a3] [004c22a7, 004c22c5] [004c22c9, 004c2310] [004c2314, 004c235a] [004c235e, 004c23dc] [004c23e0, 004c2413] [004c2417, 004c2435] [004c2439, 004c247b] [004c247f, 004c2493]]


/* WARNING: Removing unreachable block (ram,0x004c1e8d) */
/* WARNING: Removing unreachable block (ram,0x004c1d3c) */

undefined1 * FUN_004c1ac0(int param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char local_90 [4];
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b75e03;
  local_10 = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x5c) + 0xc) + 0x18) +
                  *(int *)(iVar2 + 0x130) * 8);
  iVar4 = *(int *)(*(int *)(*(int *)(iVar7 + 0x5c) + 0xc) + 0x18);
  if (*(char *)(iVar2 + 0x13d) == '\0') {
    iVar4 = *(int *)(iVar4 + 0x280);
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x278);
  }
  iVar5 = *(int *)(*(int *)(*(int *)(iVar7 + 0x5c) + 0x14) + 0x18);
  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x5c) + 0x14) + 0x18) +
                  *(int *)(iVar2 + 0x130) * 8);
  if (*(char *)(iVar2 + 0x13d) == '\0') {
    iVar2 = *(int *)(iVar5 + 0x280);
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x278);
  }
  iVar7 = *(int *)(iVar7 + 0x9c);
  if (*(char *)(*(int *)(param_1 + 8) + 0x13d) == '\0') {
    local_14 = *(int *)(iVar7 + 0x280);
  }
  else {
    local_14 = *(int *)(iVar7 + 0x278);
  }
  local_14 = *(int *)(iVar7 + *(int *)(*(int *)(param_1 + 8) + 0x130) * 8) + local_14;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_18 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 2;
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
  local_8._0_1_ = 3;
  FUN_00448aa0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009adb70();
  if (local_2c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_8 = 5;
  pcVar8 = __itoa(*(int *)(*(int *)(param_1 + 8) + 0x128),local_90,10);
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 6;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350();
  local_8 = 7;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (iVar3 + iVar4 != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x5c) + 0xc) + 0x18))();
    local_8 = 8;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    FUN_00409350();
    local_8 = 9;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = &stack0xffffff14;
    FUN_009c8ea0();
    local_8 = 10;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350();
    local_8 = 0xb;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
  }
  if (iVar6 + iVar2 != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x5c) + 0x14) + 0x18))();
    local_8 = 0xc;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    FUN_00409350();
    local_8 = 0xd;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = &stack0xffffff14;
    FUN_009c8ea0();
    local_8 = 0xe;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    FUN_00409350();
    local_8 = 0xf;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
  }
  if (local_14 != 0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x10;
    local_18 = (undefined1 *)FUN_009a8ee0();
    local_8._0_1_ = 0x11;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    local_8._0_1_ = 0x12;
    FUN_00448aa0();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    local_8._0_1_ = 0x13;
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x14;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = &stack0xffffff14;
    FUN_009c8ea0();
    local_8 = 0x15;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x16;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
  }
  local_1c = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x128);
  FUN_005766c0();
  if (local_14 != 0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x17;
    local_18 = (undefined1 *)FUN_009a8ee0();
    local_8._0_1_ = 0x18;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
    local_8._0_1_ = 0x19;
    FUN_00448aa0();
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    local_8._0_1_ = 0x1a;
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = &stack0xffffff14;
    FUN_009c8ea0();
    local_8 = 0x1b;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1c;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1d;
  local_18 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 0x1e;
  iVar7 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
  local_8._0_1_ = 0x1f;
  FUN_00448aa0();
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  local_8._0_1_ = 0x20;
  FUN_009adb70();
  if (local_2c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009c9750();
  local_8 = 0x21;
  FUN_00448aa0();
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}


// FUN_008df320 @ 008df320 body=[[008df320, 008df3ae] [008df3b2, 008df475] [008df479, 008df498] [008df49c, 008df525] [008df529, 008df543] [008df547, 008df5a8] [008df5ac, 008df5f2] [008df5f6, 008df6b3] [008df6b7, 008df6d6] [008df6da, 008df75d] [008df761, 008df77b] [008df77f, 008df7d1] [008df7d5, 008df801]]


undefined4 FUN_008df320(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *local_2a8;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb771c;
  local_10 = ExceptionList;
  local_54 = 0;
  ExceptionList = &local_10;
  FUN_004a84c0();
  local_8 = 1;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  local_5c = 0xf;
  if ((char)param_3 == '\0') {
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_009a8ee0();
    local_8._0_1_ = 0xe;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xf;
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        local_18 = *(undefined4 *)(in_ECX + 0x1c);
        local_14 = *(undefined4 *)(in_ECX + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    uVar1 = FUN_0055dd40();
    local_8._0_1_ = 0x10;
    param_3 = FUN_00aae9af(0x40);
    local_8._0_1_ = 0x11;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0(param_3,local_84,uVar1);
    }
    local_8._0_1_ = 0x10;
    FUN_009e6810();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8._0_1_ = 0xe;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    (**(code **)(*local_2a8 + 0x20))(local_50);
    local_8._0_1_ = 0x13;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 0x14;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x13;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xe;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_54 = 1;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_009adb70();
    if (local_80 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
  }
  else {
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    if (*(char *)(in_ECX + 0x18) == '\0') {
      if (*(char *)(in_ECX + 0x19) == '\0') {
        local_18 = *(undefined4 *)(in_ECX + 0x1c);
        local_14 = *(undefined4 *)(in_ECX + 0x20);
      }
      else {
        local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
        local_14 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      }
    }
    else {
      FUN_008a8dc0();
    }
    uVar1 = FUN_0055dd40();
    local_8._0_1_ = 6;
    param_3 = FUN_00aae9af(0x40);
    local_8._0_1_ = 7;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0(param_3,local_98,uVar1);
    }
    local_8._0_1_ = 6;
    FUN_009e6810();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8._0_1_ = 4;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 8;
    (**(code **)(*local_2a8 + 0x20))(local_50);
    local_8._0_1_ = 9;
    param_3 = FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_009a9ce0();
    }
    local_8._0_1_ = 9;
    FUN_009e6810(local_34,&param_3);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_54 = 1;
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_009adb70();
    if (local_94 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004a8840();
  ExceptionList = local_10;
  return param_1;
}


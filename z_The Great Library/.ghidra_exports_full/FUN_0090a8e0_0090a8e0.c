// FUN_0090a8e0 @ 0090a8e0 body=[[0090a8e0, 0090a9a0] [0090a9a4, 0090a9bf] [0090a9c3, 0090a9e1] [0090a9e5, 0090aa5a] [0090aa5e, 0090aacd] [0090aad1, 0090aae5]]


undefined4 FUN_0090a8e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_b0 [12];
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_80 [5];
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b653eb;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_98 = 0x500df9650;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_a0 = CONCAT44(0x90a922,(undefined4)local_a0);
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 1;
  local_98 = CONCAT44(local_48,0x90a93b);
  uVar1 = FUN_00988f20();
  local_98 = CONCAT44(uVar1,local_2c);
  local_8._0_1_ = 2;
  local_a0 = CONCAT44(0x90a949,(undefined4)local_a0);
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  local_98 = CONCAT44(0x90a954,(undefined4)local_98);
  iVar2 = FUN_00475500();
  local_a0 = *(undefined8 *)(iVar2 + 0x6c);
  local_98 = *(undefined8 *)(iVar2 + 0x74);
  uStack_a4 = 0x90a976;
  FUN_009a9880();
  local_14 = 1;
  local_8._0_1_ = 4;
  local_98 = CONCAT44(0x90a989,(undefined4)local_98);
  FUN_009adb70();
  if (local_28 != 0) {
    local_98 = CONCAT44(0x90a998,(undefined4)local_98);
    FUN_009e6a80();
    local_98 = CONCAT44(local_28,&UNK_0090a9a1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
    local_98 = CONCAT44(local_64,&UNK_0090a9c0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_34) {
    local_98 = CONCAT44(local_48[0],&UNK_0090a9e2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_98 = 0x100dee2cc;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_a0 = CONCAT44(0x90a9ff,(undefined4)local_a0);
  FUN_00448740();
  local_98 = local_98 & 0xffffffff;
  local_18 = local_b0;
  local_a0 = 0xf00000000;
  local_b0[0] = 0;
  FUN_00409350();
  (**(code **)(*(int *)(param_1 + 0x18c) + 0x24))();
  local_8 = 5;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0 < *(int *)(param_1 + 0x1bc)) {
    FUN_00448740();
    FUN_00409350(&DAT_00ded94d,0);
    uVar1 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0x24))(local_80,param_3);
    local_8 = 6;
    FUN_00448aa0(uVar1,0,0xffffffff);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
  }
  ExceptionList = local_10;
  return param_2;
}


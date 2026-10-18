// FUN_0088c920 @ 0088c920 body=[[0088c920, 0088c98c] [0088c990, 0088ca08] [0088ca0c, 0088ca8c] [0088ca90, 0088cab0] [0088cab4, 0088cb34] [0088cb38, 0088cb56] [0088cb5a, 0088cbac] [0088cbb0, 0088cbc7] [0088cbcb, 0088cbdf]]


undefined4 FUN_0088c920(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69354;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DEFINE_ADMIRAL_EFFECT",0x15);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 4;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfbf14,4);
  local_8._0_1_ = 5;
  local_14 = FUN_00aae9af(0x40);
  local_8._0_1_ = 6;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  FUN_009e6810(local_64,&local_14);
  local_8._0_1_ = 4;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00e29f0c,3);
  local_8._0_1_ = 7;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x18))(local_80);
  local_8._0_1_ = 8;
  local_14 = FUN_00aae9af(0x40);
  local_8._0_1_ = 9;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0(local_14,local_2c,uVar1);
  }
  local_8._0_1_ = 8;
  FUN_009e6810();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80[0]);
  }
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 10;
  (**(code **)(**(int **)(in_ECX + 0x40) + 0x18))(local_80);
  local_8._0_1_ = 0xb;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 0xc;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xb;
  FUN_009e6810(local_64,&local_14);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}


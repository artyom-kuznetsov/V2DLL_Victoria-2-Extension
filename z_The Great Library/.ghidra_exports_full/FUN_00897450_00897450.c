// FUN_00897450 @ 00897450 body=[[00897450, 008974bc] [008974c0, 00897548] [0089754c, 00897566] [0089756a, 008975bc] [008975c0, 008975d7] [008975db, 008975ef]]


undefined4 FUN_00897450(undefined4 param_1)

{
  int iVar1;
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
  
  puStack_c = &LAB_00b68a46;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("CHANGE_POP_TYPE_EFFECT",0x16);
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 4;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("POPTYPE",7);
  local_8._0_1_ = 5;
  FUN_0096d650(*(undefined4 *)(in_ECX + 0x20),local_80);
  local_8._0_1_ = 6;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 7;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 6;
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
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,8);
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


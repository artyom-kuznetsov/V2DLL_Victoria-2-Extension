// FUN_009ac4e0 @ 009ac4e0 body=[[009ac4e0, 009ac5a3] [009ac5a7, 009ac5c1] [009ac5c5, 009ac5e5] [009ac5e9, 009ac60c] [009ac610, 009ac62a] [009ac62e, 009ac642]]


undefined4 FUN_009ac4e0(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_a0;
  uint local_8c;
  undefined4 local_84;
  uint local_70;
  undefined4 local_68;
  uint local_54;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f4ab;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e38dac,1);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e004e4,1);
  local_8._0_1_ = 1;
  FUN_00988fa0(in_ECX + 4);
  local_8._0_1_ = 2;
  FUN_00988f20(local_2c);
  local_8._0_1_ = 3;
  FUN_00988f20(in_ECX + 0x20);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00988f20(local_48);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}


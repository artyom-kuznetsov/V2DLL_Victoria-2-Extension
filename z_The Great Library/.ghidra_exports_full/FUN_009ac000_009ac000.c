// FUN_009ac000 @ 009ac000 body=[[009ac000, 009ac0e0] [009ac0e4, 009ac100] [009ac104, 009ac129] [009ac12d, 009ac14c] [009ac150, 009ac166] [009ac16a, 009ac180] [009ac184, 009ac1c5] [009ac1c9, 009ac1dd]]


undefined1 * FUN_009ac000(undefined1 *param_1)

{
  int in_ECX;
  undefined4 local_bc;
  uint local_a8;
  undefined4 local_a0;
  uint local_8c;
  undefined4 local_84;
  uint local_70;
  undefined4 local_64 [4];
  int local_54;
  uint local_50;
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
  puStack_c = &LAB_00b52766;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a9610(in_ECX + 0x20,local_64);
  local_8 = 0;
  if (local_54 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0(in_ECX + 4,0,0xffffffff);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e38d94,1);
  local_8._0_1_ = 1;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00e38d3c,1);
  local_8._0_1_ = 2;
  FUN_00988fa0(in_ECX + 4);
  local_8._0_1_ = 3;
  FUN_00988f20(local_48);
  local_8._0_1_ = 4;
  FUN_00988f20(local_64);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00988f20(local_2c);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return param_1;
}


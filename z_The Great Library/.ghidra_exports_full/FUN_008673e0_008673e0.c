// FUN_008673e0 @ 008673e0 body=[[008673e0, 008674a9] [008674ad, 008674c4] [008674c8, 008674e1] [008674e5, 008674f2]]


void FUN_008673e0(void)

{
  int in_ECX;
  uint local_64 [4];
  undefined4 local_54;
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
  puStack_c = &LAB_00b44cf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((-1 < (int)*(uint *)(in_ECX + 0xa0)) &&
     (ExceptionList = &local_10, *(uint *)(in_ECX + 0xa0) < *(uint *)(in_ECX + 0x98))) {
    ExceptionList = &local_10;
    FUN_008682f0();
    FUN_008668c0();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("close_all",9);
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_2c,local_48,local_64,0);
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
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}


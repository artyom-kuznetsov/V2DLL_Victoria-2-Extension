// FUN_006f9400 @ 006f9400 body=[[006f9400, 006f94d0] [006f94d4, 006f94ef] [006f94f3, 006f9509] [006f950d, 006f951d]]


void FUN_006f9400(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_64;
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
  puStack_c = &LAB_00b4bef8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0x28) + 0x10))();
  FUN_006f9370();
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    piVar1 = *(int **)(DAT_012588e8 + 0xb24);
    uVar2 = FUN_00988fa0(*(int *)(in_ECX + 4) + 0x20);
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*piVar1 + 0x120))(uVar2,local_2c,local_48,0);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
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
  }
  ExceptionList = local_10;
  return;
}


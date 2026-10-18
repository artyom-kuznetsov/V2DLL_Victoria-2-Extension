// FUN_00748550 @ 00748550 body=[[00748550, 007485d5] [007485d9, 00748625] [00748629, 007486e3] [007486e7, 007486fd] [00748701, 00748717] [0074872c, 00748741]]


void FUN_00748550(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
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
  puStack_c = &LAB_00bac7f8;
  local_10 = ExceptionList;
  if ((*(int **)(in_ECX + 0x28) == (int *)0x0) ||
     (*(char *)(**(int **)(in_ECX + 0x28) + 0x67) != '\0')) {
    ExceptionList = &local_10;
    FUN_00748750();
  }
  else {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("province_buildings",0x12);
    local_8 = 0;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_64);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("province_statistics",0x13);
    local_8 = 1;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_64);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    FUN_00748ce0();
    if ((*(int *)(in_ECX + 0x2c) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_ECX + 0x2c) + 0x60), *(char *)((int)piVar1 + 0x67) != '\0'))
    {
      (**(code **)(*piVar1 + 0x24))();
    }
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 2;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 3;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("national_focus_window_open",0x1a);
      local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_2c,local_48,local_80,0);
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
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}


// FUN_0075c420 @ 0075c420 body=[[0075c420, 0075c4b0] [0075c4b4, 0075c4d2] [0075c4d6, 0075c55b] [0075c55f, 0075c57d] [0075c581, 0075c5ee] [0075c5f2, 0075c610] [0075c614, 0075c645]]


void FUN_0075c420(void)

{
  int *piVar1;
  undefined4 uVar2;
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
  puStack_c = &LAB_00b440c0;
  local_10 = ExceptionList;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("gamma_slider",0xc);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_2c);
  uVar2 = (**(code **)(*piVar1 + 0x4c))(local_80);
  *(undefined4 *)(in_ECX + 0x31c) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x31c) + 0x54) + 4))(in_ECX + 0x2e0);
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("details_slider",0xe);
  local_8 = 2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_2c);
  uVar2 = (**(code **)(*piVar1 + 0x4c))(local_80);
  *(undefined4 *)(in_ECX + 800) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("water_checkbox",0xe);
  local_8 = 4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_48);
  uVar2 = (**(code **)(*piVar1 + 0x48))(local_64);
  *(undefined4 *)(in_ECX + 0x318) = uVar2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8 = 0xffffffff;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x318) + 0x54) + 4))(in_ECX + 0x2f8);
  ExceptionList = local_10;
  return;
}


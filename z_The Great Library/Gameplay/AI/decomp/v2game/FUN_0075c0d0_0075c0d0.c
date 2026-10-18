// FUN_0075c0d0 @ 0075c0d0 body=[[0075c0d0, 0075c160] [0075c164, 0075c182] [0075c186, 0075c1f3] [0075c1f7, 0075c215] [0075c219, 0075c28a] [0075c28e, 0075c2a7] [0075c2ab, 0075c2b8]]


void FUN_0075c0d0(void)

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
  puStack_c = &LAB_00b44100;
  local_10 = ExceptionList;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("mastervolume_slider",0x13);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_AUDIO",0x13);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_2c);
  uVar2 = (**(code **)(*piVar1 + 0x4c))(local_64);
  *(undefined4 *)(in_ECX + 0x328) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("effectvolume_slider",0x13);
  local_8 = 2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_AUDIO",0x13);
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_2c);
  uVar2 = (**(code **)(*piVar1 + 0x4c))(local_64);
  *(undefined4 *)(in_ECX + 0x32c) = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("musicvolume_slider",0x12);
  local_8 = 4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("menu_settings_AUDIO",0x13);
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_48);
  uVar2 = (**(code **)(*piVar1 + 0x4c))(local_80);
  *(undefined4 *)(in_ECX + 0x330) = uVar2;
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
  ExceptionList = local_10;
  return;
}


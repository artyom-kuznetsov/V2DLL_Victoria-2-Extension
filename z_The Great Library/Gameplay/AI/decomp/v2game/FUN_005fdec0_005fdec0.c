// FUN_005fdec0 @ 005fdec0 body=[[005fdec0, 005fdf32] [005fdf36, 005fdf8a] [005fdf8e, 005fe021] [005fe025, 005fe034]]


void FUN_005fdec0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
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
  puStack_c = &LAB_00b42128;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e05118,2);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(in_ECX + 0x28);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("Cancel",6);
  local_8 = 1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(in_ECX + 0x54);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x34))();
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("money_slider",0xc);
  local_8 = 2;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x4c))(local_48);
  FUN_00401000(0x3f000000,extraout_ECX,0,1);
  uVar2 = FUN_00b31c00();
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


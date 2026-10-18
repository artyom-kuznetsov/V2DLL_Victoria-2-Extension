// FUN_00671c60 @ 00671c60 body=[[00671c60, 00671cd4] [00671cd8, 00671d28] [00671d2c, 00671d7c] [00671d80, 00671dd0] [00671dd4, 00671e20] [00671e24, 00671e31]]


void FUN_00671c60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
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
  puStack_c = &LAB_00b45048;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + 0x38);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messageicon_log_interesting",0x1b);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  local_8 = 0xffffffff;
  *(bool *)(iVar1 + 0xd) = *(int *)(iVar2 + 0x6c) == 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_dialog_interesting",0x1e);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  local_8 = 0xffffffff;
  *(bool *)(iVar1 + 0xe) = *(int *)(iVar2 + 0x6c) == 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_map_interesting",0x1b);
  local_8 = 2;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  local_8 = 0xffffffff;
  *(bool *)(iVar1 + 0xc) = *(int *)(iVar2 + 0x6c) == 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_pause_interesting",0x1d);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  local_8 = 0xffffffff;
  *(bool *)(iVar1 + 0x10) = *(int *)(iVar2 + 0x6c) == 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("messageicon_icon_interesting",0x1c);
  local_8 = 4;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
  *(bool *)(iVar1 + 0x11) = *(int *)(iVar2 + 0x6c) == 1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


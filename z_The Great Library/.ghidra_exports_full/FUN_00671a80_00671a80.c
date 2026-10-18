// FUN_00671a80 @ 00671a80 body=[[00671a80, 00671af5] [00671af9, 00671b47] [00671b4b, 00671b9d] [00671ba1, 00671bf3] [00671bf7, 00671c45] [00671c49, 00671c56]]


void FUN_00671a80(void)

{
  int iVar1;
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messageicon_log",0xf);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  local_8 = 0xffffffff;
  *(bool *)(*(int *)(in_ECX + 0x28) + 0xd) = *(int *)(iVar1 + 0x6c) == 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_dialog",0x12);
  local_8 = 1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  *(bool *)(*(int *)(in_ECX + 0x28) + 0xe) = *(int *)(iVar1 + 0x6c) == 1;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_map",0xf);
  local_8 = 2;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  *(bool *)(*(int *)(in_ECX + 0x28) + 0xc) = *(int *)(iVar1 + 0x6c) == 1;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_pause",0x11);
  local_8 = 3;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  *(bool *)(*(int *)(in_ECX + 0x28) + 0x10) = *(int *)(iVar1 + 0x6c) == 1;
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("messageicon_icon",0x10);
  local_8 = 4;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
  *(bool *)(*(int *)(in_ECX + 0x28) + 0x11) = *(int *)(iVar1 + 0x6c) == 1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


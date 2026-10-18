// FUN_00694ca0 @ 00694ca0 body=[[00694ca0, 00694d1f] [00694d23, 00694d76] [00694d7a, 00694d87]]


void FUN_00694ca0(void)

{
  int *piVar1;
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
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("background",10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34) + 0x44))(local_2c);
  (**(code **)(*piVar1 + 0x84))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x2c))();
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("lobby_chat_edit",0xf);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x40))(local_48);
  *(undefined2 *)(iVar2 + 0x4c) = 1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


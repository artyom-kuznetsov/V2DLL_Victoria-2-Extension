// FUN_009853a0 @ 009853a0 body=[[009853a0, 00985434] [00985438, 0098548b] [0098548f, 009854e5] [009854e9, 0098553c] [00985540, 00985584] [00985588, 00985595]]


void FUN_009853a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41e58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
    *(undefined4 *)(in_ECX + 0x20) = 0;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_control",0x10);
  local_8 = 0;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x34))();
  iVar2 = *local_14;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x3c))();
  uVar1 = (**(code **)(iVar2 + 0x2c))(local_30,uVar1);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("closebutton",0xb);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x2c);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("next_chapter",0xc);
  local_8 = 2;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x84);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("next_stage",10);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x58);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("tutorial_control",0x10);
  local_8 = 4;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x78))(local_4c);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return;
}


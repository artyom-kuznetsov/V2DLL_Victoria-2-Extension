// FUN_007610e0 @ 007610e0 body=[[007610e0, 0076115d] [00761161, 0076118e]]


void FUN_007610e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x338) + 0x18) + 0x38))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = 0;
  uVar1 = (**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x338) = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x338) + 0x18) + 0x34))();
  ExceptionList = local_10;
  return;
}


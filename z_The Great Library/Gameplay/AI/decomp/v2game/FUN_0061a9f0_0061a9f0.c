// FUN_0061a9f0 @ 0061a9f0 body=[[0061a9f0, 0061aa56] [0061aa5a, 0061aaa8]]


void FUN_0061a9f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("cb_list",7);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if ((iVar2 != 0) && (cVar1 = (**(code **)(*(int *)(iVar2 + 4) + 0x94))(param_1), cVar1 != '\0')) {
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x94))(param_1);
  ExceptionList = local_10;
  return;
}


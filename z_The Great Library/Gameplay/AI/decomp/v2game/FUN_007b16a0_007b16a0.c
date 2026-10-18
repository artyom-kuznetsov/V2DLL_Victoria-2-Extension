// FUN_007b16a0 @ 007b16a0 body=[[007b16a0, 007b1706] [007b170a, 007b1777] [007b177b, 007b17b0]]


void FUN_007b16a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("unit_queue",10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  if (*(int *)(iVar2 + 8) == 0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("unit_queue",10);
    local_8 = 1;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x7c))(local_48);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      (**(code **)(*(int *)*puVar3 + 0x20))();
    }
  }
  ExceptionList = local_10;
  return;
}


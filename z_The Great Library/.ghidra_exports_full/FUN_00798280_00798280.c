// FUN_00798280 @ 00798280 body=[[00798280, 007982e5] [007982e9, 00798326]]


void FUN_00798280(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
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
  FUN_00409350("leaderlist",10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*(int *)*param_1 + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
    for (puVar2 = (undefined4 *)*puVar2; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[2]) {
      (**(code **)(*(int *)*puVar2 + 0x20))();
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}


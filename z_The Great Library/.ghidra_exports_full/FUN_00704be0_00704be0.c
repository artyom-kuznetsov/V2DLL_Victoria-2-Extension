// FUN_00704be0 @ 00704be0 body=[[00704be0, 00704c49] [00704c4d, 00704c91]]


void FUN_00704be0(int param_1)

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
  FUN_00409350("project_listbox",0xf);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x88) + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
  for (puVar2 = (undefined4 *)*puVar2; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]
      ) {
    (**(code **)(*(int *)*puVar2 + 0x20))();
  }
  ExceptionList = local_10;
  return;
}


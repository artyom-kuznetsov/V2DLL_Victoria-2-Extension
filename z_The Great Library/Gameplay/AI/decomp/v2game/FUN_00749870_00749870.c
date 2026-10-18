// FUN_00749870 @ 00749870 body=[[00749870, 007498d7] [007498db, 007498ec] [007498f0, 0074995b] [0074995f, 0074996e]]


void FUN_00749870(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_48 [5];
  uint local_34;
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
  FUN_00409350("close_button",0xc);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(*(int *)*param_1 + 0x34))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  puVar1 = (undefined4 *)piVar3[0x16];
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 8))();
  }
  puVar1 = (undefined4 *)piVar3[0x16];
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 4))(piVar3);
  }
  puVar1 = (undefined4 *)piVar3[0x16];
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x14))();
  }
  (**(code **)(*piVar3 + 0x110))();
  (**(code **)(*(int *)piVar3[0xc] + 0x24))(local_48);
  if (local_34 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}


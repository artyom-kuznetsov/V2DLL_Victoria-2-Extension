// FUN_00768f90 @ 00768f90 body=[[00768f90, 00769000] [00769004, 00769013]]


void FUN_00768f90(int param_1)

{
  int *piVar1;
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
  FUN_00409350("bookmark",8);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0xb4))(3);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


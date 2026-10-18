// FUN_00694d90 @ 00694d90 body=[[00694d90, 00694e0b] [00694e0f, 00694e1c]]


void FUN_00694d90(void)

{
  int *piVar1;
  int unaff_ESI;
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
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x34) + 0x18) + 0x38))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("background",10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x34) + 0x44))(local_2c);
  (**(code **)(*piVar1 + 0x84))(0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


// FUN_006e28e0 @ 006e28e0 body=[[006e28e0, 006e2955] [006e2959, 006e296c]]


void FUN_006e28e0(char param_1)

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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("filter_enabled",0xe);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 4) + 0x44))(local_2c);
  (**(code **)(*piVar1 + 0x48))((param_1 != '\0') + '\x01');
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *(char *)(unaff_ESI + 0xc) = param_1;
  ExceptionList = local_10;
  return;
}


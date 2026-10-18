// FUN_006a4750 @ 006a4750 body=[[006a4750, 006a47c4] [006a47c8, 006a47d6]]


void FUN_006a4750(void)

{
  int *piVar1;
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
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("button",6);
    local_8 = 0;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0xb8))();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}


// FUN_00762c60 @ 00762c60 body=[[00762c60, 00762cda] [00762cde, 00762ceb]]


void FUN_00762c60(void)

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
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("nudge_button",0xc);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x38))();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


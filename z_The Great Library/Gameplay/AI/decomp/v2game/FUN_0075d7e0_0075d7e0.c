// FUN_0075d7e0 @ 0075d7e0 body=[[0075d7e0, 0075d852] [0075d856, 0075d8a6] [0075d8aa, 0075d8b7]]


void FUN_0075d7e0(void)

{
  int *piVar1;
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
  FUN_00409350("BackButton",10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0xb8))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("ApplyButton",0xb);
  local_8 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x34))(local_48);
  (**(code **)(*piVar1 + 0xb8))();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


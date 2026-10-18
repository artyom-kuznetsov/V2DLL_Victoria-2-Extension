// FUN_0064cd70 @ 0064cd70 body=[[0064cd70, 0064ce09] [0064ce0d, 0064ce1a]]


void FUN_0064cd70(void)

{
  int *piVar1;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(bool *)(*(int *)(in_ECX + 0x1e24) + 0x3b8) =
       *(char *)(*(int *)(in_ECX + 0x1e24) + 0x3b8) == '\0';
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("menubar_plans_toggle",0x14);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x34))(local_30);
  (**(code **)(*piVar1 + 0x48))((*(char *)(*(int *)(in_ECX + 0x1e24) + 0x3b8) == '\0') + '\x01');
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}


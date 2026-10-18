// FUN_00692c30 @ 00692c30 body=[[00692c30, 00692cb1] [00692cb5, 00692cc2]]


void FUN_00692c30(void)

{
  int iVar1;
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
  (**(code **)(**(int **)(unaff_ESI + 0x98) + 0x2c))();
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x98) + 0x18) + 0x34))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goto_edit",9);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x98) + 0x40))(local_2c);
  *(undefined2 *)(iVar1 + 0x4c) = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


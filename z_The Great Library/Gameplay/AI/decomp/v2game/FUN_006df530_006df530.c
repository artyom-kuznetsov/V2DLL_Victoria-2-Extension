// FUN_006df530 @ 006df530 body=[[006df530, 006df5ad] [006df5b1, 006df60d] [006df611, 006df66d] [006df671, 006df6c8] [006df6cc, 006df6d9]]


void FUN_006df530(void)

{
  int *piVar1;
  int unaff_ESI;
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
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("release_nations_tab",0x13);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(2 - (uint)(*(int *)(unaff_ESI + 0x2d4) != 1));
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("reforms_tab",0xb);
  local_8 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(2 - (uint)(*(int *)(unaff_ESI + 0x2d4) != 0));
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("decisions_tab",0xd);
  local_8 = 2;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))((*(int *)(unaff_ESI + 0x2d4) == 2) + '\x01');
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("movements_tab",0xd);
  local_8 = 3;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_48);
  (**(code **)(*piVar1 + 0x48))((*(int *)(unaff_ESI + 0x2d4) == 3) + '\x01');
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}


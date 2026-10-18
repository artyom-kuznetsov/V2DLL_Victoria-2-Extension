// FUN_0073d4e0 @ 0073d4e0 body=[[0073d4e0, 0073d565] [0073d569, 0073d59f]]


void FUN_0073d4e0(void)

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
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0x18) + 0x34))();
  (**(code **)(**(int **)(*(int *)(unaff_ESI + 0x2c) + 0x60) + 0x24))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("national_focus_window",0x15);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (*(int *)(unaff_ESI + 0x24) != 0) {
    FUN_0073d920(*(int *)(unaff_ESI + 0x24));
  }
  FUN_00740050();
  FUN_0073f300(unaff_ESI);
  ExceptionList = local_10;
  return;
}


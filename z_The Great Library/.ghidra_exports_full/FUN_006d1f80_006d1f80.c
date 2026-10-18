// FUN_006d1f80 @ 006d1f80 body=[[006d1f80, 006d1fef] [006d1ff3, 006d2022]]


void FUN_006d1f80(void)

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
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("all_party_window_close",0x16);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(unaff_ESI + 0x28);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0x18) + 0x34))();
  FUN_006d2030(unaff_ESI);
  ExceptionList = local_10;
  return;
}


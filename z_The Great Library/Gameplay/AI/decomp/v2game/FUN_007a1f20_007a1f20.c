// FUN_007a1f20 @ 007a1f20 body=[[007a1f20, 007a1f8a] [007a1f8e, 007a1f9e]]


void FUN_007a1f20(int param_1)

{
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
  FUN_00409350("ChatListTextBox",0xf);
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x38))(local_2c);
  FUN_009e7500();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


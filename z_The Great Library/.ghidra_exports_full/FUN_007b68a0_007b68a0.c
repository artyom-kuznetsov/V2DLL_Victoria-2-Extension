// FUN_007b68a0 @ 007b68a0 body=[[007b68a0, 007b6927] [007b692b, 007b693a]]


void FUN_007b68a0(int param_1)

{
  undefined4 unaff_EDI;
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
  FUN_00409350("status_label",0xc);
  local_8 = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x20) + 0x3c))(local_2c);
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  FUN_00a5ecc0(unaff_EDI,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}


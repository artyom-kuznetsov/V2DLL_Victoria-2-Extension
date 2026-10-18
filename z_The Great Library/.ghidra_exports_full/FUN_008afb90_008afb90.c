// FUN_008afb90 @ 008afb90 body=[[008afb90, 008afbf0] [008afbf4, 008afc07]]


void FUN_008afb90(void)

{
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("_title",6);
  local_8 = 0;
  FUN_00988f20(local_30);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return;
}


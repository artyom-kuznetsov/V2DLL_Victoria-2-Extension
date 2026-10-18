// FUN_00aab840 @ 00aab840 body=[[00aab840, 00aab8a1]]


void FUN_00aab840(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b36930;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_00f1f868 != (int *)0x0) {
    (**(code **)(*DAT_00f1f868 + 4))(param_1);
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


// FUN_008044f0 @ 008044f0 body=[[008044f0, 0080451f]]


void FUN_008044f0(undefined4 *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3c7e8;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_00804790();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*param_1);
}


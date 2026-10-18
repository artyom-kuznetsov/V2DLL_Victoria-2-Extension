// FUN_00443560 @ 00443560 body=[[00443560, 00443590] [0044359f, 004435e7]]


void FUN_00443560(void)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_012586e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  if (DAT_012586e8 != 0) {
    ExceptionList = &local_10;
    FUN_004436e0(DAT_012586e8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(200);
  local_8 = 0;
  if (iVar1 != 0) {
    DAT_012586e8 = FUN_004435f0(iVar1);
    ExceptionList = local_10;
    return;
  }
  DAT_012586e8 = 0;
  ExceptionList = local_10;
  return;
}


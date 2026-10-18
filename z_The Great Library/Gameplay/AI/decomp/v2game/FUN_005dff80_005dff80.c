// FUN_005dff80 @ 005dff80 body=[[005dff80, 005dffc8]]


void FUN_005dff80(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b43788;
  local_14 = ExceptionList;
  if (param_2 != 0x2f9) {
    ExceptionList = &local_14;
    FUN_009a2620();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_005ab780();
  uStack_c = 0;
  FUN_0072d580();
  cVar1 = FUN_005e5800();
  if (cVar1 != '\0') {
    FUN_005e5bb0();
  }
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}


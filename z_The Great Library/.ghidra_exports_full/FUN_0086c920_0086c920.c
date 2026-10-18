// FUN_0086c920 @ 0086c920 body=[[0086c920, 0086c974]]


void FUN_0086c920(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3aba8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)FUN_00aae9af();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}


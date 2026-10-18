// FUN_00a09d00 @ 00a09d00 body=[[00a09d00, 00a09d5b] [00a09d5f, 00a09d72]]


undefined4 * FUN_00a09d00(undefined4 param_1)

{
  undefined4 *puVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x74);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_009fc530(puVar1);
    *puVar1 = &PTR_FUN_00e3ea48;
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


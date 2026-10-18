// FUN_009a7010 @ 009a7010 body=[[009a7010, 009a7052] [009a7056, 009a7068]]


undefined4 * FUN_009a7010(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(4);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00e38aac;
    puVar2 = puVar1;
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar2;
}


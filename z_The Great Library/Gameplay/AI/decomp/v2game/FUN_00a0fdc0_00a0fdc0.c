// FUN_00a0fdc0 @ 00a0fdc0 body=[[00a0fdc0, 00a0fe2c] [00a0fe30, 00a0fe43]]


undefined4 * FUN_00a0fdc0(undefined4 param_1)

{
  undefined4 *puVar1;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b461cb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0xdc);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = &PTR_FUN_00e3eca0;
    FUN_00a16220(puVar1 + 0xf);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


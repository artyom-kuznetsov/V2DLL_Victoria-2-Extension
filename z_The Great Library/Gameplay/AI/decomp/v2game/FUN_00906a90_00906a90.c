// FUN_00906a90 @ 00906a90 body=[[00906a90, 00906b1c] [00906b20, 00906b33]]


undefined4 * FUN_00906a90(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b461cb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0xa0);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = CExecuteDecisionCommand::vftable;
    puVar1[0x14] = 0xf;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
    FUN_008a88d0();
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


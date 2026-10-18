// FUN_00a06780 @ 00a06780 body=[[00a06780, 00a06803] [00a06807, 00a0681a]]


undefined4 * FUN_00a06780(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b490fb;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x90);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_009fc530(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = &PTR_FUN_00e3e958;
    puVar1[0x22] = 0xf;
    puVar1[0x21] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


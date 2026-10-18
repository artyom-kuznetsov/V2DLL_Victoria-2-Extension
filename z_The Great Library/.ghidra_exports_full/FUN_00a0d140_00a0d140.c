// FUN_00a0d140 @ 00a0d140 body=[[00a0d140, 00a0d1cf] [00a0d1d3, 00a0d1e6]]


undefined4 * FUN_00a0d140(undefined4 param_1)

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
  puVar1 = (undefined4 *)FUN_00aae9af(0x94);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_009fc530(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = &PTR_FUN_00e3eb74;
    puVar1[0x22] = 0xf;
    puVar1[0x21] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    FUN_00408ed0(in_ECX + 0x74,0,0xffffffff);
    *(undefined1 *)(puVar1 + 0x24) = *(undefined1 *)(in_ECX + 0x90);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


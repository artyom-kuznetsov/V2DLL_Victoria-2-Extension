// FUN_00a0a7b0 @ 00a0a7b0 body=[[00a0a7b0, 00a0a838] [00a0a83c, 00a0a84f]]


undefined4 * FUN_00a0a7b0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41503;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x50);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    *puVar1 = &PTR_FUN_00e3eac0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    local_8._0_1_ = 3;
    FUN_00a11f60(in_ECX + 0x3c);
    puVar1[0x13] = *(undefined4 *)(in_ECX + 0x4c);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


// FUN_0072d1b0 @ 0072d1b0 body=[[0072d1b0, 0072d23a] [0072d23e, 0072d251]]


undefined4 * FUN_0072d1b0(undefined4 param_1)

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
  puVar1 = (undefined4 *)FUN_00aae9af(0x5c);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = CPauseGame::vftable;
    puVar1[0x14] = 0xf;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
    *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(in_ECX + 0x58);
    *(undefined1 *)((int)puVar1 + 0x59) = *(undefined1 *)(in_ECX + 0x59);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


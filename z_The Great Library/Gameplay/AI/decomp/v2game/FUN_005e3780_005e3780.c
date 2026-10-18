// FUN_005e3780 @ 005e3780 body=[[005e3780, 005e3810] [005e3814, 005e3827]]


undefined4 * FUN_005e3780(undefined4 param_1)

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
  puVar1 = (undefined4 *)FUN_00aae9af(100);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    local_8._0_1_ = 2;
    *puVar1 = CUnloadArmyCommand::vftable;
    puVar1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
    puVar1[0x10] = *(undefined4 *)(in_ECX + 0x40);
    puVar1[0x11] = *(undefined4 *)(in_ECX + 0x44);
    puVar1[0x17] = 0xf;
    puVar1[0x16] = 0;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    FUN_00408ed0(in_ECX + 0x48,0,0xffffffff);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


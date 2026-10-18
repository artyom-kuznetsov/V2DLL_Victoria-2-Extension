// FUN_0040af50 @ 0040af50 body=[[0040af50, 0040afcb] [0040afcf, 0040afe3]]


undefined4 * FUN_0040af50(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x44);
  local_8._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    *puVar1 = CBattlePlanSendCommand::vftable;
    puVar1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
    puVar1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0040a9c0(puVar1);
  puVar1[0x10] = *(undefined4 *)(in_ECX + 0x40);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


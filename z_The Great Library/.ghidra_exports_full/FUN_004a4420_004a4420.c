// FUN_004a4420 @ 004a4420 body=[[004a4420, 004a448b] [004a448f, 004a44a2]]


undefined4 * FUN_004a4420(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x48);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    *puVar1 = CConquerProvinceCommand::vftable;
    puVar1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
    puVar1[0x10] = *(undefined4 *)(in_ECX + 0x40);
    puVar1[0x11] = *(undefined4 *)(in_ECX + 0x44);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


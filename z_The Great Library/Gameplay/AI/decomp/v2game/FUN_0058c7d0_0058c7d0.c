// FUN_0058c7d0 @ 0058c7d0 body=[[0058c7d0, 0058c853] [0058c857, 0058c86a]]


undefined4 * FUN_0058c7d0(undefined4 param_1)

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
  puVar1 = (undefined4 *)FUN_00aae9af(0x58);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0040a720(puVar1);
    *puVar1 = CChangeTradeSetting::vftable;
    puVar1[0xf] = *(undefined4 *)(in_ECX + 0x3c);
    puVar1[0x10] = *(undefined4 *)(in_ECX + 0x40);
    puVar1[0x11] = *(undefined4 *)(in_ECX + 0x44);
    puVar1[0x12] = *(undefined4 *)(in_ECX + 0x48);
    puVar1[0x13] = *(undefined4 *)(in_ECX + 0x4c);
    *(undefined1 *)(puVar1 + 0x14) = *(undefined1 *)(in_ECX + 0x50);
    *(undefined1 *)((int)puVar1 + 0x51) = *(undefined1 *)(in_ECX + 0x51);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


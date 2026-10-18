// FUN_00a0a3e0 @ 00a0a3e0 body=[[00a0a3e0, 00a0a447] [00a0a44b, 00a0a45e]]


undefined4 * FUN_00a0a3e0(undefined4 param_1)

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
  puVar1 = (undefined4 *)FUN_00aae9af(0x7c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_009fc530(puVar1);
    *puVar1 = &PTR_FUN_00e3ea84;
    puVar1[0x1d] = *(undefined4 *)(in_ECX + 0x74);
    puVar1[0x1e] = *(undefined4 *)(in_ECX + 0x78);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return puVar1;
}


// FUN_00996a10 @ 00996a10 body=[[00996a10, 00996aaf] [00996ab3, 00996ac6]]


undefined4 FUN_00996a10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint in_stack_00000018;
  int *in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_005c2ad0(&param_1);
  uVar3 = FUN_00a54b20();
  iVar1 = *(int *)(unaff_ESI + 0x11c);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar3;
    puVar4[1] = iVar1;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x120);
  *(undefined4 **)(unaff_ESI + 0x11c) = puVar4;
  *(int *)(unaff_ESI + 0x120) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(unaff_ESI + 0x118) = puVar4;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar4;
  }
  (**(code **)(*in_stack_00000020 + 0x2c))(uVar3);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar3;
}


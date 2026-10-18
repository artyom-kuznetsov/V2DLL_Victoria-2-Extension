// FUN_00588f30 @ 00588f30 body=[[00588f30, 00588f87] [00588f8b, 00588f9d]]


undefined4 FUN_00588f30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x40);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00588dc0(iVar1,*(undefined1 *)(in_ECX + 0x3c));
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}


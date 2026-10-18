// FUN_00583c00 @ 00583c00 body=[[00583c00, 00583c6b] [00583c6f, 00583c81]]


undefined4 FUN_00583c00(void)

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
  iVar1 = FUN_00aae9af();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00583900(iVar1,*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40),
                         in_ECX + 0x44);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return uVar2;
}


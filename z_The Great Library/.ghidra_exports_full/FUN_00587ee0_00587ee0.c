// FUN_00587ee0 @ 00587ee0 body=[[00587ee0, 00587f4d] [00587f51, 00587f63]]


undefined4 FUN_00587ee0(undefined4 param_1)

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
  iVar1 = FUN_00aae9af(0x4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00587a70(iVar1,*(undefined1 *)(in_ECX + 0x42),*(undefined4 *)(in_ECX + 0x44),
                         *(undefined4 *)(in_ECX + 0x48),*(undefined1 *)(in_ECX + 0x40),
                         *(undefined4 *)(in_ECX + 0x3c),*(undefined1 *)(in_ECX + 0x41));
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}


// FUN_00a06300 @ 00a06300 body=[[00a06300, 00a0634a] [00a0634e, 00a06360]]


undefined4 FUN_00a06300(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  uVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x40);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 != 0) {
    uVar2 = FUN_00a06090(iVar1);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}


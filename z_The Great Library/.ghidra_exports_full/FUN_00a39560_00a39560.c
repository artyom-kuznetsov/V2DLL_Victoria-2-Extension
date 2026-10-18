// FUN_00a39560 @ 00a39560 body=[[00a39560, 00a395da] [00a395de, 00a395f0]]


undefined4 FUN_00a39560(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
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
    FUN_00408ed0(&param_1,0,0xffffffff);
    uVar2 = FUN_00a785a0(iVar1);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return uVar2;
}


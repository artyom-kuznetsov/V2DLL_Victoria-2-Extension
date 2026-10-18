// FUN_00a049c0 @ 00a049c0 body=[[00a049c0, 00a04a13] [00a04a17, 00a04a29]]


undefined4 FUN_00a049c0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x54);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a045c0(iVar1,in_ECX);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return uVar2;
}


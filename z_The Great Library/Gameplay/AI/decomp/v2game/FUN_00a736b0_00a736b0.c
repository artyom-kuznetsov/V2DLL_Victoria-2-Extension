// FUN_00a736b0 @ 00a736b0 body=[[00a736b0, 00a736ee] [00a736f2, 00a7370a] [00a7370e, 00a73721]]


void FUN_00a736b0(byte param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5c9e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e43524;
  local_8 = 0;
  iVar1 = in_ECX[7];
  if (iVar1 != 0) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  FUN_00a73e70();
  *in_ECX = &PTR_FUN_00e43500;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


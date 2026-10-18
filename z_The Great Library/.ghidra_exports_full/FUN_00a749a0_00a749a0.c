// FUN_00a749a0 @ 00a749a0 body=[[00a749a0, 00a749dd] [00a749e1, 00a74a07] [00a74a0b, 00a74a1d]]


void FUN_00a749a0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5c9d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e43548;
  local_8 = 1;
  FUN_00a74fd0();
  if (in_ECX[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[4]);
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00e43500;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


// FUN_00a68b70 @ 00a68b70 body=[[00a68b70, 00a68bc8] [00a68bd3, 00a68c03]]


void FUN_00a68b70(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b482e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e428b8;
  local_8 = 1;
  if (in_ECX[6] != 0) {
    FUN_00a8a9a0(in_ECX[6]);
  }
  FUN_00a6a8c0(in_ECX + 0x16);
  if (in_ECX[0x1f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1f]);
  }
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  FUN_00a60100();
  ExceptionList = local_10;
  return;
}


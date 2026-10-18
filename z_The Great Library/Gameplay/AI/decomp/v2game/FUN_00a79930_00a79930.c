// FUN_00a79930 @ 00a79930 body=[[00a79930, 00a7996f] [00a79973, 00a7999d] [00a799a1, 00a799b5]]


void FUN_00a79930(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e38900;
  in_ECX[6] = &PTR_LAB_00e3893c;
  local_8 = 0;
  if (in_ECX[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc]);
  }
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  FUN_009a7420();
  local_8 = 0xffffffff;
  FUN_009a72a0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


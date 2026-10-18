// FUN_00a86f90 @ 00a86f90 body=[[00a86f90, 00a86fef] [00a86ff3, 00a8700b] [00a8700f, 00a87022]]


void FUN_00a86f90(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bc88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e44610;
  local_8 = 0;
  FUN_009b3740(in_ECX + 0x1d);
  *in_ECX = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xd] + 0x98) == in_ECX) {
    *(undefined4 *)(in_ECX[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


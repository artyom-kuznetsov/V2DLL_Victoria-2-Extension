// FUN_009a51d0 @ 009a51d0 body=[[009a51d0, 009a5216] [009a521a, 009a5236] [009a523a, 009a524d]]


void FUN_009a51d0(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f50b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 0;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}


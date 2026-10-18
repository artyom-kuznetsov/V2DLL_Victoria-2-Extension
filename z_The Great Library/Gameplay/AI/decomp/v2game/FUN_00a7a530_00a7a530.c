// FUN_00a7a530 @ 00a7a530 body=[[00a7a530, 00a7a568] [00a7a56c, 00a7a572]]


void FUN_00a7a530(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e43930;
  in_ECX[6] = &PTR_LAB_00e43990;
  in_ECX[0xc] = &PTR_LAB_00e439a0;
  in_ECX[0x12] = &PTR_LAB_00e439b0;
  in_ECX[0x18] = &PTR_LAB_00e439c0;
  FUN_00a5f240();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


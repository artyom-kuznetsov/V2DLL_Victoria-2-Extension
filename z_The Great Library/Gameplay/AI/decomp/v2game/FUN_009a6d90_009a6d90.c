// FUN_009a6d90 @ 009a6d90 body=[[009a6d90, 009a6dc8] [009a6dcc, 009a6dd2]]


void FUN_009a6d90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e38988;
  in_ECX[6] = &PTR_LAB_00e389e8;
  in_ECX[0xc] = &PTR_LAB_00e389f8;
  in_ECX[0x12] = &PTR_LAB_00e38a08;
  in_ECX[0x18] = &PTR_LAB_00e38a18;
  FUN_00a5f240();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


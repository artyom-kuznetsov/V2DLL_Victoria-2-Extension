// FUN_00a7bf20 @ 00a7bf20 body=[[00a7bf20, 00a7bf40] [00a7bf44, 00a7bf6c] [00a7bf70, 00a7bf76]]


void FUN_00a7bf20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e43c40;
  if (0xf < (uint)in_ECX[0x5e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x59]);
  }
  in_ECX[0x5e] = 0xf;
  in_ECX[0x5d] = 0;
  *(undefined1 *)(in_ECX + 0x59) = 0;
  FUN_007d9930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


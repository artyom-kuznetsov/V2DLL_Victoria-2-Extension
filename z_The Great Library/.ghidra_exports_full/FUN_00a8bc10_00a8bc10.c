// FUN_00a8bc10 @ 00a8bc10 body=[[00a8bc10, 00a8bc30] [00a8bc34, 00a8bc5e] [00a8bc62, 00a8bc68]]


void FUN_00a8bc10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e38350;
  if (0xf < (uint)in_ECX[0x47]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x42]);
  }
  in_ECX[0x47] = 0xf;
  in_ECX[0x46] = 0;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  FUN_009f8f70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


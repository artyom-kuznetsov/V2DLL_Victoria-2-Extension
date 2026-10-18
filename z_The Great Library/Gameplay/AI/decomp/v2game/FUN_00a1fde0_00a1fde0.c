// FUN_00a1fde0 @ 00a1fde0 body=[[00a1fde0, 00a1fdfd] [00a1fe01, 00a1fe20]]


void FUN_00a1fde0(void)

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
  return;
}


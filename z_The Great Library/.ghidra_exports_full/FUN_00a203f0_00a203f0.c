// FUN_00a203f0 @ 00a203f0 body=[[00a203f0, 00a2040e] [00a20412, 00a20444] [00a20448, 00a20466]]


void FUN_00a203f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3aa78;
  if (0xf < (uint)in_ECX[0x51]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4c]);
  }
  in_ECX[0x51] = 0xf;
  in_ECX[0x50] = 0;
  *(undefined1 *)(in_ECX + 0x4c) = 0;
  *in_ECX = &PTR_FUN_00e38350;
  if (0xf < (uint)in_ECX[0x47]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x42]);
  }
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0xf;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  FUN_009f8f70();
  return;
}


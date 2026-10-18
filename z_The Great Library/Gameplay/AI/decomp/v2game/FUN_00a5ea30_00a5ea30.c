// FUN_00a5ea30 @ 00a5ea30 body=[[00a5ea30, 00a5ea50] [00a5ea54, 00a5ea7e] [00a5ea82, 00a5ea88]]


void FUN_00a5ea30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e41f10;
  if (0xf < (uint)in_ECX[0x59]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x54]);
  }
  in_ECX[0x59] = 0xf;
  in_ECX[0x58] = 0;
  *(undefined1 *)(in_ECX + 0x54) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


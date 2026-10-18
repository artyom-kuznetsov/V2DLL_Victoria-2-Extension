// FUN_00902470 @ 00902470 body=[[00902470, 00902484] [00902488, 009024a9] [009024ad, 009024b3]]


void FUN_00902470(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x40) = 0xf;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  FUN_008b32d0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


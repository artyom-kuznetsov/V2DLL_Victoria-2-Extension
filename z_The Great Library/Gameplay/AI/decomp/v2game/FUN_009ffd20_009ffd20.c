// FUN_009ffd20 @ 009ffd20 body=[[009ffd20, 009ffd37] [009ffd3b, 009ffd62] [009ffd66, 009ffd6c]]


void FUN_009ffd20(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x74));
  }
  *(undefined4 *)(in_ECX + 0x88) = 0xf;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined1 *)(in_ECX + 0x74) = 0;
  FUN_009fa970();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


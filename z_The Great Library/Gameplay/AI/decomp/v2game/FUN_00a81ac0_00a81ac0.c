// FUN_00a81ac0 @ 00a81ac0 body=[[00a81ac0, 00a81ada] [00a81ade, 00a81b08] [00a81b0c, 00a81b12]]


void FUN_00a81ac0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x16c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x158));
  }
  *(undefined4 *)(in_ECX + 0x16c) = 0xf;
  *(undefined4 *)(in_ECX + 0x168) = 0;
  *(undefined1 *)(in_ECX + 0x158) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


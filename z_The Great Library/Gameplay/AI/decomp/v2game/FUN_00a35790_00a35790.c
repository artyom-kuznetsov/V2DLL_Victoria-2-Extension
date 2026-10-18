// FUN_00a35790 @ 00a35790 body=[[00a35790, 00a357a5] [00a357a9, 00a357c0] [00a357c4, 00a357dc] [00a357e0, 00a357e7]]


void FUN_00a35790(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x28));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  if (0xf < *(uint *)(in_ECX + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0xf;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


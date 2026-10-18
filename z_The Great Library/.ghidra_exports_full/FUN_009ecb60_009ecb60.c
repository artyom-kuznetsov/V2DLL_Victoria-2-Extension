// FUN_009ecb60 @ 009ecb60 body=[[009ecb60, 009ecb77] [009ecb7b, 009ecb9d] [009ecba1, 009ecba7]]


void FUN_009ecb60(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x80)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x6c));
  }
  *(undefined4 *)(in_ECX + 0x80) = 0xf;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined1 *)(in_ECX + 0x6c) = 0;
  FUN_006467c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


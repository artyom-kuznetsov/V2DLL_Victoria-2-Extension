// FUN_009fe090 @ 009fe090 body=[[009fe090, 009fe0b2] [009fe0b6, 009fe0d6] [009fe0da, 009fe0e0]]


void FUN_009fe090(uint param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00463b30(*(undefined4 *)(in_ECX + 0xc),param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


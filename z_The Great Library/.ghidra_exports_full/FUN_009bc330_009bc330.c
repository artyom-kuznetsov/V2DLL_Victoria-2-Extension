// FUN_009bc330 @ 009bc330 body=[[009bc330, 009bc341] [009bc345, 009bc355]]


void FUN_009bc330(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}


// FUN_009b8050 @ 009b8050 body=[[009b8050, 009b806e] [009b8072, 009b8092] [009b8096, 009b809c]]


void FUN_009b8050(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00475f00(*(undefined4 *)(in_ECX + 0x10));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


// FUN_004901b0 @ 004901b0 body=[[004901b0, 004901c4] [004901c8, 004901e7] [004901eb, 004901f1]]


void FUN_004901b0(byte param_1)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x44)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x30));
  }
  *(undefined4 *)(in_ECX + 0x44) = 0xf;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  FUN_0044be00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


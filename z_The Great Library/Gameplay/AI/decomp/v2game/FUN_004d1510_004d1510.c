// FUN_004d1510 @ 004d1510 body=[[004d1510, 004d1522] [004d1526, 004d1546] [004d154a, 004d1550]]


void FUN_004d1510(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


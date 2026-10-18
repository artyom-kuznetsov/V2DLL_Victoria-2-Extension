// FUN_009a5b00 @ 009a5b00 body=[[009a5b00, 009a5b30] [009a5b3d, 009a5b44]]


void FUN_009a5b00(int param_1)

{
  if (*(char *)(param_1 + 0x35) == '\0') {
    FUN_009a5b00(*(undefined4 *)(param_1 + 8));
    FUN_009a56d0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}


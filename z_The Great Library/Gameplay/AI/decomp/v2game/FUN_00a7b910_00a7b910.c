// FUN_00a7b910 @ 00a7b910 body=[[00a7b910, 00a7b925] [00a7b929, 00a7b959] [00a7b95d, 00a7b963]]


void FUN_00a7b910(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x150));
  }
  *(undefined4 *)(in_ECX + 0x150) = 0;
  *(undefined4 *)(in_ECX + 0x154) = 0;
  *(undefined4 *)(in_ECX + 0x158) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}


// FUN_00a60080 @ 00a60080 body=[[00a60080, 00a600a8] [00a600b2, 00a600c8]]


void FUN_00a60080(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_008601b0(*(undefined4 *)(in_ECX + 0x54));
  piVar1 = *(int **)(in_ECX + 0x54);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  return;
}


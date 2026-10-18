// FUN_008595e0 @ 008595e0 body=[[008595e0, 0085960e]]


void FUN_008595e0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = DAT_01318d20;
  if (DAT_01318d20 != (int *)0x0) {
    while (*piVar2 != in_ECX) {
      piVar1 = piVar2 + 2;
      piVar2 = (int *)*piVar1;
      if ((int *)*piVar1 == (int *)0x0) {
        FUN_00825fd0();
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
    }
  }
  FUN_00825fd0();
  return;
}


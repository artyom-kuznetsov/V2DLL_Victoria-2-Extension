// FUN_00853f90 @ 00853f90 body=[[00853f90, 00853fbe]]


void FUN_00853f90(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = DAT_01318d30;
  if (DAT_01318d30 != (int *)0x0) {
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


// FUN_00821d90 @ 00821d90 body=[[00821d90, 00821dbe]]


void FUN_00821d90(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = DAT_01318b50;
  if (DAT_01318b50 != (int *)0x0) {
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


// FUN_00a3aac0 @ 00a3aac0 body=[[00a3aac0, 00a3aaeb] [00a3aaef, 00a3ab06]]


void FUN_00a3aac0(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  
  if (in_EAX != param_1) {
    piVar2 = in_EAX + 1;
    do {
      if (*piVar2 != 0) {
        FUN_00a3ab10(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar2);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar1 = piVar2 + 4;
      piVar2 = piVar2 + 5;
    } while (piVar1 != param_1);
  }
  return;
}


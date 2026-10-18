// FUN_00475f00 @ 00475f00 body=[[00475f00, 00475f1d] [00475f21, 00475f37]]


void FUN_00475f00(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  
  if (in_EAX != param_1) {
    piVar2 = in_EAX + 2;
    do {
      if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar2);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar1 = piVar2 + 4;
      piVar2 = piVar2 + 6;
    } while (piVar1 != param_1);
  }
  return;
}


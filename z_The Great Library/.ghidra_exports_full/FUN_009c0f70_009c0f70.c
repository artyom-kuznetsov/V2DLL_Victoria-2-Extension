// FUN_009c0f70 @ 009c0f70 body=[[009c0f70, 009c0f8d] [009c0f91, 009c0fa7]]


void FUN_009c0f70(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  
  if (in_EAX != param_1) {
    piVar2 = in_EAX + 1;
    do {
      if (*piVar2 != 0) {
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


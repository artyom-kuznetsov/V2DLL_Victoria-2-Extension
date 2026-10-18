// FUN_004be200 @ 004be200 body=[[004be200, 004be237]]


void FUN_004be200(void)

{
  int *in_EAX;
  int *piVar1;
  int *in_EDX;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != (int *)in_EAX[1]) {
    do {
      if (*piVar1 == *in_EDX) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)in_EAX[1]);
  }
  FUN_0068f020();
  return;
}


// FUN_0068e9f0 @ 0068e9f0 body=[[0068e9f0, 0068ea21]]


void FUN_0068e9f0(void)

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


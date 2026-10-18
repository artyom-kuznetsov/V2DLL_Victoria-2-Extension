// FUN_004a81b0 @ 004a81b0 body=[[004a81b0, 004a81d3]]


void FUN_004a81b0(void)

{
  int *in_EAX;
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *in_ECX) break;
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
  }
  FUN_005f2ae0(piVar1);
  return;
}


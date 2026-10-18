// FUN_0068f340 @ 0068f340 body=[[0068f340, 0068f38c]]


undefined4 FUN_0068f340(void)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  
  piVar1 = (int *)in_EAX[1];
  piVar2 = (int *)*in_EAX;
  if (((in_ECX[1] - *in_ECX ^ (int)piVar1 - (int)piVar2) & 0xfffffffcU) != 0) {
    return 1;
  }
  if (piVar2 != piVar1) {
    iVar3 = *in_ECX - (int)piVar2;
    do {
      if (*piVar2 != *(int *)(iVar3 + (int)piVar2)) {
        return 1;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return 0;
}


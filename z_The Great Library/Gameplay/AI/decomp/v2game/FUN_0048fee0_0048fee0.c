// FUN_0048fee0 @ 0048fee0 body=[[0048fee0, 0048fefa]]


undefined4 FUN_0048fee0(void)

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
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}


// FUN_00457110 @ 00457110 body=[[00457110, 0045711c] [00457120, 00457132]]


undefined4 FUN_00457110(void)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  int *in_EDX;
  
  piVar1 = (int *)in_EAX[1];
  piVar2 = (int *)*in_EAX;
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *in_EDX) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),piVar2 != piVar1);
}


// FUN_00465140 @ 00465140 body=[[00465140, 00465173]]


uint FUN_00465140(void)

{
  int *piVar1;
  uint in_EAX;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  bool bVar3;
  
  if (*(int *)(in_EDX + 0x38) - *(int *)(in_EDX + 0x34) >> 4 <= (int)in_EAX) {
    return in_EAX & 0xffffff00;
  }
  piVar2 = (int *)(in_EAX * 0x10 + *(int *)(in_EDX + 0x34));
  piVar1 = (int *)piVar2[1];
  piVar2 = (int *)*piVar2;
  bVar3 = piVar2 == piVar1;
  if (!bVar3) {
    do {
      if (*piVar2 == unaff_ESI) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    bVar3 = piVar2 == piVar1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),!bVar3);
}


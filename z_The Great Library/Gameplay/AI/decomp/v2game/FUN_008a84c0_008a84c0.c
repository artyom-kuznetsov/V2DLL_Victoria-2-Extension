// FUN_008a84c0 @ 008a84c0 body=[[008a84c0, 008a84e0]]


undefined4 FUN_008a84c0(void)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int in_EDX;
  bool bVar3;
  
  piVar1 = *(int **)(in_EAX + 0x24);
  piVar2 = *(int **)(in_EAX + 0x20);
  bVar3 = piVar2 == piVar1;
  if (!bVar3) {
    do {
      if (*piVar2 == in_EDX) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    bVar3 = piVar2 == piVar1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),!bVar3);
}


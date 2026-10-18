// FUN_005cbec0 @ 005cbec0  (requested 005CBEC0, first bytes: 83 79 74 00 56 74 46 8B)


uint FUN_005cbec0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_EAX;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x74) == 0) {
LAB_005cbf0d:
    return (uint)in_EAX & 0xffffff00;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x74) + 0x14);
  iVar2 = *(int *)(*(int *)(in_ECX + 0x74) + 0x10);
  for (piVar3 = *(int **)(iVar1 + 0x20); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == in_ECX) {
      in_EAX = (int *)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8);
      if (7 < (int)in_EAX) goto LAB_005cbefb;
      goto LAB_005cbf0d;
    }
  }
  in_EAX = *(int **)(iVar2 + 0x20);
  do {
    if (in_EAX == (int *)0x0) {
LAB_005cbefb:
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    if (*in_EAX == in_ECX) {
      if ((int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 8) {
        return (uint)in_EAX & 0xffffff00;
      }
      goto LAB_005cbefb;
    }
    in_EAX = (int *)in_EAX[2];
  } while( true );
}


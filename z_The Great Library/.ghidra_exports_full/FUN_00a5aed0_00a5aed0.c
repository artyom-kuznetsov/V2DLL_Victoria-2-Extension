// FUN_00a5aed0 @ 00a5aed0 body=[[00a5aed0, 00a5af1a]]


uint FUN_00a5aed0(void)

{
  uint in_EAX;
  int *piVar1;
  int in_EDX;
  bool bVar2;
  
  piVar1 = *(int **)(in_EDX + 0xc4);
  while( true ) {
    if ((piVar1 < *(int **)(in_EDX + 0xc4)) || (*(int **)(in_EDX + 200) <= piVar1)) {
      return in_EAX & 0xffffff00;
    }
    if (*piVar1 == 0x8a) {
      bVar2 = *(short *)(in_EDX + 0x94) == 0;
    }
    else {
      in_EAX = *piVar1 - 0xa1;
      if (in_EAX != 0) break;
      bVar2 = *(int *)(in_EDX + 0x70) == 0;
    }
    in_EAX = 0;
    if (bVar2) break;
    piVar1 = piVar1 + 1;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


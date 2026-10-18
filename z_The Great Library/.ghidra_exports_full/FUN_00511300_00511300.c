// FUN_00511300 @ 00511300 body=[[00511300, 0051133e]]


uint FUN_00511300(void)

{
  uint in_EAX;
  int *piVar1;
  int in_EDX;
  int unaff_EDI;
  
  piVar1 = *(int **)(unaff_EDI + 0xe8c);
  while ((*(int **)(unaff_EDI + 0xe8c) <= piVar1 && (piVar1 < *(int **)(unaff_EDI + 0xe90)))) {
    in_EAX = *(uint *)(*piVar1 + 0xc);
    piVar1 = piVar1 + 1;
    if (in_EAX == *(uint *)(in_EDX + 4)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


// FUN_005d9080 @ 005d9080 body=[[005d9080, 005d90a3]]


uint FUN_005d9080(void)

{
  int *piVar1;
  int iVar2;
  int in_EDX;
  
  piVar1 = *(int **)(in_EDX + 0x38);
  do {
    if (piVar1 == (int *)0x0) {
      return (uint)(0 < *(int *)(in_EDX + 0x40));
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(char *)(*(int *)(iVar2 + 0x38) + 0x40) != '\0');
  return (uint)piVar1 & 0xffffff00;
}


// FUN_0092f080 @ 0092f080 body=[[0092f080, 0092f097]]


int FUN_0092f080(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int in_EDX;
  
  piVar1 = *(int **)(in_EAX + 0x50);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 0x24) != in_EDX);
  return iVar2;
}


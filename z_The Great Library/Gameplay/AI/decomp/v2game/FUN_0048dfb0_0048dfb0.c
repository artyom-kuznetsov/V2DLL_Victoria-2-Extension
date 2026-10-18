// FUN_0048dfb0 @ 0048dfb0 body=[[0048dfb0, 0048dfb8] [0048dfc0, 0048dfee]]


undefined4 FUN_0048dfb0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 4);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (((*(char *)(iVar2 + 0x170) != '\0') || (*(int *)(iVar2 + 300) == 0)) ||
          (*(int *)(iVar2 + 0x158) == 0));
  return *(undefined4 *)(iVar2 + 0x58);
}


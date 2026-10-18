// FUN_005d0610 @ 005d0610 body=[[005d0610, 005d0648]]


int FUN_005d0610(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = *(int **)(in_EAX + 0x90); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = iVar2 + *(int *)(*(int *)(*piVar1 + 0x38) + 600) / 1000;
  }
  return iVar2;
}


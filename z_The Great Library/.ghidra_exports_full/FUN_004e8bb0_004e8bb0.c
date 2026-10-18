// FUN_004e8bb0 @ 004e8bb0 body=[[004e8bb0, 004e8bcc]]


int FUN_004e8bb0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = 0;
  for (piVar1 = *(int **)(in_ECX + 0xa4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar2 = iVar2 + *(int *)(*piVar1 + 0x58);
  }
  return iVar2;
}


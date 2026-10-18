// FUN_005cd540 @ 005cd540 body=[[005cd540, 005cd575]]


int FUN_005cd540(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  
  piVar1 = *(int **)(in_EAX + 0x38);
  iVar4 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x28))();
    if ((cVar3 != '\0') && (*(char *)(piVar2[0xe] + 0x3c) == '\0')) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


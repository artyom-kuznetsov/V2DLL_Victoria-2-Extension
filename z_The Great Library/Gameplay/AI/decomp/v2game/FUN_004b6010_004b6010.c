// FUN_004b6010 @ 004b6010 body=[[004b6010, 004b604f]]


undefined4 FUN_004b6010(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0xd8);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar4 = (**(code **)(*piVar2 + 0x34))();
  } while (((cVar4 == '\0') || (iVar3 = piVar2[0x22], iVar3 == 0)) ||
          (*(char *)(iVar3 + 0x3a) == '\0'));
  return 1;
}


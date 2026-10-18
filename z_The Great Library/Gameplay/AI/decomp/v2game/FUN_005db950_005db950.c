// FUN_005db950 @ 005db950 body=[[005db950, 005db95c] [005db960, 005db9a3]]


int FUN_005db950(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 *in_EAX;
  int iVar5;
  
  piVar1 = (int *)*in_EAX;
  iVar5 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar4 = (**(code **)(*piVar2 + 0x38))();
    if (cVar4 != '\0') {
      piVar2 = (int *)piVar2[0xe];
      while (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[2];
        if ((*(int *)(iVar3 + 0x30) != 0) &&
           (*(char *)(*(int *)(*(int *)(iVar3 + 0x30) + 0x68) + 0x42) != '\0')) {
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
  return iVar5;
}


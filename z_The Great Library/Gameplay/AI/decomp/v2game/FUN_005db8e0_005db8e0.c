// FUN_005db8e0 @ 005db8e0 body=[[005db8e0, 005db8ec] [005db8f0, 005db912]]


int FUN_005db8e0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  
  piVar1 = (int *)*in_EAX;
  iVar4 = 0;
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x38))();
    if ((cVar3 != '\0') && (1 < piVar2[0x10])) {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


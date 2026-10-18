// FUN_005db920 @ 005db920 body=[[005db920, 005db949]]


int FUN_005db920(void)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  
  puVar1 = (undefined4 *)*in_EAX;
  iVar4 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    cVar3 = (**(code **)(*piVar2 + 0x38))();
    if (cVar3 != '\0') {
      iVar4 = iVar4 + 1;
    }
  }
  return iVar4;
}


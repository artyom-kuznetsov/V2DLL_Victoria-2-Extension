// FUN_005db9b0 @ 005db9b0  (requested 005DB9B0, first bytes: 53 56 8B 30 33 DB 85 F6)


int FUN_005db9b0(void)

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
    if (cVar3 != '\0') {
      iVar4 = iVar4 + piVar2[0x10];
    }
  }
  return iVar4;
}


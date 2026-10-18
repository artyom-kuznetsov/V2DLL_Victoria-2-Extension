// FUN_005dc560 @ 005dc560  (requested 005DC560, first bytes: 8B 11 33 C0 85 D2 74 27)


int FUN_005dc560(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  piVar1 = (int *)*in_ECX;
  iVar3 = 0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar4 = 0;
    for (iVar2 = *(int *)(iVar2 + 0x38); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar3 + iVar4;
  }
  return iVar3;
}


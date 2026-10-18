// FUN_005e53d0 @ 005e53d0 body=[[005e53d0, 005e5498]]


/* WARNING: Type propagation algorithm not settling */

bool FUN_005e53d0(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  
  iVar4 = DAT_01258a98;
  iVar3 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0x40)) {
    iVar3 = DAT_01258a94;
  }
  if ((iVar3 == 0) || (iVar3 = FUN_009c1d40(), iVar3 == 0)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(iVar3 + -8);
  }
  *(int **)(in_ECX + 0x3c) = piVar6;
  if (piVar6 == (int *)0x0) {
    return false;
  }
  if (0x1268 < *(uint *)(in_ECX + 0x68)) {
    iVar4 = DAT_01258a94;
  }
  if ((iVar4 == 0) || (iVar4 = FUN_009c1d40(), iVar4 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + -8);
  }
  *(int **)(in_ECX + 100) = piVar5;
  if (piVar5 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar5 + 0x38))();
    cVar2 = (**(code **)(*piVar6 + 0x38))();
    if ((cVar2 == cVar1) && (piVar5[0x17] == 0)) {
      return piVar6[0x15] < 1;
    }
  }
  return false;
}


// FUN_005ddbf0 @ 005ddbf0 body=[[005ddbf0, 005ddcad]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005ddbf0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  iVar1 = DAT_01258a98;
  iVar4 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0x40)) {
    iVar4 = DAT_01258a94;
  }
  if ((iVar4 == 0) || (iVar4 = FUN_009c1d40(), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  if (0x1268 < *(uint *)(in_ECX + 0x68)) {
    iVar1 = DAT_01258a94;
  }
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_009c1d40();
  }
  *(int **)(in_ECX + 100) = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_005b6140();
  }
  cVar2 = (**(code **)(*piVar3 + 0x20))();
  if ((cVar2 != '\0') && (cVar2 = FUN_005cbc60(), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}


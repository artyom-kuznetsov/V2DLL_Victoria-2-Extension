// FUN_005cfa20 @ 005cfa20 body=[[005cfa20, 005cfa80]]


void FUN_005cfa20(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  int iVar4;
  undefined8 uVar5;
  
  piVar2 = *(int **)(in_EAX + 0x90);
  iVar3 = 0;
  *unaff_ESI = 0;
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar4 = *unaff_ESI;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    iVar4 = iVar4 + *(int *)(iVar1 + 0x3c);
    iVar3 = iVar3 + 1;
  } while (piVar2 != (int *)0x0);
  *unaff_ESI = iVar4;
  if (0 < iVar3) {
    uVar5 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar5,iVar3 * 1000,iVar3 * 1000 >> 0x1f);
    *unaff_ESI = iVar3;
    return;
  }
  return;
}


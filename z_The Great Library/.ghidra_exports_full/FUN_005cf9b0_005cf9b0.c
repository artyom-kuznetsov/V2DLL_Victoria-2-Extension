// FUN_005cf9b0 @ 005cf9b0 body=[[005cf9b0, 005cfa1f]]


void FUN_005cf9b0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int *unaff_ESI;
  undefined8 uVar4;
  
  piVar1 = *(int **)(in_EAX + 0x90);
  *unaff_ESI = 0;
  while (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    iVar2 = *(int *)(iVar3 + 0x74);
    piVar1 = (int *)piVar1[2];
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x164) == '\0')) {
      iVar3 = *(int *)(iVar3 + 0x40);
    }
    else {
      iVar3 = 0;
    }
    *unaff_ESI = *unaff_ESI + iVar3;
  }
  if (0 < *(int *)(in_EAX + 0x98)) {
    iVar3 = *(int *)(in_EAX + 0x98) * 1000;
    uVar4 = __allmul(*unaff_ESI,*unaff_ESI >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
    *unaff_ESI = iVar3;
  }
  return;
}


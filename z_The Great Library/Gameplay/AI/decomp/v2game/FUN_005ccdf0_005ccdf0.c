// FUN_005ccdf0 @ 005ccdf0 body=[[005ccdf0, 005cce09] [005cce10, 005cce7f]]


void FUN_005ccdf0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int *unaff_EDI;
  undefined8 uVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  if (in_ECX == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(in_ECX + 0x38);
  }
  piVar3 = (int *)*piVar3;
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if (0 < *(int *)(*(int *)(iVar1 + 0x38) + 0x22c)) {
        iVar2 = iVar2 + *(int *)(iVar1 + 0x3c);
      }
      iVar4 = iVar4 + *(int *)(iVar1 + 0x3c);
    } while (piVar3 != (int *)0x0);
    if (iVar4 != 0) {
      if (0x39580d < iVar2 + 0x189373U) {
        uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar2 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
        *unaff_EDI = iVar2;
        return;
      }
      *unaff_EDI = (iVar2 * 1000) / iVar4;
      return;
    }
  }
  *unaff_EDI = -1;
  return;
}


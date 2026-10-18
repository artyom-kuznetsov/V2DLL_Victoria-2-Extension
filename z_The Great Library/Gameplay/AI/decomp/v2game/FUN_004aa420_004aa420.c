// FUN_004aa420 @ 004aa420 body=[[004aa420, 004aa4a5]]


void FUN_004aa420(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  undefined8 uVar4;
  
  iVar3 = *(int *)(DAT_0125870c + 0x2ac0) / 2;
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x78) - iVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar3 = iVar3 * 1000;
  iVar2 = iVar1 * 1000;
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else if (iVar2 + 0x189373U < 0x39580e) {
    iVar3 = (iVar1 * 1000000) / iVar3;
  }
  else {
    uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
  }
  *(int *)(unaff_EDI + 0x184) = iVar3;
  if (iVar3 < 0) {
    *(int *)(unaff_EDI + 0x184) = -iVar3;
  }
  return;
}


// FUN_00415330 @ 00415330 body=[[00415330, 004153aa]]


void FUN_00415330(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_EDI;
  undefined8 uVar4;
  
  cVar1 = (**(code **)(**(int **)(unaff_ESI + 0x188) + 0x24))();
  if (cVar1 == '\0') {
    *unaff_EDI = 0;
    return;
  }
  iVar3 = *(int *)(*(int *)(unaff_ESI + 0x188) + 0x68);
  iVar2 = iVar3 * 1000;
  if (iVar2 + 0x189373U < 0x39580e) {
    *unaff_EDI = (iVar3 * 1000000) / 8000;
    return;
  }
  uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
  iVar3 = __alldiv(uVar4,8000,0);
  *unaff_EDI = iVar3;
  return;
}


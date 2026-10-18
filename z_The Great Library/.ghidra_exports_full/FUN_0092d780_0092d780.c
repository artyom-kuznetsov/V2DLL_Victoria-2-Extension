// FUN_0092d780 @ 0092d780 body=[[0092d780, 0092d7f8]]


void FUN_0092d780(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  undefined8 uVar3;
  
  iVar1 = *(int *)(in_EAX + 0x3c) - DAT_00f0df74;
  if (iVar1 < 1) {
    *unaff_EDI = 0;
    return;
  }
  iVar2 = DAT_0131b1e8 - DAT_00f0df74;
  if (iVar2 == 0) {
    *unaff_EDI = -1;
    return;
  }
  if (iVar1 + 0x189373U < 0x39580e) {
    *unaff_EDI = (iVar1 * 1000) / iVar2;
    return;
  }
  uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar3,iVar2,iVar2 >> 0x1f);
  *unaff_EDI = iVar1;
  return;
}


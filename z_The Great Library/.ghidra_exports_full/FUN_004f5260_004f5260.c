// FUN_004f5260 @ 004f5260 body=[[004f5260, 004f52e5]]


void FUN_004f5260(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *unaff_EDI;
  undefined8 uVar3;
  
  if (*(int *)(in_ECX + 0x20) == 0) {
    *unaff_EDI = 0;
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x128) * 1000;
  iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 300) + 0x128) * *(int *)(in_ECX + 0x20) * 1000
  ;
  if (iVar2 == 0) {
    *unaff_EDI = -1;
    return;
  }
  if (iVar1 + 0x189373U < 0x39580e) {
    *unaff_EDI = (*(int *)(in_ECX + 0x128) * 1000000) / iVar2;
    return;
  }
  uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
  iVar1 = __alldiv(uVar3,iVar2,iVar2 >> 0x1f);
  *unaff_EDI = iVar1;
  return;
}


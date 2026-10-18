// FUN_0051f8c0 @ 0051f8c0 body=[[0051f8c0, 0051f984]]


void FUN_0051f8c0(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *unaff_EDI;
  undefined8 uVar5;
  
  if (param_1 == '\0') {
    iVar2 = *(int *)(in_ECX + 0x164);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x168);
  }
  iVar1 = *(int *)(in_ECX + 0x160);
  if (iVar2 <= iVar1) {
    *unaff_EDI = 0;
    return;
  }
  if (iVar1 == 0) {
    *unaff_EDI = 1000;
    return;
  }
  iVar4 = iVar1 * 1000;
  iVar3 = (iVar2 - iVar1) * 1000;
  if (iVar4 == 0) {
    iVar4 = -1;
  }
  else if (iVar3 + 0x189373U < 0x39580e) {
    iVar4 = ((iVar2 - iVar1) * 1000000) / iVar4;
  }
  else {
    uVar5 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
    iVar4 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
  }
  if (iVar4 < 0) {
    *unaff_EDI = 0;
    return;
  }
  if (1000 < iVar4) {
    iVar4 = 1000;
  }
  *unaff_EDI = iVar4;
  return;
}


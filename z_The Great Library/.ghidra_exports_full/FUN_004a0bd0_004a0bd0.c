// FUN_004a0bd0 @ 004a0bd0 body=[[004a0bd0, 004a0c31]]


void FUN_004a0bd0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar3 = in_EAX[1];
  iVar1 = *(int *)(unaff_EDI + 0x212c);
  iVar2 = *(int *)(iVar1 + 4) + -1;
  iVar4 = *in_EAX;
  if (iVar2 < *in_EAX) {
    iVar4 = iVar2;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = *(int *)(iVar1 + 8) + -1;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  iVar3 = *(int *)(*(int *)(unaff_EDI + 0x2aa4) +
                  (uint)*(ushort *)
                         (*(int *)(iVar1 + 0x18) * iVar3 + *(int *)(iVar1 + 0xc) * iVar4 +
                         *(int *)(iVar1 + 0x20)) * 4);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2a) == '\0')) {
    return;
  }
  return;
}


// FUN_005daca0 @ 005daca0 body=[[005daca0, 005dacd4]]


void FUN_005daca0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  iVar2 = *in_EAX;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    FUN_0047cf30(iVar2);
    iVar2 = iVar1;
  }
  return;
}


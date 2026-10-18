// FUN_004e9500 @ 004e9500 body=[[004e9500, 004e9534]]


void FUN_004e9500(void)

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
    iVar1 = *(int *)(iVar2 + 0x3c);
    FUN_0042b730(iVar2);
    iVar2 = iVar1;
  }
  return;
}


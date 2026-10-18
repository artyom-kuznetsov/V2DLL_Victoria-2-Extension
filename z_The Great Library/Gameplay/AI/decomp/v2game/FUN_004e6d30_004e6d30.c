// FUN_004e6d30 @ 004e6d30 body=[[004e6d30, 004e6d64]]


void FUN_004e6d30(void)

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
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  return;
}


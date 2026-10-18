// FUN_006a56f0 @ 006a56f0 body=[[006a56f0, 006a5728]]


void FUN_006a56f0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  iVar2 = *(int *)(in_EAX + 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    FUN_0057aab0(iVar2);
    iVar2 = iVar1;
  }
  return;
}


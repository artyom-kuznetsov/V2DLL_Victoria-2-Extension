// FUN_004c25f0 @ 004c25f0 body=[[004c25f0, 004c2604] [004c2610, 004c2636]]


void FUN_004c25f0(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_004c2640();
  iVar1 = 0;
  if (0 < unaff_ESI) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + 0x1c + *in_EAX) =
           *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xb0;
    } while (iVar1 < unaff_ESI);
  }
  *(undefined1 *)(in_EAX + 4) = 1;
  return;
}


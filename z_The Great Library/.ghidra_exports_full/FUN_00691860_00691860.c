// FUN_00691860 @ 00691860 body=[[00691860, 00691875] [00691880, 006918f0]]


void FUN_00691860(int param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int unaff_EDI;
  
  while( true ) {
    iVar3 = in_EAX * 2 + 2;
    if (param_1 <= iVar3) break;
    iVar1 = *(int *)(unaff_EDI + -4 + iVar3 * 4);
    iVar2 = *(int *)(unaff_EDI + iVar3 * 4);
    if (*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <
        *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0)) {
      iVar3 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(unaff_EDI + in_EAX * 4) = *(undefined4 *)(unaff_EDI + iVar3 * 4);
    in_EAX = iVar3;
  }
  if (iVar3 == param_1) {
    *(undefined4 *)(unaff_EDI + in_EAX * 4) = *(undefined4 *)(unaff_EDI + -4 + param_1 * 4);
  }
  FUN_00691970();
  return;
}


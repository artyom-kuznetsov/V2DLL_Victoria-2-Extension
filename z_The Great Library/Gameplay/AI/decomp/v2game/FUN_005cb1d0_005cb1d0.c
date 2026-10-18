// FUN_005cb1d0 @ 005cb1d0 body=[[005cb1d0, 005cb22b]]


void FUN_005cb1d0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = param_1;
  FUN_005dadd0(unaff_ESI + 0x38,&param_1);
  *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(unaff_ESI + 0xc0);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(unaff_ESI + 0xc4);
  *(int *)(iVar1 + 0x74) = unaff_ESI;
  iVar2 = FUN_005cabe0(unaff_ESI);
  iVar1 = *(int *)(unaff_ESI + 0x1a0);
  *(int *)(unaff_ESI + 0x1a0) = iVar2;
  if ((iVar2 != iVar1) || (*(char *)(unaff_ESI + 0xbc) != '\0')) {
    FUN_005cae80(unaff_ESI);
    *(undefined1 *)(unaff_ESI + 0xbc) = 0;
  }
  return;
}


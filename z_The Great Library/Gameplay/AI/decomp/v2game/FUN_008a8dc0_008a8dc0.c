// FUN_008a8dc0 @ 008a8dc0 body=[[008a8dc0, 008a8e6a]]


void FUN_008a8dc0(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x24);
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    *unaff_ESI = *(undefined4 *)(iVar1 + 8);
    unaff_ESI[1] = uVar2;
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0x10) * 4);
    uVar2 = *(undefined4 *)(iVar1 + 300);
    *unaff_ESI = *(undefined4 *)(iVar1 + 0x128);
    unaff_ESI[1] = uVar2;
    return;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    cVar3 = (**(code **)(**(int **)(iVar1 + 0x14) + 0x20))();
    if (cVar3 != '\0') {
      iVar1 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x24) + 0x14) + 100);
      uVar2 = *(undefined4 *)(iVar1 + 300);
      *unaff_ESI = *(undefined4 *)(iVar1 + 0x128);
      unaff_ESI[1] = uVar2;
      return;
    }
  }
  iVar1 = *(int *)(unaff_EDI + 0x24);
  if (*(int *)(iVar1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0x18) * 4);
    uVar2 = *(undefined4 *)(iVar1 + 300);
    *unaff_ESI = *(undefined4 *)(iVar1 + 0x128);
    unaff_ESI[1] = uVar2;
    return;
  }
  uVar2 = *(undefined4 *)(iVar1 + 8);
  unaff_ESI[1] = *(undefined4 *)(iVar1 + 0xc);
  *unaff_ESI = uVar2;
  return;
}


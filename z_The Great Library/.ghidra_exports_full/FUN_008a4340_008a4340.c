// FUN_008a4340 @ 008a4340 body=[[008a4340, 008a43a5]]


void FUN_008a4340(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  cVar1 = FUN_008a42c0();
  if (((cVar1 != '\0') &&
      (((iVar2 = *(int *)(in_ECX + 0x20), iVar2 != 0 ||
        (iVar2 = *(int *)(param_1 + 0x10), 0 < iVar2)) ||
       (iVar2 = *(int *)(param_1 + 0x34), 0 < iVar2)))) &&
     (iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4), iVar2 != 0)) {
    FUN_004bd400(iVar2,in_ECX + 0x24,*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44),
                 *(undefined4 *)(in_ECX + 0x48));
  }
  return;
}


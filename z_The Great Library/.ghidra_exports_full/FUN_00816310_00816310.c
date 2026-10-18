// FUN_00816310 @ 00816310 body=[[00816310, 008163a7]]


void FUN_00816310(char *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  undefined **local_10 [3];
  
  pcVar2 = param_1;
  if (*(uint *)(unaff_ESI + 8) <= *(int *)(unaff_ESI + 0x10) + 1U) {
    FUN_00815c90(unaff_ESI);
  }
  iVar4 = *(int *)(unaff_ESI + 0xc);
  if (iVar4 == 0) {
    iVar4 = *(int *)(unaff_ESI + 8);
  }
  iVar4 = iVar4 + -1;
  if (*(int *)(*(int *)(unaff_ESI + 4) + iVar4 * 4) == 0) {
    iVar3 = FUN_00aae9af(0x10);
    if (iVar3 == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_10,&param_1);
      local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_10,&DAT_00e6fb20);
    }
    *(int *)(*(int *)(unaff_ESI + 4) + iVar4 * 4) = iVar3;
  }
  puVar1 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)pcVar2;
    puVar1[1] = *(undefined4 *)(pcVar2 + 4);
    puVar1[2] = *(undefined4 *)(pcVar2 + 8);
    puVar1[3] = *(undefined4 *)(pcVar2 + 0xc);
  }
  *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
  *(int *)(unaff_ESI + 0xc) = iVar4;
  return;
}


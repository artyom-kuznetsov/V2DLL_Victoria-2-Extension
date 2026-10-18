// FUN_00a46b50 @ 00a46b50 body=[[00a46b50, 00a46bf4]]


void FUN_00a46b50(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  uint uVar4;
  undefined **local_14 [3];
  char *local_8;
  
  if (((*(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 0x10) & 1U) == 0) &&
     (*(uint *)(unaff_ESI + 8) <= *(int *)(unaff_ESI + 0x10) + 2U >> 1)) {
    FUN_00a46dc0(unaff_ESI);
  }
  uVar3 = *(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 0x10);
  uVar4 = uVar3 >> 1;
  if (*(uint *)(unaff_ESI + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(unaff_ESI + 8);
  }
  if (*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) == 0) {
    iVar2 = FUN_00aae9af(0x10);
    if (iVar2 == 0) {
      local_8 = (char *)0x0;
      std::exception::exception((exception *)local_14,&local_8);
      local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_14,&DAT_00e6fb20);
    }
    *(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) = iVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) + (uVar3 & 1) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
  return;
}


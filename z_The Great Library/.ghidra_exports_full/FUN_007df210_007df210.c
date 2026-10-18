// FUN_007df210 @ 007df210 body=[[007df210, 007df2b2]]


void FUN_007df210(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  uint uVar4;
  undefined **local_14 [3];
  char *local_8;
  
  if (((*(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 0x10) & 7U) == 0) &&
     (*(uint *)(unaff_ESI + 8) <= *(int *)(unaff_ESI + 0x10) + 8U >> 3)) {
    FUN_007df330(unaff_ESI);
  }
  uVar3 = *(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 0x10);
  uVar4 = uVar3 >> 3;
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
  puVar1 = (undefined2 *)(*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) + (uVar3 & 7) * 2);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
  return;
}


// FUN_007d83b0 @ 007d83b0 body=[[007d83b0, 007d8444]]


void FUN_007d83b0(char *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  undefined **local_10 [3];
  
  pcVar2 = param_1;
  if (*(uint *)(unaff_ESI + 8) <= *(int *)(unaff_ESI + 0x10) + 1U) {
    FUN_00815c90(unaff_ESI);
  }
  uVar4 = *(int *)(unaff_ESI + 0xc) + *(int *)(unaff_ESI + 0x10);
  if (*(uint *)(unaff_ESI + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(unaff_ESI + 8);
  }
  if (*(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) == 0) {
    iVar3 = FUN_00aae9af(0x10);
    if (iVar3 == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_10,&param_1);
      local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_10,&DAT_00e6fb20);
    }
    *(int *)(*(int *)(unaff_ESI + 4) + uVar4 * 4) = iVar3;
  }
  puVar1 = *(undefined8 **)(*(int *)(unaff_ESI + 4) + uVar4 * 4);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)pcVar2;
    puVar1[1] = *(undefined8 *)(pcVar2 + 8);
  }
  *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
  return;
}


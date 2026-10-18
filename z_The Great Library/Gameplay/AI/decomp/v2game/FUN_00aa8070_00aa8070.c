// FUN_00aa8070 @ 00aa8070 body=[[00aa8070, 00aa8105]]


void FUN_00aa8070(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined **local_14 [3];
  char *local_8;
  
  if (*(uint *)(in_ECX + 8) <= *(int *)(in_ECX + 0x10) + 1U) {
    FUN_00aa7890(1);
  }
  uVar3 = *(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10);
  if (*(uint *)(in_ECX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_ECX + 8);
  }
  if (*(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) == 0) {
    iVar2 = FUN_00aae9af(0xc);
    if (iVar2 == 0) {
      local_8 = (char *)0x0;
      std::exception::exception((exception *)local_14,&local_8);
      local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_14,&DAT_00e6fb20);
    }
    *(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) = iVar2;
  }
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 4) + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  return;
}


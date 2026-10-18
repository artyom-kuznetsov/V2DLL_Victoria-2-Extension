// FUN_00528c00 @ 00528c00 body=[[00528c00, 00528c56] [00528c5a, 00528c5e]]


void FUN_00528c00(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  
  iVar1 = **(int **)(in_EAX + 0xa0);
  *(undefined4 *)(iVar1 + 0x10) = *param_1;
  *(undefined4 *)(iVar1 + 0x14) = param_1[1];
  iVar1 = *(int *)(*(int *)(in_EAX + 0xa0) + 4);
  *(undefined4 *)(iVar1 + 0x10) = param_1[2];
  *(undefined4 *)(iVar1 + 0x14) = param_1[3];
  iVar1 = *(int *)(*(int *)(in_EAX + 0xa0) + 8);
  uVar2 = param_1[5];
  *(undefined4 *)(iVar1 + 0x10) = param_1[4];
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  return;
}


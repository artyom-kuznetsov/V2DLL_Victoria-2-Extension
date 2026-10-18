// FUN_00b0c320 @ 00b0c320 body=[[00b0c320, 00b0c34f]]


void FUN_00b0c320(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x28);
  uVar3 = iVar2 + 1;
  *(uint *)(in_ECX + 0x28) = uVar3;
  if (*(uint *)(in_ECX + 0x2c) < uVar3) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x24) + -4 + *(int *)(in_ECX + 0x28) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


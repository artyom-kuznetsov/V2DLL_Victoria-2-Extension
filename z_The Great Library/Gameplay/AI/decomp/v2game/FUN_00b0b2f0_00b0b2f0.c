// FUN_00b0b2f0 @ 00b0b2f0 body=[[00b0b2f0, 00b0b31f]]


void FUN_00b0b2f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x14);
  uVar3 = iVar2 + 1;
  *(uint *)(in_ECX + 0x14) = uVar3;
  if (*(uint *)(in_ECX + 0x18) < uVar3) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + -4 + *(int *)(in_ECX + 0x14) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


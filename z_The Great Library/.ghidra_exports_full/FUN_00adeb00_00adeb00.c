// FUN_00adeb00 @ 00adeb00 body=[[00adeb00, 00adeb2f]]


void FUN_00adeb00(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x24);
  uVar3 = iVar2 + 1;
  *(uint *)(in_ECX + 0x24) = uVar3;
  if (*(uint *)(in_ECX + 0x28) < uVar3) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20) + -4 + *(int *)(in_ECX + 0x24) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


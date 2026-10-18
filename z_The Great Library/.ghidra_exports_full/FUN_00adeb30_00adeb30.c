// FUN_00adeb30 @ 00adeb30 body=[[00adeb30, 00adeb5f]]


void FUN_00adeb30(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x34);
  uVar3 = iVar2 + 1;
  *(uint *)(in_ECX + 0x34) = uVar3;
  if (*(uint *)(in_ECX + 0x38) < uVar3) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x30) + -4 + *(int *)(in_ECX + 0x34) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}


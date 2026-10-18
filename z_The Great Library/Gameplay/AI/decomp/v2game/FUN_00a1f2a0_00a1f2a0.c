// FUN_00a1f2a0 @ 00a1f2a0 body=[[00a1f2a0, 00a1f2ff]]


void FUN_00a1f2a0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_88 [132];
  
  local_94 = param_1;
  local_98 = param_1;
  *(undefined4 *)(in_ECX + 0xf4) = param_1;
  D3DXMatrixScaling(local_88,param_1);
  puVar1 = (undefined4 *)FUN_007eb4f0(&local_98);
  puVar3 = (undefined4 *)(in_ECX + 0x54);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


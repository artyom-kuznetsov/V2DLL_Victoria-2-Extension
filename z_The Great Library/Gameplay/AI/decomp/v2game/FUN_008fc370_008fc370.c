// FUN_008fc370 @ 008fc370 body=[[008fc370, 008fc3c6]]


uint FUN_008fc370(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  uVar3 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x118c + iVar1);
  uVar2 = *(uint *)(iVar1 + 0x11cc);
  iVar1 = *(int *)(uVar2 + 4 + uVar3 * 8);
  if ((*(int *)(in_ECX + 0x24) <= iVar1) &&
     ((*(int *)(in_ECX + 0x24) < iVar1 ||
      (uVar2 = *(uint *)(uVar2 + uVar3 * 8), *(uint *)(in_ECX + 0x20) <= uVar2)))) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


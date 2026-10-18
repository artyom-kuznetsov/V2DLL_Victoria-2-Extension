// FUN_008fd2a0 @ 008fd2a0 body=[[008fd2a0, 008fd2f6]]


uint FUN_008fd2a0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x28);
  iVar2 = FUN_005e64d0();
  iVar1 = *(int *)(iVar1 + 0x28);
  uVar3 = *(uint *)(iVar2 + 0x10);
  iVar2 = *(int *)(uVar3 + 4 + iVar1 * 8);
  if ((*(int *)(in_ECX + 0x24) <= iVar2) &&
     ((*(int *)(in_ECX + 0x24) < iVar2 ||
      (uVar3 = *(uint *)(uVar3 + iVar1 * 8), *(uint *)(in_ECX + 0x20) <= uVar3)))) {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffff00;
}


// FUN_008f4580 @ 008f4580 body=[[008f4580, 008f463f]]


int FUN_008f4580(int param_1)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x20);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    iVar2 = FUN_008a8dc0();
    iVar2 = *(int *)(iVar2 + 4);
  }
  if (*(char *)(in_ECX + 0x24) != '\0') {
    iVar2 = FUN_008a8dc0();
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4
                                               ) + 0xe64) + 0x50) + 0x20);
  }
  if (*(char *)(in_ECX + 0x19) != '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0xc) * 4) + 0xe64) + 0x50) + 0x20);
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (iVar1 == iVar2)) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}


// FUN_007c6cc0 @ 007c6cc0 body=[[007c6cc0, 007c6d33]]


undefined4 FUN_007c6cc0(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_ECX + 0x178) + *(int *)(in_ECX + 0x174) + *(int *)(in_ECX + 0x170) +
          *(int *)(in_ECX + 0x16c) + *(int *)(in_ECX + 0x168) + *(int *)(in_ECX + 0x164) +
          *(int *)(in_ECX + 0x160) + *(int *)(in_ECX + 0x15c) + *(int *)(in_ECX + 0x158);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  iVar1 < *(int *)(in_EDX + 0x178) + *(int *)(in_EDX + 0x174) +
                          *(int *)(in_EDX + 0x170) + *(int *)(in_EDX + 0x16c) +
                          *(int *)(in_EDX + 0x168) + *(int *)(in_EDX + 0x164) +
                          *(int *)(in_EDX + 0x160) + *(int *)(in_EDX + 0x15c) +
                          *(int *)(in_EDX + 0x158));
}


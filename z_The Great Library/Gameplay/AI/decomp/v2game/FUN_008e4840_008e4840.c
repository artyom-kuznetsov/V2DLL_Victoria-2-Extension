// FUN_008e4840 @ 008e4840 body=[[008e4840, 008e4872]]


ulonglong FUN_008e4840(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x18) != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x14) + 0x68);
    return CONCAT44(iVar1,(uint)(iVar1 == *(int *)(in_ECX + 0x1c)));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x68);
  return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(in_ECX + 0x1c));
}


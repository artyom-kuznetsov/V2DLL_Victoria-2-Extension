// FUN_004f3510 @ 004f3510 body=[[004f3510, 004f3528]]


ulonglong FUN_004f3510(void)

{
  int iVar1;
  int in_ECX;
  uint in_EDX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    return (ulonglong)
           CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(in_ECX + 0x20) < *(int *)(iVar1 + 0xc4));
  }
  return (ulonglong)in_EDX << 0x20;
}


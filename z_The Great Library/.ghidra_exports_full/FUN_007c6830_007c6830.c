// FUN_007c6830 @ 007c6830 body=[[007c6830, 007c68b1]]


uint FUN_007c6830(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x68) + 0x28);
  iVar3 = *(int *)(*(int *)(in_EAX + 0x68) + 0x28);
  if ((iVar3 == iVar1) && (*(char *)(*(int *)(in_EAX + 0x68) + 0x39c) != '\0')) {
    iVar1 = *(int *)(*(int *)(in_EAX + 0x1d4) + 0xb0);
    iVar3 = 0;
    if (((iVar1 != 0) && (DAT_01258734 != 0)) && (iVar1 != DAT_01258734 + 0x10)) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x80) + 8) + 1;
    }
    iVar1 = *(int *)(*(int *)(unaff_EDI + 0x1d4) + 0xb0);
    iVar2 = 0;
    if (((iVar1 != 0) && (DAT_01258734 != 0)) && (iVar1 != DAT_01258734 + 0x10)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x80) + 8) + 1;
    }
    return CONCAT31((int3)((uint)iVar2 >> 8),iVar3 < iVar2);
  }
  return (uint)(iVar3 < iVar1);
}


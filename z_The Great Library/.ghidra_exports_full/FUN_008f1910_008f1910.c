// FUN_008f1910 @ 008f1910 body=[[008f1910, 008f19bb]]


bool FUN_008f1910(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_009692c0();
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_009692c0();
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_009692c0();
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  return false;
}


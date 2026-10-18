// FUN_00b0c350 @ 00b0c350 body=[[00b0c350, 00b0c385]]


void FUN_00b0c350(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  uVar2 = iVar1 + 1;
  *(uint *)(in_ECX + 0x18) = uVar2;
  if (*(uint *)(in_ECX + 0x1c) < uVar2) {
    FUN_00b0d4d0(iVar1 + 2);
  }
  if (*(int *)(in_ECX + 0x14) + -0x3c + *(int *)(in_ECX + 0x18) * 0x3c != 0) {
    FUN_00b0d2c0();
    return;
  }
  return;
}


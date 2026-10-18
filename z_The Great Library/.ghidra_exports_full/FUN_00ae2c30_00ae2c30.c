// FUN_00ae2c30 @ 00ae2c30 body=[[00ae2c30, 00ae2c6b]]


void FUN_00ae2c30(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 0x10);
  if (*(ushort *)(in_ECX + 0x10) != 0) {
    iVar2 = 0;
    do {
      FUN_00ad0e30(*(undefined2 *)(*(int *)(in_ECX + 0xc) + iVar2));
      iVar2 = iVar2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


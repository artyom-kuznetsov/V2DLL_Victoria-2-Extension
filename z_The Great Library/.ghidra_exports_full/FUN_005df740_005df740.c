// FUN_005df740 @ 005df740 body=[[005df740, 005df7fa]]


void FUN_005df740(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if ((iVar2 == 0) || (iVar2 = FUN_009c1d40(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar2;
  FUN_005d1890();
  uVar1 = uRam0000007c;
  if (*(char *)(in_ECX + 100) != '\0') {
    iVar3 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -8;
    }
    uVar1 = uRam0000007c;
    if (*(char *)(iVar3 + 0x78) != '\0') {
      uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0xdc) + 0x58);
      iVar2 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x74) = uVar1;
        return;
      }
    }
  }
  uRam0000007c = uVar1;
  return;
}


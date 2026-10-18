// FUN_005e4c30 @ 005e4c30 body=[[005e4c30, 005e4cb9]]


void FUN_005e4c30(void)

{
  char cVar1;
  int iVar2;
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
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x78);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x80) = 0;
    }
    *(bool *)(iVar2 + 0x78) = cVar1 == '\0';
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(*(int *)(iVar2 + 0xdc) + 0x58);
      return;
    }
    *(undefined4 *)(iVar2 + 0x7c) = 0;
  }
  return;
}


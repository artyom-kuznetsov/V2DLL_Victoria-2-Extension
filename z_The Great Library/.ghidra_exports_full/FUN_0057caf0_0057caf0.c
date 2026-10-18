// FUN_0057caf0 @ 0057caf0 body=[[0057caf0, 0057cba5]]


uint FUN_0057caf0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 0x44);
  if ((uVar2 != 0) || (*(int *)(in_ECX + 0x48) != 0)) {
    iVar1 = DAT_01258a94;
    if (uVar2 < 0x1269) {
      iVar1 = DAT_01258a98;
    }
    if (iVar1 != 0) {
      iVar1 = FUN_009c1d40();
      uVar2 = 0;
      if (iVar1 != 0) {
        if (*(char *)(in_ECX + 0x54) != '\0') {
          uVar2 = FUN_004a4b10(iVar1 + 0x1c8);
          return uVar2;
        }
        if (*(int *)(in_ECX + 0x3c) != 0) {
          uVar2 = FUN_0052c9b0(iVar1);
          return uVar2;
        }
        uVar2 = FUN_0052d150();
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffff00;
}


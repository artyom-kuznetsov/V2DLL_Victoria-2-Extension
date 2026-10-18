// FUN_005df4b0 @ 005df4b0  (requested 005DF4B0, first bytes: 55 8B EC 83 E4 F8 83 EC)


undefined4 FUN_005df4b0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  bool bVar3;
  int local_18;
  
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
    if ((*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) & 0xfffffffcU) == 0) {
      iVar2 = *(int *)(in_ECX + 0x7c);
      bVar3 = false;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x7c);
      bVar3 = iVar2 == 0;
    }
    if (bVar3 || iVar2 < 0) {
      FUN_005ab7f0();
      iVar2 = *(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) >> 2;
      local_18 = 0;
      if (0 < iVar2) {
        do {
          cVar1 = FUN_005d0eb0(*(undefined1 *)(in_ECX + 0x89));
          if (cVar1 == '\0') {
            return 0;
          }
          local_18 = local_18 + 1;
        } while (local_18 < iVar2);
      }
    }
    return 1;
  }
  return 0;
}


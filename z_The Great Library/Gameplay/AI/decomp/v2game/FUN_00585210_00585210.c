// FUN_00585210 @ 00585210 body=[[00585210, 005852c4]]


undefined4 FUN_00585210(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = DAT_012587e4;
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x68) * 4) + 0x67c) == '\0'
      ) || (DAT_012586f1 != '\0')) {
    iVar2 = DAT_01258a94;
    if (*(uint *)(in_ECX + 0x40) < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_009c1d40();
    }
    *(int *)(in_ECX + 0x3c) = iVar2;
    if ((iVar2 != 0) && (*(int *)(in_ECX + 0x68) != 0)) {
      iVar1 = *(int *)(*(int *)(iVar1 + 4) + *(int *)(in_ECX + 0x68) * 4);
      iVar2 = *(int *)(iVar1 + 0x15c4);
      iVar1 = *(int *)(iVar1 + 0x15c0);
      FUN_00967f10();
      iVar3 = FUN_004d5d10();
      if (iVar3 <= iVar2 - iVar1) {
        return 1;
      }
    }
  }
  return 0;
}


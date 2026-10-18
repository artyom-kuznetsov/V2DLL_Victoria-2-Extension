// FUN_009c16d0 @ 009c16d0  (requested 009C16D0, first bytes: 55 8B EC 83 E4 F8 81 7D)


undefined4 FUN_009c16d0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (param_1 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_009c1d40();
    return uVar1;
  }
  return 0;
}


// FUN_0072c770 @ 0072c770 body=[[0072c770, 0072c819]]


void FUN_0072c770(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    iVar2 = DAT_01258a94;
    if (*(uint *)(in_ECX + 100) < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 != 0) {
      uVar1 = FUN_009c1d40();
      FUN_00695950(uVar1,in_ECX + 0x3c,*(undefined4 *)(in_ECX + 0x58));
      return;
    }
    FUN_00695950(0,in_ECX + 0x3c,*(undefined4 *)(in_ECX + 0x58));
    return;
  }
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 100) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_009c1d40();
    FUN_00694e20(uVar1,in_ECX + 0x3c,*(undefined4 *)(in_ECX + 0x58));
    return;
  }
  FUN_00694e20(0,in_ECX + 0x3c,*(undefined4 *)(in_ECX + 0x58));
  return;
}


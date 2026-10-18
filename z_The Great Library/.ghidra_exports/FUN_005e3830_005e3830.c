// FUN_005e3830 @ 005e3830  (requested 005E3830, first bytes: 55 8B EC 83 E4 F8 83 EC)


bool FUN_005e3830(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    if (iVar1 != 0) {
      iVar1 = iVar1 + -8;
      goto LAB_005e3875;
    }
  }
  iVar1 = 0;
LAB_005e3875:
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -8;
    }
    if (*(char *)(*(int *)(*(int *)(iVar1 + 0xdc) + 0x5c) + 0x2a) != '\0') {
      iVar1 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
      if (iVar1 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(iVar1 + -8);
      }
      iVar1 = (**(code **)(*piVar2 + 0x2c))();
      return *(int *)(iVar1 + 0x1b4) != 0;
    }
  }
  return false;
}


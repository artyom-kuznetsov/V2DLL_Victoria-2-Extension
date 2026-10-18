// FUN_00a047c0 @ 00a047c0 body=[[00a047c0, 00a04872]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a047c0(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = *(int *)(in_ECX + 0x4c);
  uVar1 = DAT_00f0d860;
  if ((iVar3 != 1) && (uVar1 = DAT_00f0d888, iVar3 != 0)) {
    if (iVar3 == 2) {
      piVar2 = (int *)FUN_009c16d0(DAT_00f0d890,DAT_00f0d894);
      (**(code **)(*piVar2 + 0x28))(in_ECX + 0x3c);
    }
    return;
  }
  iVar3 = DAT_01258a94;
  if (uVar1 < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
    (**(code **)(_DAT_00000000 + 0x20))(in_ECX + 0x3c);
    return;
  }
  piVar2 = (int *)FUN_009c1d40();
  (**(code **)(*piVar2 + 0x20))(in_ECX + 0x3c);
  return;
}


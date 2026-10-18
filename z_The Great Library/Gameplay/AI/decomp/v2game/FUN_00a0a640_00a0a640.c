// FUN_00a0a640 @ 00a0a640 body=[[00a0a640, 00a0a6bd]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0a640(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  uVar1 = DAT_00f0d878;
  if ((*(int *)(in_ECX + 0x4c) == 0) || (uVar1 = DAT_00f0d890, *(int *)(in_ECX + 0x4c) == 1)) {
    iVar3 = DAT_01258a94;
    if (uVar1 < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_009c1d40();
      (**(code **)(*piVar2 + 0x20))(in_ECX + 0x3c);
      return;
    }
    (**(code **)(_DAT_00000000 + 0x20))(in_ECX + 0x3c);
  }
  return;
}


// FUN_009fc810 @ 009fc810 body=[[009fc810, 009fc86f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009fc810(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x44) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40();
    (**(code **)(*piVar1 + 0x24))(*(undefined4 *)(in_ECX + 0x3c));
    return;
  }
  (**(code **)(_DAT_00000000 + 0x24))(*(undefined4 *)(in_ECX + 0x3c));
  return;
}


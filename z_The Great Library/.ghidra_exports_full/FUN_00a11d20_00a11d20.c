// FUN_00a11d20 @ 00a11d20 body=[[00a11d20, 00a11d84]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a11d20(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d890 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40();
    (**(code **)(*piVar1 + 0x2c))(in_ECX + 0x3c);
    return;
  }
  (**(code **)(_DAT_00000000 + 0x2c))(in_ECX + 0x3c);
  return;
}


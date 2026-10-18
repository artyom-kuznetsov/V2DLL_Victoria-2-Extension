// FUN_00a09a10 @ 00a09a10 body=[[00a09a10, 00a09a65]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a09a10(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d870 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40();
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  (**(code **)(_DAT_00000000 + 0x20))(DAT_00f0d870,DAT_00f0d874);
  return;
}


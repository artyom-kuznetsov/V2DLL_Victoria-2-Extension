// FUN_00a061c0 @ 00a061c0 body=[[00a061c0, 00a06224]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a061c0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d868 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_009c1d40();
    (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(in_ECX + 0x3c));
    return;
  }
  (**(code **)(_DAT_00000000 + 0x20))(*(undefined4 *)(in_ECX + 0x3c));
  return;
}


// FUN_00a03ca0 @ 00a03ca0 body=[[00a03ca0, 00a03cff]]


void FUN_00a03ca0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d850 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_009c1d40();
  }
  (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(in_ECX + 0x84),*(undefined1 *)(in_ECX + 0x80));
  return;
}


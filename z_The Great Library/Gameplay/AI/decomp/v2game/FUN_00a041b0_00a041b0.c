// FUN_00a041b0 @ 00a041b0 body=[[00a041b0, 00a0420d]]


void FUN_00a041b0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d858 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_009c1d40();
  }
  (**(code **)(*piVar1 + 0x28))(in_ECX + 0x40,in_ECX + 0x5c,*(undefined1 *)(in_ECX + 0x3c));
  return;
}


// FUN_0072b0a0 @ 0072b0a0 body=[[0072b0a0, 0072b0f9]]


void FUN_0072b0a0(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (DAT_00f0d870 < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_009c1d40();
  }
  (**(code **)(*piVar1 + 0x30))(*(undefined1 *)(in_ECX + 0x3c),in_ECX + 0x40);
  return;
}


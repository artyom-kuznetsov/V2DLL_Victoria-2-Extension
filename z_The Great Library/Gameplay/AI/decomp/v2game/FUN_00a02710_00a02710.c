// FUN_00a02710 @ 00a02710 body=[[00a02710, 00a02763]]


void FUN_00a02710(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x54) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_009c1d40();
  }
  (**(code **)(*piVar1 + 0x24))(in_ECX + 0x3c,in_ECX + 0x78);
  return;
}


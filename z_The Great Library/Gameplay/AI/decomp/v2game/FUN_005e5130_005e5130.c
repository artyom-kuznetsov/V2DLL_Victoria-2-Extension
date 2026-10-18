// FUN_005e5130 @ 005e5130 body=[[005e5130, 005e51cf]]


void FUN_005e5130(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_01258a98;
  iVar2 = DAT_01258a98;
  if (0x1268 < *(uint *)(in_ECX + 0x40)) {
    iVar2 = DAT_01258a94;
  }
  if ((iVar2 == 0) || (iVar2 = FUN_009c1d40(), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  *(int *)(in_ECX + 0x3c) = iVar2;
  if (0x1268 < *(uint *)(in_ECX + 0x68)) {
    iVar1 = DAT_01258a94;
  }
  if ((iVar1 == 0) || (iVar1 = FUN_009c1d40(), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -8;
  }
  *(int *)(in_ECX + 100) = iVar1;
  FUN_005da0a0(iVar1);
  FUN_005d1e60();
  return;
}


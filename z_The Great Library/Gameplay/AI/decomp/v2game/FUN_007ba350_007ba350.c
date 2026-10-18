// FUN_007ba350 @ 007ba350 body=[[007ba350, 007ba406]]


void FUN_007ba350(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = DAT_01258a98;
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x2c) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_007ba3a6;
    iVar2 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_007ba3a6:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x28) = iVar2;
  if (iVar2 == 0) {
    return;
  }
  if (*(uint *)(in_ECX + 0x2c) < 0x1269) {
    if (iVar1 != 0) {
      iVar3 = FUN_009c1d40();
      goto LAB_007ba3e7;
    }
  }
  else if (iVar3 != 0) {
    iVar3 = FUN_009c1d40();
    goto LAB_007ba3e7;
  }
  iVar3 = 0;
LAB_007ba3e7:
  *(int *)(in_ECX + 0x28) = iVar3;
  if (iVar3 != 0) {
    FUN_00967f50();
    FUN_007c79f0();
  }
  return;
}


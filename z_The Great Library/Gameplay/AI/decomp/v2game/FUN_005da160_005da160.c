// FUN_005da160 @ 005da160 body=[[005da160, 005da1db]]


void FUN_005da160(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = *(uint **)(param_1 + 0x60);
  iVar3 = DAT_01258a94;
  while (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (uint *)puVar1[3];
    iVar4 = DAT_01258a98;
    if (0x1268 < uVar2) {
      iVar4 = iVar3;
    }
    if (((iVar4 != 0) && (iVar4 = FUN_009c1d40(), iVar4 != 0)) && (iVar4 != 8)) {
      FUN_005da0a0(param_1);
      iVar3 = DAT_01258a94;
    }
  }
  return;
}


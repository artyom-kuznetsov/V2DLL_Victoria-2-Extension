// FUN_004e3850 @ 004e3850 body=[[004e3850, 004e386c] [004e3870, 004e38cb]]


void FUN_004e3850(undefined4 *param_1)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  puVar3 = *(uint **)(in_EAX + 0x80);
  iVar4 = 0;
  if (puVar3 == (uint *)0x0) {
    *param_1 = 0;
    return;
  }
  do {
    uVar1 = *puVar3;
    puVar3 = (uint *)puVar3[3];
    iVar2 = DAT_01258a94;
    if (uVar1 < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (((iVar2 != 0) && (iVar2 = FUN_009c1d40(), iVar2 != 0)) && (iVar2 + -8 != 0)) {
      param_1[iVar4] = iVar2 + -8;
      iVar4 = iVar4 + 1;
    }
  } while (puVar3 != (uint *)0x0);
  param_1[iVar4] = 0;
  return;
}


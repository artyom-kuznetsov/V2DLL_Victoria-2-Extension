// FUN_00a03500 @ 00a03500 body=[[00a03500, 00a0359e]]


void FUN_00a03500(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = DAT_01258a94;
  if (DAT_00f0d838 < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  piVar2 = *(int **)(iVar1 + 0x3c);
  while( true ) {
    if (piVar2 < *(int **)(iVar1 + 0x3c)) {
      return;
    }
    if (*(int **)(iVar1 + 0x40) <= piVar2) break;
    if (*piVar2 == *(int *)(in_ECX + 0xb8)) {
      iVar1 = piVar2[1];
      if (iVar1 != 0) {
        FUN_00408ed0(in_ECX + 0x9c,0,0xffffffff);
        FUN_00a18400(iVar1);
      }
      return;
    }
    piVar2 = piVar2 + 2;
  }
  return;
}


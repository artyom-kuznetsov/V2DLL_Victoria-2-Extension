// FUN_0096bb50 @ 0096bb50 body=[[0096bb50, 0096bb6c]]


int FUN_0096bb50(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_01258a20 != 0) {
    piVar2 = *(int **)(in_ECX + 0x48);
    iVar3 = DAT_01258a20;
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}


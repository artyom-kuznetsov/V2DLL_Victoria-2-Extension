// FUN_004c77b0 @ 004c77b0 body=[[004c77b0, 004c7863]]


void FUN_004c77b0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  cVar2 = FUN_00443890();
  if (cVar2 == '\0') {
    return;
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x168);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      for (piVar3 = *(int **)(iVar1 + 0x94);
          (piVar3 != *(int **)(iVar1 + 0x98) && (*piVar3 != param_2)); piVar3 = piVar3 + 1) {
      }
      cVar2 = FUN_0068f020();
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x168 + iVar5 * 4);
        if ((*(int *)(iVar1 + 0x98) - *(int *)(iVar1 + 0x94) & 0xfffffffcU) != 0) {
          return;
        }
        FUN_004c94b0(iVar1);
        *(undefined4 *)(param_1 + 0x168 + iVar5 * 4) = 0;
        return;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (5 < iVar5) {
      return;
    }
  } while( true );
}


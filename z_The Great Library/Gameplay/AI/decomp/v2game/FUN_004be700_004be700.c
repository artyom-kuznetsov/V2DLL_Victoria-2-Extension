// FUN_004be700 @ 004be700 body=[[004be700, 004be74c] [004be750, 004be77b]]


void FUN_004be700(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  if (param_2 == 0xc) {
    FUN_00aaf0c5(param_1 + 0x24);
    FUN_009a1d40();
    return;
  }
  iVar2 = 0;
  iVar1 = *(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x18) >> 2;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_ECX + 0x18);
    while (*piVar3 != param_2) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (iVar1 <= iVar2) {
        return;
      }
    }
    FUN_009a1d40();
  }
  return;
}


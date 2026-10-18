// FUN_004c3e90 @ 004c3e90 body=[[004c3e90, 004c3edf]]


int FUN_004c3e90(int param_1)

{
  int iVar1;
  uint3 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = (*(int *)(unaff_EDI + 0xcc) - *(int *)(unaff_EDI + 200)) / 0x24;
  iVar4 = 0;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(unaff_EDI + 200) + 4);
    do {
      if (*piVar3 == param_1) {
        return CONCAT31(uVar2,1);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 9;
    } while (iVar4 < iVar1);
  }
  return (uint)uVar2 << 8;
}

